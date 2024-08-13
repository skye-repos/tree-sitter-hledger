#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_DASH = 2,
  anon_sym_SLASH = 3,
  anon_sym_DOT = 4,
  sym_year = 5,
  aux_sym_month_token1 = 6,
  anon_sym_BANG = 7,
  anon_sym_STAR = 8,
  sym_code = 9,
  aux_sym_description_token1 = 10,
  anon_sym_PIPE = 11,
  aux_sym_account_token1 = 12,
  sym_subaccount = 13,
  anon_sym_u20b9 = 14,
  anon_sym_DOLLAR = 15,
  anon_sym_INR = 16,
  anon_sym_USD = 17,
  sym_commodity = 18,
  sym_complex_commodity = 19,
  sym_value = 20,
  anon_sym_comment_LF = 21,
  aux_sym_multiline_comment_token1 = 22,
  anon_sym_endcomment_LF = 23,
  anon_sym_SEMI = 24,
  anon_sym_POUND = 25,
  sym_source_file = 26,
  sym_journal_entry = 27,
  sym_transactions = 28,
  sym_balancing = 29,
  sym_date = 30,
  sym_month = 31,
  sym_day = 32,
  sym_status = 33,
  sym_description = 34,
  sym_note = 35,
  sym_account = 36,
  sym_amount = 37,
  sym_currency = 38,
  sym_comment = 39,
  sym_multiline_comment = 40,
  sym_inline_comment = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_journal_entry_repeat1 = 43,
  aux_sym_account_repeat1 = 44,
  aux_sym_multiline_comment_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [11] = 5,
  [12] = 12,
  [13] = 7,
  [14] = 8,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
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
  [54] = 54,
  [55] = 55,
  [56] = 56,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      ADVANCE_MAP(
        '!', 42,
        '"', 10,
        '#', 93,
        '$', 64,
        '(', 26,
        '*', 43,
        '-', 37,
        '.', 39,
        '/', 38,
        ':', 30,
        ';', 92,
        'I', 70,
        'U', 72,
        '|', 50,
        0x20b9, 63,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(76);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == '*') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == '*') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead == '\'' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '"') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'I') ADVANCE(14);
      if (lookahead == 'U') ADVANCE(16);
      if (lookahead == '|') ADVANCE(50);
      if (lookahead == 0x20b9) ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == '*') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(6);
      if (lookahead == '\'' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == '*') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(8);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(9);
      if (lookahead == '\'' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(74);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'I') ADVANCE(14);
      if (lookahead == 'U') ADVANCE(16);
      if (lookahead == 0x20b9) ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(67);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'R') ADVANCE(65);
      END_STATE();
    case 16:
      if (lookahead == 'S') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(18);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 24:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 25:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == '%' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 30:
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 31:
      if (eof) ADVANCE(33);
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == '#') ADVANCE(93);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == 'c') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '#') ADVANCE(93);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == 'c') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(3);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(6);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_year);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_month_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_code);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead == '\'' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(6);
      if (lookahead == '\'' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == ' ') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(9);
      if (lookahead == '\'' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead == '\'' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == ' ') ADVANCE(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == 'm') ADVANCE(56);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_subaccount);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_u20b9);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_INR);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_INR);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_USD);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_USD);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'D') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'N') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'R') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'S') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_commodity);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_complex_commodity);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '%' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_comment_LF);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(90);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(90);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(90);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(90);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(90);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(90);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'm') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(90);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'm') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(90);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(90);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(90);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(90);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_endcomment_LF);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 31},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 32},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 32},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 32},
  [21] = {.lex_state = 32},
  [22] = {.lex_state = 32},
  [23] = {.lex_state = 32},
  [24] = {.lex_state = 32},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 18},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 18},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 24},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 25},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_commodity] = ACTIONS(1),
    [sym_complex_commodity] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(72),
    [sym_journal_entry] = STATE(2),
    [sym_date] = STATE(9),
    [sym_month] = STATE(45),
    [sym_comment] = STATE(2),
    [sym_multiline_comment] = STATE(17),
    [sym_inline_comment] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_year] = ACTIONS(5),
    [aux_sym_month_token1] = ACTIONS(7),
    [anon_sym_comment_LF] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      sym_year,
    ACTIONS(7), 1,
      aux_sym_month_token1,
    ACTIONS(9), 1,
      anon_sym_comment_LF,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_date,
    STATE(45), 1,
      sym_month,
    ACTIONS(11), 2,
      anon_sym_SEMI,
      anon_sym_POUND,
    STATE(17), 2,
      sym_multiline_comment,
      sym_inline_comment,
    STATE(3), 3,
      sym_journal_entry,
      sym_comment,
      aux_sym_source_file_repeat1,
  [32] = 9,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym_year,
    ACTIONS(20), 1,
      aux_sym_month_token1,
    ACTIONS(23), 1,
      anon_sym_comment_LF,
    STATE(9), 1,
      sym_date,
    STATE(45), 1,
      sym_month,
    ACTIONS(26), 2,
      anon_sym_SEMI,
      anon_sym_POUND,
    STATE(17), 2,
      sym_multiline_comment,
      sym_inline_comment,
    STATE(3), 3,
      sym_journal_entry,
      sym_comment,
      aux_sym_source_file_repeat1,
  [64] = 10,
    ACTIONS(29), 1,
      anon_sym_LF,
    ACTIONS(33), 1,
      sym_code,
    ACTIONS(35), 1,
      aux_sym_description_token1,
    ACTIONS(37), 1,
      aux_sym_account_token1,
    STATE(6), 1,
      sym_account,
    STATE(18), 1,
      sym_balancing,
    STATE(40), 1,
      sym_status,
    STATE(70), 1,
      sym_description,
    ACTIONS(31), 2,
      anon_sym_BANG,
      anon_sym_STAR,
    STATE(34), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [97] = 4,
    ACTIONS(39), 1,
      anon_sym_LF,
    ACTIONS(41), 1,
      sym_subaccount,
    STATE(5), 1,
      aux_sym_account_repeat1,
    ACTIONS(44), 5,
      anon_sym_u20b9,
      anon_sym_DOLLAR,
      anon_sym_INR,
      anon_sym_USD,
      sym_value,
  [114] = 5,
    ACTIONS(46), 1,
      anon_sym_LF,
    ACTIONS(50), 1,
      sym_value,
    STATE(67), 1,
      sym_currency,
    STATE(69), 1,
      sym_amount,
    ACTIONS(48), 4,
      anon_sym_u20b9,
      anon_sym_DOLLAR,
      anon_sym_INR,
      anon_sym_USD,
  [133] = 4,
    ACTIONS(52), 1,
      anon_sym_LF,
    ACTIONS(54), 1,
      sym_subaccount,
    STATE(8), 1,
      aux_sym_account_repeat1,
    ACTIONS(56), 5,
      anon_sym_u20b9,
      anon_sym_DOLLAR,
      anon_sym_INR,
      anon_sym_USD,
      sym_value,
  [150] = 4,
    ACTIONS(58), 1,
      anon_sym_LF,
    ACTIONS(60), 1,
      sym_subaccount,
    STATE(5), 1,
      aux_sym_account_repeat1,
    ACTIONS(62), 5,
      anon_sym_u20b9,
      anon_sym_DOLLAR,
      anon_sym_INR,
      anon_sym_USD,
      sym_value,
  [167] = 6,
    ACTIONS(35), 1,
      aux_sym_description_token1,
    ACTIONS(64), 1,
      anon_sym_LF,
    ACTIONS(66), 1,
      sym_code,
    STATE(39), 1,
      sym_status,
    STATE(60), 1,
      sym_description,
    ACTIONS(31), 2,
      anon_sym_BANG,
      anon_sym_STAR,
  [187] = 4,
    ACTIONS(70), 1,
      sym_value,
    STATE(67), 1,
      sym_currency,
    STATE(68), 1,
      sym_amount,
    ACTIONS(68), 4,
      anon_sym_u20b9,
      anon_sym_DOLLAR,
      anon_sym_INR,
      anon_sym_USD,
  [203] = 3,
    ACTIONS(72), 1,
      sym_subaccount,
    STATE(11), 1,
      aux_sym_account_repeat1,
    ACTIONS(39), 5,
      anon_sym_u20b9,
      anon_sym_DOLLAR,
      anon_sym_INR,
      anon_sym_USD,
      sym_value,
  [217] = 3,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      aux_sym_account_token1,
    ACTIONS(77), 5,
      sym_year,
      aux_sym_month_token1,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [231] = 3,
    ACTIONS(81), 1,
      sym_subaccount,
    STATE(14), 1,
      aux_sym_account_repeat1,
    ACTIONS(52), 5,
      anon_sym_u20b9,
      anon_sym_DOLLAR,
      anon_sym_INR,
      anon_sym_USD,
      sym_value,
  [245] = 3,
    ACTIONS(83), 1,
      sym_subaccount,
    STATE(11), 1,
      aux_sym_account_repeat1,
    ACTIONS(58), 5,
      anon_sym_u20b9,
      anon_sym_DOLLAR,
      anon_sym_INR,
      anon_sym_USD,
      sym_value,
  [259] = 2,
    ACTIONS(87), 1,
      aux_sym_month_token1,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      sym_year,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [270] = 2,
    ACTIONS(91), 1,
      aux_sym_month_token1,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      sym_year,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [281] = 2,
    ACTIONS(95), 1,
      aux_sym_month_token1,
    ACTIONS(93), 5,
      ts_builtin_sym_end,
      sym_year,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [292] = 2,
    ACTIONS(99), 1,
      aux_sym_month_token1,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      sym_year,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [303] = 2,
    ACTIONS(103), 1,
      aux_sym_month_token1,
    ACTIONS(101), 5,
      ts_builtin_sym_end,
      sym_year,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [314] = 2,
    ACTIONS(107), 1,
      aux_sym_month_token1,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      sym_year,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [325] = 2,
    ACTIONS(111), 1,
      aux_sym_month_token1,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      sym_year,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [336] = 2,
    ACTIONS(115), 1,
      aux_sym_month_token1,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      sym_year,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [347] = 2,
    ACTIONS(119), 1,
      aux_sym_month_token1,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      sym_year,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [358] = 2,
    ACTIONS(123), 1,
      aux_sym_month_token1,
    ACTIONS(121), 5,
      ts_builtin_sym_end,
      sym_year,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [369] = 2,
    ACTIONS(127), 1,
      aux_sym_month_token1,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      sym_year,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [380] = 4,
    ACTIONS(129), 1,
      aux_sym_account_token1,
    STATE(6), 1,
      sym_account,
    STATE(19), 1,
      sym_balancing,
    STATE(31), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [394] = 4,
    ACTIONS(129), 1,
      aux_sym_account_token1,
    STATE(6), 1,
      sym_account,
    STATE(19), 1,
      sym_balancing,
    STATE(38), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [408] = 1,
    ACTIONS(131), 5,
      anon_sym_LF,
      anon_sym_BANG,
      anon_sym_STAR,
      sym_code,
      aux_sym_description_token1,
  [416] = 4,
    ACTIONS(129), 1,
      aux_sym_account_token1,
    STATE(6), 1,
      sym_account,
    STATE(22), 1,
      sym_balancing,
    STATE(35), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [430] = 4,
    ACTIONS(129), 1,
      aux_sym_account_token1,
    STATE(6), 1,
      sym_account,
    STATE(23), 1,
      sym_balancing,
    STATE(38), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [444] = 4,
    ACTIONS(129), 1,
      aux_sym_account_token1,
    STATE(6), 1,
      sym_account,
    STATE(16), 1,
      sym_balancing,
    STATE(38), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [458] = 4,
    ACTIONS(129), 1,
      aux_sym_account_token1,
    STATE(6), 1,
      sym_account,
    STATE(24), 1,
      sym_balancing,
    STATE(27), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [472] = 4,
    ACTIONS(129), 1,
      aux_sym_account_token1,
    STATE(6), 1,
      sym_account,
    STATE(16), 1,
      sym_balancing,
    STATE(30), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [486] = 4,
    ACTIONS(129), 1,
      aux_sym_account_token1,
    STATE(6), 1,
      sym_account,
    STATE(22), 1,
      sym_balancing,
    STATE(38), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [500] = 4,
    ACTIONS(129), 1,
      aux_sym_account_token1,
    STATE(6), 1,
      sym_account,
    STATE(24), 1,
      sym_balancing,
    STATE(38), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [514] = 1,
    ACTIONS(133), 5,
      anon_sym_LF,
      anon_sym_BANG,
      anon_sym_STAR,
      sym_code,
      aux_sym_description_token1,
  [522] = 1,
    ACTIONS(135), 5,
      anon_sym_LF,
      anon_sym_BANG,
      anon_sym_STAR,
      sym_code,
      aux_sym_description_token1,
  [530] = 3,
    ACTIONS(137), 1,
      aux_sym_account_token1,
    STATE(10), 1,
      sym_account,
    STATE(38), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [541] = 4,
    ACTIONS(29), 1,
      anon_sym_LF,
    ACTIONS(33), 1,
      sym_code,
    ACTIONS(35), 1,
      aux_sym_description_token1,
    STATE(70), 1,
      sym_description,
  [554] = 4,
    ACTIONS(35), 1,
      aux_sym_description_token1,
    ACTIONS(140), 1,
      anon_sym_LF,
    ACTIONS(142), 1,
      sym_code,
    STATE(74), 1,
      sym_description,
  [567] = 3,
    ACTIONS(29), 1,
      anon_sym_LF,
    ACTIONS(35), 1,
      aux_sym_description_token1,
    STATE(70), 1,
      sym_description,
  [577] = 1,
    ACTIONS(144), 3,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
  [583] = 3,
    ACTIONS(146), 1,
      anon_sym_DASH,
    ACTIONS(148), 1,
      anon_sym_SLASH,
    ACTIONS(150), 1,
      anon_sym_DOT,
  [593] = 3,
    ACTIONS(152), 1,
      aux_sym_multiline_comment_token1,
    ACTIONS(154), 1,
      anon_sym_endcomment_LF,
    STATE(50), 1,
      aux_sym_multiline_comment_repeat1,
  [603] = 1,
    ACTIONS(156), 3,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
  [609] = 3,
    ACTIONS(35), 1,
      aux_sym_description_token1,
    ACTIONS(158), 1,
      anon_sym_LF,
    STATE(61), 1,
      sym_description,
  [619] = 3,
    ACTIONS(35), 1,
      aux_sym_description_token1,
    ACTIONS(140), 1,
      anon_sym_LF,
    STATE(74), 1,
      sym_description,
  [629] = 2,
    ACTIONS(160), 1,
      anon_sym_LF,
    ACTIONS(162), 2,
      sym_commodity,
      sym_complex_commodity,
  [637] = 3,
    ACTIONS(164), 1,
      aux_sym_multiline_comment_token1,
    ACTIONS(167), 1,
      anon_sym_endcomment_LF,
    STATE(49), 1,
      aux_sym_multiline_comment_repeat1,
  [647] = 3,
    ACTIONS(169), 1,
      aux_sym_multiline_comment_token1,
    ACTIONS(171), 1,
      anon_sym_endcomment_LF,
    STATE(49), 1,
      aux_sym_multiline_comment_repeat1,
  [657] = 1,
    ACTIONS(173), 3,
      anon_sym_LF,
      sym_code,
      aux_sym_description_token1,
  [663] = 3,
    ACTIONS(175), 1,
      anon_sym_LF,
    ACTIONS(177), 1,
      anon_sym_PIPE,
    STATE(59), 1,
      sym_note,
  [673] = 2,
    ACTIONS(179), 1,
      aux_sym_month_token1,
    STATE(37), 1,
      sym_day,
  [680] = 2,
    ACTIONS(181), 1,
      aux_sym_month_token1,
    STATE(63), 1,
      sym_month,
  [687] = 2,
    ACTIONS(179), 1,
      aux_sym_month_token1,
    STATE(28), 1,
      sym_day,
  [694] = 2,
    ACTIONS(181), 1,
      aux_sym_month_token1,
    STATE(64), 1,
      sym_month,
  [701] = 2,
    ACTIONS(181), 1,
      aux_sym_month_token1,
    STATE(65), 1,
      sym_month,
  [708] = 1,
    ACTIONS(183), 1,
      sym_value,
  [712] = 1,
    ACTIONS(185), 1,
      anon_sym_LF,
  [716] = 1,
    ACTIONS(187), 1,
      anon_sym_LF,
  [720] = 1,
    ACTIONS(189), 1,
      anon_sym_LF,
  [724] = 1,
    ACTIONS(191), 1,
      anon_sym_LF,
  [728] = 1,
    ACTIONS(193), 1,
      anon_sym_DASH,
  [732] = 1,
    ACTIONS(193), 1,
      anon_sym_SLASH,
  [736] = 1,
    ACTIONS(193), 1,
      anon_sym_DOT,
  [740] = 1,
    ACTIONS(195), 1,
      anon_sym_LF,
  [744] = 1,
    ACTIONS(197), 1,
      sym_value,
  [748] = 1,
    ACTIONS(199), 1,
      anon_sym_LF,
  [752] = 1,
    ACTIONS(201), 1,
      anon_sym_LF,
  [756] = 1,
    ACTIONS(203), 1,
      anon_sym_LF,
  [760] = 1,
    ACTIONS(205), 1,
      aux_sym_account_token1,
  [764] = 1,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
  [768] = 1,
    ACTIONS(209), 1,
      aux_sym_multiline_comment_token1,
  [772] = 1,
    ACTIONS(211), 1,
      anon_sym_LF,
  [776] = 1,
    ACTIONS(213), 1,
      aux_sym_description_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 97,
  [SMALL_STATE(6)] = 114,
  [SMALL_STATE(7)] = 133,
  [SMALL_STATE(8)] = 150,
  [SMALL_STATE(9)] = 167,
  [SMALL_STATE(10)] = 187,
  [SMALL_STATE(11)] = 203,
  [SMALL_STATE(12)] = 217,
  [SMALL_STATE(13)] = 231,
  [SMALL_STATE(14)] = 245,
  [SMALL_STATE(15)] = 259,
  [SMALL_STATE(16)] = 270,
  [SMALL_STATE(17)] = 281,
  [SMALL_STATE(18)] = 292,
  [SMALL_STATE(19)] = 303,
  [SMALL_STATE(20)] = 314,
  [SMALL_STATE(21)] = 325,
  [SMALL_STATE(22)] = 336,
  [SMALL_STATE(23)] = 347,
  [SMALL_STATE(24)] = 358,
  [SMALL_STATE(25)] = 369,
  [SMALL_STATE(26)] = 380,
  [SMALL_STATE(27)] = 394,
  [SMALL_STATE(28)] = 408,
  [SMALL_STATE(29)] = 416,
  [SMALL_STATE(30)] = 430,
  [SMALL_STATE(31)] = 444,
  [SMALL_STATE(32)] = 458,
  [SMALL_STATE(33)] = 472,
  [SMALL_STATE(34)] = 486,
  [SMALL_STATE(35)] = 500,
  [SMALL_STATE(36)] = 514,
  [SMALL_STATE(37)] = 522,
  [SMALL_STATE(38)] = 530,
  [SMALL_STATE(39)] = 541,
  [SMALL_STATE(40)] = 554,
  [SMALL_STATE(41)] = 567,
  [SMALL_STATE(42)] = 577,
  [SMALL_STATE(43)] = 583,
  [SMALL_STATE(44)] = 593,
  [SMALL_STATE(45)] = 603,
  [SMALL_STATE(46)] = 609,
  [SMALL_STATE(47)] = 619,
  [SMALL_STATE(48)] = 629,
  [SMALL_STATE(49)] = 637,
  [SMALL_STATE(50)] = 647,
  [SMALL_STATE(51)] = 657,
  [SMALL_STATE(52)] = 663,
  [SMALL_STATE(53)] = 673,
  [SMALL_STATE(54)] = 680,
  [SMALL_STATE(55)] = 687,
  [SMALL_STATE(56)] = 694,
  [SMALL_STATE(57)] = 701,
  [SMALL_STATE(58)] = 708,
  [SMALL_STATE(59)] = 712,
  [SMALL_STATE(60)] = 716,
  [SMALL_STATE(61)] = 720,
  [SMALL_STATE(62)] = 724,
  [SMALL_STATE(63)] = 728,
  [SMALL_STATE(64)] = 732,
  [SMALL_STATE(65)] = 736,
  [SMALL_STATE(66)] = 740,
  [SMALL_STATE(67)] = 744,
  [SMALL_STATE(68)] = 748,
  [SMALL_STATE(69)] = 752,
  [SMALL_STATE(70)] = 756,
  [SMALL_STATE(71)] = 760,
  [SMALL_STATE(72)] = 764,
  [SMALL_STATE(73)] = 768,
  [SMALL_STATE(74)] = 772,
  [SMALL_STATE(75)] = 776,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_account_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_repeat1, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balancing, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balancing, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transactions, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balancing, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balancing, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_entry, 7, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_entry, 7, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_entry, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_entry, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_entry, 6, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_entry, 6, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_comment, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_comment, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_entry, 4, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_entry, 4, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_entry, 8, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_entry, 8, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_entry, 5, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_entry, 5, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_comment, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_comment, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 5, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_day, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 3, 0, 0),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_journal_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_comment_repeat1, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_currency, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transactions, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
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
