#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
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
  sym_currency = 14,
  sym_amount = 15,
  anon_sym_comment_LF = 16,
  aux_sym_multiline_comment_token1 = 17,
  anon_sym_endcomment_LF = 18,
  anon_sym_SEMI = 19,
  anon_sym_POUND = 20,
  sym_source_file = 21,
  sym_journal_entry = 22,
  sym_transactions = 23,
  sym_balancing = 24,
  sym_date = 25,
  sym_month = 26,
  sym_day = 27,
  sym_status = 28,
  sym_description = 29,
  sym_note = 30,
  sym_account = 31,
  sym_comment = 32,
  sym_multiline_comment = 33,
  sym_inline_comment = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym_journal_entry_repeat1 = 36,
  aux_sym_account_repeat1 = 37,
  aux_sym_multiline_comment_repeat1 = 38,
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
  [sym_currency] = "currency",
  [sym_amount] = "amount",
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
  [sym_currency] = sym_currency,
  [sym_amount] = sym_amount,
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
  [sym_currency] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
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
  [32] = 19,
  [33] = 25,
  [34] = 34,
  [35] = 30,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      ADVANCE_MAP(
        '!', 43,
        '#', 80,
        '(', 29,
        '*', 44,
        '-', 38,
        '.', 40,
        '/', 39,
        ':', 33,
        ';', 79,
        'c', 23,
        'e', 20,
        '|', 49,
        '$', 61,
        0x20b9, 61,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(63);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(78);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == '*') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(3);
      if (lookahead == '\'' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == '*') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '|') ADVANCE(49);
      if (lookahead == '$' ||
          lookahead == 0x20b9) ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(8);
      if (lookahead == '\'' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '$' ||
          lookahead == 0x20b9) ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(13);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 27:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(27);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 28:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == '%' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 33:
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == 'c') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(3);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_year);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_month_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_code);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(3);
      if (lookahead == '\'' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == ' ') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(8);
      if (lookahead == '\'' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == ' ') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == 'm') ADVANCE(53);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_account_token1);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_subaccount);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_currency);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '%' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_comment_LF);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(77);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'm') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'm') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_endcomment_LF);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 34},
  [6] = {.lex_state = 34},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 27},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 28},
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
    [sym_currency] = ACTIONS(1),
    [anon_sym_comment_LF] = ACTIONS(1),
    [anon_sym_endcomment_LF] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(68),
    [sym_journal_entry] = STATE(3),
    [sym_date] = STATE(4),
    [sym_month] = STATE(42),
    [sym_comment] = STATE(3),
    [sym_multiline_comment] = STATE(7),
    [sym_inline_comment] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_year,
    ACTIONS(18), 1,
      aux_sym_month_token1,
    ACTIONS(21), 1,
      anon_sym_comment_LF,
    STATE(4), 1,
      sym_date,
    STATE(42), 1,
      sym_month,
    ACTIONS(24), 2,
      anon_sym_SEMI,
      anon_sym_POUND,
    STATE(7), 2,
      sym_multiline_comment,
      sym_inline_comment,
    STATE(2), 3,
      sym_journal_entry,
      sym_comment,
      aux_sym_source_file_repeat1,
  [32] = 9,
    ACTIONS(5), 1,
      sym_year,
    ACTIONS(7), 1,
      aux_sym_month_token1,
    ACTIONS(9), 1,
      anon_sym_comment_LF,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_date,
    STATE(42), 1,
      sym_month,
    ACTIONS(11), 2,
      anon_sym_SEMI,
      anon_sym_POUND,
    STATE(7), 2,
      sym_multiline_comment,
      sym_inline_comment,
    STATE(2), 3,
      sym_journal_entry,
      sym_comment,
      aux_sym_source_file_repeat1,
  [64] = 6,
    ACTIONS(29), 1,
      anon_sym_LF,
    ACTIONS(33), 1,
      sym_code,
    ACTIONS(35), 1,
      aux_sym_description_token1,
    STATE(34), 1,
      sym_status,
    STATE(55), 1,
      sym_description,
    ACTIONS(31), 2,
      anon_sym_BANG,
      anon_sym_STAR,
  [84] = 3,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      aux_sym_account_token1,
    ACTIONS(39), 5,
      sym_year,
      aux_sym_month_token1,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [98] = 3,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      aux_sym_account_token1,
    ACTIONS(45), 5,
      sym_year,
      aux_sym_month_token1,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [112] = 2,
    ACTIONS(51), 1,
      aux_sym_month_token1,
    ACTIONS(49), 5,
      ts_builtin_sym_end,
      sym_year,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [123] = 2,
    ACTIONS(55), 1,
      aux_sym_month_token1,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      sym_year,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [134] = 2,
    ACTIONS(59), 1,
      aux_sym_month_token1,
    ACTIONS(57), 5,
      ts_builtin_sym_end,
      sym_year,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [145] = 2,
    ACTIONS(63), 1,
      aux_sym_month_token1,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      sym_year,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [156] = 2,
    ACTIONS(67), 1,
      aux_sym_month_token1,
    ACTIONS(65), 5,
      ts_builtin_sym_end,
      sym_year,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [167] = 2,
    ACTIONS(71), 1,
      aux_sym_month_token1,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      sym_year,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [178] = 2,
    ACTIONS(75), 1,
      aux_sym_month_token1,
    ACTIONS(73), 5,
      ts_builtin_sym_end,
      sym_year,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [189] = 2,
    ACTIONS(79), 1,
      aux_sym_month_token1,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      sym_year,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [200] = 2,
    ACTIONS(83), 1,
      aux_sym_month_token1,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      sym_year,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [211] = 2,
    ACTIONS(87), 1,
      aux_sym_month_token1,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      sym_year,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [222] = 2,
    ACTIONS(39), 1,
      aux_sym_month_token1,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      sym_year,
      anon_sym_comment_LF,
      anon_sym_SEMI,
      anon_sym_POUND,
  [233] = 4,
    ACTIONS(89), 1,
      aux_sym_account_token1,
    STATE(11), 1,
      sym_balancing,
    STATE(43), 1,
      sym_account,
    STATE(28), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [247] = 4,
    ACTIONS(91), 1,
      anon_sym_LF,
    ACTIONS(93), 1,
      sym_subaccount,
    STATE(19), 1,
      aux_sym_account_repeat1,
    ACTIONS(96), 2,
      sym_currency,
      sym_amount,
  [261] = 1,
    ACTIONS(98), 5,
      anon_sym_LF,
      anon_sym_BANG,
      anon_sym_STAR,
      sym_code,
      aux_sym_description_token1,
  [269] = 4,
    ACTIONS(89), 1,
      aux_sym_account_token1,
    STATE(15), 1,
      sym_balancing,
    STATE(43), 1,
      sym_account,
    STATE(23), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [283] = 4,
    ACTIONS(89), 1,
      aux_sym_account_token1,
    STATE(15), 1,
      sym_balancing,
    STATE(43), 1,
      sym_account,
    STATE(36), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [297] = 4,
    ACTIONS(89), 1,
      aux_sym_account_token1,
    STATE(10), 1,
      sym_balancing,
    STATE(43), 1,
      sym_account,
    STATE(36), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [311] = 4,
    ACTIONS(89), 1,
      aux_sym_account_token1,
    STATE(10), 1,
      sym_balancing,
    STATE(43), 1,
      sym_account,
    STATE(27), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [325] = 4,
    ACTIONS(100), 1,
      anon_sym_LF,
    ACTIONS(102), 1,
      sym_subaccount,
    STATE(30), 1,
      aux_sym_account_repeat1,
    ACTIONS(104), 2,
      sym_currency,
      sym_amount,
  [339] = 1,
    ACTIONS(106), 5,
      anon_sym_LF,
      anon_sym_BANG,
      anon_sym_STAR,
      sym_code,
      aux_sym_description_token1,
  [347] = 4,
    ACTIONS(89), 1,
      aux_sym_account_token1,
    STATE(12), 1,
      sym_balancing,
    STATE(43), 1,
      sym_account,
    STATE(36), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [361] = 4,
    ACTIONS(89), 1,
      aux_sym_account_token1,
    STATE(8), 1,
      sym_balancing,
    STATE(43), 1,
      sym_account,
    STATE(36), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [375] = 4,
    ACTIONS(89), 1,
      aux_sym_account_token1,
    STATE(8), 1,
      sym_balancing,
    STATE(43), 1,
      sym_account,
    STATE(22), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [389] = 4,
    ACTIONS(108), 1,
      anon_sym_LF,
    ACTIONS(110), 1,
      sym_subaccount,
    STATE(19), 1,
      aux_sym_account_repeat1,
    ACTIONS(112), 2,
      sym_currency,
      sym_amount,
  [403] = 1,
    ACTIONS(114), 5,
      anon_sym_LF,
      anon_sym_BANG,
      anon_sym_STAR,
      sym_code,
      aux_sym_description_token1,
  [411] = 3,
    ACTIONS(116), 1,
      sym_subaccount,
    STATE(32), 1,
      aux_sym_account_repeat1,
    ACTIONS(91), 2,
      sym_currency,
      sym_amount,
  [422] = 3,
    ACTIONS(119), 1,
      sym_subaccount,
    STATE(35), 1,
      aux_sym_account_repeat1,
    ACTIONS(100), 2,
      sym_currency,
      sym_amount,
  [433] = 4,
    ACTIONS(35), 1,
      aux_sym_description_token1,
    ACTIONS(121), 1,
      anon_sym_LF,
    ACTIONS(123), 1,
      sym_code,
    STATE(71), 1,
      sym_description,
  [446] = 3,
    ACTIONS(125), 1,
      sym_subaccount,
    STATE(32), 1,
      aux_sym_account_repeat1,
    ACTIONS(108), 2,
      sym_currency,
      sym_amount,
  [457] = 3,
    ACTIONS(127), 1,
      aux_sym_account_token1,
    STATE(53), 1,
      sym_account,
    STATE(36), 2,
      sym_transactions,
      aux_sym_journal_entry_repeat1,
  [468] = 1,
    ACTIONS(130), 3,
      anon_sym_LF,
      sym_code,
      aux_sym_description_token1,
  [474] = 3,
    ACTIONS(132), 1,
      anon_sym_LF,
    ACTIONS(134), 1,
      anon_sym_PIPE,
    STATE(56), 1,
      sym_note,
  [484] = 1,
    ACTIONS(136), 3,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
  [490] = 3,
    ACTIONS(138), 1,
      anon_sym_DASH,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(142), 1,
      anon_sym_DOT,
  [500] = 3,
    ACTIONS(144), 1,
      aux_sym_multiline_comment_token1,
    ACTIONS(146), 1,
      anon_sym_endcomment_LF,
    STATE(45), 1,
      aux_sym_multiline_comment_repeat1,
  [510] = 1,
    ACTIONS(148), 3,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
  [516] = 3,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(152), 1,
      sym_currency,
    ACTIONS(154), 1,
      sym_amount,
  [526] = 3,
    ACTIONS(156), 1,
      aux_sym_multiline_comment_token1,
    ACTIONS(159), 1,
      anon_sym_endcomment_LF,
    STATE(44), 1,
      aux_sym_multiline_comment_repeat1,
  [536] = 3,
    ACTIONS(161), 1,
      aux_sym_multiline_comment_token1,
    ACTIONS(163), 1,
      anon_sym_endcomment_LF,
    STATE(44), 1,
      aux_sym_multiline_comment_repeat1,
  [546] = 3,
    ACTIONS(35), 1,
      aux_sym_description_token1,
    ACTIONS(121), 1,
      anon_sym_LF,
    STATE(71), 1,
      sym_description,
  [556] = 3,
    ACTIONS(35), 1,
      aux_sym_description_token1,
    ACTIONS(165), 1,
      anon_sym_LF,
    STATE(59), 1,
      sym_description,
  [566] = 2,
    ACTIONS(167), 1,
      aux_sym_month_token1,
    STATE(20), 1,
      sym_day,
  [573] = 2,
    ACTIONS(169), 1,
      anon_sym_LF,
    ACTIONS(171), 1,
      sym_amount,
  [580] = 2,
    ACTIONS(173), 1,
      aux_sym_month_token1,
    STATE(58), 1,
      sym_month,
  [587] = 2,
    ACTIONS(173), 1,
      aux_sym_month_token1,
    STATE(61), 1,
      sym_month,
  [594] = 2,
    ACTIONS(173), 1,
      aux_sym_month_token1,
    STATE(64), 1,
      sym_month,
  [601] = 2,
    ACTIONS(175), 1,
      sym_currency,
    ACTIONS(177), 1,
      sym_amount,
  [608] = 2,
    ACTIONS(167), 1,
      aux_sym_month_token1,
    STATE(31), 1,
      sym_day,
  [615] = 1,
    ACTIONS(179), 1,
      anon_sym_LF,
  [619] = 1,
    ACTIONS(181), 1,
      anon_sym_LF,
  [623] = 1,
    ACTIONS(183), 1,
      anon_sym_LF,
  [627] = 1,
    ACTIONS(185), 1,
      anon_sym_DASH,
  [631] = 1,
    ACTIONS(187), 1,
      anon_sym_LF,
  [635] = 1,
    ACTIONS(189), 1,
      anon_sym_LF,
  [639] = 1,
    ACTIONS(185), 1,
      anon_sym_SLASH,
  [643] = 1,
    ACTIONS(191), 1,
      sym_amount,
  [647] = 1,
    ACTIONS(193), 1,
      anon_sym_LF,
  [651] = 1,
    ACTIONS(185), 1,
      anon_sym_DOT,
  [655] = 1,
    ACTIONS(195), 1,
      anon_sym_LF,
  [659] = 1,
    ACTIONS(197), 1,
      anon_sym_LF,
  [663] = 1,
    ACTIONS(199), 1,
      aux_sym_account_token1,
  [667] = 1,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
  [671] = 1,
    ACTIONS(203), 1,
      aux_sym_account_token1,
  [675] = 1,
    ACTIONS(205), 1,
      aux_sym_multiline_comment_token1,
  [679] = 1,
    ACTIONS(207), 1,
      anon_sym_LF,
  [683] = 1,
    ACTIONS(209), 1,
      aux_sym_description_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 98,
  [SMALL_STATE(7)] = 112,
  [SMALL_STATE(8)] = 123,
  [SMALL_STATE(9)] = 134,
  [SMALL_STATE(10)] = 145,
  [SMALL_STATE(11)] = 156,
  [SMALL_STATE(12)] = 167,
  [SMALL_STATE(13)] = 178,
  [SMALL_STATE(14)] = 189,
  [SMALL_STATE(15)] = 200,
  [SMALL_STATE(16)] = 211,
  [SMALL_STATE(17)] = 222,
  [SMALL_STATE(18)] = 233,
  [SMALL_STATE(19)] = 247,
  [SMALL_STATE(20)] = 261,
  [SMALL_STATE(21)] = 269,
  [SMALL_STATE(22)] = 283,
  [SMALL_STATE(23)] = 297,
  [SMALL_STATE(24)] = 311,
  [SMALL_STATE(25)] = 325,
  [SMALL_STATE(26)] = 339,
  [SMALL_STATE(27)] = 347,
  [SMALL_STATE(28)] = 361,
  [SMALL_STATE(29)] = 375,
  [SMALL_STATE(30)] = 389,
  [SMALL_STATE(31)] = 403,
  [SMALL_STATE(32)] = 411,
  [SMALL_STATE(33)] = 422,
  [SMALL_STATE(34)] = 433,
  [SMALL_STATE(35)] = 446,
  [SMALL_STATE(36)] = 457,
  [SMALL_STATE(37)] = 468,
  [SMALL_STATE(38)] = 474,
  [SMALL_STATE(39)] = 484,
  [SMALL_STATE(40)] = 490,
  [SMALL_STATE(41)] = 500,
  [SMALL_STATE(42)] = 510,
  [SMALL_STATE(43)] = 516,
  [SMALL_STATE(44)] = 526,
  [SMALL_STATE(45)] = 536,
  [SMALL_STATE(46)] = 546,
  [SMALL_STATE(47)] = 556,
  [SMALL_STATE(48)] = 566,
  [SMALL_STATE(49)] = 573,
  [SMALL_STATE(50)] = 580,
  [SMALL_STATE(51)] = 587,
  [SMALL_STATE(52)] = 594,
  [SMALL_STATE(53)] = 601,
  [SMALL_STATE(54)] = 608,
  [SMALL_STATE(55)] = 615,
  [SMALL_STATE(56)] = 619,
  [SMALL_STATE(57)] = 623,
  [SMALL_STATE(58)] = 627,
  [SMALL_STATE(59)] = 631,
  [SMALL_STATE(60)] = 635,
  [SMALL_STATE(61)] = 639,
  [SMALL_STATE(62)] = 643,
  [SMALL_STATE(63)] = 647,
  [SMALL_STATE(64)] = 651,
  [SMALL_STATE(65)] = 655,
  [SMALL_STATE(66)] = 659,
  [SMALL_STATE(67)] = 663,
  [SMALL_STATE(68)] = 667,
  [SMALL_STATE(69)] = 671,
  [SMALL_STATE(70)] = 675,
  [SMALL_STATE(71)] = 679,
  [SMALL_STATE(72)] = 683,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balancing, 3, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balancing, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transactions, 3, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balancing, 4, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balancing, 4, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transactions, 4, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_entry, 4, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_entry, 4, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balancing, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balancing, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_entry, 6, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_entry, 6, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_entry, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_entry, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_entry, 7, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_entry, 7, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_comment, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_comment, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_comment, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_comment, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_entry, 5, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_entry, 5, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_account_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 5, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_day, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 3, 0, 0),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_journal_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_comment_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transactions, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transactions, 4, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
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
