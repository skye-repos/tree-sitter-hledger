#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 90
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_declarations_token1 = 1,
  aux_sym_declarations_token2 = 2,
  aux_sym_declarations_token3 = 3,
  anon_sym_LF = 4,
  anon_sym_DASH = 5,
  anon_sym_SLASH = 6,
  anon_sym_DOT = 7,
  sym_year = 8,
  aux_sym_month_token1 = 9,
  anon_sym_BANG = 10,
  anon_sym_STAR = 11,
  sym_code = 12,
  aux_sym_description_token1 = 13,
  anon_sym_PIPE = 14,
  aux_sym_note_token1 = 15,
  aux_sym_account_token1 = 16,
  sym_subaccount = 17,
  anon_sym_u20b9 = 18,
  anon_sym_DOLLAR = 19,
  anon_sym_INR = 20,
  anon_sym_USD = 21,
  sym_commodity = 22,
  sym_complex_commodity = 23,
  sym_value = 24,
  anon_sym_comment_LF = 25,
  aux_sym_multiline_comment_token1 = 26,
  anon_sym_endcomment_LF = 27,
  anon_sym_SEMI = 28,
  anon_sym_POUND = 29,
  sym_source_file = 30,
  sym_declarations = 31,
  sym_journal_entry = 32,
  sym_transactions = 33,
  sym_balancing = 34,
  sym_date = 35,
  sym_month = 36,
  sym_day = 37,
  sym_status = 38,
  sym_description = 39,
  sym_note = 40,
  sym_account = 41,
  sym_amount = 42,
  sym_currency = 43,
  sym_comment = 44,
  sym_multiline_comment = 45,
  sym_inline_comment = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_journal_entry_repeat1 = 48,
  aux_sym_account_repeat1 = 49,
  aux_sym_multiline_comment_repeat1 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_declarations_token1] = "declarations_token1",
  [aux_sym_declarations_token2] = "declarations_token2",
  [aux_sym_declarations_token3] = "declarations_token3",
  [anon_sym_LF] = "\n",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOT] = ".",
  [sym_year] = "year",
  [aux_sym_month_token1] = "month_token1",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [sym_code] = "code",
  [aux_sym_description_token1] = "description_token1",
  [anon_sym_PIPE] = "|",
  [aux_sym_note_token1] = "note_token1",
  [aux_sym_account_token1] = "account_token1",
  [sym_subaccount] = "subaccount",
  [anon_sym_u20b9] = "\u20b9",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_INR] = "INR",
  [anon_sym_USD] = "USD",
  [sym_commodity] = "commodity",
  [sym_complex_commodity] = "complex_commodity",
  [sym_value] = "value",
  [anon_sym_comment_LF] = "comment\n",
  [aux_sym_multiline_comment_token1] = "multiline_comment_token1",
  [anon_sym_endcomment_LF] = "end comment\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_POUND] = "#",
  [sym_source_file] = "source_file",
  [sym_declarations] = "declarations",
  [sym_journal_entry] = "journal_entry",
  [sym_transactions] = "transactions",
  [sym_balancing] = "balancing",
  [sym_date] = "date",
  [sym_month] = "month",
  [sym_day] = "day",
  [sym_status] = "status",
  [sym_description] = "description",
  [sym_note] = "note",
  [sym_account] = "account",
  [sym_amount] = "amount",
  [sym_currency] = "currency",
  [sym_comment] = "comment",
  [sym_multiline_comment] = "multiline_comment",
  [sym_inline_comment] = "inline_comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_journal_entry_repeat1] = "journal_entry_repeat1",
  [aux_sym_account_repeat1] = "account_repeat1",
  [aux_sym_multiline_comment_repeat1] = "multiline_comment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_declarations_token1] = aux_sym_declarations_token1,
  [aux_sym_declarations_token2] = aux_sym_declarations_token2,
  [aux_sym_declarations_token3] = aux_sym_declarations_token3,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_year] = sym_year,
  [aux_sym_month_token1] = aux_sym_month_token1,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_code] = sym_code,
  [aux_sym_description_token1] = aux_sym_description_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym_note_token1] = aux_sym_note_token1,
  [aux_sym_account_token1] = aux_sym_account_token1,
  [sym_subaccount] = sym_subaccount,
  [anon_sym_u20b9] = anon_sym_u20b9,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_INR] = anon_sym_INR,
  [anon_sym_USD] = anon_sym_USD,
  [sym_commodity] = sym_commodity,
  [sym_complex_commodity] = sym_complex_commodity,
  [sym_value] = sym_value,
  [anon_sym_comment_LF] = anon_sym_comment_LF,
  [aux_sym_multiline_comment_token1] = aux_sym_multiline_comment_token1,
  [anon_sym_endcomment_LF] = anon_sym_endcomment_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_source_file] = sym_source_file,
  [sym_declarations] = sym_declarations,
  [sym_journal_entry] = sym_journal_entry,
  [sym_transactions] = sym_transactions,
  [sym_balancing] = sym_balancing,
  [sym_date] = sym_date,
  [sym_month] = sym_month,
  [sym_day] = sym_day,
  [sym_status] = sym_status,
  [sym_description] = sym_description,
  [sym_note] = sym_note,
  [sym_account] = sym_account,
  [sym_amount] = sym_amount,
  [sym_currency] = sym_currency,
  [sym_comment] = sym_comment,
  [sym_multiline_comment] = sym_multiline_comment,
  [sym_inline_comment] = sym_inline_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_journal_entry_repeat1] = aux_sym_journal_entry_repeat1,
  [aux_sym_account_repeat1] = aux_sym_account_repeat1,
  [aux_sym_multiline_comment_repeat1] = aux_sym_multiline_comment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_declarations_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declarations_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declarations_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_year] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_month_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_description_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_note_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_account_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_subaccount] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_u20b9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_USD] = {
    .visible = true,
    .named = false,
  },
  [sym_commodity] = {
    .visible = true,
    .named = true,
  },
  [sym_complex_commodity] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_comment_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multiline_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_endcomment_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_journal_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_transactions] = {
    .visible = true,
    .named = true,
  },
  [sym_balancing] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_month] = {
    .visible = true,
    .named = true,
  },
  [sym_day] = {
    .visible = true,
    .named = true,
  },
  [sym_status] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_currency] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_journal_entry_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_account_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 12,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 14,
  [23] = 23,
  [24] = 24,
  [25] = 9,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 45,
  [55] = 55,
  [56] = 53,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 13,
  [82] = 82,
  [83] = 19,
  [84] = 21,
  [85] = 85,
  [86] = 24,
  [87] = 87,
  [88] = 88,
  [89] = 88,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      ADVANCE_MAP(
        '!', 67,
        '"', 14,
        '#', 122,
        '$', 99,
        '(', 45,
        '*', 68,
        '-', 60,
        '.', 62,
        '/', 61,
        ':', 49,
        ';', 121,
        'I', 18,
        'U', 20,
        'c', 38,
        'e', 34,
        'i', 35,
        'w', 56,
        '|', 74,
        0x20b9, 98,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(105);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(120);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead == '!') ADVANCE(67);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '*') ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '!') ADVANCE(67);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '*') ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead == '&' ||
          lookahead == '\'' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\') ADVANCE(73);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '"') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '$') ADVANCE(99);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'I') ADVANCE(18);
      if (lookahead == 'U') ADVANCE(20);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == 0x20b9) ADVANCE(98);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == '!') ADVANCE(67);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '*') ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(7);
      if (lookahead == '&' ||
          lookahead == '\'' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '!') ADVANCE(67);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '*') ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == ';') ADVANCE(121);
      if (lookahead == 'c') ADVANCE(91);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(11);
      if (lookahead == '\'' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(12);
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(103);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '$') ADVANCE(99);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'I') ADVANCE(18);
      if (lookahead == 'U') ADVANCE(20);
      if (lookahead == 'w') ADVANCE(56);
      if (lookahead == 0x20b9) ADVANCE(98);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(101);
      END_STATE();
    case 18:
      if (lookahead == 'N') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'R') ADVANCE(100);
      END_STATE();
    case 20:
      if (lookahead == 'S') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(26);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 43:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(43);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 44:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == '%' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 49:
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == ' ') ADVANCE(79);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == ';') ADVANCE(121);
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_declarations_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_declarations_token1);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_declarations_token2);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_declarations_token2);
      if (lookahead == ' ' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_declarations_token3);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == ' ') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(4);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == ' ') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(7);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_year);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_year);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_month_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_month_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_code);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == ' ') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(4);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead == '&' ||
          lookahead == '\'' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\') ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == ' ') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(7);
      if (lookahead == '&' ||
          lookahead == '\'' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead == '&' ||
          lookahead == '\'' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          lookahead == '\'' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(11);
      if (lookahead == '\'' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == ' ') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == ' ') ADVANCE(79);
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == 'c') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == ' ') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == 'm') ADVANCE(87);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == 'u') ADVANCE(83);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_subaccount);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_u20b9);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_INR);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_USD);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_commodity);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_complex_commodity);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '%' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_comment_LF);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == ' ') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(119);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'm') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'm') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_endcomment_LF);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 50},
  [2] = {.lex_state = 50},
  [3] = {.lex_state = 50},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 50},
  [6] = {.lex_state = 50},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 50},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 50},
  [11] = {.lex_state = 50},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 50},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 50},
  [16] = {.lex_state = 50},
  [17] = {.lex_state = 50},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 50},
  [20] = {.lex_state = 50},
  [21] = {.lex_state = 50},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 50},
  [24] = {.lex_state = 50},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 26},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 26},
  [54] = {.lex_state = 26},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 26},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 44},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 43},
  [89] = {.lex_state = 43},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_declarations_token1] = ACTIONS(1),
    [aux_sym_declarations_token3] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_year] = ACTIONS(1),
    [aux_sym_month_token1] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_code] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_subaccount] = ACTIONS(1),
    [anon_sym_u20b9] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_INR] = ACTIONS(1),
    [anon_sym_USD] = ACTIONS(1),
    [sym_complex_commodity] = ACTIONS(1),
    [anon_sym_comment_LF] = ACTIONS(1),
    [anon_sym_endcomment_LF] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(87),
    [sym_declarations] = STATE(2),
    [sym_journal_entry] = STATE(2),
    [sym_date] = STATE(28),
    [sym_month] = STATE(49),
    [sym_account] = STATE(85),
    [sym_comment] = STATE(2),
    [sym_multiline_comment] = STATE(13),
    [sym_inline_comment] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_declarations_token1] = ACTIONS(5),
    [sym_year] = ACTIONS(7),
    [aux_sym_month_token1] = ACTIONS(9),
    [aux_sym_account_token1] = ACTIONS(11),
    [anon_sym_comment_LF] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(5), 1,
      aux_sym_declarations_token1,
    ACTIONS(7), 1,
      sym_year,
    ACTIONS(9), 1,
      aux_sym_month_token1,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(13), 1,
      anon_sym_comment_LF,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym_date,
    STATE(49), 1,
      sym_month,
    STATE(85), 1,
      sym_account,
    ACTIONS(15), 2,
      anon_sym_SEMI,
      anon_sym_POUND,
    STATE(13), 2,
      sym_multiline_comment,
      sym_inline_comment,
    STATE(3), 4,
      sym_declarations,
      sym_journal_entry,
      sym_comment,
      aux_sym_source_file_repeat1,
  [42] = 12,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      aux_sym_declarations_token1,
    ACTIONS(24), 1,
      sym_year,
    ACTIONS(27), 1,
      aux_sym_month_token1,
    ACTIONS(30), 1,
      aux_sym_account_token1,
    ACTIONS(33), 1,
      anon_sym_comment_LF,
    STATE(28), 1,
      sym_date,
    STATE(49), 1,
      sym_month,
    STATE(85), 1,
      sym_account,
    ACTIONS(36), 2,
      anon_sym_SEMI,
      anon_sym_POUND,
    STATE(13), 2,
      sym_multiline_comment,
      sym_inline_comment,
    STATE(3), 4,
      sym_declarations,
      sym_journal_entry,
      sym_comment,
      aux_sym_source_file_repeat1,
  [84] = 10,
    ACTIONS(39), 1,
      anon_sym_LF,
    ACTIONS(43), 1,
      sym_code,
    ACTIONS(45), 1,
      aux_sym_description_token1,
    ACTIONS(47), 1,
      aux_sym_account_token1,
    STATE(7), 1,
      sym_account,
    STATE(23), 1,
      sym_balancing,
    STATE(43), 1,
      sym_status,
    STATE(76), 1,
      sym_description,
    ACTIONS(41), 2,
      anon_sym_BANG,
      anon_sym_STAR,
    STATE(40), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [117] = 7,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      aux_sym_account_token1,
    ACTIONS(55), 1,
      anon_sym_comment_LF,
    STATE(73), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_SEMI,
      anon_sym_POUND,
    STATE(81), 2,
      sym_multiline_comment,
      sym_inline_comment,
    ACTIONS(51), 3,
      aux_sym_declarations_token1,
      sym_year,
      aux_sym_month_token1,
  [143] = 2,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 7,
      aux_sym_declarations_token1,
      sym_year,
      aux_sym_month_token1,
      aux_sym_account_token1,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [156] = 5,
    ACTIONS(63), 1,
      anon_sym_LF,
    ACTIONS(67), 1,
      sym_value,
    STATE(70), 1,
      sym_amount,
    STATE(71), 1,
      sym_currency,
    ACTIONS(65), 4,
      anon_sym_u20b9,
      anon_sym_DOLLAR,
      anon_sym_INR,
      anon_sym_USD,
  [175] = 2,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 7,
      aux_sym_declarations_token1,
      sym_year,
      aux_sym_month_token1,
      aux_sym_account_token1,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [188] = 4,
    ACTIONS(73), 1,
      anon_sym_LF,
    ACTIONS(75), 1,
      sym_subaccount,
    STATE(9), 1,
      aux_sym_account_repeat1,
    ACTIONS(78), 5,
      anon_sym_u20b9,
      anon_sym_DOLLAR,
      anon_sym_INR,
      anon_sym_USD,
      sym_value,
  [205] = 2,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 7,
      aux_sym_declarations_token1,
      sym_year,
      aux_sym_month_token1,
      aux_sym_account_token1,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [218] = 2,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 7,
      aux_sym_declarations_token1,
      sym_year,
      aux_sym_month_token1,
      aux_sym_account_token1,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [231] = 4,
    ACTIONS(88), 1,
      anon_sym_LF,
    ACTIONS(90), 1,
      sym_subaccount,
    STATE(9), 1,
      aux_sym_account_repeat1,
    ACTIONS(92), 5,
      anon_sym_u20b9,
      anon_sym_DOLLAR,
      anon_sym_INR,
      anon_sym_USD,
      sym_value,
  [248] = 2,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 7,
      aux_sym_declarations_token1,
      sym_year,
      aux_sym_month_token1,
      aux_sym_account_token1,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [261] = 4,
    ACTIONS(98), 1,
      anon_sym_LF,
    ACTIONS(100), 1,
      sym_subaccount,
    STATE(12), 1,
      aux_sym_account_repeat1,
    ACTIONS(102), 5,
      anon_sym_u20b9,
      anon_sym_DOLLAR,
      anon_sym_INR,
      anon_sym_USD,
      sym_value,
  [278] = 2,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 7,
      aux_sym_declarations_token1,
      sym_year,
      aux_sym_month_token1,
      aux_sym_account_token1,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [291] = 2,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 7,
      aux_sym_declarations_token1,
      sym_year,
      aux_sym_month_token1,
      aux_sym_account_token1,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [304] = 2,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 7,
      aux_sym_declarations_token1,
      sym_year,
      aux_sym_month_token1,
      aux_sym_account_token1,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [317] = 3,
    ACTIONS(116), 1,
      sym_subaccount,
    STATE(25), 1,
      aux_sym_account_repeat1,
    ACTIONS(88), 6,
      aux_sym_declarations_token3,
      anon_sym_u20b9,
      anon_sym_DOLLAR,
      anon_sym_INR,
      anon_sym_USD,
      sym_value,
  [332] = 2,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 7,
      aux_sym_declarations_token1,
      sym_year,
      aux_sym_month_token1,
      aux_sym_account_token1,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [345] = 2,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 7,
      aux_sym_declarations_token1,
      sym_year,
      aux_sym_month_token1,
      aux_sym_account_token1,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [358] = 2,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 7,
      aux_sym_declarations_token1,
      sym_year,
      aux_sym_month_token1,
      aux_sym_account_token1,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [371] = 3,
    ACTIONS(130), 1,
      sym_subaccount,
    STATE(18), 1,
      aux_sym_account_repeat1,
    ACTIONS(98), 6,
      aux_sym_declarations_token3,
      anon_sym_u20b9,
      anon_sym_DOLLAR,
      anon_sym_INR,
      anon_sym_USD,
      sym_value,
  [386] = 2,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 7,
      aux_sym_declarations_token1,
      sym_year,
      aux_sym_month_token1,
      aux_sym_account_token1,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [399] = 2,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 7,
      aux_sym_declarations_token1,
      sym_year,
      aux_sym_month_token1,
      aux_sym_account_token1,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [412] = 3,
    ACTIONS(140), 1,
      sym_subaccount,
    STATE(25), 1,
      aux_sym_account_repeat1,
    ACTIONS(73), 6,
      aux_sym_declarations_token3,
      anon_sym_u20b9,
      anon_sym_DOLLAR,
      anon_sym_INR,
      anon_sym_USD,
      sym_value,
  [427] = 4,
    ACTIONS(145), 1,
      sym_value,
    STATE(71), 1,
      sym_currency,
    STATE(74), 1,
      sym_amount,
    ACTIONS(143), 4,
      anon_sym_u20b9,
      anon_sym_DOLLAR,
      anon_sym_INR,
      anon_sym_USD,
  [443] = 5,
    ACTIONS(53), 1,
      aux_sym_account_token1,
    ACTIONS(55), 1,
      anon_sym_comment_LF,
    STATE(73), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_SEMI,
      anon_sym_POUND,
    STATE(81), 2,
      sym_multiline_comment,
      sym_inline_comment,
  [461] = 6,
    ACTIONS(45), 1,
      aux_sym_description_token1,
    ACTIONS(147), 1,
      anon_sym_LF,
    ACTIONS(149), 1,
      sym_code,
    STATE(42), 1,
      sym_status,
    STATE(82), 1,
      sym_description,
    ACTIONS(41), 2,
      anon_sym_BANG,
      anon_sym_STAR,
  [481] = 1,
    ACTIONS(151), 5,
      anon_sym_LF,
      anon_sym_BANG,
      anon_sym_STAR,
      sym_code,
      aux_sym_description_token1,
  [489] = 4,
    ACTIONS(153), 1,
      aux_sym_account_token1,
    STATE(7), 1,
      sym_account,
    STATE(20), 1,
      sym_balancing,
    STATE(33), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [503] = 4,
    ACTIONS(153), 1,
      aux_sym_account_token1,
    STATE(7), 1,
      sym_account,
    STATE(16), 1,
      sym_balancing,
    STATE(38), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [517] = 4,
    ACTIONS(153), 1,
      aux_sym_account_token1,
    STATE(7), 1,
      sym_account,
    STATE(16), 1,
      sym_balancing,
    STATE(41), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [531] = 4,
    ACTIONS(153), 1,
      aux_sym_account_token1,
    STATE(7), 1,
      sym_account,
    STATE(10), 1,
      sym_balancing,
    STATE(41), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [545] = 1,
    ACTIONS(155), 5,
      anon_sym_LF,
      anon_sym_BANG,
      anon_sym_STAR,
      sym_code,
      aux_sym_description_token1,
  [553] = 4,
    ACTIONS(153), 1,
      aux_sym_account_token1,
    STATE(7), 1,
      sym_account,
    STATE(17), 1,
      sym_balancing,
    STATE(32), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [567] = 4,
    ACTIONS(153), 1,
      aux_sym_account_token1,
    STATE(7), 1,
      sym_account,
    STATE(11), 1,
      sym_balancing,
    STATE(37), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [581] = 4,
    ACTIONS(153), 1,
      aux_sym_account_token1,
    STATE(7), 1,
      sym_account,
    STATE(17), 1,
      sym_balancing,
    STATE(41), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [595] = 4,
    ACTIONS(153), 1,
      aux_sym_account_token1,
    STATE(7), 1,
      sym_account,
    STATE(20), 1,
      sym_balancing,
    STATE(41), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [609] = 1,
    ACTIONS(157), 5,
      anon_sym_LF,
      anon_sym_BANG,
      anon_sym_STAR,
      sym_code,
      aux_sym_description_token1,
  [617] = 4,
    ACTIONS(153), 1,
      aux_sym_account_token1,
    STATE(7), 1,
      sym_account,
    STATE(11), 1,
      sym_balancing,
    STATE(41), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [631] = 3,
    ACTIONS(159), 1,
      aux_sym_account_token1,
    STATE(26), 1,
      sym_account,
    STATE(41), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [642] = 4,
    ACTIONS(39), 1,
      anon_sym_LF,
    ACTIONS(43), 1,
      sym_code,
    ACTIONS(45), 1,
      aux_sym_description_token1,
    STATE(76), 1,
      sym_description,
  [655] = 4,
    ACTIONS(45), 1,
      aux_sym_description_token1,
    ACTIONS(162), 1,
      anon_sym_LF,
    ACTIONS(164), 1,
      sym_code,
    STATE(69), 1,
      sym_description,
  [668] = 3,
    ACTIONS(45), 1,
      aux_sym_description_token1,
    ACTIONS(162), 1,
      anon_sym_LF,
    STATE(69), 1,
      sym_description,
  [678] = 3,
    ACTIONS(166), 1,
      aux_sym_multiline_comment_token1,
    ACTIONS(168), 1,
      anon_sym_endcomment_LF,
    STATE(51), 1,
      aux_sym_multiline_comment_repeat1,
  [688] = 1,
    ACTIONS(170), 3,
      anon_sym_LF,
      sym_code,
      aux_sym_description_token1,
  [694] = 3,
    ACTIONS(39), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      aux_sym_description_token1,
    STATE(76), 1,
      sym_description,
  [704] = 3,
    ACTIONS(45), 1,
      aux_sym_description_token1,
    ACTIONS(172), 1,
      anon_sym_LF,
    STATE(66), 1,
      sym_description,
  [714] = 1,
    ACTIONS(174), 3,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
  [720] = 2,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(178), 2,
      sym_commodity,
      sym_complex_commodity,
  [728] = 3,
    ACTIONS(180), 1,
      aux_sym_multiline_comment_token1,
    ACTIONS(183), 1,
      anon_sym_endcomment_LF,
    STATE(51), 1,
      aux_sym_multiline_comment_repeat1,
  [738] = 3,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(187), 1,
      anon_sym_PIPE,
    STATE(75), 1,
      sym_note,
  [748] = 3,
    ACTIONS(189), 1,
      aux_sym_multiline_comment_token1,
    ACTIONS(191), 1,
      anon_sym_endcomment_LF,
    STATE(54), 1,
      aux_sym_multiline_comment_repeat1,
  [758] = 3,
    ACTIONS(166), 1,
      aux_sym_multiline_comment_token1,
    ACTIONS(193), 1,
      anon_sym_endcomment_LF,
    STATE(51), 1,
      aux_sym_multiline_comment_repeat1,
  [768] = 2,
    STATE(15), 1,
      sym_inline_comment,
    ACTIONS(195), 2,
      anon_sym_SEMI,
      anon_sym_POUND,
  [776] = 3,
    ACTIONS(197), 1,
      aux_sym_multiline_comment_token1,
    ACTIONS(199), 1,
      anon_sym_endcomment_LF,
    STATE(45), 1,
      aux_sym_multiline_comment_repeat1,
  [786] = 1,
    ACTIONS(201), 3,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
  [792] = 3,
    ACTIONS(203), 1,
      anon_sym_DASH,
    ACTIONS(205), 1,
      anon_sym_SLASH,
    ACTIONS(207), 1,
      anon_sym_DOT,
  [802] = 2,
    ACTIONS(209), 1,
      aux_sym_month_token1,
    STATE(78), 1,
      sym_month,
  [809] = 2,
    ACTIONS(211), 1,
      aux_sym_month_token1,
    STATE(29), 1,
      sym_day,
  [816] = 2,
    ACTIONS(209), 1,
      aux_sym_month_token1,
    STATE(79), 1,
      sym_month,
  [823] = 2,
    ACTIONS(211), 1,
      aux_sym_month_token1,
    STATE(34), 1,
      sym_day,
  [830] = 2,
    ACTIONS(209), 1,
      aux_sym_month_token1,
    STATE(80), 1,
      sym_month,
  [837] = 1,
    ACTIONS(213), 1,
      aux_sym_note_token1,
  [841] = 1,
    ACTIONS(215), 1,
      sym_value,
  [845] = 1,
    ACTIONS(217), 1,
      anon_sym_LF,
  [849] = 1,
    ACTIONS(219), 1,
      anon_sym_LF,
  [853] = 1,
    ACTIONS(221), 1,
      anon_sym_LF,
  [857] = 1,
    ACTIONS(223), 1,
      anon_sym_LF,
  [861] = 1,
    ACTIONS(225), 1,
      anon_sym_LF,
  [865] = 1,
    ACTIONS(227), 1,
      sym_value,
  [869] = 1,
    ACTIONS(229), 1,
      aux_sym_declarations_token2,
  [873] = 1,
    ACTIONS(231), 1,
      anon_sym_LF,
  [877] = 1,
    ACTIONS(233), 1,
      anon_sym_LF,
  [881] = 1,
    ACTIONS(235), 1,
      anon_sym_LF,
  [885] = 1,
    ACTIONS(237), 1,
      anon_sym_LF,
  [889] = 1,
    ACTIONS(239), 1,
      aux_sym_account_token1,
  [893] = 1,
    ACTIONS(241), 1,
      anon_sym_DOT,
  [897] = 1,
    ACTIONS(241), 1,
      anon_sym_SLASH,
  [901] = 1,
    ACTIONS(241), 1,
      anon_sym_DASH,
  [905] = 1,
    ACTIONS(94), 1,
      anon_sym_LF,
  [909] = 1,
    ACTIONS(243), 1,
      anon_sym_LF,
  [913] = 1,
    ACTIONS(118), 1,
      anon_sym_LF,
  [917] = 1,
    ACTIONS(126), 1,
      anon_sym_LF,
  [921] = 1,
    ACTIONS(245), 1,
      aux_sym_declarations_token3,
  [925] = 1,
    ACTIONS(136), 1,
      anon_sym_LF,
  [929] = 1,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
  [933] = 1,
    ACTIONS(249), 1,
      aux_sym_multiline_comment_token1,
  [937] = 1,
    ACTIONS(251), 1,
      aux_sym_multiline_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 143,
  [SMALL_STATE(7)] = 156,
  [SMALL_STATE(8)] = 175,
  [SMALL_STATE(9)] = 188,
  [SMALL_STATE(10)] = 205,
  [SMALL_STATE(11)] = 218,
  [SMALL_STATE(12)] = 231,
  [SMALL_STATE(13)] = 248,
  [SMALL_STATE(14)] = 261,
  [SMALL_STATE(15)] = 278,
  [SMALL_STATE(16)] = 291,
  [SMALL_STATE(17)] = 304,
  [SMALL_STATE(18)] = 317,
  [SMALL_STATE(19)] = 332,
  [SMALL_STATE(20)] = 345,
  [SMALL_STATE(21)] = 358,
  [SMALL_STATE(22)] = 371,
  [SMALL_STATE(23)] = 386,
  [SMALL_STATE(24)] = 399,
  [SMALL_STATE(25)] = 412,
  [SMALL_STATE(26)] = 427,
  [SMALL_STATE(27)] = 443,
  [SMALL_STATE(28)] = 461,
  [SMALL_STATE(29)] = 481,
  [SMALL_STATE(30)] = 489,
  [SMALL_STATE(31)] = 503,
  [SMALL_STATE(32)] = 517,
  [SMALL_STATE(33)] = 531,
  [SMALL_STATE(34)] = 545,
  [SMALL_STATE(35)] = 553,
  [SMALL_STATE(36)] = 567,
  [SMALL_STATE(37)] = 581,
  [SMALL_STATE(38)] = 595,
  [SMALL_STATE(39)] = 609,
  [SMALL_STATE(40)] = 617,
  [SMALL_STATE(41)] = 631,
  [SMALL_STATE(42)] = 642,
  [SMALL_STATE(43)] = 655,
  [SMALL_STATE(44)] = 668,
  [SMALL_STATE(45)] = 678,
  [SMALL_STATE(46)] = 688,
  [SMALL_STATE(47)] = 694,
  [SMALL_STATE(48)] = 704,
  [SMALL_STATE(49)] = 714,
  [SMALL_STATE(50)] = 720,
  [SMALL_STATE(51)] = 728,
  [SMALL_STATE(52)] = 738,
  [SMALL_STATE(53)] = 748,
  [SMALL_STATE(54)] = 758,
  [SMALL_STATE(55)] = 768,
  [SMALL_STATE(56)] = 776,
  [SMALL_STATE(57)] = 786,
  [SMALL_STATE(58)] = 792,
  [SMALL_STATE(59)] = 802,
  [SMALL_STATE(60)] = 809,
  [SMALL_STATE(61)] = 816,
  [SMALL_STATE(62)] = 823,
  [SMALL_STATE(63)] = 830,
  [SMALL_STATE(64)] = 837,
  [SMALL_STATE(65)] = 841,
  [SMALL_STATE(66)] = 845,
  [SMALL_STATE(67)] = 849,
  [SMALL_STATE(68)] = 853,
  [SMALL_STATE(69)] = 857,
  [SMALL_STATE(70)] = 861,
  [SMALL_STATE(71)] = 865,
  [SMALL_STATE(72)] = 869,
  [SMALL_STATE(73)] = 873,
  [SMALL_STATE(74)] = 877,
  [SMALL_STATE(75)] = 881,
  [SMALL_STATE(76)] = 885,
  [SMALL_STATE(77)] = 889,
  [SMALL_STATE(78)] = 893,
  [SMALL_STATE(79)] = 897,
  [SMALL_STATE(80)] = 901,
  [SMALL_STATE(81)] = 905,
  [SMALL_STATE(82)] = 909,
  [SMALL_STATE(83)] = 913,
  [SMALL_STATE(84)] = 917,
  [SMALL_STATE(85)] = 921,
  [SMALL_STATE(86)] = 925,
  [SMALL_STATE(87)] = 929,
  [SMALL_STATE(88)] = 933,
  [SMALL_STATE(89)] = 937,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balancing, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balancing, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transactions, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarations, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balancing, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balancing, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_account_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_entry, 8, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_entry, 8, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_entry, 4, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_entry, 4, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarations, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_entry, 6, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_entry, 6, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_entry, 5, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_entry, 5, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_comment, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_comment, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_entry, 7, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_entry, 7, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_entry, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_entry, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_comment, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_comment, 3, 0, 0),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 5, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_day, 1, 0, 0),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_journal_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_comment_repeat1, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 1, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_currency, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transactions, 5, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [247] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_hledger(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
