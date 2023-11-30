#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_COLON = 3,
  anon_sym_POUND = 4,
  aux_sym_grouping_token1 = 5,
  anon_sym_LT = 6,
  anon_sym_GT = 7,
  anon_sym_CARET = 8,
  anon_sym_EQ = 9,
  anon_sym_DOT = 10,
  sym_representation = 11,
  sym_padding_character = 12,
  aux_sym_value_token1 = 13,
  sym_escaped_string_content = 14,
  sym_string_content = 15,
  sym_interpolation_content = 16,
  sym_pyf_string = 17,
  sym_interpolation = 18,
  sym_format_specifier = 19,
  sym_grouping = 20,
  sym_padding = 21,
  sym_rounding = 22,
  sym_value = 23,
  aux_sym_pyf_string_repeat1 = 24,
  aux_sym_format_specifier_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_POUND] = "#",
  [aux_sym_grouping_token1] = "grouping_token1",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [sym_representation] = "representation",
  [sym_padding_character] = "padding_character",
  [aux_sym_value_token1] = "value_token1",
  [sym_escaped_string_content] = "escaped_string_content",
  [sym_string_content] = "string_content",
  [sym_interpolation_content] = "interpolation_content",
  [sym_pyf_string] = "pyf_string",
  [sym_interpolation] = "interpolation",
  [sym_format_specifier] = "format_specifier",
  [sym_grouping] = "grouping",
  [sym_padding] = "padding",
  [sym_rounding] = "rounding",
  [sym_value] = "value",
  [aux_sym_pyf_string_repeat1] = "pyf_string_repeat1",
  [aux_sym_format_specifier_repeat1] = "format_specifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_grouping_token1] = aux_sym_grouping_token1,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_representation] = sym_representation,
  [sym_padding_character] = sym_padding_character,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [sym_escaped_string_content] = sym_escaped_string_content,
  [sym_string_content] = sym_string_content,
  [sym_interpolation_content] = sym_interpolation_content,
  [sym_pyf_string] = sym_pyf_string,
  [sym_interpolation] = sym_interpolation,
  [sym_format_specifier] = sym_format_specifier,
  [sym_grouping] = sym_grouping,
  [sym_padding] = sym_padding,
  [sym_rounding] = sym_rounding,
  [sym_value] = sym_value,
  [aux_sym_pyf_string_repeat1] = aux_sym_pyf_string_repeat1,
  [aux_sym_format_specifier_repeat1] = aux_sym_format_specifier_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_grouping_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_representation] = {
    .visible = true,
    .named = true,
  },
  [sym_padding_character] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escaped_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation_content] = {
    .visible = true,
    .named = true,
  },
  [sym_pyf_string] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_format_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_grouping] = {
    .visible = true,
    .named = true,
  },
  [sym_padding] = {
    .visible = true,
    .named = true,
  },
  [sym_rounding] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pyf_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_format_specifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_arbitrary = 1,
  field_number = 2,
  field_prefix_character = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arbitrary] = "arbitrary",
  [field_number] = "number",
  [field_prefix_character] = "prefix_character",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_number, 0},
  [1] =
    {field_arbitrary, 0},
  [2] =
    {field_prefix_character, 0},
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
  [22] = 7,
  [23] = 23,
  [24] = 24,
  [25] = 11,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 28,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 30,
  [37] = 31,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '^') ADVANCE(14);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (lookahead == '%' ||
          ('E' <= lookahead && lookahead <= 'G') ||
          lookahead == 'X' ||
          ('b' <= lookahead && lookahead <= 'g') ||
          lookahead == 'n' ||
          lookahead == 'o' ||
          lookahead == 's' ||
          lookahead == 'x') ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead == '^') ADVANCE(14);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '%' ||
          ('E' <= lookahead && lookahead <= 'G') ||
          lookahead == 'X' ||
          ('b' <= lookahead && lookahead <= 'g') ||
          lookahead == 'n' ||
          lookahead == 'o' ||
          lookahead == 's' ||
          lookahead == 'x') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead == '^') ADVANCE(14);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead == '^') ADVANCE(14);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '%' ||
          ('E' <= lookahead && lookahead <= 'G') ||
          lookahead == 'X' ||
          ('b' <= lookahead && lookahead <= 'g') ||
          lookahead == 'n' ||
          lookahead == 'o' ||
          lookahead == 's' ||
          lookahead == 'x') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_grouping_token1);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_representation);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_padding_character);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_padding_character);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '%' ||
          ('E' <= lookahead && lookahead <= 'G') ||
          lookahead == 'X' ||
          ('b' <= lookahead && lookahead <= 'g') ||
          lookahead == 'n' ||
          lookahead == 'o' ||
          lookahead == 's' ||
          lookahead == 'x') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != ':' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '^') ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_padding_character);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != ':' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '^') ADVANCE(18);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_padding_character);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '%' ||
          ('E' <= lookahead && lookahead <= 'G') ||
          lookahead == 'X' ||
          ('b' <= lookahead && lookahead <= 'g') ||
          lookahead == 'n' ||
          lookahead == 'o' ||
          lookahead == 's' ||
          lookahead == 'x') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != ':' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '^') ADVANCE(18);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_escaped_string_content);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0, .external_lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0, .external_lex_state = 1},
};

enum {
  ts_external_token_interpolation_content = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_interpolation_content] = sym_interpolation_content,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_interpolation_content] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_grouping_token1] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_representation] = ACTIONS(1),
    [aux_sym_value_token1] = ACTIONS(1),
    [sym_escaped_string_content] = ACTIONS(1),
    [sym_interpolation_content] = ACTIONS(1),
  },
  [1] = {
    [sym_pyf_string] = STATE(35),
    [sym_interpolation] = STATE(20),
    [aux_sym_pyf_string_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(5),
    [sym_escaped_string_content] = ACTIONS(7),
    [sym_string_content] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym_grouping_token1,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(19), 1,
      sym_representation,
    ACTIONS(21), 1,
      sym_padding_character,
    ACTIONS(15), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_CARET,
      anon_sym_EQ,
    STATE(4), 4,
      sym_grouping,
      sym_padding,
      sym_rounding,
      aux_sym_format_specifier_repeat1,
  [28] = 6,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      aux_sym_grouping_token1,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(34), 1,
      sym_padding_character,
    ACTIONS(28), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_CARET,
      anon_sym_EQ,
    STATE(3), 4,
      sym_grouping,
      sym_padding,
      sym_rounding,
      aux_sym_format_specifier_repeat1,
  [53] = 6,
    ACTIONS(13), 1,
      aux_sym_grouping_token1,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      sym_padding_character,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_CARET,
      anon_sym_EQ,
    STATE(3), 4,
      sym_grouping,
      sym_padding,
      sym_rounding,
      aux_sym_format_specifier_repeat1,
  [78] = 2,
    ACTIONS(41), 1,
      sym_representation,
    ACTIONS(39), 8,
      anon_sym_RBRACE,
      aux_sym_grouping_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_DOT,
      sym_padding_character,
  [92] = 2,
    ACTIONS(45), 1,
      sym_representation,
    ACTIONS(43), 8,
      anon_sym_RBRACE,
      aux_sym_grouping_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_DOT,
      sym_padding_character,
  [106] = 1,
    ACTIONS(47), 9,
      anon_sym_RBRACE,
      aux_sym_grouping_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_DOT,
      sym_representation,
      sym_padding_character,
  [118] = 2,
    ACTIONS(51), 1,
      sym_representation,
    ACTIONS(49), 8,
      anon_sym_RBRACE,
      aux_sym_grouping_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_DOT,
      sym_padding_character,
  [132] = 2,
    ACTIONS(55), 1,
      sym_representation,
    ACTIONS(53), 8,
      anon_sym_RBRACE,
      aux_sym_grouping_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_DOT,
      sym_padding_character,
  [146] = 1,
    ACTIONS(57), 9,
      anon_sym_RBRACE,
      aux_sym_grouping_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_DOT,
      sym_representation,
      sym_padding_character,
  [158] = 1,
    ACTIONS(59), 9,
      anon_sym_RBRACE,
      aux_sym_grouping_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_DOT,
      sym_representation,
      sym_padding_character,
  [170] = 2,
    ACTIONS(63), 1,
      sym_representation,
    ACTIONS(61), 8,
      anon_sym_RBRACE,
      aux_sym_grouping_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_DOT,
      sym_padding_character,
  [184] = 1,
    ACTIONS(65), 9,
      anon_sym_RBRACE,
      aux_sym_grouping_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_DOT,
      sym_representation,
      sym_padding_character,
  [196] = 1,
    ACTIONS(67), 8,
      anon_sym_RBRACE,
      aux_sym_grouping_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_DOT,
      sym_padding_character,
  [207] = 1,
    ACTIONS(69), 8,
      anon_sym_RBRACE,
      aux_sym_grouping_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_DOT,
      sym_padding_character,
  [218] = 1,
    ACTIONS(71), 8,
      anon_sym_RBRACE,
      aux_sym_grouping_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_DOT,
      sym_padding_character,
  [229] = 1,
    ACTIONS(43), 8,
      anon_sym_RBRACE,
      aux_sym_grouping_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_DOT,
      sym_padding_character,
  [240] = 1,
    ACTIONS(73), 8,
      anon_sym_RBRACE,
      aux_sym_grouping_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_DOT,
      sym_padding_character,
  [251] = 5,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      sym_escaped_string_content,
    ACTIONS(83), 1,
      sym_string_content,
    STATE(19), 2,
      sym_interpolation,
      aux_sym_pyf_string_repeat1,
  [268] = 5,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      sym_escaped_string_content,
    ACTIONS(90), 1,
      sym_string_content,
    STATE(19), 2,
      sym_interpolation,
      aux_sym_pyf_string_repeat1,
  [285] = 2,
    ACTIONS(94), 1,
      anon_sym_DOT,
    ACTIONS(92), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_CARET,
      anon_sym_EQ,
  [295] = 2,
    ACTIONS(47), 2,
      anon_sym_LBRACE,
      sym_escaped_string_content,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      sym_string_content,
  [304] = 4,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    ACTIONS(100), 1,
      aux_sym_value_token1,
    STATE(8), 1,
      sym_value,
    STATE(10), 1,
      sym_interpolation,
  [317] = 4,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    ACTIONS(100), 1,
      aux_sym_value_token1,
    STATE(9), 1,
      sym_value,
    STATE(10), 1,
      sym_interpolation,
  [330] = 2,
    ACTIONS(59), 2,
      anon_sym_LBRACE,
      sym_escaped_string_content,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      sym_string_content,
  [339] = 4,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    ACTIONS(100), 1,
      aux_sym_value_token1,
    STATE(6), 1,
      sym_value,
    STATE(10), 1,
      sym_interpolation,
  [352] = 4,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    ACTIONS(100), 1,
      aux_sym_value_token1,
    STATE(5), 1,
      sym_value,
    STATE(10), 1,
      sym_interpolation,
  [365] = 3,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    ACTIONS(106), 1,
      anon_sym_COLON,
    STATE(36), 1,
      sym_format_specifier,
  [375] = 3,
    ACTIONS(106), 1,
      anon_sym_COLON,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym_format_specifier,
  [385] = 1,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
  [389] = 1,
    ACTIONS(112), 1,
      sym_interpolation_content,
  [393] = 1,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
  [397] = 1,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
  [401] = 1,
    ACTIONS(118), 1,
      sym_representation,
  [405] = 1,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
  [409] = 1,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
  [413] = 1,
    ACTIONS(124), 1,
      sym_interpolation_content,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 53,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 106,
  [SMALL_STATE(8)] = 118,
  [SMALL_STATE(9)] = 132,
  [SMALL_STATE(10)] = 146,
  [SMALL_STATE(11)] = 158,
  [SMALL_STATE(12)] = 170,
  [SMALL_STATE(13)] = 184,
  [SMALL_STATE(14)] = 196,
  [SMALL_STATE(15)] = 207,
  [SMALL_STATE(16)] = 218,
  [SMALL_STATE(17)] = 229,
  [SMALL_STATE(18)] = 240,
  [SMALL_STATE(19)] = 251,
  [SMALL_STATE(20)] = 268,
  [SMALL_STATE(21)] = 285,
  [SMALL_STATE(22)] = 295,
  [SMALL_STATE(23)] = 304,
  [SMALL_STATE(24)] = 317,
  [SMALL_STATE(25)] = 330,
  [SMALL_STATE(26)] = 339,
  [SMALL_STATE(27)] = 352,
  [SMALL_STATE(28)] = 365,
  [SMALL_STATE(29)] = 375,
  [SMALL_STATE(30)] = 385,
  [SMALL_STATE(31)] = 389,
  [SMALL_STATE(32)] = 393,
  [SMALL_STATE(33)] = 397,
  [SMALL_STATE(34)] = 401,
  [SMALL_STATE(35)] = 405,
  [SMALL_STATE(36)] = 409,
  [SMALL_STATE(37)] = 413,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pyf_string, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_format_specifier_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_format_specifier_repeat1, 2), SHIFT_REPEAT(12),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_format_specifier_repeat1, 2), SHIFT_REPEAT(24),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_format_specifier_repeat1, 2), SHIFT_REPEAT(23),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_format_specifier_repeat1, 2), SHIFT_REPEAT(21),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_specifier, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rounding, 3, .production_id = 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_padding, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 4),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rounding, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_padding, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, .production_id = 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grouping, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rounding, 4, .production_id = 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_padding, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grouping, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rounding, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pyf_string_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pyf_string_repeat1, 2), SHIFT_REPEAT(31),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pyf_string_repeat1, 2), SHIFT_REPEAT(19),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pyf_string_repeat1, 2), SHIFT_REPEAT(19),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pyf_string, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_specifier, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_specifier, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [120] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_pyf_external_scanner_create(void);
void tree_sitter_pyf_external_scanner_destroy(void *);
bool tree_sitter_pyf_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_pyf_external_scanner_serialize(void *, char *);
void tree_sitter_pyf_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pyf(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_pyf_external_scanner_create,
      tree_sitter_pyf_external_scanner_destroy,
      tree_sitter_pyf_external_scanner_scan,
      tree_sitter_pyf_external_scanner_serialize,
      tree_sitter_pyf_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
