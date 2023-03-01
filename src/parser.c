#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 4

enum {
  sym_symbol = 1,
  anon_sym_COLON = 2,
  anon_sym_DOT = 3,
  anon_sym_DOT2 = 4,
  sym_path = 5,
  anon_sym_CARET = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  sym_number = 13,
  anon_sym_DQUOTE = 14,
  sym_string_fragment = 15,
  aux_sym__escape_sequence_token1 = 16,
  sym_escape_sequence = 17,
  sym_ignore = 18,
  sym_null = 19,
  anon_sym_false = 20,
  anon_sym_true = 21,
  sym_comment = 22,
  sym_source = 23,
  sym_form = 24,
  sym_keyword = 25,
  sym__module = 26,
  sym_module_path = 27,
  sym_module_call = 28,
  sym_symbind = 29,
  sym_meta = 30,
  sym_list = 31,
  sym_scope = 32,
  sym_cons = 33,
  sym_literal = 34,
  sym_string = 35,
  sym__escape_sequence = 36,
  sym_boolean = 37,
  aux_sym_source_repeat1 = 38,
  aux_sym_string_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_symbol] = "symbol",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = "module",
  [anon_sym_DOT2] = ".",
  [sym_path] = "path",
  [anon_sym_CARET] = "^",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_fragment] = "string_fragment",
  [aux_sym__escape_sequence_token1] = "_escape_sequence_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_ignore] = "ignore",
  [sym_null] = "null",
  [anon_sym_false] = "false",
  [anon_sym_true] = "true",
  [sym_comment] = "comment",
  [sym_source] = "source",
  [sym_form] = "form",
  [sym_keyword] = "keyword",
  [sym__module] = "_module",
  [sym_module_path] = "module_path",
  [sym_module_call] = "module_call",
  [sym_symbind] = "symbind",
  [sym_meta] = "meta",
  [sym_list] = "list",
  [sym_scope] = "scope",
  [sym_cons] = "cons",
  [sym_literal] = "literal",
  [sym_string] = "string",
  [sym__escape_sequence] = "_escape_sequence",
  [sym_boolean] = "boolean",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_symbol] = sym_symbol,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DOT2] = anon_sym_DOT,
  [sym_path] = sym_path,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_fragment] = sym_string_fragment,
  [aux_sym__escape_sequence_token1] = aux_sym__escape_sequence_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_ignore] = sym_ignore,
  [sym_null] = sym_null,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_true] = anon_sym_true,
  [sym_comment] = sym_comment,
  [sym_source] = sym_source,
  [sym_form] = sym_form,
  [sym_keyword] = sym_keyword,
  [sym__module] = sym__module,
  [sym_module_path] = sym_module_path,
  [sym_module_call] = sym_module_call,
  [sym_symbind] = sym_symbind,
  [sym_meta] = sym_meta,
  [sym_list] = sym_list,
  [sym_scope] = sym_scope,
  [sym_cons] = sym_cons,
  [sym_literal] = sym_literal,
  [sym_string] = sym_string,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT2] = {
    .visible = true,
    .named = false,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__escape_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_ignore] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_form] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__module] = {
    .visible = false,
    .named = true,
  },
  [sym_module_path] = {
    .visible = true,
    .named = true,
  },
  [sym_module_call] = {
    .visible = true,
    .named = true,
  },
  [sym_symbind] = {
    .visible = true,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_cons] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_marker = 1,
  field_meta = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_marker] = "marker",
  [field_meta] = "meta",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_marker, 0},
    {field_meta, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = anon_sym_DOT,
  },
  [3] = {
    [0] = anon_sym_DOT,
  },
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
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
};

static inline bool aux_sym__escape_sequence_token1_character_set_1(int32_t c) {
  return (c < '['
    ? (c < '('
      ? (c < ' '
        ? (c >= '\t' && c <= '\r')
        : c <= ' ')
      : (c <= ')' || (c < '.'
        ? c == ','
        : c <= ';')))
    : (c <= '^' || (c < 133
      ? (c < '}'
        ? c == '{'
        : c <= '}')
      : (c <= 133 || c == 160))));
}

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < 'a'
    ? (c < '?'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= '?' || c == '\\'))
    : (c <= 'b' || (c < 'r'
      ? (c < 'n'
        ? c == 'f'
        : c <= 'n')
      : (c <= 'r' || (c >= 't' && c <= 'v')))));
}

static inline bool sym_symbol_character_set_1(int32_t c) {
  return (c < '['
    ? (c < '('
      ? (c < 11
        ? c == 0
        : (c <= '\f' || c == '"'))
      : (c <= ')' || (c < ':'
        ? c == ','
        : c <= ':')))
    : (c <= '[' || (c < '}'
      ? (c < '{'
        ? (c >= ']' && c <= '^')
        : c <= '{')
      : (c <= '}' || (c < 160
        ? c == 133
        : c <= 160)))));
}

static inline bool sym_symbol_character_set_2(int32_t c) {
  return (c < '['
    ? (c < '('
      ? (c < 11
        ? c == 0
        : (c <= '\f' || c == '"'))
      : (c <= ')' || (c < '.'
        ? c == ','
        : c <= ':')))
    : (c <= '[' || (c < '}'
      ? (c < '{'
        ? (c >= ']' && c <= '^')
        : c <= '{')
      : (c <= '}' || (c < 160
        ? c == 133
        : c <= 160)))));
}

static inline bool sym_symbol_character_set_3(int32_t c) {
  return (c < '.'
    ? (c < '"'
      ? (c < '\t'
        ? c == 0
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= ',')))
    : (c <= ';' || (c < '}'
      ? (c < ']'
        ? c == '['
        : (c <= '^' || c == '{'))
      : (c <= '}' || (c < 160
        ? c == 133
        : c <= 160)))));
}

static inline bool sym_symbol_character_set_4(int32_t c) {
  return (c < '['
    ? (c < '('
      ? (c < '\t'
        ? c == 0
        : (c <= '\r' || (c >= ' ' && c <= '"')))
      : (c <= ')' || (c < '.'
        ? c == ','
        : c <= ';')))
    : (c <= '[' || (c < '}'
      ? (c < '{'
        ? (c >= ']' && c <= '^')
        : c <= '{')
      : (c <= '}' || (c < 160
        ? c == 133
        : c <= 160)))));
}

static inline bool sym_symbol_character_set_5(int32_t c) {
  return (c < ':'
    ? (c < '"'
      ? (c < '\t'
        ? c == 0
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= ',')))
    : (c <= ';' || (c < '}'
      ? (c < ']'
        ? c == '['
        : (c <= '^' || c == '{'))
      : (c <= '}' || (c < 160
        ? c == 133
        : c <= 160)))));
}

static inline bool sym_symbol_character_set_6(int32_t c) {
  return (c < '.'
    ? (c < '"'
      ? (c < '\t'
        ? c == 0
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= ',')))
    : (c <= ';' || (c < '}'
      ? (c < ']'
        ? c == '['
        : c <= '^')
      : (c <= '}' || (c < 160
        ? c == 133
        : c <= 160)))));
}

static inline bool sym_comment_character_set_1(int32_t c) {
  return (c < '.'
    ? (c < '"'
      ? (c < 11
        ? c == '\t'
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= ',')))
    : (c <= ';' || (c < '}'
      ? (c < ']'
        ? c == '['
        : (c <= '^' || c == '{'))
      : (c <= '}' || (c < 160
        ? c == 133
        : c <= 160)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == '^') ADVANCE(21);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '\f' &&
          lookahead != ',' &&
          lookahead != 133 &&
          lookahead != 160) ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(50);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(20);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(36);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(38);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead == '{') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 13:
      if (eof) ADVANCE(16);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == '^') ADVANCE(21);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '\f' &&
          lookahead != ',' &&
          lookahead != 133 &&
          lookahead != 160) ADVANCE(50);
      END_STATE();
    case 14:
      if (eof) ADVANCE(16);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == '^') ADVANCE(21);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '\f' &&
          lookahead != ',' &&
          lookahead != 133 &&
          lookahead != 160) ADVANCE(50);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '/') ADVANCE(20);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DOT2);
      if (lookahead == '/') ADVANCE(20);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '/') ADVANCE(20);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '!') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__escape_sequence_token1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__escape_sequence_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__escape_sequence_token1);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(50);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(50);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '!') ADVANCE(49);
      if (!sym_symbol_character_set_4(lookahead)) ADVANCE(50);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(44);
      if (lookahead == 'x') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(36);
      if (lookahead == '\'' ||
          lookahead == '?' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(40);
      if (aux_sym__escape_sequence_token1_character_set_1(lookahead)) ADVANCE(35);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(20);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (!sym_symbol_character_set_5(lookahead)) ADVANCE(50);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '{') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (!sym_symbol_character_set_6(lookahead)) ADVANCE(50);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '_') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(3);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      ACCEPT_TOKEN(sym_ignore);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 15},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOT2] = ACTIONS(1),
    [sym_path] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__escape_sequence_token1] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_ignore] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(37),
    [sym_form] = STATE(3),
    [sym_keyword] = STATE(25),
    [sym__module] = STATE(25),
    [sym_module_path] = STATE(25),
    [sym_module_call] = STATE(25),
    [sym_symbind] = STATE(14),
    [sym_meta] = STATE(25),
    [sym_list] = STATE(25),
    [sym_scope] = STATE(25),
    [sym_cons] = STATE(25),
    [sym_literal] = STATE(25),
    [sym_string] = STATE(23),
    [sym_boolean] = STATE(23),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_symbol] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_path] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_ignore] = ACTIONS(23),
    [sym_null] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_form] = STATE(2),
    [sym_keyword] = STATE(25),
    [sym__module] = STATE(25),
    [sym_module_path] = STATE(25),
    [sym_module_call] = STATE(25),
    [sym_symbind] = STATE(14),
    [sym_meta] = STATE(25),
    [sym_list] = STATE(25),
    [sym_scope] = STATE(25),
    [sym_cons] = STATE(25),
    [sym_literal] = STATE(25),
    [sym_string] = STATE(23),
    [sym_boolean] = STATE(23),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_symbol] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(34),
    [anon_sym_DOT] = ACTIONS(37),
    [sym_path] = ACTIONS(40),
    [anon_sym_CARET] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_RBRACK] = ACTIONS(29),
    [sym_number] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(58),
    [sym_ignore] = ACTIONS(55),
    [sym_null] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_form] = STATE(2),
    [sym_keyword] = STATE(25),
    [sym__module] = STATE(25),
    [sym_module_path] = STATE(25),
    [sym_module_call] = STATE(25),
    [sym_symbind] = STATE(14),
    [sym_meta] = STATE(25),
    [sym_list] = STATE(25),
    [sym_scope] = STATE(25),
    [sym_cons] = STATE(25),
    [sym_literal] = STATE(25),
    [sym_string] = STATE(23),
    [sym_boolean] = STATE(23),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(64),
    [sym_symbol] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_path] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_ignore] = ACTIONS(23),
    [sym_null] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_form] = STATE(2),
    [sym_keyword] = STATE(25),
    [sym__module] = STATE(25),
    [sym_module_path] = STATE(25),
    [sym_module_call] = STATE(25),
    [sym_symbind] = STATE(14),
    [sym_meta] = STATE(25),
    [sym_list] = STATE(25),
    [sym_scope] = STATE(25),
    [sym_cons] = STATE(25),
    [sym_literal] = STATE(25),
    [sym_string] = STATE(23),
    [sym_boolean] = STATE(23),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_symbol] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_path] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(66),
    [sym_number] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_ignore] = ACTIONS(23),
    [sym_null] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_form] = STATE(2),
    [sym_keyword] = STATE(25),
    [sym__module] = STATE(25),
    [sym_module_path] = STATE(25),
    [sym_module_call] = STATE(25),
    [sym_symbind] = STATE(14),
    [sym_meta] = STATE(25),
    [sym_list] = STATE(25),
    [sym_scope] = STATE(25),
    [sym_cons] = STATE(25),
    [sym_literal] = STATE(25),
    [sym_string] = STATE(23),
    [sym_boolean] = STATE(23),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_symbol] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_path] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_ignore] = ACTIONS(23),
    [sym_null] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_form] = STATE(9),
    [sym_keyword] = STATE(25),
    [sym__module] = STATE(25),
    [sym_module_path] = STATE(25),
    [sym_module_call] = STATE(25),
    [sym_symbind] = STATE(14),
    [sym_meta] = STATE(25),
    [sym_list] = STATE(25),
    [sym_scope] = STATE(25),
    [sym_cons] = STATE(25),
    [sym_literal] = STATE(25),
    [sym_string] = STATE(23),
    [sym_boolean] = STATE(23),
    [aux_sym_source_repeat1] = STATE(9),
    [sym_symbol] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_path] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_ignore] = ACTIONS(23),
    [sym_null] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_form] = STATE(5),
    [sym_keyword] = STATE(25),
    [sym__module] = STATE(25),
    [sym_module_path] = STATE(25),
    [sym_module_call] = STATE(25),
    [sym_symbind] = STATE(14),
    [sym_meta] = STATE(25),
    [sym_list] = STATE(25),
    [sym_scope] = STATE(25),
    [sym_cons] = STATE(25),
    [sym_literal] = STATE(25),
    [sym_string] = STATE(23),
    [sym_boolean] = STATE(23),
    [aux_sym_source_repeat1] = STATE(5),
    [sym_symbol] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_path] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_ignore] = ACTIONS(23),
    [sym_null] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_form] = STATE(4),
    [sym_keyword] = STATE(25),
    [sym__module] = STATE(25),
    [sym_module_path] = STATE(25),
    [sym_module_call] = STATE(25),
    [sym_symbind] = STATE(14),
    [sym_meta] = STATE(25),
    [sym_list] = STATE(25),
    [sym_scope] = STATE(25),
    [sym_cons] = STATE(25),
    [sym_literal] = STATE(25),
    [sym_string] = STATE(23),
    [sym_boolean] = STATE(23),
    [aux_sym_source_repeat1] = STATE(4),
    [sym_symbol] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_path] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(74),
    [sym_number] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_ignore] = ACTIONS(23),
    [sym_null] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_form] = STATE(2),
    [sym_keyword] = STATE(25),
    [sym__module] = STATE(25),
    [sym_module_path] = STATE(25),
    [sym_module_call] = STATE(25),
    [sym_symbind] = STATE(14),
    [sym_meta] = STATE(25),
    [sym_list] = STATE(25),
    [sym_scope] = STATE(25),
    [sym_cons] = STATE(25),
    [sym_literal] = STATE(25),
    [sym_string] = STATE(23),
    [sym_boolean] = STATE(23),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_symbol] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_path] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_ignore] = ACTIONS(23),
    [sym_null] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_form] = STATE(11),
    [sym_keyword] = STATE(25),
    [sym__module] = STATE(25),
    [sym_module_path] = STATE(25),
    [sym_module_call] = STATE(25),
    [sym_symbind] = STATE(14),
    [sym_meta] = STATE(25),
    [sym_list] = STATE(25),
    [sym_scope] = STATE(25),
    [sym_cons] = STATE(25),
    [sym_literal] = STATE(25),
    [sym_string] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym_symbol] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_path] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_ignore] = ACTIONS(23),
    [sym_null] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_form] = STATE(16),
    [sym_keyword] = STATE(25),
    [sym__module] = STATE(25),
    [sym_module_path] = STATE(25),
    [sym_module_call] = STATE(25),
    [sym_symbind] = STATE(14),
    [sym_meta] = STATE(25),
    [sym_list] = STATE(25),
    [sym_scope] = STATE(25),
    [sym_cons] = STATE(25),
    [sym_literal] = STATE(25),
    [sym_string] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym_symbol] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_path] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_ignore] = ACTIONS(23),
    [sym_null] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_keyword] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(78),
    [sym_symbol] = ACTIONS(80),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(80),
    [anon_sym_DOT2] = ACTIONS(82),
    [sym_path] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_RBRACK] = ACTIONS(78),
    [sym_number] = ACTIONS(80),
    [anon_sym_DQUOTE] = ACTIONS(78),
    [sym_ignore] = ACTIONS(80),
    [sym_null] = ACTIONS(80),
    [anon_sym_false] = ACTIONS(80),
    [anon_sym_true] = ACTIONS(80),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOT2,
    ACTIONS(86), 7,
      anon_sym_DOT,
      sym_number,
      sym_ignore,
      sym_null,
      anon_sym_false,
      anon_sym_true,
      sym_symbol,
    ACTIONS(84), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [29] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_COLON,
    STATE(29), 1,
      sym_keyword,
    ACTIONS(80), 7,
      anon_sym_DOT,
      sym_number,
      sym_ignore,
      sym_null,
      anon_sym_false,
      anon_sym_true,
      sym_symbol,
    ACTIONS(78), 10,
      ts_builtin_sym_end,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [60] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 7,
      anon_sym_DOT,
      sym_number,
      sym_ignore,
      sym_null,
      anon_sym_false,
      anon_sym_true,
      sym_symbol,
    ACTIONS(88), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [86] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 7,
      anon_sym_DOT,
      sym_number,
      sym_ignore,
      sym_null,
      anon_sym_false,
      anon_sym_true,
      sym_symbol,
    ACTIONS(92), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 7,
      anon_sym_DOT,
      sym_number,
      sym_ignore,
      sym_null,
      anon_sym_false,
      anon_sym_true,
      sym_symbol,
    ACTIONS(96), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 7,
      anon_sym_DOT,
      sym_number,
      sym_ignore,
      sym_null,
      anon_sym_false,
      anon_sym_true,
      sym_symbol,
    ACTIONS(100), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 7,
      anon_sym_DOT,
      sym_number,
      sym_ignore,
      sym_null,
      anon_sym_false,
      anon_sym_true,
      sym_symbol,
    ACTIONS(104), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 7,
      anon_sym_DOT,
      sym_number,
      sym_ignore,
      sym_null,
      anon_sym_false,
      anon_sym_true,
      sym_symbol,
    ACTIONS(108), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 7,
      anon_sym_DOT,
      sym_number,
      sym_ignore,
      sym_null,
      anon_sym_false,
      anon_sym_true,
      sym_symbol,
    ACTIONS(112), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 7,
      anon_sym_DOT,
      sym_number,
      sym_ignore,
      sym_null,
      anon_sym_false,
      anon_sym_true,
      sym_symbol,
    ACTIONS(116), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 7,
      anon_sym_DOT,
      sym_number,
      sym_ignore,
      sym_null,
      anon_sym_false,
      anon_sym_true,
      sym_symbol,
    ACTIONS(120), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 7,
      anon_sym_DOT,
      sym_number,
      sym_ignore,
      sym_null,
      anon_sym_false,
      anon_sym_true,
      sym_symbol,
    ACTIONS(124), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 7,
      anon_sym_DOT,
      sym_number,
      sym_ignore,
      sym_null,
      anon_sym_false,
      anon_sym_true,
      sym_symbol,
    ACTIONS(78), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 7,
      anon_sym_DOT,
      sym_number,
      sym_ignore,
      sym_null,
      anon_sym_false,
      anon_sym_true,
      sym_symbol,
    ACTIONS(128), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 7,
      anon_sym_DOT,
      sym_number,
      sym_ignore,
      sym_null,
      anon_sym_false,
      anon_sym_true,
      sym_symbol,
    ACTIONS(132), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 7,
      anon_sym_DOT,
      sym_number,
      sym_ignore,
      sym_null,
      anon_sym_false,
      anon_sym_true,
      sym_symbol,
    ACTIONS(136), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 7,
      anon_sym_DOT,
      sym_number,
      sym_ignore,
      sym_null,
      anon_sym_false,
      anon_sym_true,
      sym_symbol,
    ACTIONS(140), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 7,
      anon_sym_DOT,
      sym_number,
      sym_ignore,
      sym_null,
      anon_sym_false,
      anon_sym_true,
      sym_symbol,
    ACTIONS(84), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_path,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [476] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_DQUOTE,
    ACTIONS(146), 1,
      sym_string_fragment,
    ACTIONS(148), 2,
      aux_sym__escape_sequence_token1,
      sym_escape_sequence,
    STATE(33), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [494] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      sym_string_fragment,
    ACTIONS(154), 2,
      aux_sym__escape_sequence_token1,
      sym_escape_sequence,
    STATE(31), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [512] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      sym_string_fragment,
    ACTIONS(161), 2,
      aux_sym__escape_sequence_token1,
      sym_escape_sequence,
    STATE(33), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [530] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      sym_symbol,
    ACTIONS(166), 1,
      sym_path,
    STATE(30), 3,
      sym__module,
      sym_module_path,
      sym_module_call,
  [548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_symbol,
  [555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_symbol,
  [562] = 2,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 1,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 29,
  [SMALL_STATE(15)] = 60,
  [SMALL_STATE(16)] = 86,
  [SMALL_STATE(17)] = 112,
  [SMALL_STATE(18)] = 138,
  [SMALL_STATE(19)] = 164,
  [SMALL_STATE(20)] = 190,
  [SMALL_STATE(21)] = 216,
  [SMALL_STATE(22)] = 242,
  [SMALL_STATE(23)] = 268,
  [SMALL_STATE(24)] = 294,
  [SMALL_STATE(25)] = 320,
  [SMALL_STATE(26)] = 346,
  [SMALL_STATE(27)] = 372,
  [SMALL_STATE(28)] = 398,
  [SMALL_STATE(29)] = 424,
  [SMALL_STATE(30)] = 450,
  [SMALL_STATE(31)] = 476,
  [SMALL_STATE(32)] = 494,
  [SMALL_STATE(33)] = 512,
  [SMALL_STATE(34)] = 530,
  [SMALL_STATE(35)] = 548,
  [SMALL_STATE(36)] = 555,
  [SMALL_STATE(37)] = 562,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(12),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(34),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(35),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(25),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(23),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(32),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_path, 2, .production_id = 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_path, 2, .production_id = 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, .production_id = 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 3, .production_id = 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_call, 3, .production_id = 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_call, 3, .production_id = 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cons, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cons, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cons, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cons, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbind, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbind, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(33),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(33),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [172] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_bass(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_symbol,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
