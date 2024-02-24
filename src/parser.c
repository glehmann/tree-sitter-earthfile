#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 15

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_VERSION = 2,
  anon_sym_ARG = 3,
  anon_sym_EQ = 4,
  sym_version_major_minor = 5,
  sym_feature_flag = 6,
  anon_sym_DQUOTE = 7,
  aux_sym_double_quoted_string_token1 = 8,
  anon_sym_BSLASH = 9,
  anon_sym_SQUOTE = 10,
  aux_sym_single_quoted_string_token1 = 11,
  aux_sym_unquoted_string_token1 = 12,
  anon_sym_BSLASH2 = 13,
  sym_double_quoted_escape_sequence = 14,
  sym_single_quoted_escape_sequence = 15,
  anon_sym_DOLLAR = 16,
  anon_sym_LBRACE = 17,
  aux_sym__expansion_body_token1 = 18,
  anon_sym_RBRACE = 19,
  sym_expansion_variable = 20,
  sym_variable = 21,
  sym_comment = 22,
  sym_required = 23,
  sym_global = 24,
  sym_expr = 25,
  sym_source_file = 26,
  sym__command = 27,
  sym_version_command = 28,
  sym_arg_command = 29,
  sym_double_quoted_string = 30,
  sym_single_quoted_string = 31,
  sym_unquoted_string = 32,
  sym__immediate_expansion = 33,
  sym__imm_expansion = 34,
  sym__expansion_body = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_version_command_repeat1 = 37,
  aux_sym_double_quoted_string_repeat1 = 38,
  aux_sym_single_quoted_string_repeat1 = 39,
  aux_sym_unquoted_string_repeat1 = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_VERSION] = "VERSION",
  [anon_sym_ARG] = "ARG",
  [anon_sym_EQ] = "=",
  [sym_version_major_minor] = "version_major_minor",
  [sym_feature_flag] = "feature_flag",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quoted_string_token1] = "single_quoted_string_token1",
  [aux_sym_unquoted_string_token1] = "unquoted_string_token1",
  [anon_sym_BSLASH2] = "\\ ",
  [sym_double_quoted_escape_sequence] = "escape_sequence",
  [sym_single_quoted_escape_sequence] = "escape_sequence",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LBRACE] = "{",
  [aux_sym__expansion_body_token1] = "expansion_variable",
  [anon_sym_RBRACE] = "}",
  [sym_expansion_variable] = "expansion_variable",
  [sym_variable] = "variable",
  [sym_comment] = "comment",
  [sym_required] = "required",
  [sym_global] = "global",
  [sym_expr] = "expr",
  [sym_source_file] = "source_file",
  [sym__command] = "_command",
  [sym_version_command] = "version_command",
  [sym_arg_command] = "arg_command",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_unquoted_string] = "unquoted_string",
  [sym__immediate_expansion] = "_immediate_expansion",
  [sym__imm_expansion] = "expansion",
  [sym__expansion_body] = "_expansion_body",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_version_command_repeat1] = "version_command_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_single_quoted_string_repeat1] = "single_quoted_string_repeat1",
  [aux_sym_unquoted_string_repeat1] = "unquoted_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_VERSION] = anon_sym_VERSION,
  [anon_sym_ARG] = anon_sym_ARG,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_version_major_minor] = sym_version_major_minor,
  [sym_feature_flag] = sym_feature_flag,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quoted_string_token1] = aux_sym_single_quoted_string_token1,
  [aux_sym_unquoted_string_token1] = aux_sym_unquoted_string_token1,
  [anon_sym_BSLASH2] = anon_sym_BSLASH2,
  [sym_double_quoted_escape_sequence] = sym_double_quoted_escape_sequence,
  [sym_single_quoted_escape_sequence] = sym_double_quoted_escape_sequence,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym__expansion_body_token1] = sym_expansion_variable,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_expansion_variable] = sym_expansion_variable,
  [sym_variable] = sym_variable,
  [sym_comment] = sym_comment,
  [sym_required] = sym_required,
  [sym_global] = sym_global,
  [sym_expr] = sym_expr,
  [sym_source_file] = sym_source_file,
  [sym__command] = sym__command,
  [sym_version_command] = sym_version_command,
  [sym_arg_command] = sym_arg_command,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym__immediate_expansion] = sym__immediate_expansion,
  [sym__imm_expansion] = sym__imm_expansion,
  [sym__expansion_body] = sym__expansion_body,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_version_command_repeat1] = aux_sym_version_command_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_single_quoted_string_repeat1] = aux_sym_single_quoted_string_repeat1,
  [aux_sym_unquoted_string_repeat1] = aux_sym_unquoted_string_repeat1,
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
  [anon_sym_VERSION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ARG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_version_major_minor] = {
    .visible = true,
    .named = true,
  },
  [sym_feature_flag] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH2] = {
    .visible = true,
    .named = false,
  },
  [sym_double_quoted_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__expansion_body_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_expansion_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_required] = {
    .visible = true,
    .named = true,
  },
  [sym_global] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__command] = {
    .visible = false,
    .named = true,
  },
  [sym_version_command] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_command] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym__immediate_expansion] = {
    .visible = false,
    .named = true,
  },
  [sym__imm_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym__expansion_body] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_version_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_default_value = 1,
  field_default_value_expr = 2,
  field_feature = 3,
  field_global = 4,
  field_name = 5,
  field_required = 6,
  field_version = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_default_value] = "default_value",
  [field_default_value_expr] = "default_value_expr",
  [field_feature] = "feature",
  [field_global] = "global",
  [field_name] = "name",
  [field_required] = "required",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 3},
  [9] = {.index = 15, .length = 3},
  [10] = {.index = 18, .length = 3},
  [11] = {.index = 21, .length = 3},
  [12] = {.index = 24, .length = 3},
  [13] = {.index = 27, .length = 4},
  [14] = {.index = 31, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_version, 1},
  [1] =
    {field_name, 1},
  [2] =
    {field_feature, 1},
    {field_version, 2},
  [4] =
    {field_name, 2},
    {field_required, 1},
  [6] =
    {field_global, 1},
    {field_name, 2},
  [8] =
    {field_default_value_expr, 3},
    {field_name, 1},
  [10] =
    {field_default_value, 3},
    {field_name, 1},
  [12] =
    {field_global, 2},
    {field_name, 3},
    {field_required, 1},
  [15] =
    {field_default_value_expr, 4},
    {field_name, 2},
    {field_required, 1},
  [18] =
    {field_default_value, 4},
    {field_name, 2},
    {field_required, 1},
  [21] =
    {field_default_value_expr, 4},
    {field_global, 1},
    {field_name, 2},
  [24] =
    {field_default_value, 4},
    {field_global, 1},
    {field_name, 2},
  [27] =
    {field_default_value_expr, 5},
    {field_global, 2},
    {field_name, 3},
    {field_required, 1},
  [31] =
    {field_default_value, 5},
    {field_global, 2},
    {field_name, 3},
    {field_required, 1},
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
  [19] = 14,
  [20] = 15,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 22,
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
  [52] = 45,
  [53] = 36,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(54);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == 'A') ADVANCE(32);
      if (lookahead == 'V') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '}') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(14)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(70);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(16)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(64);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(68);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '\\') SKIP(9)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\\') SKIP(9)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(8)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(64);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(32);
      if (lookahead == 'V') ADVANCE(27);
      if (lookahead == '\\') SKIP(1)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead == '\\') SKIP(3)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(64);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(64);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == ')') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '\\') SKIP(13)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(49);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == '{') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '\\') SKIP(12)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'G') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'I') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 'N') ADVANCE(56);
      END_STATE();
    case 31:
      if (lookahead == 'O') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 'R') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == 'R') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'S') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'q') ADVANCE(47);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 51:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(75);
      END_STATE();
    case 52:
      if (eof) ADVANCE(54);
      if (lookahead == '\n') SKIP(53)
      END_STATE();
    case 53:
      if (eof) ADVANCE(54);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(32);
      if (lookahead == 'V') ADVANCE(27);
      if (lookahead == '\\') SKIP(52)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_version_major_minor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_feature_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_double_quoted_escape_sequence);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_single_quoted_escape_sequence);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(') ADVANCE(50);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_expansion_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 24},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 24},
  [25] = {.lex_state = 24},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 21},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 51},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 21},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 51},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_VERSION] = ACTIONS(1),
    [anon_sym_ARG] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_version_major_minor] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH2] = ACTIONS(1),
    [sym_double_quoted_escape_sequence] = ACTIONS(1),
    [sym_single_quoted_escape_sequence] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_required] = ACTIONS(1),
    [sym_global] = ACTIONS(1),
    [sym_expr] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(44),
    [sym__command] = STATE(49),
    [sym_version_command] = STATE(49),
    [sym_arg_command] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_VERSION] = ACTIONS(5),
    [anon_sym_ARG] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(19), 1,
      sym_expr,
    ACTIONS(15), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(12), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(47), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [27] = 7,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      sym_expr,
    ACTIONS(15), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(12), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(32), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [54] = 7,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_expr,
    ACTIONS(15), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(12), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(38), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [81] = 7,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      sym_expr,
    ACTIONS(15), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(12), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(40), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [108] = 5,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(32), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(6), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [127] = 6,
    ACTIONS(5), 1,
      anon_sym_VERSION,
    ACTIONS(7), 1,
      anon_sym_ARG,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    STATE(49), 3,
      sym__command,
      sym_version_command,
      sym_arg_command,
  [148] = 5,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(46), 1,
      anon_sym_DOLLAR,
    ACTIONS(44), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(6), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [167] = 6,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      anon_sym_VERSION,
    ACTIONS(53), 1,
      anon_sym_ARG,
    ACTIONS(56), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    STATE(49), 3,
      sym__command,
      sym_version_command,
      sym_arg_command,
  [188] = 5,
    ACTIONS(46), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(63), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(8), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [207] = 4,
    ACTIONS(65), 1,
      anon_sym_LF,
    ACTIONS(70), 1,
      anon_sym_DOLLAR,
    ACTIONS(67), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(11), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [223] = 4,
    ACTIONS(73), 1,
      anon_sym_LF,
    ACTIONS(77), 1,
      anon_sym_DOLLAR,
    ACTIONS(75), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(11), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [239] = 4,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      aux_sym_single_quoted_string_token1,
    STATE(17), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(79), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [253] = 2,
    ACTIONS(87), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_DOLLAR,
    ACTIONS(85), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
  [263] = 2,
    ACTIONS(91), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_DOLLAR,
    ACTIONS(89), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
  [273] = 4,
    ACTIONS(96), 1,
      anon_sym_SQUOTE,
    ACTIONS(98), 1,
      aux_sym_single_quoted_string_token1,
    STATE(16), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(93), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [287] = 4,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      aux_sym_single_quoted_string_token1,
    STATE(16), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(101), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [301] = 1,
    ACTIONS(48), 4,
      ts_builtin_sym_end,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_comment,
  [308] = 1,
    ACTIONS(87), 4,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR,
  [315] = 1,
    ACTIONS(91), 4,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR,
  [322] = 3,
    ACTIONS(107), 1,
      sym_version_major_minor,
    ACTIONS(109), 1,
      sym_feature_flag,
    STATE(21), 1,
      aux_sym_version_command_repeat1,
  [332] = 3,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      sym_expansion_variable,
    STATE(15), 1,
      sym__expansion_body,
  [342] = 3,
    ACTIONS(116), 1,
      sym_variable,
    ACTIONS(118), 1,
      sym_required,
    ACTIONS(120), 1,
      sym_global,
  [352] = 3,
    ACTIONS(122), 1,
      anon_sym_LBRACE,
    ACTIONS(124), 1,
      sym_expansion_variable,
    STATE(20), 1,
      sym__expansion_body,
  [362] = 3,
    ACTIONS(126), 1,
      sym_version_major_minor,
    ACTIONS(128), 1,
      sym_feature_flag,
    STATE(21), 1,
      aux_sym_version_command_repeat1,
  [372] = 3,
    ACTIONS(130), 1,
      sym_version_major_minor,
    ACTIONS(132), 1,
      sym_feature_flag,
    STATE(25), 1,
      aux_sym_version_command_repeat1,
  [382] = 2,
    ACTIONS(134), 1,
      anon_sym_LF,
    ACTIONS(136), 1,
      anon_sym_EQ,
  [389] = 2,
    ACTIONS(138), 1,
      sym_variable,
    ACTIONS(140), 1,
      sym_global,
  [396] = 2,
    ACTIONS(142), 1,
      anon_sym_LF,
    ACTIONS(144), 1,
      anon_sym_EQ,
  [403] = 2,
    ACTIONS(146), 1,
      anon_sym_LF,
    ACTIONS(148), 1,
      anon_sym_EQ,
  [410] = 2,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(152), 1,
      anon_sym_EQ,
  [417] = 1,
    ACTIONS(154), 1,
      anon_sym_LF,
  [421] = 1,
    ACTIONS(156), 1,
      anon_sym_LF,
  [425] = 1,
    ACTIONS(158), 1,
      sym_variable,
  [429] = 1,
    ACTIONS(160), 1,
      anon_sym_LF,
  [433] = 1,
    ACTIONS(162), 1,
      aux_sym__expansion_body_token1,
  [437] = 1,
    ACTIONS(164), 1,
      anon_sym_LF,
  [441] = 1,
    ACTIONS(166), 1,
      anon_sym_LF,
  [445] = 1,
    ACTIONS(168), 1,
      anon_sym_LF,
  [449] = 1,
    ACTIONS(170), 1,
      anon_sym_LF,
  [453] = 1,
    ACTIONS(172), 1,
      anon_sym_LF,
  [457] = 1,
    ACTIONS(174), 1,
      anon_sym_LF,
  [461] = 1,
    ACTIONS(176), 1,
      anon_sym_LF,
  [465] = 1,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
  [469] = 1,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
  [473] = 1,
    ACTIONS(182), 1,
      anon_sym_LF,
  [477] = 1,
    ACTIONS(184), 1,
      anon_sym_LF,
  [481] = 1,
    ACTIONS(186), 1,
      anon_sym_LF,
  [485] = 1,
    ACTIONS(188), 1,
      anon_sym_LF,
  [489] = 1,
    ACTIONS(190), 1,
      anon_sym_LF,
  [493] = 1,
    ACTIONS(192), 1,
      sym_variable,
  [497] = 1,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
  [501] = 1,
    ACTIONS(196), 1,
      aux_sym__expansion_body_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 148,
  [SMALL_STATE(9)] = 167,
  [SMALL_STATE(10)] = 188,
  [SMALL_STATE(11)] = 207,
  [SMALL_STATE(12)] = 223,
  [SMALL_STATE(13)] = 239,
  [SMALL_STATE(14)] = 253,
  [SMALL_STATE(15)] = 263,
  [SMALL_STATE(16)] = 273,
  [SMALL_STATE(17)] = 287,
  [SMALL_STATE(18)] = 301,
  [SMALL_STATE(19)] = 308,
  [SMALL_STATE(20)] = 315,
  [SMALL_STATE(21)] = 322,
  [SMALL_STATE(22)] = 332,
  [SMALL_STATE(23)] = 342,
  [SMALL_STATE(24)] = 352,
  [SMALL_STATE(25)] = 362,
  [SMALL_STATE(26)] = 372,
  [SMALL_STATE(27)] = 382,
  [SMALL_STATE(28)] = 389,
  [SMALL_STATE(29)] = 396,
  [SMALL_STATE(30)] = 403,
  [SMALL_STATE(31)] = 410,
  [SMALL_STATE(32)] = 417,
  [SMALL_STATE(33)] = 421,
  [SMALL_STATE(34)] = 425,
  [SMALL_STATE(35)] = 429,
  [SMALL_STATE(36)] = 433,
  [SMALL_STATE(37)] = 437,
  [SMALL_STATE(38)] = 441,
  [SMALL_STATE(39)] = 445,
  [SMALL_STATE(40)] = 449,
  [SMALL_STATE(41)] = 453,
  [SMALL_STATE(42)] = 457,
  [SMALL_STATE(43)] = 461,
  [SMALL_STATE(44)] = 465,
  [SMALL_STATE(45)] = 469,
  [SMALL_STATE(46)] = 473,
  [SMALL_STATE(47)] = 477,
  [SMALL_STATE(48)] = 481,
  [SMALL_STATE(49)] = 485,
  [SMALL_STATE(50)] = 489,
  [SMALL_STATE(51)] = 493,
  [SMALL_STATE(52)] = 497,
  [SMALL_STATE(53)] = 501,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(6),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(6),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(22),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(11),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(24),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_expansion, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_expansion, 2),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(16),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(16),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2), SHIFT_REPEAT(21),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 2, .production_id = 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 8),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 9),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 10),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 11),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 2, .production_id = 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [178] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 13),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 14),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 6),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 3, .production_id = 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_earthfile(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
