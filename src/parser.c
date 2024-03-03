#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 163
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
  anon_sym_VERSION = 1,
  anon_sym_LF = 2,
  anon_sym_ARG = 3,
  anon_sym_EQ = 4,
  anon_sym_COLON = 5,
  sym_version_major_minor = 6,
  sym_feature_flag = 7,
  anon_sym_DQUOTE = 8,
  aux_sym_double_quoted_string_token1 = 9,
  anon_sym_BSLASH = 10,
  anon_sym_SQUOTE = 11,
  aux_sym_single_quoted_string_token1 = 12,
  aux_sym_unquoted_string_token1 = 13,
  anon_sym_BSLASH2 = 14,
  sym_double_quoted_escape_sequence = 15,
  sym_single_quoted_escape_sequence = 16,
  anon_sym_DOLLAR = 17,
  anon_sym_LBRACE = 18,
  aux_sym__expansion_body_token1 = 19,
  anon_sym_RBRACE = 20,
  sym_variable = 21,
  sym_identifier = 22,
  sym_comment = 23,
  sym_required = 24,
  sym_global = 25,
  sym_expr = 26,
  sym__indent = 27,
  sym__dedent = 28,
  sym_source_file = 29,
  sym_version_command = 30,
  sym_arg_command = 31,
  sym_target = 32,
  sym_double_quoted_string = 33,
  sym_single_quoted_string = 34,
  sym_unquoted_string = 35,
  sym__immediate_expansion = 36,
  sym__imm_expansion = 37,
  sym__expansion_body = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_version_command_repeat1 = 40,
  aux_sym_target_repeat1 = 41,
  aux_sym_double_quoted_string_repeat1 = 42,
  aux_sym_single_quoted_string_repeat1 = 43,
  aux_sym_unquoted_string_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_VERSION] = "VERSION",
  [anon_sym_LF] = "\n",
  [anon_sym_ARG] = "ARG",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
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
  [aux_sym__expansion_body_token1] = "variable",
  [anon_sym_RBRACE] = "}",
  [sym_variable] = "variable",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_required] = "required",
  [sym_global] = "global",
  [sym_expr] = "expr",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym_version_command] = "version_command",
  [sym_arg_command] = "arg_command",
  [sym_target] = "target",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_unquoted_string] = "unquoted_string",
  [sym__immediate_expansion] = "_immediate_expansion",
  [sym__imm_expansion] = "expansion",
  [sym__expansion_body] = "_expansion_body",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_version_command_repeat1] = "version_command_repeat1",
  [aux_sym_target_repeat1] = "target_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_single_quoted_string_repeat1] = "single_quoted_string_repeat1",
  [aux_sym_unquoted_string_repeat1] = "unquoted_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_VERSION] = anon_sym_VERSION,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_ARG] = anon_sym_ARG,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [aux_sym__expansion_body_token1] = sym_variable,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_variable] = sym_variable,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_required] = sym_required,
  [sym_global] = sym_global,
  [sym_expr] = sym_expr,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_source_file] = sym_source_file,
  [sym_version_command] = sym_version_command,
  [sym_arg_command] = sym_arg_command,
  [sym_target] = sym_target,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym__immediate_expansion] = sym__immediate_expansion,
  [sym__imm_expansion] = sym__imm_expansion,
  [sym__expansion_body] = sym__expansion_body,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_version_command_repeat1] = aux_sym_version_command_repeat1,
  [aux_sym_target_repeat1] = aux_sym_target_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_single_quoted_string_repeat1] = aux_sym_single_quoted_string_repeat1,
  [aux_sym_unquoted_string_repeat1] = aux_sym_unquoted_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_VERSION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
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
  [anon_sym_COLON] = {
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
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
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
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
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
  [sym_target] = {
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
  [aux_sym_target_repeat1] = {
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
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 3},
  [10] = {.index = 16, .length = 3},
  [11] = {.index = 19, .length = 3},
  [12] = {.index = 22, .length = 3},
  [13] = {.index = 25, .length = 3},
  [14] = {.index = 28, .length = 4},
  [15] = {.index = 32, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_version, 1},
  [1] =
    {field_name, 1},
  [2] =
    {field_name, 0},
  [3] =
    {field_feature, 1},
    {field_version, 2},
  [5] =
    {field_name, 2},
    {field_required, 1},
  [7] =
    {field_global, 1},
    {field_name, 2},
  [9] =
    {field_default_value_expr, 3},
    {field_name, 1},
  [11] =
    {field_default_value, 3},
    {field_name, 1},
  [13] =
    {field_global, 2},
    {field_name, 3},
    {field_required, 1},
  [16] =
    {field_default_value_expr, 4},
    {field_name, 2},
    {field_required, 1},
  [19] =
    {field_default_value, 4},
    {field_name, 2},
    {field_required, 1},
  [22] =
    {field_default_value_expr, 4},
    {field_global, 1},
    {field_name, 2},
  [25] =
    {field_default_value, 4},
    {field_global, 1},
    {field_name, 2},
  [28] =
    {field_default_value_expr, 5},
    {field_global, 2},
    {field_name, 3},
    {field_required, 1},
  [32] =
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
  [6] = 3,
  [7] = 2,
  [8] = 4,
  [9] = 5,
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
  [51] = 31,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 28,
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
  [67] = 64,
  [68] = 63,
  [69] = 69,
  [70] = 70,
  [71] = 65,
  [72] = 72,
  [73] = 62,
  [74] = 72,
  [75] = 75,
  [76] = 69,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 80,
  [82] = 82,
  [83] = 83,
  [84] = 77,
  [85] = 85,
  [86] = 82,
  [87] = 87,
  [88] = 88,
  [89] = 87,
  [90] = 78,
  [91] = 91,
  [92] = 88,
  [93] = 93,
  [94] = 91,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 34,
  [101] = 95,
  [102] = 23,
  [103] = 36,
  [104] = 37,
  [105] = 40,
  [106] = 96,
  [107] = 52,
  [108] = 54,
  [109] = 49,
  [110] = 47,
  [111] = 39,
  [112] = 24,
  [113] = 22,
  [114] = 21,
  [115] = 26,
  [116] = 38,
  [117] = 27,
  [118] = 41,
  [119] = 35,
  [120] = 55,
  [121] = 53,
  [122] = 50,
  [123] = 48,
  [124] = 46,
  [125] = 42,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 132,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 138,
  [142] = 126,
  [143] = 139,
  [144] = 135,
  [145] = 145,
  [146] = 129,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 149,
  [151] = 148,
  [152] = 140,
  [153] = 133,
  [154] = 154,
  [155] = 147,
  [156] = 156,
  [157] = 156,
  [158] = 130,
  [159] = 131,
  [160] = 127,
  [161] = 134,
  [162] = 162,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(47);
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == 'A') ADVANCE(79);
      if (lookahead == 'V') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '}') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(14)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(66);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(16)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == ' ') ADVANCE(65);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == '{') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '\\') SKIP(9)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(64);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(7)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == ' ') ADVANCE(65);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'A') ADVANCE(79);
      if (lookahead == 'V') ADVANCE(74);
      if (lookahead == '\\') SKIP(1)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '\\') SKIP(3)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == ')') ADVANCE(86);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == 'A') ADVANCE(27);
      if (lookahead == '\\') SKIP(12)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == 'G') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'R') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'q') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 44:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(71);
      END_STATE();
    case 45:
      if (eof) ADVANCE(47);
      if (lookahead == '\n') SKIP(46)
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'A') ADVANCE(79);
      if (lookahead == 'V') ADVANCE(74);
      if (lookahead == '\\') SKIP(45)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_version_major_minor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_feature_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_double_quoted_escape_sequence);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_single_quoted_escape_sequence);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(') ADVANCE(43);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 24, .external_lex_state = 3},
  [58] = {.lex_state = 24, .external_lex_state = 3},
  [59] = {.lex_state = 24, .external_lex_state = 3},
  [60] = {.lex_state = 24, .external_lex_state = 3},
  [61] = {.lex_state = 24, .external_lex_state = 3},
  [62] = {.lex_state = 21},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 24},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 24},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 21},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 24},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 21},
  [81] = {.lex_state = 21},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 24, .external_lex_state = 3},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 24, .external_lex_state = 3},
  [103] = {.lex_state = 24, .external_lex_state = 3},
  [104] = {.lex_state = 24, .external_lex_state = 3},
  [105] = {.lex_state = 24, .external_lex_state = 3},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 24, .external_lex_state = 3},
  [108] = {.lex_state = 24, .external_lex_state = 3},
  [109] = {.lex_state = 24, .external_lex_state = 3},
  [110] = {.lex_state = 24, .external_lex_state = 3},
  [111] = {.lex_state = 24, .external_lex_state = 3},
  [112] = {.lex_state = 24, .external_lex_state = 3},
  [113] = {.lex_state = 24, .external_lex_state = 3},
  [114] = {.lex_state = 24, .external_lex_state = 3},
  [115] = {.lex_state = 24, .external_lex_state = 3},
  [116] = {.lex_state = 24, .external_lex_state = 3},
  [117] = {.lex_state = 24, .external_lex_state = 3},
  [118] = {.lex_state = 24, .external_lex_state = 3},
  [119] = {.lex_state = 24, .external_lex_state = 3},
  [120] = {.lex_state = 24, .external_lex_state = 3},
  [121] = {.lex_state = 24, .external_lex_state = 3},
  [122] = {.lex_state = 24, .external_lex_state = 3},
  [123] = {.lex_state = 24, .external_lex_state = 3},
  [124] = {.lex_state = 24, .external_lex_state = 3},
  [125] = {.lex_state = 24, .external_lex_state = 3},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 21},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 44},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 21},
  [157] = {.lex_state = 21},
  [158] = {.lex_state = 21},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 44},
  [162] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_VERSION] = ACTIONS(1),
    [anon_sym_ARG] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_version_major_minor] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH2] = ACTIONS(1),
    [sym_double_quoted_escape_sequence] = ACTIONS(1),
    [sym_single_quoted_escape_sequence] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_required] = ACTIONS(1),
    [sym_global] = ACTIONS(1),
    [sym_expr] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(162),
    [sym_version_command] = STATE(10),
    [sym_arg_command] = STATE(10),
    [sym_target] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_VERSION] = ACTIONS(5),
    [anon_sym_ARG] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      sym_expr,
    ACTIONS(17), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(16), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(101), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [27] = 7,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_expr,
    ACTIONS(17), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(16), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(84), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [54] = 7,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      sym_expr,
    ACTIONS(17), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(16), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(89), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [81] = 7,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      sym_expr,
    ACTIONS(17), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(16), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(78), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [108] = 7,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      sym_expr,
    ACTIONS(17), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(16), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(77), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [135] = 7,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      sym_expr,
    ACTIONS(17), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(16), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(95), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [162] = 7,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_expr,
    ACTIONS(17), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(16), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(87), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [189] = 7,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_expr,
    ACTIONS(17), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(16), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(90), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [216] = 6,
    ACTIONS(5), 1,
      anon_sym_VERSION,
    ACTIONS(7), 1,
      anon_sym_ARG,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      sym_comment,
    STATE(11), 4,
      sym_version_command,
      sym_arg_command,
      sym_target,
      aux_sym_source_file_repeat1,
  [238] = 6,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_VERSION,
    ACTIONS(46), 1,
      anon_sym_ARG,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(52), 1,
      sym_comment,
    STATE(11), 4,
      sym_version_command,
      sym_arg_command,
      sym_target,
      aux_sym_source_file_repeat1,
  [260] = 5,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(63), 1,
      anon_sym_DOLLAR,
    ACTIONS(60), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(12), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [279] = 6,
    ACTIONS(66), 1,
      anon_sym_LF,
    ACTIONS(68), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(71), 1,
      anon_sym_BSLASH2,
    ACTIONS(74), 1,
      anon_sym_DOLLAR,
    ACTIONS(77), 1,
      sym_comment,
    STATE(13), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [300] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(85), 1,
      anon_sym_DOLLAR,
    ACTIONS(83), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(12), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [319] = 5,
    ACTIONS(85), 1,
      anon_sym_DOLLAR,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(91), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(14), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [338] = 6,
    ACTIONS(93), 1,
      anon_sym_LF,
    ACTIONS(95), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(97), 1,
      anon_sym_BSLASH2,
    ACTIONS(99), 1,
      anon_sym_DOLLAR,
    ACTIONS(101), 1,
      sym_comment,
    STATE(13), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [359] = 3,
    ACTIONS(107), 1,
      sym__indent,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(105), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [372] = 3,
    ACTIONS(113), 1,
      sym__indent,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(111), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [385] = 2,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(117), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [395] = 4,
    ACTIONS(121), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      aux_sym_single_quoted_string_token1,
    STATE(25), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(119), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [409] = 2,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(127), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [419] = 2,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(131), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [429] = 2,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(135), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [439] = 2,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(139), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [449] = 4,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      aux_sym_single_quoted_string_token1,
    STATE(25), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(141), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [463] = 2,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(151), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [473] = 2,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(155), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [483] = 2,
    ACTIONS(159), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_DOLLAR,
    ACTIONS(157), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
  [493] = 2,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(163), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [503] = 2,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(167), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [513] = 2,
    ACTIONS(171), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_DOLLAR,
    ACTIONS(169), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
  [523] = 4,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      aux_sym_single_quoted_string_token1,
    STATE(20), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(173), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [537] = 2,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(181), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [547] = 2,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [557] = 2,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [567] = 2,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(193), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [577] = 2,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(197), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [587] = 2,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(201), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [597] = 2,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(205), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [607] = 2,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(209), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [617] = 2,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(213), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [627] = 2,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(217), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [637] = 2,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(221), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [647] = 2,
    ACTIONS(223), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(225), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [657] = 2,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(229), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [667] = 2,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(233), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [677] = 2,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(237), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [687] = 2,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(241), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [697] = 2,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(245), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [707] = 2,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(249), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [717] = 2,
    ACTIONS(169), 2,
      aux_sym_unquoted_string_token1,
      sym_comment,
    ACTIONS(171), 3,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR,
  [727] = 2,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(253), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [737] = 2,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(257), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [747] = 2,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(261), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [757] = 2,
    ACTIONS(263), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(265), 3,
      anon_sym_VERSION,
      anon_sym_ARG,
      sym_identifier,
  [767] = 2,
    ACTIONS(157), 2,
      aux_sym_unquoted_string_token1,
      sym_comment,
    ACTIONS(159), 3,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR,
  [777] = 3,
    ACTIONS(267), 1,
      anon_sym_ARG,
    ACTIONS(269), 1,
      sym__dedent,
    STATE(58), 2,
      sym_arg_command,
      aux_sym_target_repeat1,
  [788] = 3,
    ACTIONS(271), 1,
      anon_sym_ARG,
    ACTIONS(274), 1,
      sym__dedent,
    STATE(58), 2,
      sym_arg_command,
      aux_sym_target_repeat1,
  [799] = 3,
    ACTIONS(267), 1,
      anon_sym_ARG,
    ACTIONS(276), 1,
      sym__dedent,
    STATE(60), 2,
      sym_arg_command,
      aux_sym_target_repeat1,
  [810] = 3,
    ACTIONS(267), 1,
      anon_sym_ARG,
    ACTIONS(278), 1,
      sym__dedent,
    STATE(58), 2,
      sym_arg_command,
      aux_sym_target_repeat1,
  [821] = 3,
    ACTIONS(267), 1,
      anon_sym_ARG,
    ACTIONS(278), 1,
      sym__dedent,
    STATE(57), 2,
      sym_arg_command,
      aux_sym_target_repeat1,
  [832] = 3,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(282), 1,
      sym_required,
    ACTIONS(284), 1,
      sym_global,
  [842] = 3,
    ACTIONS(286), 1,
      anon_sym_LBRACE,
    ACTIONS(288), 1,
      sym_variable,
    STATE(31), 1,
      sym__expansion_body,
  [852] = 3,
    ACTIONS(290), 1,
      anon_sym_LF,
    ACTIONS(292), 1,
      anon_sym_EQ,
    ACTIONS(294), 1,
      sym_comment,
  [862] = 3,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(298), 1,
      anon_sym_EQ,
    ACTIONS(300), 1,
      sym_comment,
  [872] = 3,
    ACTIONS(302), 1,
      sym_version_major_minor,
    ACTIONS(304), 1,
      sym_feature_flag,
    STATE(70), 1,
      aux_sym_version_command_repeat1,
  [882] = 3,
    ACTIONS(306), 1,
      anon_sym_LF,
    ACTIONS(308), 1,
      anon_sym_EQ,
    ACTIONS(310), 1,
      sym_comment,
  [892] = 3,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    ACTIONS(314), 1,
      sym_variable,
    STATE(51), 1,
      sym__expansion_body,
  [902] = 3,
    ACTIONS(316), 1,
      anon_sym_LF,
    ACTIONS(318), 1,
      anon_sym_EQ,
    ACTIONS(320), 1,
      sym_comment,
  [912] = 3,
    ACTIONS(322), 1,
      sym_version_major_minor,
    ACTIONS(324), 1,
      sym_feature_flag,
    STATE(75), 1,
      aux_sym_version_command_repeat1,
  [922] = 3,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(328), 1,
      anon_sym_EQ,
    ACTIONS(330), 1,
      sym_comment,
  [932] = 3,
    ACTIONS(332), 1,
      anon_sym_LF,
    ACTIONS(334), 1,
      anon_sym_EQ,
    ACTIONS(336), 1,
      sym_comment,
  [942] = 3,
    ACTIONS(338), 1,
      sym_identifier,
    ACTIONS(340), 1,
      sym_required,
    ACTIONS(342), 1,
      sym_global,
  [952] = 3,
    ACTIONS(344), 1,
      anon_sym_LF,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(348), 1,
      sym_comment,
  [962] = 3,
    ACTIONS(350), 1,
      sym_version_major_minor,
    ACTIONS(352), 1,
      sym_feature_flag,
    STATE(75), 1,
      aux_sym_version_command_repeat1,
  [972] = 3,
    ACTIONS(355), 1,
      anon_sym_LF,
    ACTIONS(357), 1,
      anon_sym_EQ,
    ACTIONS(359), 1,
      sym_comment,
  [982] = 2,
    ACTIONS(361), 1,
      anon_sym_LF,
    ACTIONS(363), 1,
      sym_comment,
  [989] = 2,
    ACTIONS(365), 1,
      anon_sym_LF,
    ACTIONS(367), 1,
      sym_comment,
  [996] = 2,
    ACTIONS(369), 1,
      anon_sym_LF,
    ACTIONS(371), 1,
      sym_comment,
  [1003] = 2,
    ACTIONS(373), 1,
      sym_identifier,
    ACTIONS(375), 1,
      sym_global,
  [1010] = 2,
    ACTIONS(377), 1,
      sym_identifier,
    ACTIONS(379), 1,
      sym_global,
  [1017] = 2,
    ACTIONS(381), 1,
      anon_sym_LF,
    ACTIONS(383), 1,
      sym_comment,
  [1024] = 2,
    ACTIONS(385), 1,
      anon_sym_LF,
    ACTIONS(387), 1,
      sym_comment,
  [1031] = 2,
    ACTIONS(389), 1,
      anon_sym_LF,
    ACTIONS(391), 1,
      sym_comment,
  [1038] = 2,
    ACTIONS(393), 1,
      anon_sym_LF,
    ACTIONS(395), 1,
      sym_comment,
  [1045] = 2,
    ACTIONS(397), 1,
      anon_sym_LF,
    ACTIONS(399), 1,
      sym_comment,
  [1052] = 2,
    ACTIONS(401), 1,
      anon_sym_LF,
    ACTIONS(403), 1,
      sym_comment,
  [1059] = 2,
    ACTIONS(405), 1,
      anon_sym_LF,
    ACTIONS(407), 1,
      sym_comment,
  [1066] = 2,
    ACTIONS(409), 1,
      anon_sym_LF,
    ACTIONS(411), 1,
      sym_comment,
  [1073] = 2,
    ACTIONS(413), 1,
      anon_sym_LF,
    ACTIONS(415), 1,
      sym_comment,
  [1080] = 2,
    ACTIONS(417), 1,
      anon_sym_LF,
    ACTIONS(419), 1,
      sym_comment,
  [1087] = 2,
    ACTIONS(421), 1,
      anon_sym_LF,
    ACTIONS(423), 1,
      sym_comment,
  [1094] = 2,
    ACTIONS(425), 1,
      anon_sym_LF,
    ACTIONS(427), 1,
      sym_comment,
  [1101] = 2,
    ACTIONS(429), 1,
      anon_sym_LF,
    ACTIONS(431), 1,
      sym_comment,
  [1108] = 2,
    ACTIONS(433), 1,
      anon_sym_LF,
    ACTIONS(435), 1,
      sym_comment,
  [1115] = 2,
    ACTIONS(437), 1,
      anon_sym_LF,
    ACTIONS(439), 1,
      sym_comment,
  [1122] = 2,
    ACTIONS(441), 1,
      anon_sym_LF,
    ACTIONS(443), 1,
      sym_comment,
  [1129] = 2,
    ACTIONS(445), 1,
      anon_sym_LF,
    ACTIONS(447), 1,
      sym_comment,
  [1136] = 2,
    ACTIONS(449), 1,
      anon_sym_LF,
    ACTIONS(451), 1,
      sym_comment,
  [1143] = 1,
    ACTIONS(183), 2,
      sym__dedent,
      anon_sym_ARG,
  [1148] = 2,
    ACTIONS(453), 1,
      anon_sym_LF,
    ACTIONS(455), 1,
      sym_comment,
  [1155] = 1,
    ACTIONS(133), 2,
      sym__dedent,
      anon_sym_ARG,
  [1160] = 1,
    ACTIONS(191), 2,
      sym__dedent,
      anon_sym_ARG,
  [1165] = 1,
    ACTIONS(195), 2,
      sym__dedent,
      anon_sym_ARG,
  [1170] = 1,
    ACTIONS(207), 2,
      sym__dedent,
      anon_sym_ARG,
  [1175] = 2,
    ACTIONS(457), 1,
      anon_sym_LF,
    ACTIONS(459), 1,
      sym_comment,
  [1182] = 1,
    ACTIONS(251), 2,
      sym__dedent,
      anon_sym_ARG,
  [1187] = 1,
    ACTIONS(259), 2,
      sym__dedent,
      anon_sym_ARG,
  [1192] = 1,
    ACTIONS(243), 2,
      sym__dedent,
      anon_sym_ARG,
  [1197] = 1,
    ACTIONS(235), 2,
      sym__dedent,
      anon_sym_ARG,
  [1202] = 1,
    ACTIONS(203), 2,
      sym__dedent,
      anon_sym_ARG,
  [1207] = 1,
    ACTIONS(137), 2,
      sym__dedent,
      anon_sym_ARG,
  [1212] = 1,
    ACTIONS(129), 2,
      sym__dedent,
      anon_sym_ARG,
  [1217] = 1,
    ACTIONS(125), 2,
      sym__dedent,
      anon_sym_ARG,
  [1222] = 1,
    ACTIONS(149), 2,
      sym__dedent,
      anon_sym_ARG,
  [1227] = 1,
    ACTIONS(199), 2,
      sym__dedent,
      anon_sym_ARG,
  [1232] = 1,
    ACTIONS(153), 2,
      sym__dedent,
      anon_sym_ARG,
  [1237] = 1,
    ACTIONS(211), 2,
      sym__dedent,
      anon_sym_ARG,
  [1242] = 1,
    ACTIONS(187), 2,
      sym__dedent,
      anon_sym_ARG,
  [1247] = 1,
    ACTIONS(263), 2,
      sym__dedent,
      anon_sym_ARG,
  [1252] = 1,
    ACTIONS(255), 2,
      sym__dedent,
      anon_sym_ARG,
  [1257] = 1,
    ACTIONS(247), 2,
      sym__dedent,
      anon_sym_ARG,
  [1262] = 1,
    ACTIONS(239), 2,
      sym__dedent,
      anon_sym_ARG,
  [1267] = 1,
    ACTIONS(231), 2,
      sym__dedent,
      anon_sym_ARG,
  [1272] = 1,
    ACTIONS(215), 2,
      sym__dedent,
      anon_sym_ARG,
  [1277] = 1,
    ACTIONS(461), 1,
      anon_sym_LF,
  [1281] = 1,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
  [1285] = 1,
    ACTIONS(465), 1,
      anon_sym_LF,
  [1289] = 1,
    ACTIONS(467), 1,
      anon_sym_LF,
  [1293] = 1,
    ACTIONS(469), 1,
      sym_identifier,
  [1297] = 1,
    ACTIONS(471), 1,
      anon_sym_LF,
  [1301] = 1,
    ACTIONS(473), 1,
      anon_sym_LF,
  [1305] = 1,
    ACTIONS(475), 1,
      anon_sym_LF,
  [1309] = 1,
    ACTIONS(477), 1,
      aux_sym__expansion_body_token1,
  [1313] = 1,
    ACTIONS(479), 1,
      anon_sym_LF,
  [1317] = 1,
    ACTIONS(481), 1,
      anon_sym_LF,
  [1321] = 1,
    ACTIONS(483), 1,
      anon_sym_LF,
  [1325] = 1,
    ACTIONS(485), 1,
      anon_sym_LF,
  [1329] = 1,
    ACTIONS(487), 1,
      anon_sym_LF,
  [1333] = 1,
    ACTIONS(489), 1,
      anon_sym_LF,
  [1337] = 1,
    ACTIONS(491), 1,
      anon_sym_LF,
  [1341] = 1,
    ACTIONS(493), 1,
      anon_sym_LF,
  [1345] = 1,
    ACTIONS(495), 1,
      anon_sym_LF,
  [1349] = 1,
    ACTIONS(497), 1,
      anon_sym_LF,
  [1353] = 1,
    ACTIONS(499), 1,
      anon_sym_LF,
  [1357] = 1,
    ACTIONS(501), 1,
      anon_sym_LF,
  [1361] = 1,
    ACTIONS(503), 1,
      anon_sym_LF,
  [1365] = 1,
    ACTIONS(505), 1,
      anon_sym_LF,
  [1369] = 1,
    ACTIONS(507), 1,
      anon_sym_LF,
  [1373] = 1,
    ACTIONS(509), 1,
      anon_sym_LF,
  [1377] = 1,
    ACTIONS(511), 1,
      anon_sym_LF,
  [1381] = 1,
    ACTIONS(513), 1,
      anon_sym_LF,
  [1385] = 1,
    ACTIONS(515), 1,
      anon_sym_LF,
  [1389] = 1,
    ACTIONS(517), 1,
      anon_sym_COLON,
  [1393] = 1,
    ACTIONS(519), 1,
      anon_sym_LF,
  [1397] = 1,
    ACTIONS(521), 1,
      sym_identifier,
  [1401] = 1,
    ACTIONS(523), 1,
      sym_identifier,
  [1405] = 1,
    ACTIONS(525), 1,
      sym_identifier,
  [1409] = 1,
    ACTIONS(527), 1,
      anon_sym_LF,
  [1413] = 1,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
  [1417] = 1,
    ACTIONS(531), 1,
      aux_sym__expansion_body_token1,
  [1421] = 1,
    ACTIONS(533), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 135,
  [SMALL_STATE(8)] = 162,
  [SMALL_STATE(9)] = 189,
  [SMALL_STATE(10)] = 216,
  [SMALL_STATE(11)] = 238,
  [SMALL_STATE(12)] = 260,
  [SMALL_STATE(13)] = 279,
  [SMALL_STATE(14)] = 300,
  [SMALL_STATE(15)] = 319,
  [SMALL_STATE(16)] = 338,
  [SMALL_STATE(17)] = 359,
  [SMALL_STATE(18)] = 372,
  [SMALL_STATE(19)] = 385,
  [SMALL_STATE(20)] = 395,
  [SMALL_STATE(21)] = 409,
  [SMALL_STATE(22)] = 419,
  [SMALL_STATE(23)] = 429,
  [SMALL_STATE(24)] = 439,
  [SMALL_STATE(25)] = 449,
  [SMALL_STATE(26)] = 463,
  [SMALL_STATE(27)] = 473,
  [SMALL_STATE(28)] = 483,
  [SMALL_STATE(29)] = 493,
  [SMALL_STATE(30)] = 503,
  [SMALL_STATE(31)] = 513,
  [SMALL_STATE(32)] = 523,
  [SMALL_STATE(33)] = 537,
  [SMALL_STATE(34)] = 547,
  [SMALL_STATE(35)] = 557,
  [SMALL_STATE(36)] = 567,
  [SMALL_STATE(37)] = 577,
  [SMALL_STATE(38)] = 587,
  [SMALL_STATE(39)] = 597,
  [SMALL_STATE(40)] = 607,
  [SMALL_STATE(41)] = 617,
  [SMALL_STATE(42)] = 627,
  [SMALL_STATE(43)] = 637,
  [SMALL_STATE(44)] = 647,
  [SMALL_STATE(45)] = 657,
  [SMALL_STATE(46)] = 667,
  [SMALL_STATE(47)] = 677,
  [SMALL_STATE(48)] = 687,
  [SMALL_STATE(49)] = 697,
  [SMALL_STATE(50)] = 707,
  [SMALL_STATE(51)] = 717,
  [SMALL_STATE(52)] = 727,
  [SMALL_STATE(53)] = 737,
  [SMALL_STATE(54)] = 747,
  [SMALL_STATE(55)] = 757,
  [SMALL_STATE(56)] = 767,
  [SMALL_STATE(57)] = 777,
  [SMALL_STATE(58)] = 788,
  [SMALL_STATE(59)] = 799,
  [SMALL_STATE(60)] = 810,
  [SMALL_STATE(61)] = 821,
  [SMALL_STATE(62)] = 832,
  [SMALL_STATE(63)] = 842,
  [SMALL_STATE(64)] = 852,
  [SMALL_STATE(65)] = 862,
  [SMALL_STATE(66)] = 872,
  [SMALL_STATE(67)] = 882,
  [SMALL_STATE(68)] = 892,
  [SMALL_STATE(69)] = 902,
  [SMALL_STATE(70)] = 912,
  [SMALL_STATE(71)] = 922,
  [SMALL_STATE(72)] = 932,
  [SMALL_STATE(73)] = 942,
  [SMALL_STATE(74)] = 952,
  [SMALL_STATE(75)] = 962,
  [SMALL_STATE(76)] = 972,
  [SMALL_STATE(77)] = 982,
  [SMALL_STATE(78)] = 989,
  [SMALL_STATE(79)] = 996,
  [SMALL_STATE(80)] = 1003,
  [SMALL_STATE(81)] = 1010,
  [SMALL_STATE(82)] = 1017,
  [SMALL_STATE(83)] = 1024,
  [SMALL_STATE(84)] = 1031,
  [SMALL_STATE(85)] = 1038,
  [SMALL_STATE(86)] = 1045,
  [SMALL_STATE(87)] = 1052,
  [SMALL_STATE(88)] = 1059,
  [SMALL_STATE(89)] = 1066,
  [SMALL_STATE(90)] = 1073,
  [SMALL_STATE(91)] = 1080,
  [SMALL_STATE(92)] = 1087,
  [SMALL_STATE(93)] = 1094,
  [SMALL_STATE(94)] = 1101,
  [SMALL_STATE(95)] = 1108,
  [SMALL_STATE(96)] = 1115,
  [SMALL_STATE(97)] = 1122,
  [SMALL_STATE(98)] = 1129,
  [SMALL_STATE(99)] = 1136,
  [SMALL_STATE(100)] = 1143,
  [SMALL_STATE(101)] = 1148,
  [SMALL_STATE(102)] = 1155,
  [SMALL_STATE(103)] = 1160,
  [SMALL_STATE(104)] = 1165,
  [SMALL_STATE(105)] = 1170,
  [SMALL_STATE(106)] = 1175,
  [SMALL_STATE(107)] = 1182,
  [SMALL_STATE(108)] = 1187,
  [SMALL_STATE(109)] = 1192,
  [SMALL_STATE(110)] = 1197,
  [SMALL_STATE(111)] = 1202,
  [SMALL_STATE(112)] = 1207,
  [SMALL_STATE(113)] = 1212,
  [SMALL_STATE(114)] = 1217,
  [SMALL_STATE(115)] = 1222,
  [SMALL_STATE(116)] = 1227,
  [SMALL_STATE(117)] = 1232,
  [SMALL_STATE(118)] = 1237,
  [SMALL_STATE(119)] = 1242,
  [SMALL_STATE(120)] = 1247,
  [SMALL_STATE(121)] = 1252,
  [SMALL_STATE(122)] = 1257,
  [SMALL_STATE(123)] = 1262,
  [SMALL_STATE(124)] = 1267,
  [SMALL_STATE(125)] = 1272,
  [SMALL_STATE(126)] = 1277,
  [SMALL_STATE(127)] = 1281,
  [SMALL_STATE(128)] = 1285,
  [SMALL_STATE(129)] = 1289,
  [SMALL_STATE(130)] = 1293,
  [SMALL_STATE(131)] = 1297,
  [SMALL_STATE(132)] = 1301,
  [SMALL_STATE(133)] = 1305,
  [SMALL_STATE(134)] = 1309,
  [SMALL_STATE(135)] = 1313,
  [SMALL_STATE(136)] = 1317,
  [SMALL_STATE(137)] = 1321,
  [SMALL_STATE(138)] = 1325,
  [SMALL_STATE(139)] = 1329,
  [SMALL_STATE(140)] = 1333,
  [SMALL_STATE(141)] = 1337,
  [SMALL_STATE(142)] = 1341,
  [SMALL_STATE(143)] = 1345,
  [SMALL_STATE(144)] = 1349,
  [SMALL_STATE(145)] = 1353,
  [SMALL_STATE(146)] = 1357,
  [SMALL_STATE(147)] = 1361,
  [SMALL_STATE(148)] = 1365,
  [SMALL_STATE(149)] = 1369,
  [SMALL_STATE(150)] = 1373,
  [SMALL_STATE(151)] = 1377,
  [SMALL_STATE(152)] = 1381,
  [SMALL_STATE(153)] = 1385,
  [SMALL_STATE(154)] = 1389,
  [SMALL_STATE(155)] = 1393,
  [SMALL_STATE(156)] = 1397,
  [SMALL_STATE(157)] = 1401,
  [SMALL_STATE(158)] = 1405,
  [SMALL_STATE(159)] = 1409,
  [SMALL_STATE(160)] = 1413,
  [SMALL_STATE(161)] = 1417,
  [SMALL_STATE(162)] = 1421,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(154),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(12),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(12),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(63),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(13),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(13),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(68),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 4, .production_id = 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 4, .production_id = 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 3, .production_id = 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 7, .production_id = 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 7, .production_id = 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 10),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 10),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 8),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 8),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 3, .production_id = 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 7),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 7),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(25),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(25),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 11),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 11),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 12),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 12),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 4),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_expansion, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_expansion, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 5, .production_id = 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 8, .production_id = 15),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 8, .production_id = 15),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 8, .production_id = 14),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 8, .production_id = 14),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 5),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 5),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 9),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 9),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 6),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 6),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 6),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 6),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 13),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 13),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 13),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 13),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6, .production_id = 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 6, .production_id = 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 3, .production_id = 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 3, .production_id = 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 5, .production_id = 4),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 5, .production_id = 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 12),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 12),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 9),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 9),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 15),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 15),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 5),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 5),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 14),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 14),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 7),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 7),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 11),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 11),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 8),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 8),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 10),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 10),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(62),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2), SHIFT_REPEAT(75),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [533] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__indent = 0,
  ts_external_token__dedent = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__indent] = true,
  },
  [3] = {
    [ts_external_token__dedent] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_earthfile_external_scanner_create(void);
void tree_sitter_earthfile_external_scanner_destroy(void *);
bool tree_sitter_earthfile_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_earthfile_external_scanner_serialize(void *, char *);
void tree_sitter_earthfile_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_earthfile_external_scanner_create,
      tree_sitter_earthfile_external_scanner_destroy,
      tree_sitter_earthfile_external_scanner_scan,
      tree_sitter_earthfile_external_scanner_serialize,
      tree_sitter_earthfile_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
