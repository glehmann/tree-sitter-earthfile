#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 336
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 30

enum ts_symbol_identifiers {
  anon_sym_VERSION = 1,
  anon_sym_LF = 2,
  anon_sym_ARG = 3,
  anon_sym_EQ = 4,
  anon_sym_FROM = 5,
  anon_sym_DASH_DASHplatform = 6,
  aux_sym_from_command_token1 = 7,
  anon_sym_RUN = 8,
  anon_sym_DASH_DASHsecret = 9,
  anon_sym_DASH_DASHmount = 10,
  anon_sym_DASH_DASH = 11,
  anon_sym_COLON = 12,
  sym_version_major_minor = 13,
  sym_feature_flag = 14,
  anon_sym_DASH_DASH2 = 15,
  sym_option_identifier = 16,
  anon_sym_DQUOTE = 17,
  aux_sym_double_quoted_string_token1 = 18,
  anon_sym_BSLASH = 19,
  anon_sym_SQUOTE = 20,
  aux_sym_single_quoted_string_token1 = 21,
  aux_sym_unquoted_string_token1 = 22,
  anon_sym_BSLASH2 = 23,
  sym_double_quoted_escape_sequence = 24,
  sym_single_quoted_escape_sequence = 25,
  anon_sym_DOLLAR = 26,
  anon_sym_DOLLAR2 = 27,
  anon_sym_LBRACE = 28,
  aux_sym__expansion_body_token1 = 29,
  anon_sym_RBRACE = 30,
  sym_variable = 31,
  sym_identifier = 32,
  sym_comment = 33,
  sym_required = 34,
  sym_global = 35,
  sym_allow_privileged = 36,
  sym_push = 37,
  sym_no_cache = 38,
  sym_entrypoint = 39,
  sym_privileged = 40,
  sym_network_none = 41,
  sym_ssh = 42,
  sym_expr = 43,
  anon_sym_PLUS = 44,
  aux_sym_image_name_token1 = 45,
  aux_sym_image_name_token2 = 46,
  anon_sym_COLON2 = 47,
  aux_sym_image_tag_token1 = 48,
  anon_sym_AT = 49,
  aux_sym_image_digest_token1 = 50,
  aux_sym_shell_fragment_token1 = 51,
  aux_sym_shell_fragment_token2 = 52,
  aux_sym_shell_fragment_token3 = 53,
  sym__indent = 54,
  sym__dedent = 55,
  sym_source_file = 56,
  sym_version_command = 57,
  sym_arg_command = 58,
  sym_from_command = 59,
  sym_run_command = 60,
  sym_target = 61,
  sym_build_arg_flag = 62,
  sym_double_quoted_string = 63,
  sym_single_quoted_string = 64,
  sym_unquoted_string = 65,
  sym_expansion = 66,
  sym__immediate_expansion = 67,
  sym__imm_expansion = 68,
  sym__expansion_body = 69,
  sym_target_ref = 70,
  sym_image_spec = 71,
  sym_image_name = 72,
  sym_image_tag = 73,
  sym_image_digest = 74,
  sym__string = 75,
  sym_shell_fragment = 76,
  aux_sym_source_file_repeat1 = 77,
  aux_sym_version_command_repeat1 = 78,
  aux_sym_from_command_repeat1 = 79,
  aux_sym_from_command_repeat2 = 80,
  aux_sym_run_command_repeat1 = 81,
  aux_sym_target_repeat1 = 82,
  aux_sym_double_quoted_string_repeat1 = 83,
  aux_sym_single_quoted_string_repeat1 = 84,
  aux_sym_unquoted_string_repeat1 = 85,
  aux_sym_image_name_repeat1 = 86,
  aux_sym_image_tag_repeat1 = 87,
  aux_sym_image_digest_repeat1 = 88,
  aux_sym_shell_fragment_repeat1 = 89,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_VERSION] = "VERSION",
  [anon_sym_LF] = "\n",
  [anon_sym_ARG] = "ARG",
  [anon_sym_EQ] = "=",
  [anon_sym_FROM] = "FROM",
  [anon_sym_DASH_DASHplatform] = "--platform",
  [aux_sym_from_command_token1] = "from_command_token1",
  [anon_sym_RUN] = "RUN",
  [anon_sym_DASH_DASHsecret] = "--secret",
  [anon_sym_DASH_DASHmount] = "--mount",
  [anon_sym_DASH_DASH] = " -- ",
  [anon_sym_COLON] = ":",
  [sym_version_major_minor] = "version_major_minor",
  [sym_feature_flag] = "feature_flag",
  [anon_sym_DASH_DASH2] = "--",
  [sym_option_identifier] = "option_identifier",
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
  [anon_sym_DOLLAR2] = "$",
  [anon_sym_LBRACE] = "{",
  [aux_sym__expansion_body_token1] = "variable",
  [anon_sym_RBRACE] = "}",
  [sym_variable] = "variable",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_required] = "required",
  [sym_global] = "global",
  [sym_allow_privileged] = "allow_privileged",
  [sym_push] = "push",
  [sym_no_cache] = "no_cache",
  [sym_entrypoint] = "entrypoint",
  [sym_privileged] = "privileged",
  [sym_network_none] = "network_none",
  [sym_ssh] = "ssh",
  [sym_expr] = "expr",
  [anon_sym_PLUS] = "+",
  [aux_sym_image_name_token1] = "image_name_token1",
  [aux_sym_image_name_token2] = "image_name_token2",
  [anon_sym_COLON2] = ":",
  [aux_sym_image_tag_token1] = "image_tag_token1",
  [anon_sym_AT] = "@",
  [aux_sym_image_digest_token1] = "image_digest_token1",
  [aux_sym_shell_fragment_token1] = "shell_fragment_token1",
  [aux_sym_shell_fragment_token2] = "shell_fragment_token2",
  [aux_sym_shell_fragment_token3] = "shell_fragment_token3",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym_version_command] = "version_command",
  [sym_arg_command] = "arg_command",
  [sym_from_command] = "from_command",
  [sym_run_command] = "run_command",
  [sym_target] = "target",
  [sym_build_arg_flag] = "build_arg_flag",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_unquoted_string] = "unquoted_string",
  [sym_expansion] = "expansion",
  [sym__immediate_expansion] = "_immediate_expansion",
  [sym__imm_expansion] = "expansion",
  [sym__expansion_body] = "_expansion_body",
  [sym_target_ref] = "target_ref",
  [sym_image_spec] = "image_spec",
  [sym_image_name] = "image_name",
  [sym_image_tag] = "image_tag",
  [sym_image_digest] = "image_digest",
  [sym__string] = "_string",
  [sym_shell_fragment] = "shell_fragment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_version_command_repeat1] = "version_command_repeat1",
  [aux_sym_from_command_repeat1] = "from_command_repeat1",
  [aux_sym_from_command_repeat2] = "from_command_repeat2",
  [aux_sym_run_command_repeat1] = "run_command_repeat1",
  [aux_sym_target_repeat1] = "target_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_single_quoted_string_repeat1] = "single_quoted_string_repeat1",
  [aux_sym_unquoted_string_repeat1] = "unquoted_string_repeat1",
  [aux_sym_image_name_repeat1] = "image_name_repeat1",
  [aux_sym_image_tag_repeat1] = "image_tag_repeat1",
  [aux_sym_image_digest_repeat1] = "image_digest_repeat1",
  [aux_sym_shell_fragment_repeat1] = "shell_fragment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_VERSION] = anon_sym_VERSION,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_ARG] = anon_sym_ARG,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_DASH_DASHplatform] = anon_sym_DASH_DASHplatform,
  [aux_sym_from_command_token1] = aux_sym_from_command_token1,
  [anon_sym_RUN] = anon_sym_RUN,
  [anon_sym_DASH_DASHsecret] = anon_sym_DASH_DASHsecret,
  [anon_sym_DASH_DASHmount] = anon_sym_DASH_DASHmount,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_version_major_minor] = sym_version_major_minor,
  [sym_feature_flag] = sym_feature_flag,
  [anon_sym_DASH_DASH2] = anon_sym_DASH_DASH2,
  [sym_option_identifier] = sym_option_identifier,
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
  [anon_sym_DOLLAR2] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym__expansion_body_token1] = sym_variable,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_variable] = sym_variable,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_required] = sym_required,
  [sym_global] = sym_global,
  [sym_allow_privileged] = sym_allow_privileged,
  [sym_push] = sym_push,
  [sym_no_cache] = sym_no_cache,
  [sym_entrypoint] = sym_entrypoint,
  [sym_privileged] = sym_privileged,
  [sym_network_none] = sym_network_none,
  [sym_ssh] = sym_ssh,
  [sym_expr] = sym_expr,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [aux_sym_image_name_token1] = aux_sym_image_name_token1,
  [aux_sym_image_name_token2] = aux_sym_image_name_token2,
  [anon_sym_COLON2] = anon_sym_COLON,
  [aux_sym_image_tag_token1] = aux_sym_image_tag_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_image_digest_token1] = aux_sym_image_digest_token1,
  [aux_sym_shell_fragment_token1] = aux_sym_shell_fragment_token1,
  [aux_sym_shell_fragment_token2] = aux_sym_shell_fragment_token2,
  [aux_sym_shell_fragment_token3] = aux_sym_shell_fragment_token3,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_source_file] = sym_source_file,
  [sym_version_command] = sym_version_command,
  [sym_arg_command] = sym_arg_command,
  [sym_from_command] = sym_from_command,
  [sym_run_command] = sym_run_command,
  [sym_target] = sym_target,
  [sym_build_arg_flag] = sym_build_arg_flag,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_expansion] = sym_expansion,
  [sym__immediate_expansion] = sym__immediate_expansion,
  [sym__imm_expansion] = sym_expansion,
  [sym__expansion_body] = sym__expansion_body,
  [sym_target_ref] = sym_target_ref,
  [sym_image_spec] = sym_image_spec,
  [sym_image_name] = sym_image_name,
  [sym_image_tag] = sym_image_tag,
  [sym_image_digest] = sym_image_digest,
  [sym__string] = sym__string,
  [sym_shell_fragment] = sym_shell_fragment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_version_command_repeat1] = aux_sym_version_command_repeat1,
  [aux_sym_from_command_repeat1] = aux_sym_from_command_repeat1,
  [aux_sym_from_command_repeat2] = aux_sym_from_command_repeat2,
  [aux_sym_run_command_repeat1] = aux_sym_run_command_repeat1,
  [aux_sym_target_repeat1] = aux_sym_target_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_single_quoted_string_repeat1] = aux_sym_single_quoted_string_repeat1,
  [aux_sym_unquoted_string_repeat1] = aux_sym_unquoted_string_repeat1,
  [aux_sym_image_name_repeat1] = aux_sym_image_name_repeat1,
  [aux_sym_image_tag_repeat1] = aux_sym_image_tag_repeat1,
  [aux_sym_image_digest_repeat1] = aux_sym_image_digest_repeat1,
  [aux_sym_shell_fragment_repeat1] = aux_sym_shell_fragment_repeat1,
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
  [anon_sym_FROM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHplatform] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_from_command_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RUN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHsecret] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHmount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
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
  [anon_sym_DASH_DASH2] = {
    .visible = true,
    .named = false,
  },
  [sym_option_identifier] = {
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
  [anon_sym_DOLLAR2] = {
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
  [sym_allow_privileged] = {
    .visible = true,
    .named = true,
  },
  [sym_push] = {
    .visible = true,
    .named = true,
  },
  [sym_no_cache] = {
    .visible = true,
    .named = true,
  },
  [sym_entrypoint] = {
    .visible = true,
    .named = true,
  },
  [sym_privileged] = {
    .visible = true,
    .named = true,
  },
  [sym_network_none] = {
    .visible = true,
    .named = true,
  },
  [sym_ssh] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_image_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_image_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_image_digest_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token3] = {
    .visible = false,
    .named = false,
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
  [sym_from_command] = {
    .visible = true,
    .named = true,
  },
  [sym_run_command] = {
    .visible = true,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_build_arg_flag] = {
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
  [sym_expansion] = {
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
  [sym_target_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_image_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_image_name] = {
    .visible = true,
    .named = true,
  },
  [sym_image_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_image_digest] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym_shell_fragment] = {
    .visible = true,
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
  [aux_sym_from_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_run_command_repeat1] = {
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
  [aux_sym_image_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_digest_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_command = 1,
  field_default_value = 2,
  field_default_value_expr = 3,
  field_digest = 4,
  field_feature = 5,
  field_global = 6,
  field_mount = 7,
  field_name = 8,
  field_platform = 9,
  field_required = 10,
  field_secret = 11,
  field_tag = 12,
  field_value = 13,
  field_version = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_command] = "command",
  [field_default_value] = "default_value",
  [field_default_value_expr] = "default_value_expr",
  [field_digest] = "digest",
  [field_feature] = "feature",
  [field_global] = "global",
  [field_mount] = "mount",
  [field_name] = "name",
  [field_platform] = "platform",
  [field_required] = "required",
  [field_secret] = "secret",
  [field_tag] = "tag",
  [field_value] = "value",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 1},
  [12] = {.index = 17, .length = 3},
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 3},
  [16] = {.index = 27, .length = 3},
  [17] = {.index = 30, .length = 3},
  [18] = {.index = 33, .length = 3},
  [19] = {.index = 36, .length = 3},
  [20] = {.index = 39, .length = 2},
  [21] = {.index = 41, .length = 4},
  [22] = {.index = 45, .length = 4},
  [23] = {.index = 49, .length = 1},
  [24] = {.index = 50, .length = 4},
  [25] = {.index = 54, .length = 1},
  [26] = {.index = 55, .length = 1},
  [27] = {.index = 56, .length = 1},
  [28] = {.index = 57, .length = 3},
  [29] = {.index = 60, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_version, 1},
  [2] =
    {field_name, 1},
  [3] =
    {field_name, 0},
    {field_tag, 1},
  [5] =
    {field_digest, 1},
    {field_name, 0},
  [7] =
    {field_platform, 1, .inherited = true},
  [8] =
    {field_platform, 0, .inherited = true},
    {field_platform, 1, .inherited = true},
  [10] =
    {field_feature, 1},
    {field_version, 2},
  [12] =
    {field_name, 2},
    {field_required, 1},
  [14] =
    {field_global, 1},
    {field_name, 2},
  [16] =
    {field_platform, 2},
  [17] =
    {field_digest, 2},
    {field_name, 0},
    {field_tag, 1},
  [20] =
    {field_default_value_expr, 3},
    {field_name, 1},
  [22] =
    {field_default_value, 3},
    {field_name, 1},
  [24] =
    {field_global, 2},
    {field_name, 3},
    {field_required, 1},
  [27] =
    {field_default_value_expr, 4},
    {field_name, 2},
    {field_required, 1},
  [30] =
    {field_default_value, 4},
    {field_name, 2},
    {field_required, 1},
  [33] =
    {field_default_value_expr, 4},
    {field_global, 1},
    {field_name, 2},
  [36] =
    {field_default_value, 4},
    {field_global, 1},
    {field_name, 2},
  [39] =
    {field_name, 1},
    {field_value, 3},
  [41] =
    {field_default_value_expr, 5},
    {field_global, 2},
    {field_name, 3},
    {field_required, 1},
  [45] =
    {field_default_value, 5},
    {field_global, 2},
    {field_name, 3},
    {field_required, 1},
  [49] =
    {field_command, 1},
  [50] =
    {field_mount, 0, .inherited = true},
    {field_mount, 1, .inherited = true},
    {field_secret, 0, .inherited = true},
    {field_secret, 1, .inherited = true},
  [54] =
    {field_secret, 2},
  [55] =
    {field_mount, 2},
  [56] =
    {field_command, 2},
  [57] =
    {field_command, 2},
    {field_mount, 1, .inherited = true},
    {field_secret, 1, .inherited = true},
  [60] =
    {field_command, 3},
    {field_mount, 1, .inherited = true},
    {field_secret, 1, .inherited = true},
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
  [8] = 2,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 12,
  [16] = 3,
  [17] = 17,
  [18] = 14,
  [19] = 19,
  [20] = 11,
  [21] = 9,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 26,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 10,
  [38] = 38,
  [39] = 2,
  [40] = 40,
  [41] = 36,
  [42] = 3,
  [43] = 19,
  [44] = 17,
  [45] = 45,
  [46] = 23,
  [47] = 6,
  [48] = 27,
  [49] = 4,
  [50] = 50,
  [51] = 51,
  [52] = 6,
  [53] = 4,
  [54] = 54,
  [55] = 6,
  [56] = 56,
  [57] = 40,
  [58] = 58,
  [59] = 2,
  [60] = 45,
  [61] = 61,
  [62] = 4,
  [63] = 3,
  [64] = 64,
  [65] = 51,
  [66] = 50,
  [67] = 4,
  [68] = 4,
  [69] = 69,
  [70] = 6,
  [71] = 3,
  [72] = 72,
  [73] = 72,
  [74] = 4,
  [75] = 75,
  [76] = 76,
  [77] = 72,
  [78] = 76,
  [79] = 76,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 6,
  [85] = 72,
  [86] = 2,
  [87] = 76,
  [88] = 88,
  [89] = 72,
  [90] = 76,
  [91] = 6,
  [92] = 54,
  [93] = 32,
  [94] = 94,
  [95] = 95,
  [96] = 58,
  [97] = 61,
  [98] = 56,
  [99] = 6,
  [100] = 30,
  [101] = 4,
  [102] = 102,
  [103] = 103,
  [104] = 34,
  [105] = 64,
  [106] = 24,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 88,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 4,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 4,
  [123] = 123,
  [124] = 6,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 6,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 32,
  [148] = 24,
  [149] = 34,
  [150] = 150,
  [151] = 6,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 30,
  [156] = 156,
  [157] = 154,
  [158] = 4,
  [159] = 159,
  [160] = 160,
  [161] = 146,
  [162] = 95,
  [163] = 152,
  [164] = 153,
  [165] = 165,
  [166] = 166,
  [167] = 154,
  [168] = 166,
  [169] = 154,
  [170] = 4,
  [171] = 166,
  [172] = 102,
  [173] = 6,
  [174] = 166,
  [175] = 154,
  [176] = 166,
  [177] = 177,
  [178] = 123,
  [179] = 143,
  [180] = 125,
  [181] = 181,
  [182] = 144,
  [183] = 183,
  [184] = 184,
  [185] = 119,
  [186] = 138,
  [187] = 187,
  [188] = 127,
  [189] = 108,
  [190] = 126,
  [191] = 130,
  [192] = 114,
  [193] = 145,
  [194] = 111,
  [195] = 112,
  [196] = 113,
  [197] = 115,
  [198] = 118,
  [199] = 107,
  [200] = 121,
  [201] = 131,
  [202] = 132,
  [203] = 133,
  [204] = 135,
  [205] = 136,
  [206] = 137,
  [207] = 141,
  [208] = 142,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 30,
  [214] = 32,
  [215] = 209,
  [216] = 216,
  [217] = 217,
  [218] = 209,
  [219] = 219,
  [220] = 212,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 24,
  [225] = 223,
  [226] = 219,
  [227] = 209,
  [228] = 209,
  [229] = 34,
  [230] = 211,
  [231] = 222,
  [232] = 209,
  [233] = 221,
  [234] = 209,
  [235] = 235,
  [236] = 209,
  [237] = 209,
  [238] = 209,
  [239] = 209,
  [240] = 209,
  [241] = 241,
  [242] = 242,
  [243] = 34,
  [244] = 24,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 247,
  [252] = 252,
  [253] = 253,
  [254] = 32,
  [255] = 255,
  [256] = 241,
  [257] = 257,
  [258] = 252,
  [259] = 250,
  [260] = 249,
  [261] = 30,
  [262] = 245,
  [263] = 248,
  [264] = 255,
  [265] = 242,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 266,
  [275] = 275,
  [276] = 276,
  [277] = 267,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 268,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 276,
  [290] = 283,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 271,
  [295] = 266,
  [296] = 266,
  [297] = 297,
  [298] = 298,
  [299] = 281,
  [300] = 300,
  [301] = 286,
  [302] = 279,
  [303] = 273,
  [304] = 304,
  [305] = 266,
  [306] = 306,
  [307] = 278,
  [308] = 266,
  [309] = 266,
  [310] = 266,
  [311] = 266,
  [312] = 266,
  [313] = 266,
  [314] = 266,
  [315] = 291,
  [316] = 270,
  [317] = 298,
  [318] = 318,
  [319] = 318,
  [320] = 282,
  [321] = 321,
  [322] = 322,
  [323] = 300,
  [324] = 292,
  [325] = 282,
  [326] = 282,
  [327] = 282,
  [328] = 282,
  [329] = 282,
  [330] = 282,
  [331] = 282,
  [332] = 282,
  [333] = 282,
  [334] = 282,
  [335] = 269,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(173);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '$') ADVANCE(332);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == '+') ADVANCE(368);
      if (lookahead == ',') ADVANCE(435);
      if (lookahead == '-') ADVANCE(436);
      if (lookahead == ':') ADVANCE(392);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == '@') ADVANCE(414);
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead == 'F') ADVANCE(70);
      if (lookahead == 'R') ADVANCE(73);
      if (lookahead == 'V') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '{') ADVANCE(334);
      if (lookahead == '}') ADVANCE(336);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(164)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(36)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == ' ') ADVANCE(326);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(34)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == ' ') ADVANCE(326);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '$') ADVANCE(329);
      if (lookahead == '+') ADVANCE(368);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(370);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(370);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(60)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(52)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == ' ') ADVANCE(326);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(46)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == ' ') ADVANCE(326);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '$') ADVANCE(331);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == '\\') SKIP(14)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '\\') SKIP(14)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '$') ADVANCE(331);
      if (lookahead == '\\') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(325);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(12)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == ' ') ADVANCE(326);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '$') ADVANCE(331);
      if (lookahead == '\\') ADVANCE(226);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(74)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(439);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(43)
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(226);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(228);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(24)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(439);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(56)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(57)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == ' ') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(439);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(31)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(439);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(435);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(438);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == ' ') ADVANCE(326);
      if (lookahead == '"') ADVANCE(327);
      if (lookahead == '\'') ADVANCE(328);
      if (lookahead == '\\') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(439);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(27)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(439);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '$') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == '+') ADVANCE(368);
      if (lookahead == '-') ADVANCE(436);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead == 'F') ADVANCE(70);
      if (lookahead == 'R') ADVANCE(73);
      if (lookahead == 'V') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(435);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '$') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == '+') ADVANCE(368);
      if (lookahead == '-') ADVANCE(437);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead == 'F') ADVANCE(70);
      if (lookahead == 'R') ADVANCE(73);
      if (lookahead == 'V') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(435);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 'p') ADVANCE(135);
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(438);
      if (lookahead == '#' ||
          lookahead == '[') ADVANCE(325);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(325);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(31)
      if (lookahead != 0) ADVANCE(322);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '-') ADVANCE(436);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(435);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(31)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(438);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '-') ADVANCE(437);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(435);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(31)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(438);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '$') ADVANCE(332);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '$') ADVANCE(44);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == '\\') SKIP(3)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(226);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == 'A') ADVANCE(345);
      if (lookahead == 'F') ADVANCE(346);
      if (lookahead == 'V') ADVANCE(338);
      if (lookahead == '\\') SKIP(1)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(331);
      if (lookahead == '+') ADVANCE(369);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(325);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(331);
      if (lookahead == '-') ADVANCE(231);
      if (lookahead == 'A') ADVANCE(250);
      if (lookahead == 'F') ADVANCE(251);
      if (lookahead == 'R') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(325);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(331);
      if (lookahead == ':') ADVANCE(392);
      if (lookahead == '@') ADVANCE(414);
      if (lookahead == 'A') ADVANCE(385);
      if (lookahead == 'F') ADVANCE(386);
      if (lookahead == 'R') ADVANCE(388);
      if (lookahead == '\\') ADVANCE(391);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(60)
      if (lookahead != 0) ADVANCE(391);
      END_STATE();
    case 40:
      if (lookahead == '$') ADVANCE(331);
      if (lookahead == '@') ADVANCE(414);
      if (lookahead == 'A') ADVANCE(407);
      if (lookahead == 'F') ADVANCE(408);
      if (lookahead == 'R') ADVANCE(410);
      if (lookahead == '\\') ADVANCE(413);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(60)
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 41:
      if (lookahead == '$') ADVANCE(331);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'F') ADVANCE(432);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == '\\') SKIP(6)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(60)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 42:
      if (lookahead == '$') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 43:
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(226);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43)
      END_STATE();
    case 44:
      if (lookahead == '(') ADVANCE(159);
      END_STATE();
    case 45:
      if (lookahead == ')') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == '+') ADVANCE(368);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '\\') SKIP(9)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(220);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(158);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(101);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(392);
      if (lookahead == '@') ADVANCE(414);
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead == 'F') ADVANCE(70);
      if (lookahead == 'R') ADVANCE(73);
      if (lookahead == '\\') SKIP(7)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead == 'F') ADVANCE(70);
      if (lookahead == 'R') ADVANCE(73);
      if (lookahead == '\\') SKIP(7)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(80);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(133);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == '{') ADVANCE(334);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == '\\') SKIP(20)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '\\') SKIP(21)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead == 'F') ADVANCE(70);
      if (lookahead == 'R') ADVANCE(73);
      if (lookahead == '\\') SKIP(6)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(60)
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(71);
      END_STATE();
    case 62:
      if (lookahead == 'G') ADVANCE(183);
      END_STATE();
    case 63:
      if (lookahead == 'I') ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == 'M') ADVANCE(194);
      END_STATE();
    case 65:
      if (lookahead == 'N') ADVANCE(207);
      END_STATE();
    case 66:
      if (lookahead == 'N') ADVANCE(174);
      END_STATE();
    case 67:
      if (lookahead == 'O') ADVANCE(64);
      END_STATE();
    case 68:
      if (lookahead == 'O') ADVANCE(66);
      END_STATE();
    case 69:
      if (lookahead == 'R') ADVANCE(62);
      END_STATE();
    case 70:
      if (lookahead == 'R') ADVANCE(67);
      END_STATE();
    case 71:
      if (lookahead == 'R') ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'S') ADVANCE(63);
      END_STATE();
    case 73:
      if (lookahead == 'U') ADVANCE(65);
      END_STATE();
    case 74:
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(435);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(74)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(438);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 79:
      if (lookahead == 'b') ADVANCE(77);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(361);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(353);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(351);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 'p') ADVANCE(135);
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 98:
      if (lookahead == 'f') ADVANCE(131);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(90);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(94);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 102:
      if (lookahead == 'h') ADVANCE(365);
      END_STATE();
    case 103:
      if (lookahead == 'h') ADVANCE(355);
      END_STATE();
    case 104:
      if (lookahead == 'h') ADVANCE(89);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 111:
      if (lookahead == 'k') ADVANCE(59);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(352);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(204);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 132:
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 133:
      if (lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 134:
      if (lookahead == 'q') ADVANCE(149);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 151:
      if (lookahead == 'v') ADVANCE(106);
      END_STATE();
    case 152:
      if (lookahead == 'v') ADVANCE(109);
      END_STATE();
    case 153:
      if (lookahead == 'w') ADVANCE(130);
      END_STATE();
    case 154:
      if (lookahead == 'w') ADVANCE(54);
      END_STATE();
    case 155:
      if (lookahead == 'y') ADVANCE(132);
      END_STATE();
    case 156:
      if (lookahead == ' ' ||
          lookahead == '=') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 158:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 159:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 160:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(335);
      END_STATE();
    case 161:
      if (eof) ADVANCE(173);
      if (lookahead == '\n') SKIP(168)
      END_STATE();
    case 162:
      if (eof) ADVANCE(173);
      if (lookahead == '\n') SKIP(169)
      END_STATE();
    case 163:
      if (eof) ADVANCE(173);
      if (lookahead == '\n') SKIP(166)
      END_STATE();
    case 164:
      if (eof) ADVANCE(173);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '$') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == '+') ADVANCE(368);
      if (lookahead == '-') ADVANCE(436);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead == 'F') ADVANCE(70);
      if (lookahead == 'R') ADVANCE(73);
      if (lookahead == 'V') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(435);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(164)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 165:
      if (eof) ADVANCE(173);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '$') ADVANCE(331);
      if (lookahead == '+') ADVANCE(368);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == 'A') ADVANCE(422);
      if (lookahead == 'F') ADVANCE(423);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == '\\') SKIP(163)
      if (lookahead == '_') ADVANCE(349);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(166)
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(434);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 166:
      if (eof) ADVANCE(173);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '+') ADVANCE(368);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == 'A') ADVANCE(345);
      if (lookahead == 'F') ADVANCE(346);
      if (lookahead == 'V') ADVANCE(338);
      if (lookahead == '\\') SKIP(163)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(166)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 167:
      if (eof) ADVANCE(173);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(392);
      if (lookahead == '@') ADVANCE(414);
      if (lookahead == 'A') ADVANCE(345);
      if (lookahead == 'F') ADVANCE(346);
      if (lookahead == 'V') ADVANCE(338);
      if (lookahead == '\\') SKIP(161)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(168)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 168:
      if (eof) ADVANCE(173);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == 'A') ADVANCE(345);
      if (lookahead == 'F') ADVANCE(346);
      if (lookahead == 'V') ADVANCE(338);
      if (lookahead == '\\') SKIP(161)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(168)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 169:
      if (eof) ADVANCE(173);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == 'A') ADVANCE(345);
      if (lookahead == 'F') ADVANCE(346);
      if (lookahead == 'V') ADVANCE(338);
      if (lookahead == '\\') SKIP(162)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(169)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 170:
      if (eof) ADVANCE(173);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '$') ADVANCE(331);
      if (lookahead == '-') ADVANCE(231);
      if (lookahead == 'A') ADVANCE(247);
      if (lookahead == 'F') ADVANCE(248);
      if (lookahead == 'V') ADVANCE(236);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(168)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(325);
      END_STATE();
    case 171:
      if (eof) ADVANCE(173);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == '$') ADVANCE(331);
      if (lookahead == ':') ADVANCE(392);
      if (lookahead == '@') ADVANCE(414);
      if (lookahead == 'A') ADVANCE(382);
      if (lookahead == 'F') ADVANCE(383);
      if (lookahead == 'V') ADVANCE(371);
      if (lookahead == '\\') ADVANCE(391);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(169)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (lookahead != 0) ADVANCE(391);
      END_STATE();
    case 172:
      if (eof) ADVANCE(173);
      if (lookahead == '#') ADVANCE(411);
      if (lookahead == '$') ADVANCE(331);
      if (lookahead == '@') ADVANCE(414);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'F') ADVANCE(405);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == '\\') ADVANCE(413);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(169)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (lookahead == ':') ADVANCE(434);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(370);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '\\') ADVANCE(19);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead == ':') ADVANCE(434);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ':') ADVANCE(434);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_from_command_token1);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_RUN);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsecret);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsecret);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DASH_DASHmount);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DASH_DASHmount);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_version_major_minor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_feature_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_option_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-') ADVANCE(262);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-') ADVANCE(254);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-') ADVANCE(257);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-') ADVANCE(302);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '=') ADVANCE(292);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'E') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'G') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'G') ADVANCE(190);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'I') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'M') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'M') ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'N') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'N') ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'O') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'O') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'O') ADVANCE(241);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'R') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'R') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'R') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'R') ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'R') ADVANCE(246);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'S') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'U') ADVANCE(243);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(286);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'c') ADVANCE(255);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'c') ADVANCE(305);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'c') ADVANCE(277);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'd') ADVANCE(362);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'd') ADVANCE(354);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == 'm') ADVANCE(295);
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead == 'p') ADVANCE(303);
      if (lookahead == 's') ADVANCE(263);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == 's') ADVANCE(275);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(364);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == 'o') ADVANCE(233);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'f') ADVANCE(300);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'g') ADVANCE(266);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'g') ADVANCE(269);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'h') ADVANCE(366);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'h') ADVANCE(356);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'h') ADVANCE(265);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'i') ADVANCE(285);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'i') ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'i') ADVANCE(318);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(264);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(296);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(271);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'm') ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'n') ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'n') ADVANCE(312);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'n') ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'o') ADVANCE(316);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'o') ADVANCE(320);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'o') ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'o') ADVANCE(306);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'o') ADVANCE(307);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'p') ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'p') ADVANCE(308);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead == 'u') ADVANCE(309);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(321);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(270);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(289);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(282);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 's') ADVANCE(276);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 't') ADVANCE(304);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 't') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 't') ADVANCE(360);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'u') ADVANCE(291);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'v') ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'v') ADVANCE(281);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'w') ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'w') ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'y') ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_double_quoted_escape_sequence);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_single_quoted_escape_sequence);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(') ADVANCE(159);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      if (lookahead == '(') ADVANCE(159);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(438);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_allow_privileged);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_allow_privileged);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_push);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_push);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_no_cache);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_no_cache);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_entrypoint);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_entrypoint);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_privileged);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_privileged);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_network_none);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_network_none);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ssh);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ssh);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == ')') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(325);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'E') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'G') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'G') ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'I') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'M') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'M') ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'N') ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'O') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'O') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'O') ADVANCE(376);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'R') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'R') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'R') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'R') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'R') ADVANCE(381);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'U') ADVANCE(378);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'E') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'G') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'G') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'I') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'M') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'M') ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'N') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'N') ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'O') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'O') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'O') ADVANCE(398);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'R') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'R') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'R') ADVANCE(395);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'R') ADVANCE(403);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'U') ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(434);
      if (lookahead == 'E') ADVANCE(424);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(434);
      if (lookahead == 'G') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(434);
      if (lookahead == 'I') ADVANCE(421);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(434);
      if (lookahead == 'M') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(434);
      if (lookahead == 'N') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(434);
      if (lookahead == 'O') ADVANCE(418);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(434);
      if (lookahead == 'O') ADVANCE(419);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(434);
      if (lookahead == 'R') ADVANCE(416);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(434);
      if (lookahead == 'R') ADVANCE(420);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(434);
      if (lookahead == 'R') ADVANCE(425);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(434);
      if (lookahead == 'S') ADVANCE(417);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(434);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'G') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'M') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'N') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'O') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'R') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'R') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'U') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(86);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 167},
  [2] = {.lex_state = 30},
  [3] = {.lex_state = 30},
  [4] = {.lex_state = 30},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 30},
  [7] = {.lex_state = 31},
  [8] = {.lex_state = 170},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 171},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 31},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 170},
  [17] = {.lex_state = 171},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 171},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 33},
  [22] = {.lex_state = 31},
  [23] = {.lex_state = 172},
  [24] = {.lex_state = 31},
  [25] = {.lex_state = 31},
  [26] = {.lex_state = 33},
  [27] = {.lex_state = 172},
  [28] = {.lex_state = 33},
  [29] = {.lex_state = 33},
  [30] = {.lex_state = 31},
  [31] = {.lex_state = 33},
  [32] = {.lex_state = 31},
  [33] = {.lex_state = 33},
  [34] = {.lex_state = 31},
  [35] = {.lex_state = 167},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 39, .external_lex_state = 2},
  [38] = {.lex_state = 167},
  [39] = {.lex_state = 38, .external_lex_state = 2},
  [40] = {.lex_state = 165},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 38, .external_lex_state = 2},
  [43] = {.lex_state = 39, .external_lex_state = 2},
  [44] = {.lex_state = 39, .external_lex_state = 2},
  [45] = {.lex_state = 165},
  [46] = {.lex_state = 40, .external_lex_state = 2},
  [47] = {.lex_state = 170},
  [48] = {.lex_state = 40, .external_lex_state = 2},
  [49] = {.lex_state = 171},
  [50] = {.lex_state = 167},
  [51] = {.lex_state = 171},
  [52] = {.lex_state = 171},
  [53] = {.lex_state = 170},
  [54] = {.lex_state = 167},
  [55] = {.lex_state = 172},
  [56] = {.lex_state = 167},
  [57] = {.lex_state = 41, .external_lex_state = 2},
  [58] = {.lex_state = 167},
  [59] = {.lex_state = 37},
  [60] = {.lex_state = 41, .external_lex_state = 2},
  [61] = {.lex_state = 167},
  [62] = {.lex_state = 172},
  [63] = {.lex_state = 37},
  [64] = {.lex_state = 167},
  [65] = {.lex_state = 39, .external_lex_state = 2},
  [66] = {.lex_state = 51, .external_lex_state = 2},
  [67] = {.lex_state = 165},
  [68] = {.lex_state = 38, .external_lex_state = 2},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 38, .external_lex_state = 2},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 39, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 16},
  [84] = {.lex_state = 39, .external_lex_state = 2},
  [85] = {.lex_state = 16},
  [86] = {.lex_state = 13},
  [87] = {.lex_state = 16},
  [88] = {.lex_state = 167},
  [89] = {.lex_state = 16},
  [90] = {.lex_state = 16},
  [91] = {.lex_state = 165},
  [92] = {.lex_state = 51, .external_lex_state = 2},
  [93] = {.lex_state = 167},
  [94] = {.lex_state = 167, .external_lex_state = 3},
  [95] = {.lex_state = 167},
  [96] = {.lex_state = 51, .external_lex_state = 2},
  [97] = {.lex_state = 51, .external_lex_state = 2},
  [98] = {.lex_state = 51, .external_lex_state = 2},
  [99] = {.lex_state = 40, .external_lex_state = 2},
  [100] = {.lex_state = 167},
  [101] = {.lex_state = 40, .external_lex_state = 2},
  [102] = {.lex_state = 167},
  [103] = {.lex_state = 167, .external_lex_state = 3},
  [104] = {.lex_state = 167},
  [105] = {.lex_state = 51, .external_lex_state = 2},
  [106] = {.lex_state = 167},
  [107] = {.lex_state = 167},
  [108] = {.lex_state = 167},
  [109] = {.lex_state = 167},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 167},
  [112] = {.lex_state = 167},
  [113] = {.lex_state = 167},
  [114] = {.lex_state = 167},
  [115] = {.lex_state = 167},
  [116] = {.lex_state = 167},
  [117] = {.lex_state = 37},
  [118] = {.lex_state = 167},
  [119] = {.lex_state = 167},
  [120] = {.lex_state = 167},
  [121] = {.lex_state = 167},
  [122] = {.lex_state = 41, .external_lex_state = 2},
  [123] = {.lex_state = 167},
  [124] = {.lex_state = 41, .external_lex_state = 2},
  [125] = {.lex_state = 167},
  [126] = {.lex_state = 167},
  [127] = {.lex_state = 167},
  [128] = {.lex_state = 37},
  [129] = {.lex_state = 167},
  [130] = {.lex_state = 167},
  [131] = {.lex_state = 167},
  [132] = {.lex_state = 167},
  [133] = {.lex_state = 167},
  [134] = {.lex_state = 167},
  [135] = {.lex_state = 167},
  [136] = {.lex_state = 167},
  [137] = {.lex_state = 167},
  [138] = {.lex_state = 167},
  [139] = {.lex_state = 167},
  [140] = {.lex_state = 167},
  [141] = {.lex_state = 167},
  [142] = {.lex_state = 167},
  [143] = {.lex_state = 167},
  [144] = {.lex_state = 167},
  [145] = {.lex_state = 167},
  [146] = {.lex_state = 165},
  [147] = {.lex_state = 51, .external_lex_state = 2},
  [148] = {.lex_state = 51, .external_lex_state = 2},
  [149] = {.lex_state = 51, .external_lex_state = 2},
  [150] = {.lex_state = 74},
  [151] = {.lex_state = 16},
  [152] = {.lex_state = 42},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 18},
  [155] = {.lex_state = 51, .external_lex_state = 2},
  [156] = {.lex_state = 24},
  [157] = {.lex_state = 18},
  [158] = {.lex_state = 16},
  [159] = {.lex_state = 24},
  [160] = {.lex_state = 74},
  [161] = {.lex_state = 165},
  [162] = {.lex_state = 51, .external_lex_state = 2},
  [163] = {.lex_state = 42},
  [164] = {.lex_state = 11},
  [165] = {.lex_state = 18},
  [166] = {.lex_state = 18},
  [167] = {.lex_state = 18},
  [168] = {.lex_state = 18},
  [169] = {.lex_state = 18},
  [170] = {.lex_state = 13},
  [171] = {.lex_state = 18},
  [172] = {.lex_state = 51, .external_lex_state = 2},
  [173] = {.lex_state = 13},
  [174] = {.lex_state = 18},
  [175] = {.lex_state = 18},
  [176] = {.lex_state = 18},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 0, .external_lex_state = 2},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 0, .external_lex_state = 2},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 165},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 2},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 55},
  [210] = {.lex_state = 55},
  [211] = {.lex_state = 11},
  [212] = {.lex_state = 11},
  [213] = {.lex_state = 165},
  [214] = {.lex_state = 165},
  [215] = {.lex_state = 55},
  [216] = {.lex_state = 165},
  [217] = {.lex_state = 55},
  [218] = {.lex_state = 55},
  [219] = {.lex_state = 55},
  [220] = {.lex_state = 11},
  [221] = {.lex_state = 11},
  [222] = {.lex_state = 57},
  [223] = {.lex_state = 11},
  [224] = {.lex_state = 165},
  [225] = {.lex_state = 11},
  [226] = {.lex_state = 55},
  [227] = {.lex_state = 55},
  [228] = {.lex_state = 55},
  [229] = {.lex_state = 165},
  [230] = {.lex_state = 11},
  [231] = {.lex_state = 57},
  [232] = {.lex_state = 55},
  [233] = {.lex_state = 11},
  [234] = {.lex_state = 55},
  [235] = {.lex_state = 55},
  [236] = {.lex_state = 55},
  [237] = {.lex_state = 55},
  [238] = {.lex_state = 55},
  [239] = {.lex_state = 55},
  [240] = {.lex_state = 55},
  [241] = {.lex_state = 11},
  [242] = {.lex_state = 11},
  [243] = {.lex_state = 11},
  [244] = {.lex_state = 11},
  [245] = {.lex_state = 11},
  [246] = {.lex_state = 11},
  [247] = {.lex_state = 57},
  [248] = {.lex_state = 11},
  [249] = {.lex_state = 11},
  [250] = {.lex_state = 11},
  [251] = {.lex_state = 57},
  [252] = {.lex_state = 11},
  [253] = {.lex_state = 11},
  [254] = {.lex_state = 11},
  [255] = {.lex_state = 11},
  [256] = {.lex_state = 11},
  [257] = {.lex_state = 11},
  [258] = {.lex_state = 11},
  [259] = {.lex_state = 11},
  [260] = {.lex_state = 11},
  [261] = {.lex_state = 11},
  [262] = {.lex_state = 11},
  [263] = {.lex_state = 11},
  [264] = {.lex_state = 11},
  [265] = {.lex_state = 11},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 13},
  [268] = {.lex_state = 13},
  [269] = {.lex_state = 156},
  [270] = {.lex_state = 13},
  [271] = {.lex_state = 13},
  [272] = {.lex_state = 13},
  [273] = {.lex_state = 13},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 13},
  [276] = {.lex_state = 13},
  [277] = {.lex_state = 13},
  [278] = {.lex_state = 13},
  [279] = {.lex_state = 57},
  [280] = {.lex_state = 13},
  [281] = {.lex_state = 13},
  [282] = {.lex_state = 160},
  [283] = {.lex_state = 13},
  [284] = {.lex_state = 13},
  [285] = {.lex_state = 13},
  [286] = {.lex_state = 13},
  [287] = {.lex_state = 13},
  [288] = {.lex_state = 13},
  [289] = {.lex_state = 13},
  [290] = {.lex_state = 13},
  [291] = {.lex_state = 13},
  [292] = {.lex_state = 13},
  [293] = {.lex_state = 156},
  [294] = {.lex_state = 13},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 156},
  [298] = {.lex_state = 57},
  [299] = {.lex_state = 13},
  [300] = {.lex_state = 156},
  [301] = {.lex_state = 13},
  [302] = {.lex_state = 57},
  [303] = {.lex_state = 13},
  [304] = {.lex_state = 13},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 156},
  [307] = {.lex_state = 13},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 13},
  [316] = {.lex_state = 13},
  [317] = {.lex_state = 57},
  [318] = {.lex_state = 57},
  [319] = {.lex_state = 57},
  [320] = {.lex_state = 160},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 55},
  [323] = {.lex_state = 156},
  [324] = {.lex_state = 13},
  [325] = {.lex_state = 160},
  [326] = {.lex_state = 160},
  [327] = {.lex_state = 160},
  [328] = {.lex_state = 160},
  [329] = {.lex_state = 160},
  [330] = {.lex_state = 160},
  [331] = {.lex_state = 160},
  [332] = {.lex_state = 160},
  [333] = {.lex_state = 160},
  [334] = {.lex_state = 160},
  [335] = {.lex_state = 156},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_VERSION] = ACTIONS(1),
    [anon_sym_ARG] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_RUN] = ACTIONS(1),
    [anon_sym_DASH_DASHsecret] = ACTIONS(1),
    [anon_sym_DASH_DASHmount] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_version_major_minor] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH2] = ACTIONS(1),
    [sym_double_quoted_escape_sequence] = ACTIONS(1),
    [sym_single_quoted_escape_sequence] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_push] = ACTIONS(1),
    [sym_no_cache] = ACTIONS(1),
    [sym_entrypoint] = ACTIONS(1),
    [sym_privileged] = ACTIONS(1),
    [sym_network_none] = ACTIONS(1),
    [sym_ssh] = ACTIONS(1),
    [sym_expr] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_shell_fragment_token1] = ACTIONS(1),
    [aux_sym_shell_fragment_token3] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(321),
    [sym_version_command] = STATE(38),
    [sym_arg_command] = STATE(38),
    [sym_from_command] = STATE(38),
    [sym_target] = STATE(38),
    [aux_sym_source_file_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_VERSION] = ACTIONS(5),
    [anon_sym_ARG] = ACTIONS(7),
    [anon_sym_FROM] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH,
    ACTIONS(19), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(22), 1,
      anon_sym_BSLASH2,
    ACTIONS(25), 1,
      anon_sym_DOLLAR2,
    STATE(2), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(15), 11,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHmount,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [31] = 6,
    ACTIONS(30), 1,
      anon_sym_DASH_DASH,
    ACTIONS(32), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(34), 1,
      anon_sym_BSLASH2,
    ACTIONS(36), 1,
      anon_sym_DOLLAR2,
    STATE(2), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(28), 11,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHmount,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [62] = 2,
    ACTIONS(40), 2,
      anon_sym_DASH_DASH,
      anon_sym_BSLASH2,
    ACTIONS(38), 13,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHmount,
      aux_sym_unquoted_string_token1,
      anon_sym_DOLLAR2,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [82] = 9,
    ACTIONS(42), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(44), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(46), 1,
      anon_sym_DASH_DASH,
    ACTIONS(50), 1,
      aux_sym_shell_fragment_token1,
    STATE(13), 1,
      aux_sym_run_command_repeat1,
    STATE(159), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(280), 1,
      sym_shell_fragment,
    ACTIONS(52), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(48), 6,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
  [116] = 2,
    ACTIONS(56), 2,
      anon_sym_DASH_DASH,
      anon_sym_BSLASH2,
    ACTIONS(54), 13,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHmount,
      aux_sym_unquoted_string_token1,
      anon_sym_DOLLAR2,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [136] = 9,
    ACTIONS(42), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(44), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(50), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(58), 1,
      anon_sym_DASH_DASH,
    STATE(5), 1,
      aux_sym_run_command_repeat1,
    STATE(159), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(275), 1,
      sym_shell_fragment,
    ACTIONS(52), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(60), 6,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
  [170] = 6,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(65), 1,
      anon_sym_BSLASH2,
    ACTIONS(68), 1,
      anon_sym_DOLLAR2,
    STATE(8), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(15), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH2,
      sym_identifier,
      sym_comment,
  [196] = 7,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR2,
    ACTIONS(79), 1,
      sym_expr,
    ACTIONS(75), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(71), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(265), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [224] = 5,
    ACTIONS(85), 1,
      anon_sym_DOLLAR2,
    ACTIONS(87), 1,
      aux_sym_image_name_token2,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      anon_sym_COLON2,
      anon_sym_AT,
    STATE(19), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(83), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
  [248] = 7,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR2,
    ACTIONS(89), 1,
      sym_expr,
    ACTIONS(75), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(71), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(256), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [276] = 7,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR2,
    ACTIONS(91), 1,
      sym_expr,
    ACTIONS(75), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(71), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(245), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [304] = 6,
    ACTIONS(93), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(96), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(104), 1,
      aux_sym_shell_fragment_token1,
    STATE(13), 1,
      aux_sym_run_command_repeat1,
    ACTIONS(99), 3,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(101), 6,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
  [330] = 7,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR2,
    ACTIONS(106), 1,
      sym_expr,
    ACTIONS(75), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(71), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(259), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [358] = 7,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR2,
    ACTIONS(108), 1,
      sym_expr,
    ACTIONS(75), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(71), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(262), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [386] = 6,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(112), 1,
      anon_sym_BSLASH2,
    ACTIONS(114), 1,
      anon_sym_DOLLAR2,
    STATE(8), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(28), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH2,
      sym_identifier,
      sym_comment,
  [412] = 5,
    ACTIONS(85), 1,
      anon_sym_DOLLAR2,
    ACTIONS(120), 1,
      aux_sym_image_name_token2,
    ACTIONS(116), 3,
      ts_builtin_sym_end,
      anon_sym_COLON2,
      anon_sym_AT,
    STATE(10), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(118), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
  [436] = 7,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR2,
    ACTIONS(122), 1,
      sym_expr,
    ACTIONS(75), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(71), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(250), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [464] = 5,
    ACTIONS(128), 1,
      anon_sym_DOLLAR2,
    ACTIONS(131), 1,
      aux_sym_image_name_token2,
    ACTIONS(124), 3,
      ts_builtin_sym_end,
      anon_sym_COLON2,
      anon_sym_AT,
    STATE(19), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(126), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
  [488] = 7,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR2,
    ACTIONS(134), 1,
      sym_expr,
    ACTIONS(75), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(71), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(241), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [516] = 7,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR2,
    ACTIONS(136), 1,
      sym_expr,
    ACTIONS(75), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(71), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(242), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [544] = 2,
    ACTIONS(140), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(138), 11,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHmount,
      anon_sym_DASH_DASH,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [561] = 5,
    ACTIONS(146), 1,
      anon_sym_DOLLAR2,
    ACTIONS(148), 1,
      aux_sym_image_tag_token1,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
    STATE(27), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
    ACTIONS(144), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
  [584] = 2,
    ACTIONS(152), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(150), 11,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHmount,
      anon_sym_DASH_DASH,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [601] = 2,
    ACTIONS(156), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(154), 11,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHmount,
      anon_sym_DASH_DASH,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [618] = 6,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    ACTIONS(160), 1,
      anon_sym_SQUOTE,
    ACTIONS(164), 1,
      anon_sym_DOLLAR2,
    ACTIONS(162), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(42), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(172), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [643] = 5,
    ACTIONS(170), 1,
      anon_sym_DOLLAR2,
    ACTIONS(173), 1,
      aux_sym_image_tag_token1,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
    STATE(27), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
    ACTIONS(168), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
  [666] = 6,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      anon_sym_SQUOTE,
    ACTIONS(182), 1,
      anon_sym_DOLLAR2,
    ACTIONS(180), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(3), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(22), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [691] = 6,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      anon_sym_SQUOTE,
    ACTIONS(182), 1,
      anon_sym_DOLLAR2,
    ACTIONS(180), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(3), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(25), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [716] = 2,
    ACTIONS(186), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(184), 11,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHmount,
      anon_sym_DASH_DASH,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [733] = 6,
    ACTIONS(114), 1,
      anon_sym_DOLLAR2,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      anon_sym_SQUOTE,
    ACTIONS(192), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(16), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(102), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [758] = 2,
    ACTIONS(196), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(194), 11,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHmount,
      anon_sym_DASH_DASH,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [775] = 6,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DOLLAR2,
    ACTIONS(202), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(63), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(216), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [800] = 2,
    ACTIONS(208), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(206), 11,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHmount,
      anon_sym_DASH_DASH,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [817] = 7,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 1,
      anon_sym_VERSION,
    ACTIONS(215), 1,
      anon_sym_ARG,
    ACTIONS(218), 1,
      anon_sym_FROM,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(224), 1,
      sym_comment,
    STATE(35), 5,
      sym_version_command,
      sym_arg_command,
      sym_from_command,
      sym_target,
      aux_sym_source_file_repeat1,
  [843] = 11,
    ACTIONS(227), 1,
      anon_sym_LF,
    ACTIONS(229), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    ACTIONS(233), 1,
      sym_allow_privileged,
    ACTIONS(235), 1,
      anon_sym_PLUS,
    ACTIONS(237), 1,
      aux_sym_image_name_token1,
    STATE(17), 1,
      sym_expansion,
    STATE(50), 1,
      sym_image_name,
    STATE(58), 1,
      sym_target_ref,
    STATE(123), 1,
      sym_image_spec,
    STATE(146), 1,
      aux_sym_from_command_repeat1,
  [877] = 5,
    ACTIONS(239), 1,
      anon_sym_DOLLAR2,
    ACTIONS(241), 1,
      aux_sym_image_name_token2,
    ACTIONS(81), 3,
      sym__dedent,
      anon_sym_COLON2,
      anon_sym_AT,
    ACTIONS(83), 3,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
    STATE(43), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
  [899] = 7,
    ACTIONS(5), 1,
      anon_sym_VERSION,
    ACTIONS(7), 1,
      anon_sym_ARG,
    ACTIONS(9), 1,
      anon_sym_FROM,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(245), 1,
      sym_comment,
    STATE(35), 5,
      sym_version_command,
      sym_arg_command,
      sym_from_command,
      sym_target,
      aux_sym_source_file_repeat1,
  [925] = 6,
    ACTIONS(17), 1,
      sym__dedent,
    ACTIONS(247), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(250), 1,
      anon_sym_BSLASH2,
    ACTIONS(253), 1,
      anon_sym_DOLLAR2,
    STATE(39), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(15), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_DASH_DASH2,
  [949] = 5,
    ACTIONS(260), 1,
      anon_sym_DOLLAR2,
    ACTIONS(263), 1,
      aux_sym_image_digest_token1,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(40), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
    ACTIONS(258), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [971] = 11,
    ACTIONS(229), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(266), 1,
      anon_sym_LF,
    ACTIONS(268), 1,
      anon_sym_DOLLAR,
    ACTIONS(270), 1,
      sym_allow_privileged,
    ACTIONS(272), 1,
      anon_sym_PLUS,
    ACTIONS(274), 1,
      aux_sym_image_name_token1,
    STATE(44), 1,
      sym_expansion,
    STATE(66), 1,
      sym_image_name,
    STATE(96), 1,
      sym_target_ref,
    STATE(161), 1,
      aux_sym_from_command_repeat1,
    STATE(178), 1,
      sym_image_spec,
  [1005] = 6,
    ACTIONS(30), 1,
      sym__dedent,
    ACTIONS(164), 1,
      anon_sym_DOLLAR2,
    ACTIONS(276), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(278), 1,
      anon_sym_BSLASH2,
    STATE(39), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(28), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_DASH_DASH2,
  [1029] = 5,
    ACTIONS(280), 1,
      anon_sym_DOLLAR2,
    ACTIONS(283), 1,
      aux_sym_image_name_token2,
    ACTIONS(124), 3,
      sym__dedent,
      anon_sym_COLON2,
      anon_sym_AT,
    ACTIONS(126), 3,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
    STATE(43), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
  [1051] = 5,
    ACTIONS(239), 1,
      anon_sym_DOLLAR2,
    ACTIONS(286), 1,
      aux_sym_image_name_token2,
    ACTIONS(116), 3,
      sym__dedent,
      anon_sym_COLON2,
      anon_sym_AT,
    ACTIONS(118), 3,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
    STATE(37), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
  [1073] = 5,
    ACTIONS(292), 1,
      anon_sym_DOLLAR2,
    ACTIONS(294), 1,
      aux_sym_image_digest_token1,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(40), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
    ACTIONS(290), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1095] = 5,
    ACTIONS(296), 1,
      anon_sym_DOLLAR2,
    ACTIONS(298), 1,
      aux_sym_image_tag_token1,
    ACTIONS(142), 2,
      sym__dedent,
      anon_sym_AT,
    ACTIONS(144), 3,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
    STATE(48), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [1116] = 2,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(54), 7,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH2,
      aux_sym_unquoted_string_token1,
      sym_identifier,
      sym_comment,
  [1131] = 5,
    ACTIONS(300), 1,
      anon_sym_DOLLAR2,
    ACTIONS(303), 1,
      aux_sym_image_tag_token1,
    ACTIONS(166), 2,
      sym__dedent,
      anon_sym_AT,
    ACTIONS(168), 3,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
    STATE(48), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [1152] = 2,
    ACTIONS(40), 4,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      anon_sym_COLON2,
      anon_sym_AT,
    ACTIONS(38), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
      aux_sym_image_name_token2,
  [1167] = 6,
    ACTIONS(310), 1,
      anon_sym_COLON2,
    ACTIONS(312), 1,
      anon_sym_AT,
    STATE(88), 1,
      sym_image_tag,
    STATE(145), 1,
      sym_image_digest,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(308), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1190] = 2,
    ACTIONS(314), 4,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      anon_sym_COLON2,
      anon_sym_AT,
    ACTIONS(316), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
      aux_sym_image_name_token2,
  [1205] = 2,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      anon_sym_COLON2,
      anon_sym_AT,
    ACTIONS(54), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
      aux_sym_image_name_token2,
  [1220] = 2,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(38), 7,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH2,
      aux_sym_unquoted_string_token1,
      sym_identifier,
      sym_comment,
  [1235] = 4,
    ACTIONS(322), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(318), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(56), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(320), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1253] = 2,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      anon_sym_AT,
    ACTIONS(54), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
      aux_sym_image_tag_token1,
  [1267] = 4,
    ACTIONS(322), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(61), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(326), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1285] = 5,
    ACTIONS(256), 1,
      sym__dedent,
    ACTIONS(328), 1,
      anon_sym_DOLLAR2,
    ACTIONS(331), 1,
      aux_sym_image_digest_token1,
    ACTIONS(258), 3,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
    STATE(57), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [1305] = 4,
    ACTIONS(322), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(334), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(64), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(336), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1323] = 5,
    ACTIONS(338), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(341), 1,
      anon_sym_BSLASH2,
    ACTIONS(344), 1,
      anon_sym_DOLLAR2,
    ACTIONS(15), 3,
      anon_sym_DASH_DASHplatform,
      sym_allow_privileged,
      anon_sym_PLUS,
    STATE(59), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1343] = 5,
    ACTIONS(288), 1,
      sym__dedent,
    ACTIONS(347), 1,
      anon_sym_DOLLAR2,
    ACTIONS(349), 1,
      aux_sym_image_digest_token1,
    ACTIONS(290), 3,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
    STATE(57), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [1363] = 4,
    ACTIONS(355), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(351), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(61), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(353), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1381] = 2,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      anon_sym_AT,
    ACTIONS(38), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
      aux_sym_image_tag_token1,
  [1395] = 5,
    ACTIONS(204), 1,
      anon_sym_DOLLAR2,
    ACTIONS(358), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(360), 1,
      anon_sym_BSLASH2,
    ACTIONS(28), 3,
      anon_sym_DASH_DASHplatform,
      sym_allow_privileged,
      anon_sym_PLUS,
    STATE(59), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1415] = 4,
    ACTIONS(322), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(362), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(61), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(364), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1433] = 2,
    ACTIONS(314), 4,
      sym__dedent,
      anon_sym_DOLLAR2,
      anon_sym_COLON2,
      anon_sym_AT,
    ACTIONS(316), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      aux_sym_image_name_token2,
  [1446] = 5,
    ACTIONS(366), 1,
      anon_sym_COLON2,
    ACTIONS(368), 1,
      anon_sym_AT,
    STATE(110), 1,
      sym_image_tag,
    STATE(193), 1,
      sym_image_digest,
    ACTIONS(306), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [1465] = 2,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      sym_comment,
    ACTIONS(38), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      aux_sym_image_digest_token1,
  [1478] = 2,
    ACTIONS(40), 3,
      sym__dedent,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(38), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_DASH_DASH2,
      aux_sym_unquoted_string_token1,
  [1491] = 5,
    ACTIONS(370), 1,
      anon_sym_ARG,
    ACTIONS(372), 1,
      anon_sym_FROM,
    ACTIONS(374), 1,
      anon_sym_RUN,
    ACTIONS(376), 1,
      sym__dedent,
    STATE(82), 4,
      sym_arg_command,
      sym_from_command,
      sym_run_command,
      aux_sym_target_repeat1,
  [1510] = 2,
    ACTIONS(56), 3,
      sym__dedent,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(54), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_DASH_DASH2,
      aux_sym_unquoted_string_token1,
  [1523] = 6,
    ACTIONS(28), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_LF,
    ACTIONS(378), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(380), 1,
      anon_sym_BSLASH2,
    ACTIONS(382), 1,
      anon_sym_DOLLAR2,
    STATE(86), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1544] = 5,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    ACTIONS(386), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(390), 1,
      anon_sym_DOLLAR2,
    ACTIONS(388), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(79), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1563] = 5,
    ACTIONS(390), 1,
      anon_sym_DOLLAR2,
    ACTIONS(392), 1,
      anon_sym_DQUOTE,
    ACTIONS(394), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(396), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(76), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1582] = 2,
    ACTIONS(38), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      aux_sym_image_name_token2,
    ACTIONS(40), 4,
      sym__dedent,
      anon_sym_DOLLAR2,
      anon_sym_COLON2,
      anon_sym_AT,
  [1595] = 5,
    ACTIONS(370), 1,
      anon_sym_ARG,
    ACTIONS(372), 1,
      anon_sym_FROM,
    ACTIONS(374), 1,
      anon_sym_RUN,
    ACTIONS(398), 1,
      sym__dedent,
    STATE(69), 4,
      sym_arg_command,
      sym_from_command,
      sym_run_command,
      aux_sym_target_repeat1,
  [1614] = 5,
    ACTIONS(390), 1,
      anon_sym_DOLLAR2,
    ACTIONS(400), 1,
      anon_sym_DQUOTE,
    ACTIONS(402), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(404), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(83), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1633] = 5,
    ACTIONS(390), 1,
      anon_sym_DOLLAR2,
    ACTIONS(406), 1,
      anon_sym_DQUOTE,
    ACTIONS(408), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(410), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(78), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1652] = 5,
    ACTIONS(390), 1,
      anon_sym_DOLLAR2,
    ACTIONS(402), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(412), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(83), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1671] = 5,
    ACTIONS(390), 1,
      anon_sym_DOLLAR2,
    ACTIONS(402), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(83), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1690] = 5,
    ACTIONS(370), 1,
      anon_sym_ARG,
    ACTIONS(372), 1,
      anon_sym_FROM,
    ACTIONS(374), 1,
      anon_sym_RUN,
    ACTIONS(416), 1,
      sym__dedent,
    STATE(82), 4,
      sym_arg_command,
      sym_from_command,
      sym_run_command,
      aux_sym_target_repeat1,
  [1709] = 5,
    ACTIONS(370), 1,
      anon_sym_ARG,
    ACTIONS(372), 1,
      anon_sym_FROM,
    ACTIONS(374), 1,
      anon_sym_RUN,
    ACTIONS(376), 1,
      sym__dedent,
    STATE(80), 4,
      sym_arg_command,
      sym_from_command,
      sym_run_command,
      aux_sym_target_repeat1,
  [1728] = 5,
    ACTIONS(418), 1,
      anon_sym_ARG,
    ACTIONS(421), 1,
      anon_sym_FROM,
    ACTIONS(424), 1,
      anon_sym_RUN,
    ACTIONS(427), 1,
      sym__dedent,
    STATE(82), 4,
      sym_arg_command,
      sym_from_command,
      sym_run_command,
      aux_sym_target_repeat1,
  [1747] = 5,
    ACTIONS(429), 1,
      anon_sym_DQUOTE,
    ACTIONS(431), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(437), 1,
      anon_sym_DOLLAR2,
    ACTIONS(434), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(83), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1766] = 2,
    ACTIONS(54), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      aux_sym_image_name_token2,
    ACTIONS(56), 4,
      sym__dedent,
      anon_sym_DOLLAR2,
      anon_sym_COLON2,
      anon_sym_AT,
  [1779] = 5,
    ACTIONS(390), 1,
      anon_sym_DOLLAR2,
    ACTIONS(440), 1,
      anon_sym_DQUOTE,
    ACTIONS(442), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(444), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(87), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1798] = 6,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LF,
    ACTIONS(446), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(449), 1,
      anon_sym_BSLASH2,
    ACTIONS(452), 1,
      anon_sym_DOLLAR2,
    STATE(86), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1819] = 5,
    ACTIONS(390), 1,
      anon_sym_DOLLAR2,
    ACTIONS(402), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(455), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(83), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1838] = 4,
    ACTIONS(312), 1,
      anon_sym_AT,
    STATE(144), 1,
      sym_image_digest,
    ACTIONS(457), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(459), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1855] = 5,
    ACTIONS(390), 1,
      anon_sym_DOLLAR2,
    ACTIONS(461), 1,
      anon_sym_DQUOTE,
    ACTIONS(463), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(465), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(90), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1874] = 5,
    ACTIONS(390), 1,
      anon_sym_DOLLAR2,
    ACTIONS(402), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(467), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(83), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1893] = 2,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      sym_comment,
    ACTIONS(54), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      aux_sym_image_digest_token1,
  [1906] = 3,
    ACTIONS(469), 1,
      anon_sym_DASH_DASH2,
    STATE(98), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(318), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [1920] = 2,
    ACTIONS(194), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH2,
      sym_comment,
    ACTIONS(196), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1932] = 3,
    ACTIONS(475), 1,
      sym__indent,
    ACTIONS(471), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(473), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1946] = 2,
    ACTIONS(477), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH2,
      sym_comment,
    ACTIONS(479), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1958] = 3,
    ACTIONS(469), 1,
      anon_sym_DASH_DASH2,
    STATE(105), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(334), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [1972] = 3,
    ACTIONS(481), 1,
      anon_sym_DASH_DASH2,
    STATE(97), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(351), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [1986] = 3,
    ACTIONS(469), 1,
      anon_sym_DASH_DASH2,
    STATE(97), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(324), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2000] = 2,
    ACTIONS(56), 3,
      sym__dedent,
      anon_sym_DOLLAR2,
      anon_sym_AT,
    ACTIONS(54), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      aux_sym_image_tag_token1,
  [2012] = 2,
    ACTIONS(184), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH2,
      sym_comment,
    ACTIONS(186), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2024] = 2,
    ACTIONS(40), 3,
      sym__dedent,
      anon_sym_DOLLAR2,
      anon_sym_AT,
    ACTIONS(38), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      aux_sym_image_tag_token1,
  [2036] = 2,
    ACTIONS(484), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH2,
      sym_comment,
    ACTIONS(486), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2048] = 3,
    ACTIONS(492), 1,
      sym__indent,
    ACTIONS(488), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(490), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2062] = 2,
    ACTIONS(206), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH2,
      sym_comment,
    ACTIONS(208), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2074] = 3,
    ACTIONS(469), 1,
      anon_sym_DASH_DASH2,
    STATE(97), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(362), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2088] = 2,
    ACTIONS(150), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH2,
      sym_comment,
    ACTIONS(152), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2100] = 2,
    ACTIONS(494), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(496), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2111] = 2,
    ACTIONS(498), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(500), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2122] = 2,
    ACTIONS(502), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(504), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2133] = 3,
    ACTIONS(368), 1,
      anon_sym_AT,
    STATE(182), 1,
      sym_image_digest,
    ACTIONS(457), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2146] = 2,
    ACTIONS(506), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(508), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2157] = 2,
    ACTIONS(510), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(512), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2168] = 2,
    ACTIONS(514), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(516), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2179] = 2,
    ACTIONS(518), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(520), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2190] = 2,
    ACTIONS(522), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(524), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2201] = 2,
    ACTIONS(526), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(528), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2212] = 2,
    ACTIONS(40), 2,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(38), 4,
      anon_sym_DASH_DASHplatform,
      aux_sym_unquoted_string_token1,
      sym_allow_privileged,
      anon_sym_PLUS,
  [2223] = 2,
    ACTIONS(530), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(532), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2234] = 2,
    ACTIONS(534), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(536), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2245] = 2,
    ACTIONS(538), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(540), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2256] = 2,
    ACTIONS(542), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(544), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2267] = 2,
    ACTIONS(40), 2,
      sym__dedent,
      anon_sym_DOLLAR2,
    ACTIONS(38), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      aux_sym_image_digest_token1,
  [2278] = 2,
    ACTIONS(334), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(336), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2289] = 2,
    ACTIONS(56), 2,
      sym__dedent,
      anon_sym_DOLLAR2,
    ACTIONS(54), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      aux_sym_image_digest_token1,
  [2300] = 2,
    ACTIONS(546), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(548), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2311] = 2,
    ACTIONS(550), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(552), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2322] = 2,
    ACTIONS(554), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(556), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2333] = 2,
    ACTIONS(56), 2,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(54), 4,
      anon_sym_DASH_DASHplatform,
      aux_sym_unquoted_string_token1,
      sym_allow_privileged,
      anon_sym_PLUS,
  [2344] = 2,
    ACTIONS(558), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(560), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2355] = 2,
    ACTIONS(562), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(564), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2366] = 2,
    ACTIONS(566), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(568), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2377] = 2,
    ACTIONS(570), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(572), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2388] = 2,
    ACTIONS(574), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(576), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2399] = 2,
    ACTIONS(578), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(580), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2410] = 2,
    ACTIONS(582), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(584), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2421] = 2,
    ACTIONS(586), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(588), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2432] = 2,
    ACTIONS(590), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(592), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2443] = 2,
    ACTIONS(594), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(596), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2454] = 2,
    ACTIONS(598), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(600), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2465] = 2,
    ACTIONS(602), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(604), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2476] = 2,
    ACTIONS(606), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(608), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2487] = 2,
    ACTIONS(610), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(612), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2498] = 2,
    ACTIONS(614), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(616), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2509] = 2,
    ACTIONS(618), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(620), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2520] = 2,
    ACTIONS(622), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(624), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2531] = 5,
    ACTIONS(626), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(628), 1,
      sym_allow_privileged,
    ACTIONS(630), 1,
      anon_sym_PLUS,
    STATE(54), 1,
      sym_target_ref,
    STATE(187), 1,
      aux_sym_from_command_repeat1,
  [2547] = 1,
    ACTIONS(194), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_DASH_DASH2,
  [2555] = 1,
    ACTIONS(150), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_DASH_DASH2,
  [2563] = 1,
    ACTIONS(206), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_DASH_DASH2,
  [2571] = 3,
    STATE(159), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(272), 1,
      sym_shell_fragment,
    ACTIONS(52), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [2583] = 2,
    ACTIONS(56), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_DOLLAR2,
    ACTIONS(54), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
  [2593] = 3,
    ACTIONS(146), 1,
      anon_sym_DOLLAR2,
    ACTIONS(632), 1,
      aux_sym_image_tag_token1,
    STATE(23), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [2605] = 3,
    ACTIONS(292), 1,
      anon_sym_DOLLAR2,
    ACTIONS(634), 1,
      aux_sym_image_digest_token1,
    STATE(45), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [2617] = 4,
    ACTIONS(638), 1,
      anon_sym_SQUOTE,
    ACTIONS(640), 1,
      aux_sym_single_quoted_string_token1,
    STATE(165), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(636), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2631] = 1,
    ACTIONS(184), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_DASH_DASH2,
  [2639] = 3,
    ACTIONS(642), 1,
      anon_sym_LF,
    STATE(156), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(644), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [2651] = 4,
    ACTIONS(640), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(647), 1,
      anon_sym_SQUOTE,
    STATE(165), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(636), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2665] = 2,
    ACTIONS(40), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_DOLLAR2,
    ACTIONS(38), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
  [2675] = 3,
    ACTIONS(649), 1,
      anon_sym_LF,
    STATE(156), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(651), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [2687] = 3,
    STATE(159), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(288), 1,
      sym_shell_fragment,
    ACTIONS(52), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [2699] = 5,
    ACTIONS(626), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(628), 1,
      sym_allow_privileged,
    ACTIONS(653), 1,
      anon_sym_PLUS,
    STATE(92), 1,
      sym_target_ref,
    STATE(187), 1,
      aux_sym_from_command_repeat1,
  [2715] = 1,
    ACTIONS(477), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_DASH_DASH2,
  [2723] = 3,
    ACTIONS(296), 1,
      anon_sym_DOLLAR2,
    ACTIONS(655), 1,
      aux_sym_image_tag_token1,
    STATE(46), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [2735] = 3,
    ACTIONS(347), 1,
      anon_sym_DOLLAR2,
    ACTIONS(657), 1,
      aux_sym_image_digest_token1,
    STATE(60), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [2747] = 4,
    ACTIONS(662), 1,
      anon_sym_SQUOTE,
    ACTIONS(664), 1,
      aux_sym_single_quoted_string_token1,
    STATE(165), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(659), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2761] = 4,
    ACTIONS(669), 1,
      anon_sym_SQUOTE,
    ACTIONS(671), 1,
      aux_sym_single_quoted_string_token1,
    STATE(167), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(667), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2775] = 4,
    ACTIONS(640), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(673), 1,
      anon_sym_SQUOTE,
    STATE(165), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(636), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2789] = 4,
    ACTIONS(677), 1,
      anon_sym_SQUOTE,
    ACTIONS(679), 1,
      aux_sym_single_quoted_string_token1,
    STATE(169), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(675), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2803] = 4,
    ACTIONS(640), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(681), 1,
      anon_sym_SQUOTE,
    STATE(165), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(636), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2817] = 2,
    ACTIONS(38), 2,
      aux_sym_unquoted_string_token1,
      sym_comment,
    ACTIONS(40), 3,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
  [2827] = 4,
    ACTIONS(685), 1,
      anon_sym_SQUOTE,
    ACTIONS(687), 1,
      aux_sym_single_quoted_string_token1,
    STATE(175), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(683), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2841] = 1,
    ACTIONS(484), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_DASH_DASH2,
  [2849] = 2,
    ACTIONS(54), 2,
      aux_sym_unquoted_string_token1,
      sym_comment,
    ACTIONS(56), 3,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
  [2859] = 4,
    ACTIONS(691), 1,
      anon_sym_SQUOTE,
    ACTIONS(693), 1,
      aux_sym_single_quoted_string_token1,
    STATE(154), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(689), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2873] = 4,
    ACTIONS(640), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(695), 1,
      anon_sym_SQUOTE,
    STATE(165), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(636), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2887] = 4,
    ACTIONS(699), 1,
      anon_sym_SQUOTE,
    ACTIONS(701), 1,
      aux_sym_single_quoted_string_token1,
    STATE(157), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(697), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2901] = 1,
    ACTIONS(703), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2908] = 1,
    ACTIONS(334), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2915] = 1,
    ACTIONS(614), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2922] = 1,
    ACTIONS(546), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2929] = 1,
    ACTIONS(705), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2936] = 1,
    ACTIONS(618), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2943] = 1,
    ACTIONS(707), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2950] = 1,
    ACTIONS(709), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2957] = 1,
    ACTIONS(534), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2964] = 1,
    ACTIONS(594), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2971] = 4,
    ACTIONS(711), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(714), 1,
      sym_allow_privileged,
    ACTIONS(717), 1,
      anon_sym_PLUS,
    STATE(187), 1,
      aux_sym_from_command_repeat1,
  [2984] = 1,
    ACTIONS(554), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2991] = 1,
    ACTIONS(498), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2998] = 1,
    ACTIONS(550), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [3005] = 1,
    ACTIONS(562), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [3012] = 1,
    ACTIONS(518), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [3019] = 1,
    ACTIONS(622), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [3026] = 1,
    ACTIONS(506), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [3033] = 1,
    ACTIONS(510), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [3040] = 1,
    ACTIONS(514), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [3047] = 1,
    ACTIONS(522), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [3054] = 1,
    ACTIONS(530), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [3061] = 1,
    ACTIONS(494), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [3068] = 1,
    ACTIONS(542), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [3075] = 1,
    ACTIONS(566), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [3082] = 1,
    ACTIONS(570), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [3089] = 1,
    ACTIONS(574), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [3096] = 1,
    ACTIONS(582), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [3103] = 1,
    ACTIONS(586), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [3110] = 1,
    ACTIONS(590), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [3117] = 1,
    ACTIONS(606), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [3124] = 1,
    ACTIONS(610), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [3131] = 3,
    ACTIONS(719), 1,
      anon_sym_LBRACE,
    ACTIONS(721), 1,
      sym_variable,
    STATE(128), 1,
      sym__expansion_body,
  [3141] = 3,
    ACTIONS(723), 1,
      sym_version_major_minor,
    ACTIONS(725), 1,
      sym_feature_flag,
    STATE(217), 1,
      aux_sym_version_command_repeat1,
  [3151] = 3,
    ACTIONS(727), 1,
      anon_sym_LF,
    ACTIONS(729), 1,
      anon_sym_EQ,
    ACTIONS(731), 1,
      sym_comment,
  [3161] = 3,
    ACTIONS(733), 1,
      anon_sym_LF,
    ACTIONS(735), 1,
      anon_sym_EQ,
    ACTIONS(737), 1,
      sym_comment,
  [3171] = 1,
    ACTIONS(184), 3,
      anon_sym_DASH_DASHplatform,
      sym_allow_privileged,
      anon_sym_PLUS,
  [3177] = 1,
    ACTIONS(194), 3,
      anon_sym_DASH_DASHplatform,
      sym_allow_privileged,
      anon_sym_PLUS,
  [3183] = 3,
    ACTIONS(739), 1,
      anon_sym_LBRACE,
    ACTIONS(741), 1,
      sym_variable,
    STATE(173), 1,
      sym__expansion_body,
  [3193] = 1,
    ACTIONS(743), 3,
      anon_sym_DASH_DASHplatform,
      sym_allow_privileged,
      anon_sym_PLUS,
  [3199] = 3,
    ACTIONS(745), 1,
      sym_version_major_minor,
    ACTIONS(747), 1,
      sym_feature_flag,
    STATE(235), 1,
      aux_sym_version_command_repeat1,
  [3209] = 3,
    ACTIONS(749), 1,
      anon_sym_LBRACE,
    ACTIONS(751), 1,
      sym_variable,
    STATE(55), 1,
      sym__expansion_body,
  [3219] = 3,
    ACTIONS(753), 1,
      anon_sym_LBRACE,
    ACTIONS(755), 1,
      sym_variable,
    STATE(51), 1,
      sym__expansion_body,
  [3229] = 3,
    ACTIONS(757), 1,
      anon_sym_LF,
    ACTIONS(759), 1,
      anon_sym_EQ,
    ACTIONS(761), 1,
      sym_comment,
  [3239] = 3,
    ACTIONS(763), 1,
      anon_sym_LF,
    ACTIONS(765), 1,
      anon_sym_EQ,
    ACTIONS(767), 1,
      sym_comment,
  [3249] = 3,
    ACTIONS(769), 1,
      sym_identifier,
    ACTIONS(771), 1,
      sym_required,
    ACTIONS(773), 1,
      sym_global,
  [3259] = 3,
    ACTIONS(775), 1,
      anon_sym_LF,
    ACTIONS(777), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      sym_comment,
  [3269] = 1,
    ACTIONS(150), 3,
      anon_sym_DASH_DASHplatform,
      sym_allow_privileged,
      anon_sym_PLUS,
  [3275] = 3,
    ACTIONS(781), 1,
      anon_sym_LF,
    ACTIONS(783), 1,
      anon_sym_EQ,
    ACTIONS(785), 1,
      sym_comment,
  [3285] = 3,
    ACTIONS(787), 1,
      anon_sym_LBRACE,
    ACTIONS(789), 1,
      sym_variable,
    STATE(65), 1,
      sym__expansion_body,
  [3295] = 3,
    ACTIONS(791), 1,
      anon_sym_LBRACE,
    ACTIONS(793), 1,
      sym_variable,
    STATE(91), 1,
      sym__expansion_body,
  [3305] = 3,
    ACTIONS(753), 1,
      anon_sym_LBRACE,
    ACTIONS(795), 1,
      sym_variable,
    STATE(52), 1,
      sym__expansion_body,
  [3315] = 1,
    ACTIONS(206), 3,
      anon_sym_DASH_DASHplatform,
      sym_allow_privileged,
      anon_sym_PLUS,
  [3321] = 3,
    ACTIONS(797), 1,
      anon_sym_LF,
    ACTIONS(799), 1,
      anon_sym_EQ,
    ACTIONS(801), 1,
      sym_comment,
  [3331] = 3,
    ACTIONS(803), 1,
      sym_identifier,
    ACTIONS(805), 1,
      sym_required,
    ACTIONS(807), 1,
      sym_global,
  [3341] = 3,
    ACTIONS(809), 1,
      anon_sym_LBRACE,
    ACTIONS(811), 1,
      sym_variable,
    STATE(70), 1,
      sym__expansion_body,
  [3351] = 3,
    ACTIONS(813), 1,
      anon_sym_LF,
    ACTIONS(815), 1,
      anon_sym_EQ,
    ACTIONS(817), 1,
      sym_comment,
  [3361] = 3,
    ACTIONS(787), 1,
      anon_sym_LBRACE,
    ACTIONS(819), 1,
      sym_variable,
    STATE(84), 1,
      sym__expansion_body,
  [3371] = 3,
    ACTIONS(821), 1,
      sym_version_major_minor,
    ACTIONS(823), 1,
      sym_feature_flag,
    STATE(235), 1,
      aux_sym_version_command_repeat1,
  [3381] = 3,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      sym_variable,
    STATE(151), 1,
      sym__expansion_body,
  [3391] = 3,
    ACTIONS(830), 1,
      anon_sym_LBRACE,
    ACTIONS(832), 1,
      sym_variable,
    STATE(124), 1,
      sym__expansion_body,
  [3401] = 3,
    ACTIONS(834), 1,
      anon_sym_LBRACE,
    ACTIONS(836), 1,
      sym_variable,
    STATE(99), 1,
      sym__expansion_body,
  [3411] = 3,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      sym_variable,
    STATE(47), 1,
      sym__expansion_body,
  [3421] = 3,
    ACTIONS(842), 1,
      anon_sym_LBRACE,
    ACTIONS(844), 1,
      sym_variable,
    STATE(6), 1,
      sym__expansion_body,
  [3431] = 2,
    ACTIONS(846), 1,
      anon_sym_LF,
    ACTIONS(848), 1,
      sym_comment,
  [3438] = 2,
    ACTIONS(850), 1,
      anon_sym_LF,
    ACTIONS(852), 1,
      sym_comment,
  [3445] = 2,
    ACTIONS(206), 1,
      anon_sym_LF,
    ACTIONS(208), 1,
      sym_comment,
  [3452] = 2,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(152), 1,
      sym_comment,
  [3459] = 2,
    ACTIONS(854), 1,
      anon_sym_LF,
    ACTIONS(856), 1,
      sym_comment,
  [3466] = 2,
    ACTIONS(858), 1,
      anon_sym_LF,
    ACTIONS(860), 1,
      sym_comment,
  [3473] = 2,
    ACTIONS(862), 1,
      sym_identifier,
    ACTIONS(864), 1,
      sym_global,
  [3480] = 2,
    ACTIONS(866), 1,
      anon_sym_LF,
    ACTIONS(868), 1,
      sym_comment,
  [3487] = 2,
    ACTIONS(870), 1,
      anon_sym_LF,
    ACTIONS(872), 1,
      sym_comment,
  [3494] = 2,
    ACTIONS(874), 1,
      anon_sym_LF,
    ACTIONS(876), 1,
      sym_comment,
  [3501] = 2,
    ACTIONS(878), 1,
      sym_identifier,
    ACTIONS(880), 1,
      sym_global,
  [3508] = 2,
    ACTIONS(882), 1,
      anon_sym_LF,
    ACTIONS(884), 1,
      sym_comment,
  [3515] = 2,
    ACTIONS(886), 1,
      anon_sym_LF,
    ACTIONS(888), 1,
      sym_comment,
  [3522] = 2,
    ACTIONS(194), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
  [3529] = 2,
    ACTIONS(890), 1,
      anon_sym_LF,
    ACTIONS(892), 1,
      sym_comment,
  [3536] = 2,
    ACTIONS(894), 1,
      anon_sym_LF,
    ACTIONS(896), 1,
      sym_comment,
  [3543] = 2,
    ACTIONS(898), 1,
      anon_sym_LF,
    ACTIONS(900), 1,
      sym_comment,
  [3550] = 2,
    ACTIONS(902), 1,
      anon_sym_LF,
    ACTIONS(904), 1,
      sym_comment,
  [3557] = 2,
    ACTIONS(906), 1,
      anon_sym_LF,
    ACTIONS(908), 1,
      sym_comment,
  [3564] = 2,
    ACTIONS(910), 1,
      anon_sym_LF,
    ACTIONS(912), 1,
      sym_comment,
  [3571] = 2,
    ACTIONS(184), 1,
      anon_sym_LF,
    ACTIONS(186), 1,
      sym_comment,
  [3578] = 2,
    ACTIONS(914), 1,
      anon_sym_LF,
    ACTIONS(916), 1,
      sym_comment,
  [3585] = 2,
    ACTIONS(918), 1,
      anon_sym_LF,
    ACTIONS(920), 1,
      sym_comment,
  [3592] = 2,
    ACTIONS(922), 1,
      anon_sym_LF,
    ACTIONS(924), 1,
      sym_comment,
  [3599] = 2,
    ACTIONS(926), 1,
      anon_sym_LF,
    ACTIONS(928), 1,
      sym_comment,
  [3606] = 1,
    ACTIONS(930), 1,
      anon_sym_RBRACE,
  [3610] = 1,
    ACTIONS(932), 1,
      anon_sym_LF,
  [3614] = 1,
    ACTIONS(934), 1,
      anon_sym_LF,
  [3618] = 1,
    ACTIONS(936), 1,
      sym_option_identifier,
  [3622] = 1,
    ACTIONS(938), 1,
      anon_sym_LF,
  [3626] = 1,
    ACTIONS(940), 1,
      anon_sym_LF,
  [3630] = 1,
    ACTIONS(942), 1,
      anon_sym_LF,
  [3634] = 1,
    ACTIONS(944), 1,
      anon_sym_LF,
  [3638] = 1,
    ACTIONS(946), 1,
      anon_sym_RBRACE,
  [3642] = 1,
    ACTIONS(948), 1,
      anon_sym_LF,
  [3646] = 1,
    ACTIONS(950), 1,
      anon_sym_LF,
  [3650] = 1,
    ACTIONS(952), 1,
      anon_sym_LF,
  [3654] = 1,
    ACTIONS(954), 1,
      anon_sym_LF,
  [3658] = 1,
    ACTIONS(956), 1,
      sym_identifier,
  [3662] = 1,
    ACTIONS(958), 1,
      anon_sym_LF,
  [3666] = 1,
    ACTIONS(960), 1,
      anon_sym_LF,
  [3670] = 1,
    ACTIONS(962), 1,
      aux_sym__expansion_body_token1,
  [3674] = 1,
    ACTIONS(964), 1,
      anon_sym_LF,
  [3678] = 1,
    ACTIONS(966), 1,
      anon_sym_LF,
  [3682] = 1,
    ACTIONS(968), 1,
      anon_sym_LF,
  [3686] = 1,
    ACTIONS(970), 1,
      anon_sym_LF,
  [3690] = 1,
    ACTIONS(972), 1,
      anon_sym_LF,
  [3694] = 1,
    ACTIONS(974), 1,
      anon_sym_LF,
  [3698] = 1,
    ACTIONS(976), 1,
      anon_sym_LF,
  [3702] = 1,
    ACTIONS(978), 1,
      anon_sym_LF,
  [3706] = 1,
    ACTIONS(980), 1,
      anon_sym_LF,
  [3710] = 1,
    ACTIONS(982), 1,
      anon_sym_LF,
  [3714] = 1,
    ACTIONS(984), 1,
      aux_sym_from_command_token1,
  [3718] = 1,
    ACTIONS(986), 1,
      anon_sym_LF,
  [3722] = 1,
    ACTIONS(988), 1,
      anon_sym_RBRACE,
  [3726] = 1,
    ACTIONS(990), 1,
      anon_sym_RBRACE,
  [3730] = 1,
    ACTIONS(992), 1,
      aux_sym_from_command_token1,
  [3734] = 1,
    ACTIONS(994), 1,
      sym_identifier,
  [3738] = 1,
    ACTIONS(996), 1,
      anon_sym_LF,
  [3742] = 1,
    ACTIONS(998), 1,
      aux_sym_from_command_token1,
  [3746] = 1,
    ACTIONS(1000), 1,
      anon_sym_LF,
  [3750] = 1,
    ACTIONS(1002), 1,
      sym_identifier,
  [3754] = 1,
    ACTIONS(1004), 1,
      anon_sym_LF,
  [3758] = 1,
    ACTIONS(1006), 1,
      anon_sym_LF,
  [3762] = 1,
    ACTIONS(1008), 1,
      anon_sym_RBRACE,
  [3766] = 1,
    ACTIONS(1010), 1,
      aux_sym_from_command_token1,
  [3770] = 1,
    ACTIONS(1012), 1,
      anon_sym_LF,
  [3774] = 1,
    ACTIONS(1014), 1,
      anon_sym_RBRACE,
  [3778] = 1,
    ACTIONS(1016), 1,
      anon_sym_RBRACE,
  [3782] = 1,
    ACTIONS(1018), 1,
      anon_sym_RBRACE,
  [3786] = 1,
    ACTIONS(1020), 1,
      anon_sym_RBRACE,
  [3790] = 1,
    ACTIONS(1022), 1,
      anon_sym_RBRACE,
  [3794] = 1,
    ACTIONS(1024), 1,
      anon_sym_RBRACE,
  [3798] = 1,
    ACTIONS(1026), 1,
      anon_sym_RBRACE,
  [3802] = 1,
    ACTIONS(1028), 1,
      anon_sym_LF,
  [3806] = 1,
    ACTIONS(1030), 1,
      anon_sym_LF,
  [3810] = 1,
    ACTIONS(1032), 1,
      sym_identifier,
  [3814] = 1,
    ACTIONS(1034), 1,
      sym_identifier,
  [3818] = 1,
    ACTIONS(1036), 1,
      sym_identifier,
  [3822] = 1,
    ACTIONS(1038), 1,
      aux_sym__expansion_body_token1,
  [3826] = 1,
    ACTIONS(1040), 1,
      ts_builtin_sym_end,
  [3830] = 1,
    ACTIONS(1042), 1,
      anon_sym_COLON,
  [3834] = 1,
    ACTIONS(1044), 1,
      aux_sym_from_command_token1,
  [3838] = 1,
    ACTIONS(1046), 1,
      anon_sym_LF,
  [3842] = 1,
    ACTIONS(1048), 1,
      aux_sym__expansion_body_token1,
  [3846] = 1,
    ACTIONS(1050), 1,
      aux_sym__expansion_body_token1,
  [3850] = 1,
    ACTIONS(1052), 1,
      aux_sym__expansion_body_token1,
  [3854] = 1,
    ACTIONS(1054), 1,
      aux_sym__expansion_body_token1,
  [3858] = 1,
    ACTIONS(1056), 1,
      aux_sym__expansion_body_token1,
  [3862] = 1,
    ACTIONS(1058), 1,
      aux_sym__expansion_body_token1,
  [3866] = 1,
    ACTIONS(1060), 1,
      aux_sym__expansion_body_token1,
  [3870] = 1,
    ACTIONS(1062), 1,
      aux_sym__expansion_body_token1,
  [3874] = 1,
    ACTIONS(1064), 1,
      aux_sym__expansion_body_token1,
  [3878] = 1,
    ACTIONS(1066), 1,
      aux_sym__expansion_body_token1,
  [3882] = 1,
    ACTIONS(1068), 1,
      sym_option_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 136,
  [SMALL_STATE(8)] = 170,
  [SMALL_STATE(9)] = 196,
  [SMALL_STATE(10)] = 224,
  [SMALL_STATE(11)] = 248,
  [SMALL_STATE(12)] = 276,
  [SMALL_STATE(13)] = 304,
  [SMALL_STATE(14)] = 330,
  [SMALL_STATE(15)] = 358,
  [SMALL_STATE(16)] = 386,
  [SMALL_STATE(17)] = 412,
  [SMALL_STATE(18)] = 436,
  [SMALL_STATE(19)] = 464,
  [SMALL_STATE(20)] = 488,
  [SMALL_STATE(21)] = 516,
  [SMALL_STATE(22)] = 544,
  [SMALL_STATE(23)] = 561,
  [SMALL_STATE(24)] = 584,
  [SMALL_STATE(25)] = 601,
  [SMALL_STATE(26)] = 618,
  [SMALL_STATE(27)] = 643,
  [SMALL_STATE(28)] = 666,
  [SMALL_STATE(29)] = 691,
  [SMALL_STATE(30)] = 716,
  [SMALL_STATE(31)] = 733,
  [SMALL_STATE(32)] = 758,
  [SMALL_STATE(33)] = 775,
  [SMALL_STATE(34)] = 800,
  [SMALL_STATE(35)] = 817,
  [SMALL_STATE(36)] = 843,
  [SMALL_STATE(37)] = 877,
  [SMALL_STATE(38)] = 899,
  [SMALL_STATE(39)] = 925,
  [SMALL_STATE(40)] = 949,
  [SMALL_STATE(41)] = 971,
  [SMALL_STATE(42)] = 1005,
  [SMALL_STATE(43)] = 1029,
  [SMALL_STATE(44)] = 1051,
  [SMALL_STATE(45)] = 1073,
  [SMALL_STATE(46)] = 1095,
  [SMALL_STATE(47)] = 1116,
  [SMALL_STATE(48)] = 1131,
  [SMALL_STATE(49)] = 1152,
  [SMALL_STATE(50)] = 1167,
  [SMALL_STATE(51)] = 1190,
  [SMALL_STATE(52)] = 1205,
  [SMALL_STATE(53)] = 1220,
  [SMALL_STATE(54)] = 1235,
  [SMALL_STATE(55)] = 1253,
  [SMALL_STATE(56)] = 1267,
  [SMALL_STATE(57)] = 1285,
  [SMALL_STATE(58)] = 1305,
  [SMALL_STATE(59)] = 1323,
  [SMALL_STATE(60)] = 1343,
  [SMALL_STATE(61)] = 1363,
  [SMALL_STATE(62)] = 1381,
  [SMALL_STATE(63)] = 1395,
  [SMALL_STATE(64)] = 1415,
  [SMALL_STATE(65)] = 1433,
  [SMALL_STATE(66)] = 1446,
  [SMALL_STATE(67)] = 1465,
  [SMALL_STATE(68)] = 1478,
  [SMALL_STATE(69)] = 1491,
  [SMALL_STATE(70)] = 1510,
  [SMALL_STATE(71)] = 1523,
  [SMALL_STATE(72)] = 1544,
  [SMALL_STATE(73)] = 1563,
  [SMALL_STATE(74)] = 1582,
  [SMALL_STATE(75)] = 1595,
  [SMALL_STATE(76)] = 1614,
  [SMALL_STATE(77)] = 1633,
  [SMALL_STATE(78)] = 1652,
  [SMALL_STATE(79)] = 1671,
  [SMALL_STATE(80)] = 1690,
  [SMALL_STATE(81)] = 1709,
  [SMALL_STATE(82)] = 1728,
  [SMALL_STATE(83)] = 1747,
  [SMALL_STATE(84)] = 1766,
  [SMALL_STATE(85)] = 1779,
  [SMALL_STATE(86)] = 1798,
  [SMALL_STATE(87)] = 1819,
  [SMALL_STATE(88)] = 1838,
  [SMALL_STATE(89)] = 1855,
  [SMALL_STATE(90)] = 1874,
  [SMALL_STATE(91)] = 1893,
  [SMALL_STATE(92)] = 1906,
  [SMALL_STATE(93)] = 1920,
  [SMALL_STATE(94)] = 1932,
  [SMALL_STATE(95)] = 1946,
  [SMALL_STATE(96)] = 1958,
  [SMALL_STATE(97)] = 1972,
  [SMALL_STATE(98)] = 1986,
  [SMALL_STATE(99)] = 2000,
  [SMALL_STATE(100)] = 2012,
  [SMALL_STATE(101)] = 2024,
  [SMALL_STATE(102)] = 2036,
  [SMALL_STATE(103)] = 2048,
  [SMALL_STATE(104)] = 2062,
  [SMALL_STATE(105)] = 2074,
  [SMALL_STATE(106)] = 2088,
  [SMALL_STATE(107)] = 2100,
  [SMALL_STATE(108)] = 2111,
  [SMALL_STATE(109)] = 2122,
  [SMALL_STATE(110)] = 2133,
  [SMALL_STATE(111)] = 2146,
  [SMALL_STATE(112)] = 2157,
  [SMALL_STATE(113)] = 2168,
  [SMALL_STATE(114)] = 2179,
  [SMALL_STATE(115)] = 2190,
  [SMALL_STATE(116)] = 2201,
  [SMALL_STATE(117)] = 2212,
  [SMALL_STATE(118)] = 2223,
  [SMALL_STATE(119)] = 2234,
  [SMALL_STATE(120)] = 2245,
  [SMALL_STATE(121)] = 2256,
  [SMALL_STATE(122)] = 2267,
  [SMALL_STATE(123)] = 2278,
  [SMALL_STATE(124)] = 2289,
  [SMALL_STATE(125)] = 2300,
  [SMALL_STATE(126)] = 2311,
  [SMALL_STATE(127)] = 2322,
  [SMALL_STATE(128)] = 2333,
  [SMALL_STATE(129)] = 2344,
  [SMALL_STATE(130)] = 2355,
  [SMALL_STATE(131)] = 2366,
  [SMALL_STATE(132)] = 2377,
  [SMALL_STATE(133)] = 2388,
  [SMALL_STATE(134)] = 2399,
  [SMALL_STATE(135)] = 2410,
  [SMALL_STATE(136)] = 2421,
  [SMALL_STATE(137)] = 2432,
  [SMALL_STATE(138)] = 2443,
  [SMALL_STATE(139)] = 2454,
  [SMALL_STATE(140)] = 2465,
  [SMALL_STATE(141)] = 2476,
  [SMALL_STATE(142)] = 2487,
  [SMALL_STATE(143)] = 2498,
  [SMALL_STATE(144)] = 2509,
  [SMALL_STATE(145)] = 2520,
  [SMALL_STATE(146)] = 2531,
  [SMALL_STATE(147)] = 2547,
  [SMALL_STATE(148)] = 2555,
  [SMALL_STATE(149)] = 2563,
  [SMALL_STATE(150)] = 2571,
  [SMALL_STATE(151)] = 2583,
  [SMALL_STATE(152)] = 2593,
  [SMALL_STATE(153)] = 2605,
  [SMALL_STATE(154)] = 2617,
  [SMALL_STATE(155)] = 2631,
  [SMALL_STATE(156)] = 2639,
  [SMALL_STATE(157)] = 2651,
  [SMALL_STATE(158)] = 2665,
  [SMALL_STATE(159)] = 2675,
  [SMALL_STATE(160)] = 2687,
  [SMALL_STATE(161)] = 2699,
  [SMALL_STATE(162)] = 2715,
  [SMALL_STATE(163)] = 2723,
  [SMALL_STATE(164)] = 2735,
  [SMALL_STATE(165)] = 2747,
  [SMALL_STATE(166)] = 2761,
  [SMALL_STATE(167)] = 2775,
  [SMALL_STATE(168)] = 2789,
  [SMALL_STATE(169)] = 2803,
  [SMALL_STATE(170)] = 2817,
  [SMALL_STATE(171)] = 2827,
  [SMALL_STATE(172)] = 2841,
  [SMALL_STATE(173)] = 2849,
  [SMALL_STATE(174)] = 2859,
  [SMALL_STATE(175)] = 2873,
  [SMALL_STATE(176)] = 2887,
  [SMALL_STATE(177)] = 2901,
  [SMALL_STATE(178)] = 2908,
  [SMALL_STATE(179)] = 2915,
  [SMALL_STATE(180)] = 2922,
  [SMALL_STATE(181)] = 2929,
  [SMALL_STATE(182)] = 2936,
  [SMALL_STATE(183)] = 2943,
  [SMALL_STATE(184)] = 2950,
  [SMALL_STATE(185)] = 2957,
  [SMALL_STATE(186)] = 2964,
  [SMALL_STATE(187)] = 2971,
  [SMALL_STATE(188)] = 2984,
  [SMALL_STATE(189)] = 2991,
  [SMALL_STATE(190)] = 2998,
  [SMALL_STATE(191)] = 3005,
  [SMALL_STATE(192)] = 3012,
  [SMALL_STATE(193)] = 3019,
  [SMALL_STATE(194)] = 3026,
  [SMALL_STATE(195)] = 3033,
  [SMALL_STATE(196)] = 3040,
  [SMALL_STATE(197)] = 3047,
  [SMALL_STATE(198)] = 3054,
  [SMALL_STATE(199)] = 3061,
  [SMALL_STATE(200)] = 3068,
  [SMALL_STATE(201)] = 3075,
  [SMALL_STATE(202)] = 3082,
  [SMALL_STATE(203)] = 3089,
  [SMALL_STATE(204)] = 3096,
  [SMALL_STATE(205)] = 3103,
  [SMALL_STATE(206)] = 3110,
  [SMALL_STATE(207)] = 3117,
  [SMALL_STATE(208)] = 3124,
  [SMALL_STATE(209)] = 3131,
  [SMALL_STATE(210)] = 3141,
  [SMALL_STATE(211)] = 3151,
  [SMALL_STATE(212)] = 3161,
  [SMALL_STATE(213)] = 3171,
  [SMALL_STATE(214)] = 3177,
  [SMALL_STATE(215)] = 3183,
  [SMALL_STATE(216)] = 3193,
  [SMALL_STATE(217)] = 3199,
  [SMALL_STATE(218)] = 3209,
  [SMALL_STATE(219)] = 3219,
  [SMALL_STATE(220)] = 3229,
  [SMALL_STATE(221)] = 3239,
  [SMALL_STATE(222)] = 3249,
  [SMALL_STATE(223)] = 3259,
  [SMALL_STATE(224)] = 3269,
  [SMALL_STATE(225)] = 3275,
  [SMALL_STATE(226)] = 3285,
  [SMALL_STATE(227)] = 3295,
  [SMALL_STATE(228)] = 3305,
  [SMALL_STATE(229)] = 3315,
  [SMALL_STATE(230)] = 3321,
  [SMALL_STATE(231)] = 3331,
  [SMALL_STATE(232)] = 3341,
  [SMALL_STATE(233)] = 3351,
  [SMALL_STATE(234)] = 3361,
  [SMALL_STATE(235)] = 3371,
  [SMALL_STATE(236)] = 3381,
  [SMALL_STATE(237)] = 3391,
  [SMALL_STATE(238)] = 3401,
  [SMALL_STATE(239)] = 3411,
  [SMALL_STATE(240)] = 3421,
  [SMALL_STATE(241)] = 3431,
  [SMALL_STATE(242)] = 3438,
  [SMALL_STATE(243)] = 3445,
  [SMALL_STATE(244)] = 3452,
  [SMALL_STATE(245)] = 3459,
  [SMALL_STATE(246)] = 3466,
  [SMALL_STATE(247)] = 3473,
  [SMALL_STATE(248)] = 3480,
  [SMALL_STATE(249)] = 3487,
  [SMALL_STATE(250)] = 3494,
  [SMALL_STATE(251)] = 3501,
  [SMALL_STATE(252)] = 3508,
  [SMALL_STATE(253)] = 3515,
  [SMALL_STATE(254)] = 3522,
  [SMALL_STATE(255)] = 3529,
  [SMALL_STATE(256)] = 3536,
  [SMALL_STATE(257)] = 3543,
  [SMALL_STATE(258)] = 3550,
  [SMALL_STATE(259)] = 3557,
  [SMALL_STATE(260)] = 3564,
  [SMALL_STATE(261)] = 3571,
  [SMALL_STATE(262)] = 3578,
  [SMALL_STATE(263)] = 3585,
  [SMALL_STATE(264)] = 3592,
  [SMALL_STATE(265)] = 3599,
  [SMALL_STATE(266)] = 3606,
  [SMALL_STATE(267)] = 3610,
  [SMALL_STATE(268)] = 3614,
  [SMALL_STATE(269)] = 3618,
  [SMALL_STATE(270)] = 3622,
  [SMALL_STATE(271)] = 3626,
  [SMALL_STATE(272)] = 3630,
  [SMALL_STATE(273)] = 3634,
  [SMALL_STATE(274)] = 3638,
  [SMALL_STATE(275)] = 3642,
  [SMALL_STATE(276)] = 3646,
  [SMALL_STATE(277)] = 3650,
  [SMALL_STATE(278)] = 3654,
  [SMALL_STATE(279)] = 3658,
  [SMALL_STATE(280)] = 3662,
  [SMALL_STATE(281)] = 3666,
  [SMALL_STATE(282)] = 3670,
  [SMALL_STATE(283)] = 3674,
  [SMALL_STATE(284)] = 3678,
  [SMALL_STATE(285)] = 3682,
  [SMALL_STATE(286)] = 3686,
  [SMALL_STATE(287)] = 3690,
  [SMALL_STATE(288)] = 3694,
  [SMALL_STATE(289)] = 3698,
  [SMALL_STATE(290)] = 3702,
  [SMALL_STATE(291)] = 3706,
  [SMALL_STATE(292)] = 3710,
  [SMALL_STATE(293)] = 3714,
  [SMALL_STATE(294)] = 3718,
  [SMALL_STATE(295)] = 3722,
  [SMALL_STATE(296)] = 3726,
  [SMALL_STATE(297)] = 3730,
  [SMALL_STATE(298)] = 3734,
  [SMALL_STATE(299)] = 3738,
  [SMALL_STATE(300)] = 3742,
  [SMALL_STATE(301)] = 3746,
  [SMALL_STATE(302)] = 3750,
  [SMALL_STATE(303)] = 3754,
  [SMALL_STATE(304)] = 3758,
  [SMALL_STATE(305)] = 3762,
  [SMALL_STATE(306)] = 3766,
  [SMALL_STATE(307)] = 3770,
  [SMALL_STATE(308)] = 3774,
  [SMALL_STATE(309)] = 3778,
  [SMALL_STATE(310)] = 3782,
  [SMALL_STATE(311)] = 3786,
  [SMALL_STATE(312)] = 3790,
  [SMALL_STATE(313)] = 3794,
  [SMALL_STATE(314)] = 3798,
  [SMALL_STATE(315)] = 3802,
  [SMALL_STATE(316)] = 3806,
  [SMALL_STATE(317)] = 3810,
  [SMALL_STATE(318)] = 3814,
  [SMALL_STATE(319)] = 3818,
  [SMALL_STATE(320)] = 3822,
  [SMALL_STATE(321)] = 3826,
  [SMALL_STATE(322)] = 3830,
  [SMALL_STATE(323)] = 3834,
  [SMALL_STATE(324)] = 3838,
  [SMALL_STATE(325)] = 3842,
  [SMALL_STATE(326)] = 3846,
  [SMALL_STATE(327)] = 3850,
  [SMALL_STATE(328)] = 3854,
  [SMALL_STATE(329)] = 3858,
  [SMALL_STATE(330)] = 3862,
  [SMALL_STATE(331)] = 3866,
  [SMALL_STATE(332)] = 3870,
  [SMALL_STATE(333)] = 3874,
  [SMALL_STATE(334)] = 3878,
  [SMALL_STATE(335)] = 3882,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(2),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(240),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_expansion, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_expansion, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(8),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(8),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(239),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 24), SHIFT_REPEAT(297),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 24), SHIFT_REPEAT(306),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 24),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 24), SHIFT_REPEAT(13),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 24),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(228),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(19),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 3, .production_id = 26),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 3, .production_id = 26),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 3, .production_id = 25),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 3, .production_id = 25),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(218),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(27),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(210),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(231),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(322),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(39),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(39),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(232),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(227),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(40),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(234),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(43),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(238),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(48),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3, .production_id = 6),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3, .production_id = 6),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 4, .production_id = 6),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 4, .production_id = 6),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(237),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(57),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 2),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 2),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(59),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(59),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(209),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat2, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_command_repeat2, 2),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat2, 2), SHIFT_REPEAT(269),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(222),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(41),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(7),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(83),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(83),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(236),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(86),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(86),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(215),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 4, .production_id = 1),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 4, .production_id = 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat2, 2), SHIFT_REPEAT(335),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg_flag, 4, .production_id = 20),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg_flag, 4, .production_id = 20),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 1),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 3, .production_id = 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 18),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 18),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 15),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 15),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 1),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 5, .production_id = 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 13),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 13),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 14),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 14),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 3),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 17),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 17),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 8),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 8),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 3, .production_id = 2),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 3, .production_id = 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 19),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 19),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 10),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 10),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 10),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 10),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 9),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 9),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6, .production_id = 1),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 6, .production_id = 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 16),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 16),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 17),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 17),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 21),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 21),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 2),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 2),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 22),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 22),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 18),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 18),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 19),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 19),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 14),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 14),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 5, .production_id = 8),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 5, .production_id = 8),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 7, .production_id = 1),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 7, .production_id = 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 8, .production_id = 21),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 8, .production_id = 21),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 8, .production_id = 22),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 8, .production_id = 22),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 9),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 9),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 12),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 12),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [644] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(156),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [659] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(165),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(165),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 28),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 3, .production_id = 23),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 27),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 5, .production_id = 29),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 7), SHIFT_REPEAT(293),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 7), SHIFT_REPEAT(187),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 7),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 3, .production_id = 11),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2),
  [823] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2), SHIFT_REPEAT(235),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1040] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
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
    [ts_external_token__dedent] = true,
  },
  [3] = {
    [ts_external_token__indent] = true,
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
