/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
	name: 'hledger',

	rules: {
		source_file: $ => repeat(choice($.declarations, $.journal_entry, $.comment)),

    declarations: $ => choice(
      seq("include", /[a-z \.]+/, optional($.inline_comment)),
      seq($.account, /w/, $.inline_comment)
    ),

		journal_entry: $ => seq(
			$.date,
			optional("\n"),
			seq(optional($.status), optional($.code), optional($.description), "\n"),
			// choice(/[\s+]\n/, seq(optional($.status), optional($.code), optional($.description), "\n")),
			repeat($.transactions),
			$.balancing
		),

		transactions: $ => seq(
			$.account,
			$.amount,
			"\n",
      optional(seq($.comment, "\n"))
		),

		balancing: $ => seq(
			$.account,
			optional($.amount),
			"\n"
		),

		date: $ => {
			function createDate(separator) {
				return seq(optional(seq($.year, separator)), $.month, separator, $.day);
			}
			return choice(createDate("-"), createDate("/"), createDate("."));
		},

		year: $ => /\d{4}/,
		month: $ => /\d{2}/,
		day: $ => /\d{2}/,

		status: $ => choice("!", "*"),
		code: $ => /\(\d+\)/,
		// description: $ => /\s+[a-zA-Z \']+/,
		description: $ => seq(
			/\s+[a-zA-Z \' \& \- \\]+/,
			optional($.note),
		),
		note: $ => seq("|", /\s+[a-zA-Z \']+/),

		account: $ => seq(
			/[a-z 0-9]+/,
			optional(repeat($.subaccount))
		),
		subaccount: $ => /:[a-z ]+/,

		amount: $ => choice(
			seq($.currency, $.value),
			seq($.value, choice($.commodity, $.complex_commodity)),
			$.value,
		),
		currency: $ => choice("₹", "$", "INR", "USD"),
		commodity: $ => /[a-zA-Z]+/,
		complex_commodity: $ => /\"[^\"]*\"/,
		value: $ => /[-\*\d][.\d\%]+/,

		comment: $ => choice(
			$.inline_comment,
			$.multiline_comment,
		),

		multiline_comment: $ => seq(
			"comment\n",
			repeat(/[^\n\r]+/),
			"end comment\n"
		),

		inline_comment: $ => seq(
			choice(";", "#"),
			/[^\n\r]+/,
		),
	},
});
