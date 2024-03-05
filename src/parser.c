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
#define STATE_COUNT 417
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 113
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 30

enum ts_symbol_identifiers {
  anon_sym_VERSION = 1,
  anon_sym_LF = 2,
  anon_sym_ARG = 3,
  anon_sym_EQ = 4,
  anon_sym_FROM = 5,
  anon_sym_RUN = 6,
  anon_sym_DASH_DASH = 7,
  anon_sym_COPY = 8,
  anon_sym_COLON = 9,
  sym_version_major_minor = 10,
  sym_feature_flag = 11,
  anon_sym_DASH_DASH2 = 12,
  aux_sym_build_arg_flag_token1 = 13,
  sym_option_identifier = 14,
  anon_sym_DQUOTE = 15,
  aux_sym_double_quoted_string_token1 = 16,
  anon_sym_BSLASH = 17,
  anon_sym_SQUOTE = 18,
  aux_sym_single_quoted_string_token1 = 19,
  aux_sym_unquoted_string_token1 = 20,
  anon_sym_BSLASH2 = 21,
  sym_double_quoted_escape_sequence = 22,
  sym_single_quoted_escape_sequence = 23,
  anon_sym_DOLLAR = 24,
  anon_sym_DOLLAR2 = 25,
  anon_sym_LBRACE = 26,
  aux_sym__expansion_body_token1 = 27,
  anon_sym_RBRACE = 28,
  aux_sym_path_token1 = 29,
  aux_sym_path_token2 = 30,
  anon_sym_SLASH = 31,
  anon_sym_LPAREN = 32,
  anon_sym_RPAREN = 33,
  sym_variable = 34,
  sym_identifier = 35,
  sym_comment = 36,
  sym_required = 37,
  sym_global = 38,
  sym_allow_privileged = 39,
  sym_push = 40,
  sym_no_cache = 41,
  sym_entrypoint = 42,
  sym_privileged = 43,
  sym_network_none = 44,
  sym_ssh = 45,
  sym_dir = 46,
  sym_keep_ts = 47,
  sym_keep_own = 48,
  sym_if_exists = 49,
  sym_symlink_no_follow = 50,
  sym_pass_args = 51,
  anon_sym_DASH_DASHplatform = 52,
  anon_sym_DASH_DASHchmod = 53,
  anon_sym_DASH_DASHsecret = 54,
  anon_sym_DASH_DASHmount = 55,
  sym_expr = 56,
  anon_sym_PLUS = 57,
  aux_sym_image_name_token1 = 58,
  aux_sym_image_name_token2 = 59,
  anon_sym_COLON2 = 60,
  aux_sym_image_tag_token1 = 61,
  anon_sym_AT = 62,
  aux_sym_image_digest_token1 = 63,
  aux_sym_shell_fragment_token1 = 64,
  aux_sym_shell_fragment_token2 = 65,
  aux_sym_shell_fragment_token3 = 66,
  sym__indent = 67,
  sym__dedent = 68,
  sym_source_file = 69,
  sym_version_command = 70,
  sym_arg_command = 71,
  sym_from_command = 72,
  sym_run_command = 73,
  sym_copy_command = 74,
  sym_target = 75,
  sym_build_arg_flag = 76,
  sym_double_quoted_string = 77,
  sym_single_quoted_string = 78,
  sym_unquoted_string = 79,
  sym_expansion = 80,
  sym__immediate_expansion = 81,
  sym__imm_expansion = 82,
  sym__expansion_body = 83,
  sym_path = 84,
  sym_target_artifact = 85,
  sym_platform = 86,
  sym_chmod = 87,
  sym_secret = 88,
  sym_mount = 89,
  sym_target_ref = 90,
  sym_image_spec = 91,
  sym_image_name = 92,
  sym_image_tag = 93,
  sym_image_digest = 94,
  sym__string = 95,
  sym_shell_fragment = 96,
  aux_sym_source_file_repeat1 = 97,
  aux_sym_version_command_repeat1 = 98,
  aux_sym_from_command_repeat1 = 99,
  aux_sym_from_command_repeat2 = 100,
  aux_sym_run_command_repeat1 = 101,
  aux_sym_copy_command_repeat1 = 102,
  aux_sym_copy_command_repeat2 = 103,
  aux_sym_target_repeat1 = 104,
  aux_sym_double_quoted_string_repeat1 = 105,
  aux_sym_single_quoted_string_repeat1 = 106,
  aux_sym_unquoted_string_repeat1 = 107,
  aux_sym_path_repeat1 = 108,
  aux_sym_image_name_repeat1 = 109,
  aux_sym_image_tag_repeat1 = 110,
  aux_sym_image_digest_repeat1 = 111,
  aux_sym_shell_fragment_repeat1 = 112,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_VERSION] = "VERSION",
  [anon_sym_LF] = "\n",
  [anon_sym_ARG] = "ARG",
  [anon_sym_EQ] = "=",
  [anon_sym_FROM] = "FROM",
  [anon_sym_RUN] = "RUN",
  [anon_sym_DASH_DASH] = " -- ",
  [anon_sym_COPY] = "COPY",
  [anon_sym_COLON] = ":",
  [sym_version_major_minor] = "version_major_minor",
  [sym_feature_flag] = "feature_flag",
  [anon_sym_DASH_DASH2] = "--",
  [aux_sym_build_arg_flag_token1] = "build_arg_flag_token1",
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
  [aux_sym_path_token1] = "path_token1",
  [aux_sym_path_token2] = "path_token2",
  [anon_sym_SLASH] = "/",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [sym_dir] = "dir",
  [sym_keep_ts] = "keep_ts",
  [sym_keep_own] = "keep_own",
  [sym_if_exists] = "if_exists",
  [sym_symlink_no_follow] = "symlink_no_follow",
  [sym_pass_args] = "pass_args",
  [anon_sym_DASH_DASHplatform] = "--platform",
  [anon_sym_DASH_DASHchmod] = "--chmod",
  [anon_sym_DASH_DASHsecret] = "--secret",
  [anon_sym_DASH_DASHmount] = "--mount",
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
  [sym_copy_command] = "copy_command",
  [sym_target] = "target",
  [sym_build_arg_flag] = "build_arg_flag",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_unquoted_string] = "unquoted_string",
  [sym_expansion] = "expansion",
  [sym__immediate_expansion] = "_immediate_expansion",
  [sym__imm_expansion] = "expansion",
  [sym__expansion_body] = "_expansion_body",
  [sym_path] = "path",
  [sym_target_artifact] = "target_artifact",
  [sym_platform] = "platform",
  [sym_chmod] = "chmod",
  [sym_secret] = "secret",
  [sym_mount] = "mount",
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
  [aux_sym_copy_command_repeat1] = "copy_command_repeat1",
  [aux_sym_copy_command_repeat2] = "copy_command_repeat2",
  [aux_sym_target_repeat1] = "target_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_single_quoted_string_repeat1] = "single_quoted_string_repeat1",
  [aux_sym_unquoted_string_repeat1] = "unquoted_string_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
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
  [anon_sym_RUN] = anon_sym_RUN,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_COPY] = anon_sym_COPY,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_version_major_minor] = sym_version_major_minor,
  [sym_feature_flag] = sym_feature_flag,
  [anon_sym_DASH_DASH2] = anon_sym_DASH_DASH2,
  [aux_sym_build_arg_flag_token1] = aux_sym_build_arg_flag_token1,
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
  [aux_sym_path_token1] = aux_sym_path_token1,
  [aux_sym_path_token2] = aux_sym_path_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [sym_dir] = sym_dir,
  [sym_keep_ts] = sym_keep_ts,
  [sym_keep_own] = sym_keep_own,
  [sym_if_exists] = sym_if_exists,
  [sym_symlink_no_follow] = sym_symlink_no_follow,
  [sym_pass_args] = sym_pass_args,
  [anon_sym_DASH_DASHplatform] = anon_sym_DASH_DASHplatform,
  [anon_sym_DASH_DASHchmod] = anon_sym_DASH_DASHchmod,
  [anon_sym_DASH_DASHsecret] = anon_sym_DASH_DASHsecret,
  [anon_sym_DASH_DASHmount] = anon_sym_DASH_DASHmount,
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
  [sym_copy_command] = sym_copy_command,
  [sym_target] = sym_target,
  [sym_build_arg_flag] = sym_build_arg_flag,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_expansion] = sym_expansion,
  [sym__immediate_expansion] = sym__immediate_expansion,
  [sym__imm_expansion] = sym_expansion,
  [sym__expansion_body] = sym__expansion_body,
  [sym_path] = sym_path,
  [sym_target_artifact] = sym_target_artifact,
  [sym_platform] = sym_platform,
  [sym_chmod] = sym_chmod,
  [sym_secret] = sym_secret,
  [sym_mount] = sym_mount,
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
  [aux_sym_copy_command_repeat1] = aux_sym_copy_command_repeat1,
  [aux_sym_copy_command_repeat2] = aux_sym_copy_command_repeat2,
  [aux_sym_target_repeat1] = aux_sym_target_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_single_quoted_string_repeat1] = aux_sym_single_quoted_string_repeat1,
  [aux_sym_unquoted_string_repeat1] = aux_sym_unquoted_string_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
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
  [anon_sym_RUN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COPY] = {
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
  [aux_sym_build_arg_flag_token1] = {
    .visible = false,
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
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
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
  [sym_dir] = {
    .visible = true,
    .named = true,
  },
  [sym_keep_ts] = {
    .visible = true,
    .named = true,
  },
  [sym_keep_own] = {
    .visible = true,
    .named = true,
  },
  [sym_if_exists] = {
    .visible = true,
    .named = true,
  },
  [sym_symlink_no_follow] = {
    .visible = true,
    .named = true,
  },
  [sym_pass_args] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHplatform] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHchmod] = {
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
  [sym_copy_command] = {
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
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_target_artifact] = {
    .visible = true,
    .named = true,
  },
  [sym_platform] = {
    .visible = true,
    .named = true,
  },
  [sym_chmod] = {
    .visible = true,
    .named = true,
  },
  [sym_secret] = {
    .visible = true,
    .named = true,
  },
  [sym_mount] = {
    .visible = true,
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
  [aux_sym_copy_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_copy_command_repeat2] = {
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
  [aux_sym_path_repeat1] = {
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
  field_artifact = 1,
  field_command = 2,
  field_default_value = 3,
  field_default_value_expr = 4,
  field_dest = 5,
  field_digest = 6,
  field_feature = 7,
  field_global = 8,
  field_name = 9,
  field_required = 10,
  field_src = 11,
  field_tag = 12,
  field_target_ref = 13,
  field_value = 14,
  field_version = 15,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_artifact] = "artifact",
  [field_command] = "command",
  [field_default_value] = "default_value",
  [field_default_value_expr] = "default_value_expr",
  [field_dest] = "dest",
  [field_digest] = "digest",
  [field_feature] = "feature",
  [field_global] = "global",
  [field_name] = "name",
  [field_required] = "required",
  [field_src] = "src",
  [field_tag] = "tag",
  [field_target_ref] = "target_ref",
  [field_value] = "value",
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
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 3},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 3},
  [14] = {.index = 24, .length = 3},
  [15] = {.index = 27, .length = 3},
  [16] = {.index = 30, .length = 3},
  [17] = {.index = 33, .length = 3},
  [18] = {.index = 36, .length = 2},
  [19] = {.index = 38, .length = 1},
  [20] = {.index = 39, .length = 4},
  [21] = {.index = 43, .length = 4},
  [22] = {.index = 47, .length = 1},
  [23] = {.index = 48, .length = 2},
  [24] = {.index = 50, .length = 1},
  [25] = {.index = 51, .length = 2},
  [26] = {.index = 53, .length = 2},
  [27] = {.index = 55, .length = 1},
  [28] = {.index = 56, .length = 2},
  [29] = {.index = 58, .length = 2},
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
    {field_feature, 1},
    {field_version, 2},
  [9] =
    {field_name, 2},
    {field_required, 1},
  [11] =
    {field_global, 1},
    {field_name, 2},
  [13] =
    {field_value, 2},
  [14] =
    {field_digest, 2},
    {field_name, 0},
    {field_tag, 1},
  [17] =
    {field_default_value_expr, 3},
    {field_name, 1},
  [19] =
    {field_default_value, 3},
    {field_name, 1},
  [21] =
    {field_global, 2},
    {field_name, 3},
    {field_required, 1},
  [24] =
    {field_default_value_expr, 4},
    {field_name, 2},
    {field_required, 1},
  [27] =
    {field_default_value, 4},
    {field_name, 2},
    {field_required, 1},
  [30] =
    {field_default_value_expr, 4},
    {field_global, 1},
    {field_name, 2},
  [33] =
    {field_default_value, 4},
    {field_global, 1},
    {field_name, 2},
  [36] =
    {field_name, 1},
    {field_value, 3},
  [38] =
    {field_src, 0},
  [39] =
    {field_default_value_expr, 5},
    {field_global, 2},
    {field_name, 3},
    {field_required, 1},
  [43] =
    {field_default_value, 5},
    {field_global, 2},
    {field_name, 3},
    {field_required, 1},
  [47] =
    {field_command, 1},
  [48] =
    {field_src, 0, .inherited = true},
    {field_src, 1, .inherited = true},
  [50] =
    {field_command, 2},
  [51] =
    {field_artifact, 2},
    {field_target_ref, 0},
  [53] =
    {field_dest, 2},
    {field_src, 1, .inherited = true},
  [55] =
    {field_command, 3},
  [56] =
    {field_dest, 3},
    {field_src, 2, .inherited = true},
  [58] =
    {field_artifact, 3},
    {field_target_ref, 1},
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
  [6] = 4,
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 10,
  [14] = 11,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 4,
  [23] = 18,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 5,
  [31] = 20,
  [32] = 32,
  [33] = 25,
  [34] = 28,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 27,
  [39] = 39,
  [40] = 32,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 41,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 36,
  [49] = 5,
  [50] = 47,
  [51] = 26,
  [52] = 41,
  [53] = 19,
  [54] = 29,
  [55] = 4,
  [56] = 17,
  [57] = 16,
  [58] = 43,
  [59] = 59,
  [60] = 46,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 10,
  [65] = 65,
  [66] = 66,
  [67] = 11,
  [68] = 68,
  [69] = 11,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 61,
  [74] = 74,
  [75] = 75,
  [76] = 63,
  [77] = 77,
  [78] = 10,
  [79] = 79,
  [80] = 80,
  [81] = 11,
  [82] = 82,
  [83] = 79,
  [84] = 65,
  [85] = 10,
  [86] = 10,
  [87] = 11,
  [88] = 11,
  [89] = 4,
  [90] = 74,
  [91] = 10,
  [92] = 70,
  [93] = 93,
  [94] = 5,
  [95] = 68,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 100,
  [102] = 102,
  [103] = 4,
  [104] = 104,
  [105] = 11,
  [106] = 106,
  [107] = 26,
  [108] = 11,
  [109] = 109,
  [110] = 10,
  [111] = 27,
  [112] = 109,
  [113] = 113,
  [114] = 10,
  [115] = 115,
  [116] = 16,
  [117] = 109,
  [118] = 82,
  [119] = 4,
  [120] = 5,
  [121] = 113,
  [122] = 80,
  [123] = 109,
  [124] = 5,
  [125] = 113,
  [126] = 97,
  [127] = 29,
  [128] = 113,
  [129] = 109,
  [130] = 96,
  [131] = 113,
  [132] = 109,
  [133] = 113,
  [134] = 134,
  [135] = 10,
  [136] = 10,
  [137] = 11,
  [138] = 11,
  [139] = 139,
  [140] = 104,
  [141] = 70,
  [142] = 68,
  [143] = 74,
  [144] = 79,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 27,
  [162] = 16,
  [163] = 163,
  [164] = 102,
  [165] = 29,
  [166] = 166,
  [167] = 167,
  [168] = 26,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 10,
  [174] = 11,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 115,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 79,
  [185] = 185,
  [186] = 10,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 11,
  [191] = 187,
  [192] = 163,
  [193] = 167,
  [194] = 194,
  [195] = 176,
  [196] = 175,
  [197] = 172,
  [198] = 11,
  [199] = 10,
  [200] = 200,
  [201] = 11,
  [202] = 202,
  [203] = 203,
  [204] = 171,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 166,
  [209] = 209,
  [210] = 210,
  [211] = 160,
  [212] = 159,
  [213] = 158,
  [214] = 11,
  [215] = 10,
  [216] = 216,
  [217] = 217,
  [218] = 207,
  [219] = 152,
  [220] = 146,
  [221] = 147,
  [222] = 177,
  [223] = 178,
  [224] = 182,
  [225] = 145,
  [226] = 226,
  [227] = 156,
  [228] = 170,
  [229] = 10,
  [230] = 151,
  [231] = 150,
  [232] = 149,
  [233] = 148,
  [234] = 234,
  [235] = 154,
  [236] = 155,
  [237] = 217,
  [238] = 238,
  [239] = 207,
  [240] = 188,
  [241] = 217,
  [242] = 207,
  [243] = 217,
  [244] = 244,
  [245] = 207,
  [246] = 207,
  [247] = 183,
  [248] = 217,
  [249] = 209,
  [250] = 250,
  [251] = 206,
  [252] = 252,
  [253] = 217,
  [254] = 254,
  [255] = 11,
  [256] = 256,
  [257] = 10,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 79,
  [262] = 262,
  [263] = 96,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 266,
  [268] = 268,
  [269] = 16,
  [270] = 270,
  [271] = 271,
  [272] = 266,
  [273] = 270,
  [274] = 266,
  [275] = 275,
  [276] = 27,
  [277] = 266,
  [278] = 266,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 266,
  [283] = 279,
  [284] = 29,
  [285] = 266,
  [286] = 266,
  [287] = 287,
  [288] = 26,
  [289] = 266,
  [290] = 275,
  [291] = 291,
  [292] = 291,
  [293] = 266,
  [294] = 21,
  [295] = 266,
  [296] = 266,
  [297] = 280,
  [298] = 271,
  [299] = 275,
  [300] = 266,
  [301] = 266,
  [302] = 266,
  [303] = 275,
  [304] = 266,
  [305] = 275,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 27,
  [311] = 16,
  [312] = 308,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 29,
  [317] = 26,
  [318] = 318,
  [319] = 319,
  [320] = 309,
  [321] = 313,
  [322] = 306,
  [323] = 307,
  [324] = 319,
  [325] = 325,
  [326] = 315,
  [327] = 327,
  [328] = 327,
  [329] = 329,
  [330] = 330,
  [331] = 318,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 333,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 345,
  [350] = 333,
  [351] = 351,
  [352] = 347,
  [353] = 353,
  [354] = 354,
  [355] = 353,
  [356] = 356,
  [357] = 357,
  [358] = 333,
  [359] = 359,
  [360] = 344,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 333,
  [366] = 334,
  [367] = 367,
  [368] = 335,
  [369] = 333,
  [370] = 370,
  [371] = 333,
  [372] = 337,
  [373] = 338,
  [374] = 339,
  [375] = 375,
  [376] = 340,
  [377] = 333,
  [378] = 333,
  [379] = 333,
  [380] = 333,
  [381] = 333,
  [382] = 333,
  [383] = 333,
  [384] = 333,
  [385] = 333,
  [386] = 333,
  [387] = 341,
  [388] = 342,
  [389] = 363,
  [390] = 356,
  [391] = 343,
  [392] = 354,
  [393] = 359,
  [394] = 394,
  [395] = 395,
  [396] = 370,
  [397] = 397,
  [398] = 359,
  [399] = 370,
  [400] = 359,
  [401] = 359,
  [402] = 359,
  [403] = 359,
  [404] = 359,
  [405] = 359,
  [406] = 359,
  [407] = 359,
  [408] = 359,
  [409] = 359,
  [410] = 359,
  [411] = 359,
  [412] = 359,
  [413] = 359,
  [414] = 362,
  [415] = 415,
  [416] = 362,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(238);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '#') ADVANCE(477);
      if (lookahead == '$') ADVANCE(449);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == ')') ADVANCE(461);
      if (lookahead == '+') ADVANCE(515);
      if (lookahead == ',') ADVANCE(592);
      if (lookahead == '-') ADVANCE(593);
      if (lookahead == '/') ADVANCE(457);
      if (lookahead == ':') ADVANCE(543);
      if (lookahead == '=') ADVANCE(259);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == 'C') ADVANCE(85);
      if (lookahead == 'F') ADVANCE(91);
      if (lookahead == 'R') ADVANCE(93);
      if (lookahead == 'V') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '{') ADVANCE(451);
      if (lookahead == '}') ADVANCE(453);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(228)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(38)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(38)
      if (lookahead == ' ') ADVANCE(443);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(40)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(40)
      if (lookahead == ' ') ADVANCE(443);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(245);
      if (lookahead == '$') ADVANCE(446);
      if (lookahead == '+') ADVANCE(515);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(518);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(518);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(78)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(66)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(66)
      if (lookahead == ' ') ADVANCE(443);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(58)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(58)
      if (lookahead == ' ') ADVANCE(443);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(56)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(56)
      if (lookahead == ' ') ADVANCE(443);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '$') ADVANCE(448);
      if (lookahead == '\\') ADVANCE(292);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(291);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead == '#') ADVANCE(477);
      if (lookahead == '$') ADVANCE(448);
      if (lookahead == '=') ADVANCE(259);
      if (lookahead == '\\') SKIP(17)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead == '#') ADVANCE(477);
      if (lookahead == '\\') SKIP(17)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == '$') ADVANCE(448);
      if (lookahead == '\\') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(442);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(15)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == ' ') ADVANCE(443);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(95)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(596);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(292);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(28)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(596);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(73)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(74)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == ' ') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(596);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(35)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(596);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == '$') ADVANCE(446);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == '+') ADVANCE(515);
      if (lookahead == '\\') ADVANCE(454);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(454);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == '$') ADVANCE(448);
      if (lookahead == '(') ADVANCE(460);
      if (lookahead == '+') ADVANCE(517);
      if (lookahead == '-') ADVANCE(456);
      if (lookahead == '\\') ADVANCE(456);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(592);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(595);
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == ' ') ADVANCE(443);
      if (lookahead == '"') ADVANCE(444);
      if (lookahead == '\'') ADVANCE(445);
      if (lookahead == '\\') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(596);
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(31)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(596);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '#') ADVANCE(477);
      if (lookahead == '$') ADVANCE(447);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == ')') ADVANCE(461);
      if (lookahead == '+') ADVANCE(515);
      if (lookahead == '-') ADVANCE(593);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == 'C') ADVANCE(85);
      if (lookahead == 'F') ADVANCE(91);
      if (lookahead == 'R') ADVANCE(93);
      if (lookahead == 'V') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(592);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '#') ADVANCE(477);
      if (lookahead == '$') ADVANCE(447);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == ')') ADVANCE(461);
      if (lookahead == '+') ADVANCE(515);
      if (lookahead == '-') ADVANCE(594);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == 'C') ADVANCE(85);
      if (lookahead == 'F') ADVANCE(91);
      if (lookahead == 'R') ADVANCE(93);
      if (lookahead == 'V') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(592);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(275);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(169);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(185);
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '$') ADVANCE(450);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(595);
      if (lookahead == '#' ||
          lookahead == '[') ADVANCE(442);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(442);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(35)
      if (lookahead != 0) ADVANCE(439);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '-') ADVANCE(593);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(592);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(35)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(595);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '-') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(592);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(35)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(595);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '$') ADVANCE(449);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '\\') SKIP(1)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38)
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '\\') ADVANCE(292);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(477);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == 'A') ADVANCE(472);
      if (lookahead == 'F') ADVANCE(473);
      if (lookahead == 'V') ADVANCE(465);
      if (lookahead == '\\') SKIP(3)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 41:
      if (lookahead == '$') ADVANCE(446);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == '+') ADVANCE(515);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(454);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41)
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 42:
      if (lookahead == '$') ADVANCE(446);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == '+') ADVANCE(515);
      if (lookahead == '\\') ADVANCE(454);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(454);
      END_STATE();
    case 43:
      if (lookahead == '$') ADVANCE(446);
      if (lookahead == '\\') ADVANCE(454);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(454);
      END_STATE();
    case 44:
      if (lookahead == '$') ADVANCE(448);
      if (lookahead == '(') ADVANCE(459);
      if (lookahead == '+') ADVANCE(516);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(454);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41)
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 45:
      if (lookahead == '$') ADVANCE(448);
      if (lookahead == '(') ADVANCE(460);
      if (lookahead == '+') ADVANCE(517);
      if (lookahead == '-') ADVANCE(456);
      if (lookahead == '\\') ADVANCE(456);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42)
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 46:
      if (lookahead == '$') ADVANCE(448);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '-') ADVANCE(299);
      if (lookahead == '\\') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(442);
      END_STATE();
    case 47:
      if (lookahead == '$') ADVANCE(448);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '-') ADVANCE(455);
      if (lookahead == '\\') ADVANCE(456);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56)
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 48:
      if (lookahead == '$') ADVANCE(448);
      if (lookahead == '+') ADVANCE(516);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '\\') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(442);
      END_STATE();
    case 49:
      if (lookahead == '$') ADVANCE(448);
      if (lookahead == '-') ADVANCE(299);
      if (lookahead == 'A') ADVANCE(324);
      if (lookahead == 'C') ADVANCE(318);
      if (lookahead == 'F') ADVANCE(325);
      if (lookahead == 'R') ADVANCE(327);
      if (lookahead == '\\') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(66)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(442);
      END_STATE();
    case 50:
      if (lookahead == '$') ADVANCE(448);
      if (lookahead == ':') ADVANCE(543);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == 'A') ADVANCE(535);
      if (lookahead == 'C') ADVANCE(529);
      if (lookahead == 'F') ADVANCE(536);
      if (lookahead == 'R') ADVANCE(538);
      if (lookahead == '\\') ADVANCE(542);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(78)
      if (lookahead != 0) ADVANCE(542);
      END_STATE();
    case 51:
      if (lookahead == '$') ADVANCE(448);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == 'A') ADVANCE(560);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'F') ADVANCE(561);
      if (lookahead == 'R') ADVANCE(563);
      if (lookahead == '\\') ADVANCE(567);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(78)
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 52:
      if (lookahead == '$') ADVANCE(448);
      if (lookahead == 'A') ADVANCE(587);
      if (lookahead == 'C') ADVANCE(584);
      if (lookahead == 'F') ADVANCE(588);
      if (lookahead == 'R') ADVANCE(589);
      if (lookahead == '\\') SKIP(6)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(78)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      END_STATE();
    case 53:
      if (lookahead == '$') ADVANCE(448);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 54:
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(292);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == '(') ADVANCE(222);
      END_STATE();
    case 56:
      if (lookahead == ')') ADVANCE(461);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '\\') SKIP(11)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56)
      END_STATE();
    case 57:
      if (lookahead == ')') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == '+') ADVANCE(515);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '\\') SKIP(9)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58)
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(284);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(97);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(176);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(98);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(221);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(132);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == ':') ADVANCE(543);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == 'C') ADVANCE(85);
      if (lookahead == 'F') ADVANCE(91);
      if (lookahead == 'R') ADVANCE(93);
      if (lookahead == '\\') SKIP(7)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(66)
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == 'C') ADVANCE(85);
      if (lookahead == 'F') ADVANCE(91);
      if (lookahead == 'R') ADVANCE(93);
      if (lookahead == '\\') SKIP(7)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(66)
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(104);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(100);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(183);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(127);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(117);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == '{') ADVANCE(451);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == '\\') SKIP(22)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '\\') SKIP(23)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(74)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(168);
      END_STATE();
    case 76:
      if (lookahead == '.') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == '=') ADVANCE(165);
      END_STATE();
    case 78:
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == 'C') ADVANCE(85);
      if (lookahead == 'F') ADVANCE(91);
      if (lookahead == 'R') ADVANCE(93);
      if (lookahead == '\\') SKIP(6)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(78)
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 80:
      if (lookahead == 'G') ADVANCE(249);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(87);
      END_STATE();
    case 82:
      if (lookahead == 'M') ADVANCE(260);
      END_STATE();
    case 83:
      if (lookahead == 'N') ADVANCE(270);
      END_STATE();
    case 84:
      if (lookahead == 'N') ADVANCE(239);
      END_STATE();
    case 85:
      if (lookahead == 'O') ADVANCE(88);
      END_STATE();
    case 86:
      if (lookahead == 'O') ADVANCE(82);
      END_STATE();
    case 87:
      if (lookahead == 'O') ADVANCE(84);
      END_STATE();
    case 88:
      if (lookahead == 'P') ADVANCE(94);
      END_STATE();
    case 89:
      if (lookahead == 'R') ADVANCE(80);
      END_STATE();
    case 90:
      if (lookahead == 'R') ADVANCE(92);
      END_STATE();
    case 91:
      if (lookahead == 'R') ADVANCE(86);
      END_STATE();
    case 92:
      if (lookahead == 'S') ADVANCE(81);
      END_STATE();
    case 93:
      if (lookahead == 'U') ADVANCE(83);
      END_STATE();
    case 94:
      if (lookahead == 'Y') ADVANCE(276);
      END_STATE();
    case 95:
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(592);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(95)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(595);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == 'd') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == 'k') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(96);
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 103:
      if (lookahead == 'b') ADVANCE(102);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(488);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(508);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(480);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(478);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(169);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(185);
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 126:
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 127:
      if (lookahead == 'f') ADVANCE(180);
      END_STATE();
    case 128:
      if (lookahead == 'f') ADVANCE(178);
      END_STATE();
    case 129:
      if (lookahead == 'g') ADVANCE(115);
      END_STATE();
    case 130:
      if (lookahead == 'g') ADVANCE(196);
      END_STATE();
    case 131:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 132:
      if (lookahead == 'g') ADVANCE(155);
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 133:
      if (lookahead == 'h') ADVANCE(492);
      END_STATE();
    case 134:
      if (lookahead == 'h') ADVANCE(482);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(160);
      END_STATE();
    case 136:
      if (lookahead == 'h') ADVANCE(114);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 146:
      if (lookahead == 'k') ADVANCE(77);
      END_STATE();
    case 147:
      if (lookahead == 'k') ADVANCE(75);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(479);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(506);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(153);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(498);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 181:
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 182:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(193);
      END_STATE();
    case 184:
      if (lookahead == 'q') ADVANCE(209);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(494);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(496);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(500);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(504);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(512);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(510);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(486);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 208:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 209:
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 210:
      if (lookahead == 'v') ADVANCE(138);
      END_STATE();
    case 211:
      if (lookahead == 'v') ADVANCE(144);
      END_STATE();
    case 212:
      if (lookahead == 'w') ADVANCE(502);
      END_STATE();
    case 213:
      if (lookahead == 'w') ADVANCE(175);
      END_STATE();
    case 214:
      if (lookahead == 'w') ADVANCE(162);
      END_STATE();
    case 215:
      if (lookahead == 'w') ADVANCE(69);
      END_STATE();
    case 216:
      if (lookahead == 'x') ADVANCE(140);
      END_STATE();
    case 217:
      if (lookahead == 'y') ADVANCE(181);
      END_STATE();
    case 218:
      if (lookahead == 'y') ADVANCE(159);
      END_STATE();
    case 219:
      if (lookahead == ' ' ||
          lookahead == '=') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 221:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 222:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 223:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 224:
      if (eof) ADVANCE(238);
      if (lookahead == '\n') SKIP(231)
      END_STATE();
    case 225:
      if (eof) ADVANCE(238);
      if (lookahead == '\n') SKIP(234)
      END_STATE();
    case 226:
      if (eof) ADVANCE(238);
      if (lookahead == '\n') SKIP(233)
      END_STATE();
    case 227:
      if (eof) ADVANCE(238);
      if (lookahead == '\n') SKIP(232)
      END_STATE();
    case 228:
      if (eof) ADVANCE(238);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '#') ADVANCE(477);
      if (lookahead == '$') ADVANCE(447);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == ')') ADVANCE(461);
      if (lookahead == '+') ADVANCE(515);
      if (lookahead == '-') ADVANCE(593);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == 'C') ADVANCE(85);
      if (lookahead == 'F') ADVANCE(91);
      if (lookahead == 'R') ADVANCE(93);
      if (lookahead == 'V') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(592);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(228)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 229:
      if (eof) ADVANCE(238);
      if (lookahead == '#') ADVANCE(477);
      if (lookahead == '$') ADVANCE(448);
      if (lookahead == '+') ADVANCE(515);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == 'A') ADVANCE(576);
      if (lookahead == 'F') ADVANCE(577);
      if (lookahead == 'V') ADVANCE(569);
      if (lookahead == '\\') SKIP(227)
      if (lookahead == '_') ADVANCE(476);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(232)
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(591);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 230:
      if (eof) ADVANCE(238);
      if (lookahead == '#') ADVANCE(477);
      if (lookahead == ')') ADVANCE(461);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '/') ADVANCE(457);
      if (lookahead == ':') ADVANCE(543);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == 'A') ADVANCE(472);
      if (lookahead == 'F') ADVANCE(473);
      if (lookahead == 'V') ADVANCE(465);
      if (lookahead == '\\') SKIP(224)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(231)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 231:
      if (eof) ADVANCE(238);
      if (lookahead == '#') ADVANCE(477);
      if (lookahead == ')') ADVANCE(461);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == 'A') ADVANCE(472);
      if (lookahead == 'F') ADVANCE(473);
      if (lookahead == 'V') ADVANCE(465);
      if (lookahead == '\\') SKIP(224)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(231)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 232:
      if (eof) ADVANCE(238);
      if (lookahead == '#') ADVANCE(477);
      if (lookahead == '+') ADVANCE(515);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == 'A') ADVANCE(472);
      if (lookahead == 'F') ADVANCE(473);
      if (lookahead == 'V') ADVANCE(465);
      if (lookahead == '\\') SKIP(227)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(232)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 233:
      if (eof) ADVANCE(238);
      if (lookahead == '#') ADVANCE(477);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == 'A') ADVANCE(472);
      if (lookahead == 'F') ADVANCE(473);
      if (lookahead == 'V') ADVANCE(465);
      if (lookahead == '\\') SKIP(226)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(233)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 234:
      if (eof) ADVANCE(238);
      if (lookahead == '#') ADVANCE(477);
      if (lookahead == 'A') ADVANCE(472);
      if (lookahead == 'F') ADVANCE(473);
      if (lookahead == 'V') ADVANCE(465);
      if (lookahead == '\\') SKIP(225)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(234)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 235:
      if (eof) ADVANCE(238);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '$') ADVANCE(448);
      if (lookahead == ':') ADVANCE(543);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == 'A') ADVANCE(532);
      if (lookahead == 'F') ADVANCE(533);
      if (lookahead == 'V') ADVANCE(519);
      if (lookahead == '\\') ADVANCE(542);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(234)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      if (lookahead != 0) ADVANCE(542);
      END_STATE();
    case 236:
      if (eof) ADVANCE(238);
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == '$') ADVANCE(448);
      if (lookahead == '-') ADVANCE(299);
      if (lookahead == 'A') ADVANCE(321);
      if (lookahead == 'F') ADVANCE(322);
      if (lookahead == 'V') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(233)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(442);
      END_STATE();
    case 237:
      if (eof) ADVANCE(238);
      if (lookahead == '#') ADVANCE(565);
      if (lookahead == '$') ADVANCE(448);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == 'A') ADVANCE(557);
      if (lookahead == 'F') ADVANCE(558);
      if (lookahead == 'V') ADVANCE(544);
      if (lookahead == '\\') ADVANCE(567);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(234)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (lookahead == ':') ADVANCE(591);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(518);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(454);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(21);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead == ':') ADVANCE(591);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ':') ADVANCE(591);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_RUN);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_version_major_minor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_feature_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(456);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_build_arg_flag_token1);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_option_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-') ADVANCE(329);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-') ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-') ADVANCE(351);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-') ADVANCE(330);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-') ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-') ADVANCE(405);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-') ADVANCE(335);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-') ADVANCE(342);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-') ADVANCE(388);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-') ADVANCE(356);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '=') ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'E') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'G') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'G') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'I') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'M') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'M') ADVANCE(267);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'N') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'N') ADVANCE(272);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'O') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'O') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'O') ADVANCE(320);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'O') ADVANCE(313);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'P') ADVANCE(328);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'R') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'R') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'R') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'R') ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'R') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'S') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'U') ADVANCE(315);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'Y') ADVANCE(278);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(376);
      if (lookahead == 'c') ADVANCE(360);
      if (lookahead == 'd') ADVANCE(364);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == 'k') ADVANCE(346);
      if (lookahead == 'p') ADVANCE(331);
      if (lookahead == 's') ADVANCE(437);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(376);
      if (lookahead == 'p') ADVANCE(374);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(418);
      if (lookahead == 'l') ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(425);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(336);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'c') ADVANCE(334);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'c') ADVANCE(363);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'c') ADVANCE(413);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'd') ADVANCE(509);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'd') ADVANCE(481);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'd') ADVANCE(489);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == 's') ADVANCE(361);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(485);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead == 'o') ADVANCE(303);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(395);
      if (lookahead == 'n') ADVANCE(350);
      if (lookahead == 'p') ADVANCE(414);
      if (lookahead == 's') ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'f') ADVANCE(397);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'f') ADVANCE(403);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'g') ADVANCE(347);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'g') ADVANCE(417);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'g') ADVANCE(349);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'h') ADVANCE(383);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'h') ADVANCE(493);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'h') ADVANCE(483);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'h') ADVANCE(344);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'i') ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'i') ADVANCE(385);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'i') ADVANCE(419);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'i') ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'i') ADVANCE(381);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'i') ADVANCE(431);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'k') ADVANCE(307);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'k') ADVANCE(305);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(393);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(375);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(365);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(348);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(398);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'm') ADVANCE(507);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'm') ADVANCE(394);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'm') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'n') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'n') ADVANCE(499);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'n') ADVANCE(427);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'n') ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'n') ADVANCE(422);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'n') ADVANCE(424);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'n') ADVANCE(345);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'n') ADVANCE(402);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'o') ADVANCE(434);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'o') ADVANCE(338);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'o') ADVANCE(429);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'o') ADVANCE(433);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'o') ADVANCE(432);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'o') ADVANCE(369);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'o') ADVANCE(306);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'o') ADVANCE(391);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'o') ADVANCE(380);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'p') ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'p') ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'p') ADVANCE(399);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(495);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(438);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(372);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(382);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(366);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(352);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(371);
      if (lookahead == 'u') ADVANCE(420);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 's') ADVANCE(497);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 's') ADVANCE(501);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 's') ADVANCE(505);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 's') ADVANCE(421);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 's') ADVANCE(428);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 's') ADVANCE(362);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 's') ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 't') ADVANCE(513);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 't') ADVANCE(511);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 't') ADVANCE(487);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 't') ADVANCE(355);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 't') ADVANCE(435);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 't') ADVANCE(409);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 't') ADVANCE(416);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'u') ADVANCE(389);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'v') ADVANCE(368);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'v') ADVANCE(370);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'w') ADVANCE(503);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'w') ADVANCE(386);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'w') ADVANCE(302);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'w') ADVANCE(401);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'x') ADVANCE(367);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'y') ADVANCE(384);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'y') ADVANCE(406);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_double_quoted_escape_sequence);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_single_quoted_escape_sequence);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(') ADVANCE(222);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      if (lookahead == '(') ADVANCE(222);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(595);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(456);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(456);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(456);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(477);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_allow_privileged);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_allow_privileged);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_push);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_push);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_no_cache);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_no_cache);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_entrypoint);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_entrypoint);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_privileged);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_privileged);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_network_none);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_network_none);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_ssh);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_ssh);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_dir);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_dir);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_keep_ts);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_keep_ts);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_keep_own);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_keep_own);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_if_exists);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_if_exists);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_symlink_no_follow);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_symlink_no_follow);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_pass_args);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_pass_args);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchmod);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchmod);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsecret);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsecret);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_DASH_DASHmount);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_DASH_DASHmount);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == ')') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(456);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'E') ADVANCE(534);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'G') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'G') ADVANCE(257);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'I') ADVANCE(528);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'M') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'M') ADVANCE(268);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'N') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'N') ADVANCE(273);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'O') ADVANCE(523);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'O') ADVANCE(525);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'O') ADVANCE(531);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'O') ADVANCE(524);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'P') ADVANCE(539);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'R') ADVANCE(520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'R') ADVANCE(527);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'R') ADVANCE(537);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'R') ADVANCE(521);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'R') ADVANCE(530);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S') ADVANCE(522);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'U') ADVANCE(526);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'Y') ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(540);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(542);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'E') ADVANCE(559);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'G') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'G') ADVANCE(258);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'M') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'M') ADVANCE(269);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'N') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'N') ADVANCE(274);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'O') ADVANCE(548);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'O') ADVANCE(550);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'O') ADVANCE(556);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'O') ADVANCE(549);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'P') ADVANCE(564);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'R') ADVANCE(552);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'R') ADVANCE(562);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'R') ADVANCE(546);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'R') ADVANCE(555);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S') ADVANCE(547);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'U') ADVANCE(551);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'Y') ADVANCE(280);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(567);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(591);
      if (lookahead == 'E') ADVANCE(578);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(591);
      if (lookahead == 'G') ADVANCE(250);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(591);
      if (lookahead == 'I') ADVANCE(575);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(591);
      if (lookahead == 'M') ADVANCE(261);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(591);
      if (lookahead == 'N') ADVANCE(240);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(591);
      if (lookahead == 'O') ADVANCE(572);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(591);
      if (lookahead == 'O') ADVANCE(573);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(591);
      if (lookahead == 'R') ADVANCE(570);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(591);
      if (lookahead == 'R') ADVANCE(574);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(591);
      if (lookahead == 'R') ADVANCE(579);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(591);
      if (lookahead == 'S') ADVANCE(571);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(591);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'G') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'M') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'N') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'O') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'O') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'P') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'R') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'R') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'U') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'Y') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(111);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(595);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 230},
  [2] = {.lex_state = 41},
  [3] = {.lex_state = 41},
  [4] = {.lex_state = 44},
  [5] = {.lex_state = 44},
  [6] = {.lex_state = 34},
  [7] = {.lex_state = 34},
  [8] = {.lex_state = 35},
  [9] = {.lex_state = 35},
  [10] = {.lex_state = 44},
  [11] = {.lex_state = 44},
  [12] = {.lex_state = 41},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 34},
  [15] = {.lex_state = 35},
  [16] = {.lex_state = 41},
  [17] = {.lex_state = 235},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 235},
  [20] = {.lex_state = 37},
  [21] = {.lex_state = 41},
  [22] = {.lex_state = 236},
  [23] = {.lex_state = 37},
  [24] = {.lex_state = 41},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 41},
  [27] = {.lex_state = 41},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 41},
  [30] = {.lex_state = 236},
  [31] = {.lex_state = 37},
  [32] = {.lex_state = 235},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 35},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 37},
  [38] = {.lex_state = 35},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 50, .external_lex_state = 2},
  [41] = {.lex_state = 37},
  [42] = {.lex_state = 37},
  [43] = {.lex_state = 237},
  [44] = {.lex_state = 37},
  [45] = {.lex_state = 35},
  [46] = {.lex_state = 237},
  [47] = {.lex_state = 37},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 49, .external_lex_state = 2},
  [50] = {.lex_state = 37},
  [51] = {.lex_state = 35},
  [52] = {.lex_state = 37},
  [53] = {.lex_state = 50, .external_lex_state = 2},
  [54] = {.lex_state = 35},
  [55] = {.lex_state = 49, .external_lex_state = 2},
  [56] = {.lex_state = 50, .external_lex_state = 2},
  [57] = {.lex_state = 35},
  [58] = {.lex_state = 51, .external_lex_state = 2},
  [59] = {.lex_state = 230},
  [60] = {.lex_state = 51, .external_lex_state = 2},
  [61] = {.lex_state = 229},
  [62] = {.lex_state = 230},
  [63] = {.lex_state = 229},
  [64] = {.lex_state = 235},
  [65] = {.lex_state = 230},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 236},
  [68] = {.lex_state = 27},
  [69] = {.lex_state = 235},
  [70] = {.lex_state = 27},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 52, .external_lex_state = 2},
  [74] = {.lex_state = 27},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 52, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 236},
  [79] = {.lex_state = 235},
  [80] = {.lex_state = 230},
  [81] = {.lex_state = 50, .external_lex_state = 2},
  [82] = {.lex_state = 230},
  [83] = {.lex_state = 50, .external_lex_state = 2},
  [84] = {.lex_state = 65, .external_lex_state = 2},
  [85] = {.lex_state = 237},
  [86] = {.lex_state = 50, .external_lex_state = 2},
  [87] = {.lex_state = 237},
  [88] = {.lex_state = 49, .external_lex_state = 2},
  [89] = {.lex_state = 48},
  [90] = {.lex_state = 45},
  [91] = {.lex_state = 49, .external_lex_state = 2},
  [92] = {.lex_state = 45},
  [93] = {.lex_state = 41},
  [94] = {.lex_state = 48},
  [95] = {.lex_state = 45},
  [96] = {.lex_state = 230},
  [97] = {.lex_state = 230},
  [98] = {.lex_state = 41},
  [99] = {.lex_state = 41},
  [100] = {.lex_state = 230},
  [101] = {.lex_state = 65, .external_lex_state = 2},
  [102] = {.lex_state = 230},
  [103] = {.lex_state = 46},
  [104] = {.lex_state = 230},
  [105] = {.lex_state = 229},
  [106] = {.lex_state = 13},
  [107] = {.lex_state = 230},
  [108] = {.lex_state = 51, .external_lex_state = 2},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 229},
  [111] = {.lex_state = 230},
  [112] = {.lex_state = 13},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 51, .external_lex_state = 2},
  [115] = {.lex_state = 230},
  [116] = {.lex_state = 230},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 65, .external_lex_state = 2},
  [119] = {.lex_state = 16},
  [120] = {.lex_state = 16},
  [121] = {.lex_state = 13},
  [122] = {.lex_state = 65, .external_lex_state = 2},
  [123] = {.lex_state = 13},
  [124] = {.lex_state = 46},
  [125] = {.lex_state = 13},
  [126] = {.lex_state = 65, .external_lex_state = 2},
  [127] = {.lex_state = 230},
  [128] = {.lex_state = 13},
  [129] = {.lex_state = 13},
  [130] = {.lex_state = 65, .external_lex_state = 2},
  [131] = {.lex_state = 13},
  [132] = {.lex_state = 13},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 230, .external_lex_state = 3},
  [135] = {.lex_state = 52, .external_lex_state = 2},
  [136] = {.lex_state = 27},
  [137] = {.lex_state = 52, .external_lex_state = 2},
  [138] = {.lex_state = 27},
  [139] = {.lex_state = 230, .external_lex_state = 3},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 47},
  [142] = {.lex_state = 47},
  [143] = {.lex_state = 47},
  [144] = {.lex_state = 27},
  [145] = {.lex_state = 230},
  [146] = {.lex_state = 230},
  [147] = {.lex_state = 230},
  [148] = {.lex_state = 230},
  [149] = {.lex_state = 230},
  [150] = {.lex_state = 230},
  [151] = {.lex_state = 230},
  [152] = {.lex_state = 230},
  [153] = {.lex_state = 230},
  [154] = {.lex_state = 230},
  [155] = {.lex_state = 230},
  [156] = {.lex_state = 230},
  [157] = {.lex_state = 230},
  [158] = {.lex_state = 230},
  [159] = {.lex_state = 230},
  [160] = {.lex_state = 230},
  [161] = {.lex_state = 65, .external_lex_state = 2},
  [162] = {.lex_state = 65, .external_lex_state = 2},
  [163] = {.lex_state = 230},
  [164] = {.lex_state = 65, .external_lex_state = 2},
  [165] = {.lex_state = 65, .external_lex_state = 2},
  [166] = {.lex_state = 230},
  [167] = {.lex_state = 230},
  [168] = {.lex_state = 65, .external_lex_state = 2},
  [169] = {.lex_state = 230},
  [170] = {.lex_state = 230},
  [171] = {.lex_state = 230},
  [172] = {.lex_state = 230},
  [173] = {.lex_state = 45},
  [174] = {.lex_state = 45},
  [175] = {.lex_state = 230},
  [176] = {.lex_state = 230},
  [177] = {.lex_state = 230},
  [178] = {.lex_state = 230},
  [179] = {.lex_state = 230},
  [180] = {.lex_state = 65, .external_lex_state = 2},
  [181] = {.lex_state = 230},
  [182] = {.lex_state = 230},
  [183] = {.lex_state = 230},
  [184] = {.lex_state = 45},
  [185] = {.lex_state = 230},
  [186] = {.lex_state = 48},
  [187] = {.lex_state = 229},
  [188] = {.lex_state = 230},
  [189] = {.lex_state = 230},
  [190] = {.lex_state = 48},
  [191] = {.lex_state = 229},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 13},
  [199] = {.lex_state = 16},
  [200] = {.lex_state = 95},
  [201] = {.lex_state = 46},
  [202] = {.lex_state = 26},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 53},
  [207] = {.lex_state = 20},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 14},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 16},
  [215] = {.lex_state = 13},
  [216] = {.lex_state = 229},
  [217] = {.lex_state = 20},
  [218] = {.lex_state = 20},
  [219] = {.lex_state = 0, .external_lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 2},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 0, .external_lex_state = 2},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 0, .external_lex_state = 2},
  [226] = {.lex_state = 95},
  [227] = {.lex_state = 0, .external_lex_state = 2},
  [228] = {.lex_state = 0, .external_lex_state = 2},
  [229] = {.lex_state = 46},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 2},
  [234] = {.lex_state = 26},
  [235] = {.lex_state = 0, .external_lex_state = 2},
  [236] = {.lex_state = 0, .external_lex_state = 2},
  [237] = {.lex_state = 20},
  [238] = {.lex_state = 28},
  [239] = {.lex_state = 20},
  [240] = {.lex_state = 0, .external_lex_state = 2},
  [241] = {.lex_state = 20},
  [242] = {.lex_state = 20},
  [243] = {.lex_state = 20},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 20},
  [246] = {.lex_state = 20},
  [247] = {.lex_state = 0, .external_lex_state = 2},
  [248] = {.lex_state = 20},
  [249] = {.lex_state = 14},
  [250] = {.lex_state = 28},
  [251] = {.lex_state = 53},
  [252] = {.lex_state = 20},
  [253] = {.lex_state = 20},
  [254] = {.lex_state = 41},
  [255] = {.lex_state = 47},
  [256] = {.lex_state = 43},
  [257] = {.lex_state = 47},
  [258] = {.lex_state = 41},
  [259] = {.lex_state = 230},
  [260] = {.lex_state = 41},
  [261] = {.lex_state = 47},
  [262] = {.lex_state = 230},
  [263] = {.lex_state = 230},
  [264] = {.lex_state = 41},
  [265] = {.lex_state = 43},
  [266] = {.lex_state = 72},
  [267] = {.lex_state = 72},
  [268] = {.lex_state = 72},
  [269] = {.lex_state = 229},
  [270] = {.lex_state = 74},
  [271] = {.lex_state = 14},
  [272] = {.lex_state = 72},
  [273] = {.lex_state = 74},
  [274] = {.lex_state = 72},
  [275] = {.lex_state = 72},
  [276] = {.lex_state = 229},
  [277] = {.lex_state = 72},
  [278] = {.lex_state = 72},
  [279] = {.lex_state = 14},
  [280] = {.lex_state = 14},
  [281] = {.lex_state = 72},
  [282] = {.lex_state = 72},
  [283] = {.lex_state = 14},
  [284] = {.lex_state = 229},
  [285] = {.lex_state = 72},
  [286] = {.lex_state = 72},
  [287] = {.lex_state = 72},
  [288] = {.lex_state = 229},
  [289] = {.lex_state = 72},
  [290] = {.lex_state = 72},
  [291] = {.lex_state = 14},
  [292] = {.lex_state = 14},
  [293] = {.lex_state = 72},
  [294] = {.lex_state = 229},
  [295] = {.lex_state = 72},
  [296] = {.lex_state = 72},
  [297] = {.lex_state = 14},
  [298] = {.lex_state = 14},
  [299] = {.lex_state = 72},
  [300] = {.lex_state = 72},
  [301] = {.lex_state = 72},
  [302] = {.lex_state = 72},
  [303] = {.lex_state = 72},
  [304] = {.lex_state = 72},
  [305] = {.lex_state = 72},
  [306] = {.lex_state = 14},
  [307] = {.lex_state = 14},
  [308] = {.lex_state = 14},
  [309] = {.lex_state = 74},
  [310] = {.lex_state = 14},
  [311] = {.lex_state = 14},
  [312] = {.lex_state = 14},
  [313] = {.lex_state = 14},
  [314] = {.lex_state = 14},
  [315] = {.lex_state = 14},
  [316] = {.lex_state = 14},
  [317] = {.lex_state = 14},
  [318] = {.lex_state = 14},
  [319] = {.lex_state = 14},
  [320] = {.lex_state = 74},
  [321] = {.lex_state = 14},
  [322] = {.lex_state = 14},
  [323] = {.lex_state = 14},
  [324] = {.lex_state = 14},
  [325] = {.lex_state = 14},
  [326] = {.lex_state = 14},
  [327] = {.lex_state = 14},
  [328] = {.lex_state = 14},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 14},
  [331] = {.lex_state = 14},
  [332] = {.lex_state = 16},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 16},
  [335] = {.lex_state = 16},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 16},
  [338] = {.lex_state = 16},
  [339] = {.lex_state = 16},
  [340] = {.lex_state = 16},
  [341] = {.lex_state = 16},
  [342] = {.lex_state = 16},
  [343] = {.lex_state = 16},
  [344] = {.lex_state = 16},
  [345] = {.lex_state = 16},
  [346] = {.lex_state = 16},
  [347] = {.lex_state = 16},
  [348] = {.lex_state = 16},
  [349] = {.lex_state = 16},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 219},
  [352] = {.lex_state = 16},
  [353] = {.lex_state = 74},
  [354] = {.lex_state = 74},
  [355] = {.lex_state = 74},
  [356] = {.lex_state = 219},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 223},
  [360] = {.lex_state = 16},
  [361] = {.lex_state = 16},
  [362] = {.lex_state = 219},
  [363] = {.lex_state = 74},
  [364] = {.lex_state = 16},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 16},
  [367] = {.lex_state = 16},
  [368] = {.lex_state = 16},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 219},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 16},
  [373] = {.lex_state = 16},
  [374] = {.lex_state = 16},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 16},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 16},
  [388] = {.lex_state = 16},
  [389] = {.lex_state = 74},
  [390] = {.lex_state = 219},
  [391] = {.lex_state = 16},
  [392] = {.lex_state = 74},
  [393] = {.lex_state = 223},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 72},
  [396] = {.lex_state = 219},
  [397] = {.lex_state = 219},
  [398] = {.lex_state = 223},
  [399] = {.lex_state = 219},
  [400] = {.lex_state = 223},
  [401] = {.lex_state = 223},
  [402] = {.lex_state = 223},
  [403] = {.lex_state = 223},
  [404] = {.lex_state = 223},
  [405] = {.lex_state = 223},
  [406] = {.lex_state = 223},
  [407] = {.lex_state = 223},
  [408] = {.lex_state = 223},
  [409] = {.lex_state = 223},
  [410] = {.lex_state = 223},
  [411] = {.lex_state = 223},
  [412] = {.lex_state = 223},
  [413] = {.lex_state = 223},
  [414] = {.lex_state = 219},
  [415] = {.lex_state = 219},
  [416] = {.lex_state = 219},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_VERSION] = ACTIONS(1),
    [anon_sym_ARG] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_RUN] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_COPY] = ACTIONS(1),
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
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_push] = ACTIONS(1),
    [sym_no_cache] = ACTIONS(1),
    [sym_entrypoint] = ACTIONS(1),
    [sym_privileged] = ACTIONS(1),
    [sym_network_none] = ACTIONS(1),
    [sym_ssh] = ACTIONS(1),
    [anon_sym_DASH_DASHsecret] = ACTIONS(1),
    [anon_sym_DASH_DASHmount] = ACTIONS(1),
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
    [sym_source_file] = STATE(394),
    [sym_version_command] = STATE(62),
    [sym_arg_command] = STATE(62),
    [sym_from_command] = STATE(62),
    [sym_target] = STATE(62),
    [aux_sym_source_file_repeat1] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_VERSION] = ACTIONS(5),
    [anon_sym_ARG] = ACTIONS(7),
    [anon_sym_FROM] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(17), 1,
      aux_sym_path_token1,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(25), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    STATE(92), 1,
      sym_expansion,
    STATE(93), 1,
      aux_sym_copy_command_repeat2,
    STATE(375), 1,
      sym_target_ref,
    STATE(254), 2,
      sym_path,
      sym_target_artifact,
    STATE(3), 3,
      sym_platform,
      sym_chmod,
      aux_sym_copy_command_repeat1,
    ACTIONS(21), 7,
      sym_allow_privileged,
      sym_dir,
      sym_keep_ts,
      sym_keep_own,
      sym_if_exists,
      sym_symlink_no_follow,
      sym_pass_args,
  [46] = 12,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(17), 1,
      aux_sym_path_token1,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(25), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    STATE(92), 1,
      sym_expansion,
    STATE(98), 1,
      aux_sym_copy_command_repeat2,
    STATE(375), 1,
      sym_target_ref,
    STATE(254), 2,
      sym_path,
      sym_target_artifact,
    STATE(12), 3,
      sym_platform,
      sym_chmod,
      aux_sym_copy_command_repeat1,
    ACTIONS(29), 7,
      sym_allow_privileged,
      sym_dir,
      sym_keep_ts,
      sym_keep_own,
      sym_if_exists,
      sym_symlink_no_follow,
      sym_pass_args,
  [92] = 4,
    ACTIONS(36), 1,
      anon_sym_DOLLAR2,
    ACTIONS(31), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(4), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(34), 13,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      anon_sym_LPAREN,
      sym_allow_privileged,
      sym_dir,
      sym_keep_ts,
      sym_keep_own,
      sym_if_exists,
      sym_symlink_no_follow,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHchmod,
      anon_sym_PLUS,
  [120] = 4,
    ACTIONS(43), 1,
      anon_sym_DOLLAR2,
    ACTIONS(39), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(4), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(41), 13,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      anon_sym_LPAREN,
      sym_allow_privileged,
      sym_dir,
      sym_keep_ts,
      sym_keep_own,
      sym_if_exists,
      sym_symlink_no_follow,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHchmod,
      anon_sym_PLUS,
  [148] = 6,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(50), 1,
      anon_sym_BSLASH2,
    ACTIONS(53), 1,
      anon_sym_DOLLAR2,
    STATE(6), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(34), 11,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHmount,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [179] = 6,
    ACTIONS(56), 1,
      anon_sym_DASH_DASH,
    ACTIONS(58), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(60), 1,
      anon_sym_BSLASH2,
    ACTIONS(62), 1,
      anon_sym_DOLLAR2,
    STATE(6), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(41), 11,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHmount,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [210] = 9,
    ACTIONS(64), 1,
      anon_sym_DASH_DASH,
    ACTIONS(68), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(70), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(72), 1,
      aux_sym_shell_fragment_token1,
    STATE(250), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(367), 1,
      sym_shell_fragment,
    ACTIONS(74), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    STATE(15), 3,
      sym_secret,
      sym_mount,
      aux_sym_run_command_repeat1,
    ACTIONS(66), 6,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
  [246] = 9,
    ACTIONS(68), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(70), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(72), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(76), 1,
      anon_sym_DASH_DASH,
    STATE(250), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(346), 1,
      sym_shell_fragment,
    ACTIONS(74), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    STATE(8), 3,
      sym_secret,
      sym_mount,
      aux_sym_run_command_repeat1,
    ACTIONS(78), 6,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
  [282] = 2,
    ACTIONS(82), 1,
      anon_sym_DOLLAR2,
    ACTIONS(80), 15,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      anon_sym_LPAREN,
      sym_allow_privileged,
      sym_dir,
      sym_keep_ts,
      sym_keep_own,
      sym_if_exists,
      sym_symlink_no_follow,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHchmod,
      anon_sym_PLUS,
  [303] = 2,
    ACTIONS(86), 1,
      anon_sym_DOLLAR2,
    ACTIONS(84), 15,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      anon_sym_LPAREN,
      sym_allow_privileged,
      sym_dir,
      sym_keep_ts,
      sym_keep_own,
      sym_if_exists,
      sym_symlink_no_follow,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHchmod,
      anon_sym_PLUS,
  [324] = 5,
    ACTIONS(93), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(96), 1,
      anon_sym_DASH_DASHchmod,
    STATE(12), 3,
      sym_platform,
      sym_chmod,
      aux_sym_copy_command_repeat1,
    ACTIONS(88), 4,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      anon_sym_LPAREN,
      anon_sym_PLUS,
    ACTIONS(90), 7,
      sym_allow_privileged,
      sym_dir,
      sym_keep_ts,
      sym_keep_own,
      sym_if_exists,
      sym_symlink_no_follow,
      sym_pass_args,
  [351] = 2,
    ACTIONS(82), 2,
      anon_sym_DASH_DASH,
      anon_sym_BSLASH2,
    ACTIONS(80), 13,
      aux_sym_unquoted_string_token1,
      anon_sym_DOLLAR2,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHmount,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [371] = 2,
    ACTIONS(86), 2,
      anon_sym_DASH_DASH,
      anon_sym_BSLASH2,
    ACTIONS(84), 13,
      aux_sym_unquoted_string_token1,
      anon_sym_DOLLAR2,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHmount,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [391] = 6,
    ACTIONS(104), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(107), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(110), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(99), 3,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    STATE(15), 3,
      sym_secret,
      sym_mount,
      aux_sym_run_command_repeat1,
    ACTIONS(101), 6,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
  [419] = 1,
    ACTIONS(112), 13,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      anon_sym_LPAREN,
      sym_allow_privileged,
      sym_dir,
      sym_keep_ts,
      sym_keep_own,
      sym_if_exists,
      sym_symlink_no_follow,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHchmod,
      anon_sym_PLUS,
  [435] = 5,
    ACTIONS(118), 1,
      anon_sym_DOLLAR2,
    ACTIONS(120), 1,
      aux_sym_image_name_token2,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      anon_sym_COLON2,
      anon_sym_AT,
    STATE(32), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(116), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
  [459] = 7,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR2,
    ACTIONS(130), 1,
      sym_expr,
    ACTIONS(126), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(120), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(328), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [487] = 5,
    ACTIONS(118), 1,
      anon_sym_DOLLAR2,
    ACTIONS(136), 1,
      aux_sym_image_name_token2,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      anon_sym_COLON2,
      anon_sym_AT,
    STATE(17), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(134), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
  [511] = 7,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR2,
    ACTIONS(138), 1,
      sym_expr,
    ACTIONS(126), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(120), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(313), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [539] = 1,
    ACTIONS(140), 13,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      anon_sym_LPAREN,
      sym_allow_privileged,
      sym_dir,
      sym_keep_ts,
      sym_keep_own,
      sym_if_exists,
      sym_symlink_no_follow,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHchmod,
      anon_sym_PLUS,
  [555] = 6,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(145), 1,
      anon_sym_BSLASH2,
    ACTIONS(148), 1,
      anon_sym_DOLLAR2,
    STATE(22), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(34), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH2,
      sym_identifier,
      sym_comment,
  [581] = 7,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR2,
    ACTIONS(151), 1,
      sym_expr,
    ACTIONS(126), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(120), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(327), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [609] = 1,
    ACTIONS(153), 13,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      anon_sym_LPAREN,
      sym_allow_privileged,
      sym_dir,
      sym_keep_ts,
      sym_keep_own,
      sym_if_exists,
      sym_symlink_no_follow,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHchmod,
      anon_sym_PLUS,
  [625] = 7,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR2,
    ACTIONS(155), 1,
      sym_expr,
    ACTIONS(126), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(120), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(319), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [653] = 1,
    ACTIONS(157), 13,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      anon_sym_LPAREN,
      sym_allow_privileged,
      sym_dir,
      sym_keep_ts,
      sym_keep_own,
      sym_if_exists,
      sym_symlink_no_follow,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHchmod,
      anon_sym_PLUS,
  [669] = 1,
    ACTIONS(159), 13,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      anon_sym_LPAREN,
      sym_allow_privileged,
      sym_dir,
      sym_keep_ts,
      sym_keep_own,
      sym_if_exists,
      sym_symlink_no_follow,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHchmod,
      anon_sym_PLUS,
  [685] = 7,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR2,
    ACTIONS(161), 1,
      sym_expr,
    ACTIONS(126), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(120), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(307), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [713] = 1,
    ACTIONS(163), 13,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      anon_sym_LPAREN,
      sym_allow_privileged,
      sym_dir,
      sym_keep_ts,
      sym_keep_own,
      sym_if_exists,
      sym_symlink_no_follow,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHchmod,
      anon_sym_PLUS,
  [729] = 6,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(167), 1,
      anon_sym_BSLASH2,
    ACTIONS(169), 1,
      anon_sym_DOLLAR2,
    STATE(22), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(41), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH2,
      sym_identifier,
      sym_comment,
  [755] = 7,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR2,
    ACTIONS(171), 1,
      sym_expr,
    ACTIONS(126), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(120), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(321), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [783] = 5,
    ACTIONS(177), 1,
      anon_sym_DOLLAR2,
    ACTIONS(180), 1,
      aux_sym_image_name_token2,
    ACTIONS(173), 3,
      ts_builtin_sym_end,
      anon_sym_COLON2,
      anon_sym_AT,
    STATE(32), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(175), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
  [807] = 7,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR2,
    ACTIONS(183), 1,
      sym_expr,
    ACTIONS(126), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(120), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(324), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [835] = 7,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR2,
    ACTIONS(185), 1,
      sym_expr,
    ACTIONS(126), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(120), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(323), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [863] = 2,
    ACTIONS(189), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(187), 11,
      anon_sym_DASH_DASH,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHmount,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [880] = 11,
    ACTIONS(191), 1,
      anon_sym_LF,
    ACTIONS(193), 1,
      anon_sym_DOLLAR,
    ACTIONS(195), 1,
      sym_allow_privileged,
    ACTIONS(197), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(199), 1,
      anon_sym_PLUS,
    ACTIONS(201), 1,
      aux_sym_image_name_token1,
    STATE(53), 1,
      sym_expansion,
    STATE(84), 1,
      sym_image_name,
    STATE(118), 1,
      sym_target_ref,
    STATE(227), 1,
      sym_image_spec,
    STATE(187), 2,
      sym_platform,
      aux_sym_from_command_repeat1,
  [915] = 6,
    ACTIONS(43), 1,
      anon_sym_DOLLAR2,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(5), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(24), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [940] = 2,
    ACTIONS(159), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(209), 11,
      anon_sym_DASH_DASH,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHmount,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [957] = 6,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DOLLAR2,
    ACTIONS(215), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(7), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(35), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [982] = 5,
    ACTIONS(219), 1,
      anon_sym_DOLLAR2,
    ACTIONS(222), 1,
      aux_sym_image_name_token2,
    ACTIONS(173), 3,
      sym__dedent,
      anon_sym_COLON2,
      anon_sym_AT,
    STATE(40), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(175), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [1005] = 6,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(231), 1,
      anon_sym_DOLLAR2,
    ACTIONS(229), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(124), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(115), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [1030] = 6,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DOLLAR2,
    ACTIONS(215), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(7), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(45), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [1055] = 5,
    ACTIONS(237), 1,
      anon_sym_DOLLAR2,
    ACTIONS(240), 1,
      aux_sym_image_tag_token1,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
    STATE(43), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
    ACTIONS(235), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
  [1078] = 6,
    ACTIONS(169), 1,
      anon_sym_DOLLAR2,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(243), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(30), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(115), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [1103] = 2,
    ACTIONS(247), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(245), 11,
      anon_sym_DASH_DASH,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHmount,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [1120] = 5,
    ACTIONS(253), 1,
      anon_sym_DOLLAR2,
    ACTIONS(255), 1,
      aux_sym_image_tag_token1,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
    STATE(43), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
    ACTIONS(251), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
  [1143] = 6,
    ACTIONS(43), 1,
      anon_sym_DOLLAR2,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(5), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(21), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [1168] = 11,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(197), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(257), 1,
      anon_sym_LF,
    ACTIONS(259), 1,
      anon_sym_DOLLAR,
    ACTIONS(261), 1,
      sym_allow_privileged,
    ACTIONS(263), 1,
      aux_sym_image_name_token1,
    STATE(19), 1,
      sym_expansion,
    STATE(65), 1,
      sym_image_name,
    STATE(82), 1,
      sym_target_ref,
    STATE(156), 1,
      sym_image_spec,
    STATE(191), 2,
      sym_platform,
      aux_sym_from_command_repeat1,
  [1203] = 6,
    ACTIONS(56), 1,
      sym__dedent,
    ACTIONS(265), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(267), 1,
      anon_sym_BSLASH2,
    ACTIONS(269), 1,
      anon_sym_DOLLAR2,
    STATE(55), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(41), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
      anon_sym_DASH_DASH2,
  [1228] = 6,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DOLLAR2,
    ACTIONS(275), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(94), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(294), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [1253] = 2,
    ACTIONS(157), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(279), 11,
      anon_sym_DASH_DASH,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHmount,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [1270] = 6,
    ACTIONS(269), 1,
      anon_sym_DOLLAR2,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(49), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(180), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [1295] = 5,
    ACTIONS(287), 1,
      anon_sym_DOLLAR2,
    ACTIONS(289), 1,
      aux_sym_image_name_token2,
    ACTIONS(132), 3,
      sym__dedent,
      anon_sym_COLON2,
      anon_sym_AT,
    STATE(56), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(134), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [1318] = 2,
    ACTIONS(163), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(291), 11,
      anon_sym_DASH_DASH,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHmount,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [1335] = 6,
    ACTIONS(45), 1,
      sym__dedent,
    ACTIONS(293), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(296), 1,
      anon_sym_BSLASH2,
    ACTIONS(299), 1,
      anon_sym_DOLLAR2,
    STATE(55), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(34), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
      anon_sym_DASH_DASH2,
  [1360] = 5,
    ACTIONS(287), 1,
      anon_sym_DOLLAR2,
    ACTIONS(302), 1,
      aux_sym_image_name_token2,
    ACTIONS(114), 3,
      sym__dedent,
      anon_sym_COLON2,
      anon_sym_AT,
    STATE(40), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(116), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [1383] = 2,
    ACTIONS(112), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(304), 11,
      anon_sym_DASH_DASH,
      sym_push,
      sym_no_cache,
      sym_entrypoint,
      sym_privileged,
      sym_network_none,
      sym_ssh,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHmount,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [1400] = 5,
    ACTIONS(306), 1,
      anon_sym_DOLLAR2,
    ACTIONS(309), 1,
      aux_sym_image_tag_token1,
    ACTIONS(233), 2,
      sym__dedent,
      anon_sym_AT,
    STATE(58), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
    ACTIONS(235), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [1422] = 7,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 1,
      anon_sym_VERSION,
    ACTIONS(317), 1,
      anon_sym_ARG,
    ACTIONS(320), 1,
      anon_sym_FROM,
    ACTIONS(323), 1,
      sym_identifier,
    ACTIONS(326), 1,
      sym_comment,
    STATE(59), 5,
      sym_version_command,
      sym_arg_command,
      sym_from_command,
      sym_target,
      aux_sym_source_file_repeat1,
  [1448] = 5,
    ACTIONS(329), 1,
      anon_sym_DOLLAR2,
    ACTIONS(331), 1,
      aux_sym_image_tag_token1,
    ACTIONS(249), 2,
      sym__dedent,
      anon_sym_AT,
    STATE(58), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
    ACTIONS(251), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [1470] = 5,
    ACTIONS(337), 1,
      anon_sym_DOLLAR2,
    ACTIONS(339), 1,
      aux_sym_image_digest_token1,
    ACTIONS(333), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(63), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
    ACTIONS(335), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1492] = 7,
    ACTIONS(5), 1,
      anon_sym_VERSION,
    ACTIONS(7), 1,
      anon_sym_ARG,
    ACTIONS(9), 1,
      anon_sym_FROM,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 1,
      sym_comment,
    STATE(59), 5,
      sym_version_command,
      sym_arg_command,
      sym_from_command,
      sym_target,
      aux_sym_source_file_repeat1,
  [1518] = 5,
    ACTIONS(349), 1,
      anon_sym_DOLLAR2,
    ACTIONS(352), 1,
      aux_sym_image_digest_token1,
    ACTIONS(345), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(63), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
    ACTIONS(347), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1540] = 2,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      anon_sym_COLON2,
      anon_sym_AT,
    ACTIONS(80), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
      aux_sym_image_name_token2,
  [1555] = 6,
    ACTIONS(359), 1,
      anon_sym_COLON2,
    ACTIONS(361), 1,
      anon_sym_AT,
    STATE(104), 1,
      sym_image_tag,
    STATE(183), 1,
      sym_image_digest,
    ACTIONS(355), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(357), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1578] = 6,
    ACTIONS(363), 1,
      anon_sym_ARG,
    ACTIONS(365), 1,
      anon_sym_FROM,
    ACTIONS(367), 1,
      anon_sym_RUN,
    ACTIONS(369), 1,
      anon_sym_COPY,
    ACTIONS(371), 1,
      sym__dedent,
    STATE(77), 5,
      sym_arg_command,
      sym_from_command,
      sym_run_command,
      sym_copy_command,
      aux_sym_target_repeat1,
  [1601] = 2,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(84), 7,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH2,
      aux_sym_unquoted_string_token1,
      sym_identifier,
      sym_comment,
  [1616] = 4,
    ACTIONS(375), 1,
      anon_sym_DOLLAR2,
    ACTIONS(377), 1,
      aux_sym_path_token2,
    STATE(74), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
    ACTIONS(373), 5,
      anon_sym_LF,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      anon_sym_LPAREN,
      anon_sym_PLUS,
  [1635] = 2,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      anon_sym_COLON2,
      anon_sym_AT,
    ACTIONS(84), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
      aux_sym_image_name_token2,
  [1650] = 4,
    ACTIONS(375), 1,
      anon_sym_DOLLAR2,
    ACTIONS(381), 1,
      aux_sym_path_token2,
    STATE(68), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
    ACTIONS(379), 5,
      anon_sym_LF,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      anon_sym_LPAREN,
      anon_sym_PLUS,
  [1669] = 6,
    ACTIONS(363), 1,
      anon_sym_ARG,
    ACTIONS(365), 1,
      anon_sym_FROM,
    ACTIONS(367), 1,
      anon_sym_RUN,
    ACTIONS(369), 1,
      anon_sym_COPY,
    ACTIONS(371), 1,
      sym__dedent,
    STATE(72), 5,
      sym_arg_command,
      sym_from_command,
      sym_run_command,
      sym_copy_command,
      aux_sym_target_repeat1,
  [1692] = 6,
    ACTIONS(363), 1,
      anon_sym_ARG,
    ACTIONS(365), 1,
      anon_sym_FROM,
    ACTIONS(367), 1,
      anon_sym_RUN,
    ACTIONS(369), 1,
      anon_sym_COPY,
    ACTIONS(383), 1,
      sym__dedent,
    STATE(77), 5,
      sym_arg_command,
      sym_from_command,
      sym_run_command,
      sym_copy_command,
      aux_sym_target_repeat1,
  [1715] = 5,
    ACTIONS(333), 1,
      sym__dedent,
    ACTIONS(385), 1,
      anon_sym_DOLLAR2,
    ACTIONS(387), 1,
      aux_sym_image_digest_token1,
    STATE(76), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
    ACTIONS(335), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [1736] = 4,
    ACTIONS(391), 1,
      anon_sym_DOLLAR2,
    ACTIONS(394), 1,
      aux_sym_path_token2,
    STATE(74), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
    ACTIONS(389), 5,
      anon_sym_LF,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      anon_sym_LPAREN,
      anon_sym_PLUS,
  [1755] = 6,
    ACTIONS(363), 1,
      anon_sym_ARG,
    ACTIONS(365), 1,
      anon_sym_FROM,
    ACTIONS(367), 1,
      anon_sym_RUN,
    ACTIONS(369), 1,
      anon_sym_COPY,
    ACTIONS(397), 1,
      sym__dedent,
    STATE(66), 5,
      sym_arg_command,
      sym_from_command,
      sym_run_command,
      sym_copy_command,
      aux_sym_target_repeat1,
  [1778] = 5,
    ACTIONS(345), 1,
      sym__dedent,
    ACTIONS(399), 1,
      anon_sym_DOLLAR2,
    ACTIONS(402), 1,
      aux_sym_image_digest_token1,
    STATE(76), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
    ACTIONS(347), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [1799] = 6,
    ACTIONS(405), 1,
      anon_sym_ARG,
    ACTIONS(408), 1,
      anon_sym_FROM,
    ACTIONS(411), 1,
      anon_sym_RUN,
    ACTIONS(414), 1,
      anon_sym_COPY,
    ACTIONS(417), 1,
      sym__dedent,
    STATE(77), 5,
      sym_arg_command,
      sym_from_command,
      sym_run_command,
      sym_copy_command,
      aux_sym_target_repeat1,
  [1822] = 2,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(80), 7,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH2,
      aux_sym_unquoted_string_token1,
      sym_identifier,
      sym_comment,
  [1837] = 2,
    ACTIONS(419), 4,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      anon_sym_COLON2,
      anon_sym_AT,
    ACTIONS(421), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
      aux_sym_image_name_token2,
  [1852] = 4,
    ACTIONS(427), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(423), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(96), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(425), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1870] = 2,
    ACTIONS(86), 4,
      sym__dedent,
      anon_sym_DOLLAR2,
      anon_sym_COLON2,
      anon_sym_AT,
    ACTIONS(84), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
      aux_sym_image_name_token2,
  [1884] = 4,
    ACTIONS(427), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(429), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(100), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(431), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1902] = 2,
    ACTIONS(419), 4,
      sym__dedent,
      anon_sym_DOLLAR2,
      anon_sym_COLON2,
      anon_sym_AT,
    ACTIONS(421), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
      aux_sym_image_name_token2,
  [1916] = 5,
    ACTIONS(433), 1,
      anon_sym_COLON2,
    ACTIONS(435), 1,
      anon_sym_AT,
    STATE(140), 1,
      sym_image_tag,
    STATE(247), 1,
      sym_image_digest,
    ACTIONS(355), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [1936] = 2,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      anon_sym_AT,
    ACTIONS(80), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
      aux_sym_image_tag_token1,
  [1950] = 2,
    ACTIONS(82), 4,
      sym__dedent,
      anon_sym_DOLLAR2,
      anon_sym_COLON2,
      anon_sym_AT,
    ACTIONS(80), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
      aux_sym_image_name_token2,
  [1964] = 2,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      anon_sym_AT,
    ACTIONS(84), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
      aux_sym_image_tag_token1,
  [1978] = 2,
    ACTIONS(86), 3,
      sym__dedent,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(84), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
      anon_sym_DASH_DASH2,
      aux_sym_unquoted_string_token1,
  [1992] = 5,
    ACTIONS(437), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(440), 1,
      anon_sym_BSLASH2,
    ACTIONS(443), 1,
      anon_sym_DOLLAR2,
    ACTIONS(34), 3,
      sym_allow_privileged,
      anon_sym_DASH_DASHplatform,
      anon_sym_PLUS,
    STATE(89), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [2012] = 4,
    ACTIONS(446), 1,
      anon_sym_DOLLAR2,
    ACTIONS(449), 1,
      aux_sym_path_token2,
    STATE(90), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
    ACTIONS(389), 4,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      anon_sym_LPAREN,
      anon_sym_PLUS,
  [2030] = 2,
    ACTIONS(82), 3,
      sym__dedent,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(80), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
      anon_sym_DASH_DASH2,
      aux_sym_unquoted_string_token1,
  [2044] = 4,
    ACTIONS(452), 1,
      anon_sym_DOLLAR2,
    ACTIONS(454), 1,
      aux_sym_path_token2,
    STATE(95), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
    ACTIONS(379), 4,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      anon_sym_LPAREN,
      anon_sym_PLUS,
  [2062] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(456), 1,
      anon_sym_DOLLAR,
    ACTIONS(458), 1,
      aux_sym_path_token1,
    STATE(70), 1,
      sym_expansion,
    STATE(99), 1,
      aux_sym_copy_command_repeat2,
    STATE(234), 1,
      sym_path,
    STATE(254), 1,
      sym_target_artifact,
    STATE(375), 1,
      sym_target_ref,
  [2090] = 5,
    ACTIONS(277), 1,
      anon_sym_DOLLAR2,
    ACTIONS(460), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(462), 1,
      anon_sym_BSLASH2,
    ACTIONS(41), 3,
      sym_allow_privileged,
      anon_sym_DASH_DASHplatform,
      anon_sym_PLUS,
    STATE(89), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [2110] = 4,
    ACTIONS(452), 1,
      anon_sym_DOLLAR2,
    ACTIONS(464), 1,
      aux_sym_path_token2,
    STATE(90), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
    ACTIONS(373), 4,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      anon_sym_LPAREN,
      anon_sym_PLUS,
  [2128] = 4,
    ACTIONS(470), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(466), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(96), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(468), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2146] = 4,
    ACTIONS(427), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(473), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(80), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(475), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2164] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(456), 1,
      anon_sym_DOLLAR,
    ACTIONS(458), 1,
      aux_sym_path_token1,
    STATE(70), 1,
      sym_expansion,
    STATE(99), 1,
      aux_sym_copy_command_repeat2,
    STATE(202), 1,
      sym_path,
    STATE(254), 1,
      sym_target_artifact,
    STATE(375), 1,
      sym_target_ref,
  [2192] = 8,
    ACTIONS(477), 1,
      anon_sym_DOLLAR,
    ACTIONS(480), 1,
      aux_sym_path_token1,
    ACTIONS(483), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      anon_sym_PLUS,
    STATE(92), 1,
      sym_expansion,
    STATE(99), 1,
      aux_sym_copy_command_repeat2,
    STATE(375), 1,
      sym_target_ref,
    STATE(254), 2,
      sym_path,
      sym_target_artifact,
  [2218] = 4,
    ACTIONS(427), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(473), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(96), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(475), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2236] = 3,
    ACTIONS(489), 1,
      anon_sym_DASH_DASH2,
    STATE(130), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(473), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [2251] = 2,
    ACTIONS(491), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH2,
      anon_sym_SLASH,
      sym_comment,
    ACTIONS(493), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2264] = 5,
    ACTIONS(495), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(498), 1,
      anon_sym_BSLASH2,
    ACTIONS(501), 1,
      anon_sym_DOLLAR2,
    ACTIONS(34), 2,
      anon_sym_DASH_DASH2,
      anon_sym_RPAREN,
    STATE(103), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [2283] = 4,
    ACTIONS(361), 1,
      anon_sym_AT,
    STATE(171), 1,
      sym_image_digest,
    ACTIONS(504), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(506), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2300] = 2,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      sym_comment,
    ACTIONS(84), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      aux_sym_image_digest_token1,
  [2313] = 5,
    ACTIONS(508), 1,
      anon_sym_DQUOTE,
    ACTIONS(510), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(516), 1,
      anon_sym_DOLLAR2,
    ACTIONS(513), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(106), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2332] = 2,
    ACTIONS(157), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
    ACTIONS(279), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH2,
      anon_sym_RPAREN,
      sym_comment,
  [2345] = 2,
    ACTIONS(86), 3,
      sym__dedent,
      anon_sym_DOLLAR2,
      anon_sym_AT,
    ACTIONS(84), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
      aux_sym_image_tag_token1,
  [2358] = 5,
    ACTIONS(519), 1,
      anon_sym_DQUOTE,
    ACTIONS(521), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(525), 1,
      anon_sym_DOLLAR2,
    ACTIONS(523), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(125), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2377] = 2,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      sym_comment,
    ACTIONS(80), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      aux_sym_image_digest_token1,
  [2390] = 2,
    ACTIONS(159), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
    ACTIONS(209), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH2,
      anon_sym_RPAREN,
      sym_comment,
  [2403] = 5,
    ACTIONS(525), 1,
      anon_sym_DOLLAR2,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(531), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(113), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2422] = 5,
    ACTIONS(525), 1,
      anon_sym_DOLLAR2,
    ACTIONS(533), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(537), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(106), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2441] = 2,
    ACTIONS(82), 3,
      sym__dedent,
      anon_sym_DOLLAR2,
      anon_sym_AT,
    ACTIONS(80), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
      aux_sym_image_tag_token1,
  [2454] = 2,
    ACTIONS(539), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH2,
      anon_sym_RPAREN,
      sym_comment,
    ACTIONS(541), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2467] = 2,
    ACTIONS(112), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
    ACTIONS(304), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH2,
      anon_sym_RPAREN,
      sym_comment,
  [2480] = 5,
    ACTIONS(525), 1,
      anon_sym_DOLLAR2,
    ACTIONS(543), 1,
      anon_sym_DQUOTE,
    ACTIONS(545), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(547), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(121), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2499] = 3,
    ACTIONS(489), 1,
      anon_sym_DASH_DASH2,
    STATE(101), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(429), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [2514] = 6,
    ACTIONS(34), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LF,
    ACTIONS(549), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(552), 1,
      anon_sym_BSLASH2,
    ACTIONS(555), 1,
      anon_sym_DOLLAR2,
    STATE(119), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [2535] = 6,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LF,
    ACTIONS(558), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(560), 1,
      anon_sym_BSLASH2,
    ACTIONS(562), 1,
      anon_sym_DOLLAR2,
    STATE(119), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [2556] = 5,
    ACTIONS(525), 1,
      anon_sym_DOLLAR2,
    ACTIONS(535), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(564), 1,
      anon_sym_DQUOTE,
    ACTIONS(537), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(106), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2575] = 3,
    ACTIONS(489), 1,
      anon_sym_DASH_DASH2,
    STATE(130), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(423), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [2590] = 5,
    ACTIONS(525), 1,
      anon_sym_DOLLAR2,
    ACTIONS(566), 1,
      anon_sym_DQUOTE,
    ACTIONS(568), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(570), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(128), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2609] = 5,
    ACTIONS(231), 1,
      anon_sym_DOLLAR2,
    ACTIONS(572), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(574), 1,
      anon_sym_BSLASH2,
    ACTIONS(41), 2,
      anon_sym_DASH_DASH2,
      anon_sym_RPAREN,
    STATE(103), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [2628] = 5,
    ACTIONS(525), 1,
      anon_sym_DOLLAR2,
    ACTIONS(535), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(576), 1,
      anon_sym_DQUOTE,
    ACTIONS(537), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(106), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2647] = 3,
    ACTIONS(489), 1,
      anon_sym_DASH_DASH2,
    STATE(122), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(473), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [2662] = 2,
    ACTIONS(163), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
    ACTIONS(291), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH2,
      anon_sym_RPAREN,
      sym_comment,
  [2675] = 5,
    ACTIONS(525), 1,
      anon_sym_DOLLAR2,
    ACTIONS(535), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(578), 1,
      anon_sym_DQUOTE,
    ACTIONS(537), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(106), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2694] = 5,
    ACTIONS(525), 1,
      anon_sym_DOLLAR2,
    ACTIONS(580), 1,
      anon_sym_DQUOTE,
    ACTIONS(582), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(584), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(131), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2713] = 3,
    ACTIONS(586), 1,
      anon_sym_DASH_DASH2,
    STATE(130), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(466), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [2728] = 5,
    ACTIONS(525), 1,
      anon_sym_DOLLAR2,
    ACTIONS(535), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(537), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(106), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2747] = 5,
    ACTIONS(525), 1,
      anon_sym_DOLLAR2,
    ACTIONS(591), 1,
      anon_sym_DQUOTE,
    ACTIONS(593), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(595), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(133), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2766] = 5,
    ACTIONS(525), 1,
      anon_sym_DOLLAR2,
    ACTIONS(535), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(597), 1,
      anon_sym_DQUOTE,
    ACTIONS(537), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(106), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2785] = 3,
    ACTIONS(603), 1,
      sym__indent,
    ACTIONS(599), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(601), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2799] = 2,
    ACTIONS(82), 2,
      sym__dedent,
      anon_sym_DOLLAR2,
    ACTIONS(80), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
      aux_sym_image_digest_token1,
  [2811] = 2,
    ACTIONS(82), 1,
      anon_sym_DOLLAR2,
    ACTIONS(80), 6,
      anon_sym_LF,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      aux_sym_path_token2,
      anon_sym_LPAREN,
      anon_sym_PLUS,
  [2823] = 2,
    ACTIONS(86), 2,
      sym__dedent,
      anon_sym_DOLLAR2,
    ACTIONS(84), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
      aux_sym_image_digest_token1,
  [2835] = 2,
    ACTIONS(86), 1,
      anon_sym_DOLLAR2,
    ACTIONS(84), 6,
      anon_sym_LF,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      aux_sym_path_token2,
      anon_sym_LPAREN,
      anon_sym_PLUS,
  [2847] = 3,
    ACTIONS(609), 1,
      sym__indent,
    ACTIONS(605), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(607), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2861] = 3,
    ACTIONS(435), 1,
      anon_sym_AT,
    STATE(204), 1,
      sym_image_digest,
    ACTIONS(504), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [2875] = 4,
    ACTIONS(611), 1,
      anon_sym_DOLLAR2,
    ACTIONS(613), 1,
      aux_sym_path_token2,
    ACTIONS(379), 2,
      anon_sym_DASH_DASH2,
      anon_sym_RPAREN,
    STATE(142), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2891] = 4,
    ACTIONS(611), 1,
      anon_sym_DOLLAR2,
    ACTIONS(615), 1,
      aux_sym_path_token2,
    ACTIONS(373), 2,
      anon_sym_DASH_DASH2,
      anon_sym_RPAREN,
    STATE(143), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2907] = 4,
    ACTIONS(617), 1,
      anon_sym_DOLLAR2,
    ACTIONS(620), 1,
      aux_sym_path_token2,
    ACTIONS(389), 2,
      anon_sym_DASH_DASH2,
      anon_sym_RPAREN,
    STATE(143), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2923] = 2,
    ACTIONS(419), 1,
      anon_sym_DOLLAR2,
    ACTIONS(421), 6,
      anon_sym_LF,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      aux_sym_path_token2,
      anon_sym_LPAREN,
      anon_sym_PLUS,
  [2935] = 2,
    ACTIONS(623), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(625), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2946] = 2,
    ACTIONS(627), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(629), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2957] = 2,
    ACTIONS(631), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(633), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2968] = 2,
    ACTIONS(635), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(637), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2979] = 2,
    ACTIONS(639), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(641), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2990] = 2,
    ACTIONS(643), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(645), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3001] = 2,
    ACTIONS(647), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(649), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3012] = 2,
    ACTIONS(651), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(653), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3023] = 2,
    ACTIONS(655), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(657), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3034] = 2,
    ACTIONS(659), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(661), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3045] = 2,
    ACTIONS(663), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(665), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3056] = 2,
    ACTIONS(429), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(431), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3067] = 2,
    ACTIONS(667), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(669), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3078] = 2,
    ACTIONS(671), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(673), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3089] = 2,
    ACTIONS(675), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(677), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3100] = 2,
    ACTIONS(679), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(681), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3111] = 1,
    ACTIONS(209), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
      anon_sym_DASH_DASH2,
  [3120] = 1,
    ACTIONS(304), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
      anon_sym_DASH_DASH2,
  [3129] = 2,
    ACTIONS(683), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(685), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3140] = 1,
    ACTIONS(491), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
      anon_sym_DASH_DASH2,
  [3149] = 1,
    ACTIONS(291), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
      anon_sym_DASH_DASH2,
  [3158] = 2,
    ACTIONS(687), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(689), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3169] = 2,
    ACTIONS(691), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(693), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3180] = 1,
    ACTIONS(279), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
      anon_sym_DASH_DASH2,
  [3189] = 2,
    ACTIONS(695), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(697), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3200] = 2,
    ACTIONS(699), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(701), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3211] = 2,
    ACTIONS(703), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(705), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3222] = 2,
    ACTIONS(707), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(709), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3233] = 2,
    ACTIONS(82), 1,
      anon_sym_DOLLAR2,
    ACTIONS(80), 5,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      aux_sym_path_token2,
      anon_sym_LPAREN,
      anon_sym_PLUS,
  [3244] = 2,
    ACTIONS(86), 1,
      anon_sym_DOLLAR2,
    ACTIONS(84), 5,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      aux_sym_path_token2,
      anon_sym_LPAREN,
      anon_sym_PLUS,
  [3255] = 2,
    ACTIONS(711), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(713), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3266] = 2,
    ACTIONS(715), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(717), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3277] = 2,
    ACTIONS(719), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(721), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3288] = 2,
    ACTIONS(723), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(725), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3299] = 2,
    ACTIONS(727), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(729), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3310] = 1,
    ACTIONS(539), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
      anon_sym_DASH_DASH2,
  [3319] = 2,
    ACTIONS(731), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(733), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3330] = 2,
    ACTIONS(735), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(737), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3341] = 2,
    ACTIONS(739), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(741), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3352] = 2,
    ACTIONS(419), 1,
      anon_sym_DOLLAR2,
    ACTIONS(421), 5,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      aux_sym_path_token2,
      anon_sym_LPAREN,
      anon_sym_PLUS,
  [3363] = 2,
    ACTIONS(743), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(745), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3374] = 2,
    ACTIONS(82), 2,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(80), 4,
      aux_sym_unquoted_string_token1,
      sym_allow_privileged,
      anon_sym_DASH_DASHplatform,
      anon_sym_PLUS,
  [3385] = 5,
    ACTIONS(747), 1,
      sym_allow_privileged,
    ACTIONS(749), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(751), 1,
      anon_sym_PLUS,
    STATE(126), 1,
      sym_target_ref,
    STATE(216), 2,
      sym_platform,
      aux_sym_from_command_repeat1,
  [3402] = 2,
    ACTIONS(753), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(755), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3413] = 2,
    ACTIONS(757), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(759), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [3424] = 2,
    ACTIONS(86), 2,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(84), 4,
      aux_sym_unquoted_string_token1,
      sym_allow_privileged,
      anon_sym_DASH_DASHplatform,
      anon_sym_PLUS,
  [3435] = 5,
    ACTIONS(747), 1,
      sym_allow_privileged,
    ACTIONS(749), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(761), 1,
      anon_sym_PLUS,
    STATE(97), 1,
      sym_target_ref,
    STATE(216), 2,
      sym_platform,
      aux_sym_from_command_repeat1,
  [3452] = 1,
    ACTIONS(683), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3460] = 1,
    ACTIONS(691), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3468] = 1,
    ACTIONS(763), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3476] = 1,
    ACTIONS(715), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3484] = 1,
    ACTIONS(711), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3492] = 1,
    ACTIONS(707), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3500] = 2,
    ACTIONS(86), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_DOLLAR2,
    ACTIONS(84), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
  [3510] = 2,
    ACTIONS(80), 2,
      aux_sym_unquoted_string_token1,
      sym_comment,
    ACTIONS(82), 3,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
  [3520] = 3,
    STATE(250), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(361), 1,
      sym_shell_fragment,
    ACTIONS(74), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [3532] = 2,
    ACTIONS(86), 2,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(84), 3,
      anon_sym_DASH_DASH2,
      aux_sym_unquoted_string_token1,
      anon_sym_RPAREN,
  [3542] = 2,
    ACTIONS(765), 1,
      anon_sym_LF,
    ACTIONS(767), 4,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      anon_sym_LPAREN,
      anon_sym_PLUS,
  [3552] = 1,
    ACTIONS(769), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3560] = 1,
    ACTIONS(703), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3568] = 1,
    ACTIONS(771), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3576] = 3,
    ACTIONS(253), 1,
      anon_sym_DOLLAR2,
    ACTIONS(773), 1,
      aux_sym_image_tag_token1,
    STATE(46), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [3588] = 4,
    ACTIONS(777), 1,
      anon_sym_SQUOTE,
    ACTIONS(779), 1,
      aux_sym_single_quoted_string_token1,
    STATE(252), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(775), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [3602] = 1,
    ACTIONS(687), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3610] = 3,
    ACTIONS(337), 1,
      anon_sym_DOLLAR2,
    ACTIONS(781), 1,
      aux_sym_image_digest_token1,
    STATE(61), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [3622] = 1,
    ACTIONS(783), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3630] = 1,
    ACTIONS(679), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3638] = 1,
    ACTIONS(675), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3646] = 1,
    ACTIONS(671), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3654] = 2,
    ACTIONS(84), 2,
      aux_sym_unquoted_string_token1,
      sym_comment,
    ACTIONS(86), 3,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
  [3664] = 2,
    ACTIONS(82), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_DOLLAR2,
    ACTIONS(80), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
  [3674] = 4,
    ACTIONS(785), 1,
      sym_allow_privileged,
    ACTIONS(788), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(791), 1,
      anon_sym_PLUS,
    STATE(216), 2,
      sym_platform,
      aux_sym_from_command_repeat1,
  [3688] = 4,
    ACTIONS(795), 1,
      anon_sym_SQUOTE,
    ACTIONS(797), 1,
      aux_sym_single_quoted_string_token1,
    STATE(207), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(793), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [3702] = 4,
    ACTIONS(779), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    STATE(252), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(775), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [3716] = 1,
    ACTIONS(651), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3724] = 1,
    ACTIONS(627), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3732] = 1,
    ACTIONS(631), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3740] = 1,
    ACTIONS(719), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3748] = 1,
    ACTIONS(723), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3756] = 1,
    ACTIONS(735), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3764] = 1,
    ACTIONS(623), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3772] = 3,
    STATE(250), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(367), 1,
      sym_shell_fragment,
    ACTIONS(74), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [3784] = 1,
    ACTIONS(429), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3792] = 1,
    ACTIONS(699), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3800] = 2,
    ACTIONS(82), 2,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(80), 3,
      anon_sym_DASH_DASH2,
      aux_sym_unquoted_string_token1,
      anon_sym_RPAREN,
  [3810] = 1,
    ACTIONS(647), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3818] = 1,
    ACTIONS(643), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3826] = 1,
    ACTIONS(639), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3834] = 1,
    ACTIONS(635), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3842] = 2,
    ACTIONS(801), 1,
      anon_sym_LF,
    ACTIONS(767), 4,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      anon_sym_LPAREN,
      anon_sym_PLUS,
  [3852] = 1,
    ACTIONS(659), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3860] = 1,
    ACTIONS(663), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3868] = 4,
    ACTIONS(805), 1,
      anon_sym_SQUOTE,
    ACTIONS(807), 1,
      aux_sym_single_quoted_string_token1,
    STATE(218), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(803), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [3882] = 3,
    ACTIONS(809), 1,
      anon_sym_LF,
    STATE(238), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(811), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [3894] = 4,
    ACTIONS(779), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(814), 1,
      anon_sym_SQUOTE,
    STATE(252), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(775), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [3908] = 1,
    ACTIONS(753), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3916] = 4,
    ACTIONS(818), 1,
      anon_sym_SQUOTE,
    ACTIONS(820), 1,
      aux_sym_single_quoted_string_token1,
    STATE(239), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(816), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [3930] = 4,
    ACTIONS(779), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(822), 1,
      anon_sym_SQUOTE,
    STATE(252), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(775), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [3944] = 4,
    ACTIONS(826), 1,
      anon_sym_SQUOTE,
    ACTIONS(828), 1,
      aux_sym_single_quoted_string_token1,
    STATE(242), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(824), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [3958] = 1,
    ACTIONS(830), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [3966] = 4,
    ACTIONS(779), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(832), 1,
      anon_sym_SQUOTE,
    STATE(252), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(775), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [3980] = 4,
    ACTIONS(779), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(834), 1,
      anon_sym_SQUOTE,
    STATE(252), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(775), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [3994] = 1,
    ACTIONS(739), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_COPY,
  [4002] = 4,
    ACTIONS(838), 1,
      anon_sym_SQUOTE,
    ACTIONS(840), 1,
      aux_sym_single_quoted_string_token1,
    STATE(245), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(836), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [4016] = 3,
    ACTIONS(385), 1,
      anon_sym_DOLLAR2,
    ACTIONS(842), 1,
      aux_sym_image_digest_token1,
    STATE(73), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [4028] = 3,
    ACTIONS(844), 1,
      anon_sym_LF,
    STATE(238), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(846), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [4040] = 3,
    ACTIONS(329), 1,
      anon_sym_DOLLAR2,
    ACTIONS(848), 1,
      aux_sym_image_tag_token1,
    STATE(60), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [4052] = 4,
    ACTIONS(853), 1,
      anon_sym_SQUOTE,
    ACTIONS(855), 1,
      aux_sym_single_quoted_string_token1,
    STATE(252), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(850), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [4066] = 4,
    ACTIONS(860), 1,
      anon_sym_SQUOTE,
    ACTIONS(862), 1,
      aux_sym_single_quoted_string_token1,
    STATE(246), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(858), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [4080] = 1,
    ACTIONS(767), 4,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      anon_sym_LPAREN,
      anon_sym_PLUS,
  [4087] = 2,
    ACTIONS(86), 1,
      anon_sym_DOLLAR2,
    ACTIONS(84), 3,
      anon_sym_DASH_DASH2,
      aux_sym_path_token2,
      anon_sym_RPAREN,
  [4096] = 4,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(864), 1,
      aux_sym_path_token1,
    STATE(92), 1,
      sym_expansion,
    STATE(264), 1,
      sym_path,
  [4109] = 2,
    ACTIONS(82), 1,
      anon_sym_DOLLAR2,
    ACTIONS(80), 3,
      anon_sym_DASH_DASH2,
      aux_sym_path_token2,
      anon_sym_RPAREN,
  [4118] = 1,
    ACTIONS(866), 4,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      anon_sym_LPAREN,
      anon_sym_PLUS,
  [4125] = 3,
    ACTIONS(868), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(870), 1,
      anon_sym_RPAREN,
    STATE(263), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
  [4136] = 1,
    ACTIONS(872), 4,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      anon_sym_LPAREN,
      anon_sym_PLUS,
  [4143] = 2,
    ACTIONS(419), 1,
      anon_sym_DOLLAR2,
    ACTIONS(421), 3,
      anon_sym_DASH_DASH2,
      aux_sym_path_token2,
      anon_sym_RPAREN,
  [4152] = 3,
    ACTIONS(868), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(874), 1,
      anon_sym_RPAREN,
    STATE(259), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
  [4163] = 3,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    ACTIONS(876), 1,
      anon_sym_DASH_DASH2,
    STATE(263), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
  [4174] = 1,
    ACTIONS(879), 4,
      anon_sym_DOLLAR,
      aux_sym_path_token1,
      anon_sym_LPAREN,
      anon_sym_PLUS,
  [4181] = 4,
    ACTIONS(881), 1,
      anon_sym_DOLLAR,
    ACTIONS(883), 1,
      aux_sym_path_token1,
    STATE(141), 1,
      sym_expansion,
    STATE(262), 1,
      sym_path,
  [4194] = 3,
    ACTIONS(885), 1,
      anon_sym_LBRACE,
    ACTIONS(887), 1,
      sym_variable,
    STATE(10), 1,
      sym__expansion_body,
  [4204] = 3,
    ACTIONS(889), 1,
      anon_sym_LBRACE,
    ACTIONS(891), 1,
      sym_variable,
    STATE(114), 1,
      sym__expansion_body,
  [4214] = 3,
    ACTIONS(893), 1,
      sym_version_major_minor,
    ACTIONS(895), 1,
      sym_feature_flag,
    STATE(268), 1,
      aux_sym_version_command_repeat1,
  [4224] = 1,
    ACTIONS(304), 3,
      sym_allow_privileged,
      anon_sym_DASH_DASHplatform,
      anon_sym_PLUS,
  [4230] = 3,
    ACTIONS(898), 1,
      sym_identifier,
    ACTIONS(900), 1,
      sym_required,
    ACTIONS(902), 1,
      sym_global,
  [4240] = 3,
    ACTIONS(904), 1,
      anon_sym_LF,
    ACTIONS(906), 1,
      anon_sym_EQ,
    ACTIONS(908), 1,
      sym_comment,
  [4250] = 3,
    ACTIONS(910), 1,
      anon_sym_LBRACE,
    ACTIONS(912), 1,
      sym_variable,
    STATE(135), 1,
      sym__expansion_body,
  [4260] = 3,
    ACTIONS(914), 1,
      sym_identifier,
    ACTIONS(916), 1,
      sym_required,
    ACTIONS(918), 1,
      sym_global,
  [4270] = 3,
    ACTIONS(920), 1,
      anon_sym_LBRACE,
    ACTIONS(922), 1,
      sym_variable,
    STATE(110), 1,
      sym__expansion_body,
  [4280] = 3,
    ACTIONS(924), 1,
      anon_sym_LBRACE,
    ACTIONS(926), 1,
      sym_variable,
    STATE(184), 1,
      sym__expansion_body,
  [4290] = 1,
    ACTIONS(209), 3,
      sym_allow_privileged,
      anon_sym_DASH_DASHplatform,
      anon_sym_PLUS,
  [4296] = 3,
    ACTIONS(928), 1,
      anon_sym_LBRACE,
    ACTIONS(930), 1,
      sym_variable,
    STATE(229), 1,
      sym__expansion_body,
  [4306] = 3,
    ACTIONS(932), 1,
      anon_sym_LBRACE,
    ACTIONS(934), 1,
      sym_variable,
    STATE(257), 1,
      sym__expansion_body,
  [4316] = 3,
    ACTIONS(936), 1,
      anon_sym_LF,
    ACTIONS(938), 1,
      anon_sym_EQ,
    ACTIONS(940), 1,
      sym_comment,
  [4326] = 3,
    ACTIONS(942), 1,
      anon_sym_LF,
    ACTIONS(944), 1,
      anon_sym_EQ,
    ACTIONS(946), 1,
      sym_comment,
  [4336] = 3,
    ACTIONS(948), 1,
      sym_version_major_minor,
    ACTIONS(950), 1,
      sym_feature_flag,
    STATE(287), 1,
      aux_sym_version_command_repeat1,
  [4346] = 3,
    ACTIONS(952), 1,
      anon_sym_LBRACE,
    ACTIONS(954), 1,
      sym_variable,
    STATE(215), 1,
      sym__expansion_body,
  [4356] = 3,
    ACTIONS(956), 1,
      anon_sym_LF,
    ACTIONS(958), 1,
      anon_sym_EQ,
    ACTIONS(960), 1,
      sym_comment,
  [4366] = 1,
    ACTIONS(291), 3,
      sym_allow_privileged,
      anon_sym_DASH_DASHplatform,
      anon_sym_PLUS,
  [4372] = 3,
    ACTIONS(962), 1,
      anon_sym_LBRACE,
    ACTIONS(964), 1,
      sym_variable,
    STATE(199), 1,
      sym__expansion_body,
  [4382] = 3,
    ACTIONS(966), 1,
      anon_sym_LBRACE,
    ACTIONS(968), 1,
      sym_variable,
    STATE(13), 1,
      sym__expansion_body,
  [4392] = 3,
    ACTIONS(970), 1,
      sym_version_major_minor,
    ACTIONS(972), 1,
      sym_feature_flag,
    STATE(268), 1,
      aux_sym_version_command_repeat1,
  [4402] = 1,
    ACTIONS(279), 3,
      sym_allow_privileged,
      anon_sym_DASH_DASHplatform,
      anon_sym_PLUS,
  [4408] = 3,
    ACTIONS(974), 1,
      anon_sym_LBRACE,
    ACTIONS(976), 1,
      sym_variable,
    STATE(78), 1,
      sym__expansion_body,
  [4418] = 3,
    ACTIONS(978), 1,
      anon_sym_LBRACE,
    ACTIONS(980), 1,
      sym_variable,
    STATE(83), 1,
      sym__expansion_body,
  [4428] = 3,
    ACTIONS(982), 1,
      anon_sym_LF,
    ACTIONS(984), 1,
      anon_sym_EQ,
    ACTIONS(986), 1,
      sym_comment,
  [4438] = 3,
    ACTIONS(988), 1,
      anon_sym_LF,
    ACTIONS(990), 1,
      anon_sym_EQ,
    ACTIONS(992), 1,
      sym_comment,
  [4448] = 3,
    ACTIONS(978), 1,
      anon_sym_LBRACE,
    ACTIONS(994), 1,
      sym_variable,
    STATE(86), 1,
      sym__expansion_body,
  [4458] = 1,
    ACTIONS(996), 3,
      sym_allow_privileged,
      anon_sym_DASH_DASHplatform,
      anon_sym_PLUS,
  [4464] = 3,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
    ACTIONS(1000), 1,
      sym_variable,
    STATE(91), 1,
      sym__expansion_body,
  [4474] = 3,
    ACTIONS(924), 1,
      anon_sym_LBRACE,
    ACTIONS(1002), 1,
      sym_variable,
    STATE(173), 1,
      sym__expansion_body,
  [4484] = 3,
    ACTIONS(1004), 1,
      anon_sym_LF,
    ACTIONS(1006), 1,
      anon_sym_EQ,
    ACTIONS(1008), 1,
      sym_comment,
  [4494] = 3,
    ACTIONS(1010), 1,
      anon_sym_LF,
    ACTIONS(1012), 1,
      anon_sym_EQ,
    ACTIONS(1014), 1,
      sym_comment,
  [4504] = 3,
    ACTIONS(1016), 1,
      anon_sym_LBRACE,
    ACTIONS(1018), 1,
      sym_variable,
    STATE(144), 1,
      sym__expansion_body,
  [4514] = 3,
    ACTIONS(1020), 1,
      anon_sym_LBRACE,
    ACTIONS(1022), 1,
      sym_variable,
    STATE(186), 1,
      sym__expansion_body,
  [4524] = 3,
    ACTIONS(1024), 1,
      anon_sym_LBRACE,
    ACTIONS(1026), 1,
      sym_variable,
    STATE(64), 1,
      sym__expansion_body,
  [4534] = 3,
    ACTIONS(1016), 1,
      anon_sym_LBRACE,
    ACTIONS(1028), 1,
      sym_variable,
    STATE(136), 1,
      sym__expansion_body,
  [4544] = 3,
    ACTIONS(1024), 1,
      anon_sym_LBRACE,
    ACTIONS(1030), 1,
      sym_variable,
    STATE(79), 1,
      sym__expansion_body,
  [4554] = 3,
    ACTIONS(1032), 1,
      anon_sym_LBRACE,
    ACTIONS(1034), 1,
      sym_variable,
    STATE(85), 1,
      sym__expansion_body,
  [4564] = 3,
    ACTIONS(932), 1,
      anon_sym_LBRACE,
    ACTIONS(1036), 1,
      sym_variable,
    STATE(261), 1,
      sym__expansion_body,
  [4574] = 2,
    ACTIONS(1038), 1,
      anon_sym_LF,
    ACTIONS(1040), 1,
      sym_comment,
  [4581] = 2,
    ACTIONS(1042), 1,
      anon_sym_LF,
    ACTIONS(1044), 1,
      sym_comment,
  [4588] = 2,
    ACTIONS(1046), 1,
      anon_sym_LF,
    ACTIONS(1048), 1,
      sym_comment,
  [4595] = 2,
    ACTIONS(1050), 1,
      sym_identifier,
    ACTIONS(1052), 1,
      sym_global,
  [4602] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_LF,
  [4609] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_LF,
  [4616] = 2,
    ACTIONS(1054), 1,
      anon_sym_LF,
    ACTIONS(1056), 1,
      sym_comment,
  [4623] = 2,
    ACTIONS(1058), 1,
      anon_sym_LF,
    ACTIONS(1060), 1,
      sym_comment,
  [4630] = 2,
    ACTIONS(1062), 1,
      anon_sym_LF,
    ACTIONS(1064), 1,
      sym_comment,
  [4637] = 2,
    ACTIONS(1066), 1,
      anon_sym_LF,
    ACTIONS(1068), 1,
      sym_comment,
  [4644] = 2,
    ACTIONS(163), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_LF,
  [4651] = 2,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_LF,
  [4658] = 2,
    ACTIONS(1070), 1,
      anon_sym_LF,
    ACTIONS(1072), 1,
      sym_comment,
  [4665] = 2,
    ACTIONS(1074), 1,
      anon_sym_LF,
    ACTIONS(1076), 1,
      sym_comment,
  [4672] = 2,
    ACTIONS(1078), 1,
      sym_identifier,
    ACTIONS(1080), 1,
      sym_global,
  [4679] = 2,
    ACTIONS(1082), 1,
      anon_sym_LF,
    ACTIONS(1084), 1,
      sym_comment,
  [4686] = 2,
    ACTIONS(1086), 1,
      anon_sym_LF,
    ACTIONS(1088), 1,
      sym_comment,
  [4693] = 2,
    ACTIONS(1090), 1,
      anon_sym_LF,
    ACTIONS(1092), 1,
      sym_comment,
  [4700] = 2,
    ACTIONS(1094), 1,
      anon_sym_LF,
    ACTIONS(1096), 1,
      sym_comment,
  [4707] = 2,
    ACTIONS(1098), 1,
      anon_sym_LF,
    ACTIONS(1100), 1,
      sym_comment,
  [4714] = 2,
    ACTIONS(1102), 1,
      anon_sym_LF,
    ACTIONS(1104), 1,
      sym_comment,
  [4721] = 2,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
  [4728] = 2,
    ACTIONS(1110), 1,
      anon_sym_LF,
    ACTIONS(1112), 1,
      sym_comment,
  [4735] = 2,
    ACTIONS(761), 1,
      anon_sym_PLUS,
    STATE(357), 1,
      sym_target_ref,
  [4742] = 2,
    ACTIONS(1114), 1,
      anon_sym_LF,
    ACTIONS(1116), 1,
      sym_comment,
  [4749] = 2,
    ACTIONS(1118), 1,
      anon_sym_LF,
    ACTIONS(1120), 1,
      sym_comment,
  [4756] = 1,
    ACTIONS(1122), 1,
      anon_sym_LF,
  [4760] = 1,
    ACTIONS(1124), 1,
      anon_sym_RBRACE,
  [4764] = 1,
    ACTIONS(1126), 1,
      anon_sym_LF,
  [4768] = 1,
    ACTIONS(1128), 1,
      anon_sym_LF,
  [4772] = 1,
    ACTIONS(1130), 1,
      anon_sym_RBRACE,
  [4776] = 1,
    ACTIONS(1132), 1,
      anon_sym_LF,
  [4780] = 1,
    ACTIONS(1134), 1,
      anon_sym_LF,
  [4784] = 1,
    ACTIONS(1136), 1,
      anon_sym_LF,
  [4788] = 1,
    ACTIONS(1138), 1,
      anon_sym_LF,
  [4792] = 1,
    ACTIONS(1140), 1,
      anon_sym_LF,
  [4796] = 1,
    ACTIONS(1142), 1,
      anon_sym_LF,
  [4800] = 1,
    ACTIONS(1144), 1,
      anon_sym_LF,
  [4804] = 1,
    ACTIONS(1146), 1,
      anon_sym_LF,
  [4808] = 1,
    ACTIONS(1148), 1,
      anon_sym_LF,
  [4812] = 1,
    ACTIONS(1150), 1,
      anon_sym_LF,
  [4816] = 1,
    ACTIONS(1152), 1,
      anon_sym_LF,
  [4820] = 1,
    ACTIONS(1154), 1,
      anon_sym_LF,
  [4824] = 1,
    ACTIONS(1156), 1,
      anon_sym_LF,
  [4828] = 1,
    ACTIONS(1158), 1,
      anon_sym_RBRACE,
  [4832] = 1,
    ACTIONS(1160), 1,
      aux_sym_build_arg_flag_token1,
  [4836] = 1,
    ACTIONS(1162), 1,
      anon_sym_LF,
  [4840] = 1,
    ACTIONS(1164), 1,
      sym_identifier,
  [4844] = 1,
    ACTIONS(1166), 1,
      sym_identifier,
  [4848] = 1,
    ACTIONS(1168), 1,
      sym_identifier,
  [4852] = 1,
    ACTIONS(1170), 1,
      aux_sym_build_arg_flag_token1,
  [4856] = 1,
    ACTIONS(1172), 1,
      anon_sym_SLASH,
  [4860] = 1,
    ACTIONS(1174), 1,
      anon_sym_RBRACE,
  [4864] = 1,
    ACTIONS(1176), 1,
      aux_sym__expansion_body_token1,
  [4868] = 1,
    ACTIONS(1178), 1,
      anon_sym_LF,
  [4872] = 1,
    ACTIONS(1180), 1,
      anon_sym_LF,
  [4876] = 1,
    ACTIONS(1182), 1,
      sym_option_identifier,
  [4880] = 1,
    ACTIONS(1184), 1,
      sym_identifier,
  [4884] = 1,
    ACTIONS(1186), 1,
      anon_sym_LF,
  [4888] = 1,
    ACTIONS(1188), 1,
      anon_sym_RBRACE,
  [4892] = 1,
    ACTIONS(1190), 1,
      anon_sym_LF,
  [4896] = 1,
    ACTIONS(1192), 1,
      anon_sym_LF,
  [4900] = 1,
    ACTIONS(1194), 1,
      anon_sym_LF,
  [4904] = 1,
    ACTIONS(1196), 1,
      anon_sym_RBRACE,
  [4908] = 1,
    ACTIONS(1198), 1,
      aux_sym_build_arg_flag_token1,
  [4912] = 1,
    ACTIONS(1200), 1,
      anon_sym_RBRACE,
  [4916] = 1,
    ACTIONS(1202), 1,
      anon_sym_LF,
  [4920] = 1,
    ACTIONS(1204), 1,
      anon_sym_LF,
  [4924] = 1,
    ACTIONS(1206), 1,
      anon_sym_LF,
  [4928] = 1,
    ACTIONS(1208), 1,
      anon_sym_SLASH,
  [4932] = 1,
    ACTIONS(1210), 1,
      anon_sym_LF,
  [4936] = 1,
    ACTIONS(1212), 1,
      anon_sym_RBRACE,
  [4940] = 1,
    ACTIONS(1214), 1,
      anon_sym_RBRACE,
  [4944] = 1,
    ACTIONS(1216), 1,
      anon_sym_RBRACE,
  [4948] = 1,
    ACTIONS(1218), 1,
      anon_sym_RBRACE,
  [4952] = 1,
    ACTIONS(1220), 1,
      anon_sym_RBRACE,
  [4956] = 1,
    ACTIONS(1222), 1,
      anon_sym_RBRACE,
  [4960] = 1,
    ACTIONS(1224), 1,
      anon_sym_RBRACE,
  [4964] = 1,
    ACTIONS(1226), 1,
      anon_sym_RBRACE,
  [4968] = 1,
    ACTIONS(1228), 1,
      anon_sym_RBRACE,
  [4972] = 1,
    ACTIONS(1230), 1,
      anon_sym_RBRACE,
  [4976] = 1,
    ACTIONS(1232), 1,
      anon_sym_LF,
  [4980] = 1,
    ACTIONS(1234), 1,
      anon_sym_LF,
  [4984] = 1,
    ACTIONS(1236), 1,
      sym_identifier,
  [4988] = 1,
    ACTIONS(1238), 1,
      aux_sym_build_arg_flag_token1,
  [4992] = 1,
    ACTIONS(1240), 1,
      anon_sym_LF,
  [4996] = 1,
    ACTIONS(1242), 1,
      sym_identifier,
  [5000] = 1,
    ACTIONS(1244), 1,
      aux_sym__expansion_body_token1,
  [5004] = 1,
    ACTIONS(1246), 1,
      ts_builtin_sym_end,
  [5008] = 1,
    ACTIONS(1248), 1,
      anon_sym_COLON,
  [5012] = 1,
    ACTIONS(1250), 1,
      aux_sym_build_arg_flag_token1,
  [5016] = 1,
    ACTIONS(1252), 1,
      aux_sym_build_arg_flag_token1,
  [5020] = 1,
    ACTIONS(1254), 1,
      aux_sym__expansion_body_token1,
  [5024] = 1,
    ACTIONS(1256), 1,
      aux_sym_build_arg_flag_token1,
  [5028] = 1,
    ACTIONS(1258), 1,
      aux_sym__expansion_body_token1,
  [5032] = 1,
    ACTIONS(1260), 1,
      aux_sym__expansion_body_token1,
  [5036] = 1,
    ACTIONS(1262), 1,
      aux_sym__expansion_body_token1,
  [5040] = 1,
    ACTIONS(1264), 1,
      aux_sym__expansion_body_token1,
  [5044] = 1,
    ACTIONS(1266), 1,
      aux_sym__expansion_body_token1,
  [5048] = 1,
    ACTIONS(1268), 1,
      aux_sym__expansion_body_token1,
  [5052] = 1,
    ACTIONS(1270), 1,
      aux_sym__expansion_body_token1,
  [5056] = 1,
    ACTIONS(1272), 1,
      aux_sym__expansion_body_token1,
  [5060] = 1,
    ACTIONS(1274), 1,
      aux_sym__expansion_body_token1,
  [5064] = 1,
    ACTIONS(1276), 1,
      aux_sym__expansion_body_token1,
  [5068] = 1,
    ACTIONS(1278), 1,
      aux_sym__expansion_body_token1,
  [5072] = 1,
    ACTIONS(1280), 1,
      aux_sym__expansion_body_token1,
  [5076] = 1,
    ACTIONS(1282), 1,
      aux_sym__expansion_body_token1,
  [5080] = 1,
    ACTIONS(1284), 1,
      aux_sym__expansion_body_token1,
  [5084] = 1,
    ACTIONS(1286), 1,
      sym_option_identifier,
  [5088] = 1,
    ACTIONS(1288), 1,
      aux_sym_build_arg_flag_token1,
  [5092] = 1,
    ACTIONS(1290), 1,
      sym_option_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 148,
  [SMALL_STATE(7)] = 179,
  [SMALL_STATE(8)] = 210,
  [SMALL_STATE(9)] = 246,
  [SMALL_STATE(10)] = 282,
  [SMALL_STATE(11)] = 303,
  [SMALL_STATE(12)] = 324,
  [SMALL_STATE(13)] = 351,
  [SMALL_STATE(14)] = 371,
  [SMALL_STATE(15)] = 391,
  [SMALL_STATE(16)] = 419,
  [SMALL_STATE(17)] = 435,
  [SMALL_STATE(18)] = 459,
  [SMALL_STATE(19)] = 487,
  [SMALL_STATE(20)] = 511,
  [SMALL_STATE(21)] = 539,
  [SMALL_STATE(22)] = 555,
  [SMALL_STATE(23)] = 581,
  [SMALL_STATE(24)] = 609,
  [SMALL_STATE(25)] = 625,
  [SMALL_STATE(26)] = 653,
  [SMALL_STATE(27)] = 669,
  [SMALL_STATE(28)] = 685,
  [SMALL_STATE(29)] = 713,
  [SMALL_STATE(30)] = 729,
  [SMALL_STATE(31)] = 755,
  [SMALL_STATE(32)] = 783,
  [SMALL_STATE(33)] = 807,
  [SMALL_STATE(34)] = 835,
  [SMALL_STATE(35)] = 863,
  [SMALL_STATE(36)] = 880,
  [SMALL_STATE(37)] = 915,
  [SMALL_STATE(38)] = 940,
  [SMALL_STATE(39)] = 957,
  [SMALL_STATE(40)] = 982,
  [SMALL_STATE(41)] = 1005,
  [SMALL_STATE(42)] = 1030,
  [SMALL_STATE(43)] = 1055,
  [SMALL_STATE(44)] = 1078,
  [SMALL_STATE(45)] = 1103,
  [SMALL_STATE(46)] = 1120,
  [SMALL_STATE(47)] = 1143,
  [SMALL_STATE(48)] = 1168,
  [SMALL_STATE(49)] = 1203,
  [SMALL_STATE(50)] = 1228,
  [SMALL_STATE(51)] = 1253,
  [SMALL_STATE(52)] = 1270,
  [SMALL_STATE(53)] = 1295,
  [SMALL_STATE(54)] = 1318,
  [SMALL_STATE(55)] = 1335,
  [SMALL_STATE(56)] = 1360,
  [SMALL_STATE(57)] = 1383,
  [SMALL_STATE(58)] = 1400,
  [SMALL_STATE(59)] = 1422,
  [SMALL_STATE(60)] = 1448,
  [SMALL_STATE(61)] = 1470,
  [SMALL_STATE(62)] = 1492,
  [SMALL_STATE(63)] = 1518,
  [SMALL_STATE(64)] = 1540,
  [SMALL_STATE(65)] = 1555,
  [SMALL_STATE(66)] = 1578,
  [SMALL_STATE(67)] = 1601,
  [SMALL_STATE(68)] = 1616,
  [SMALL_STATE(69)] = 1635,
  [SMALL_STATE(70)] = 1650,
  [SMALL_STATE(71)] = 1669,
  [SMALL_STATE(72)] = 1692,
  [SMALL_STATE(73)] = 1715,
  [SMALL_STATE(74)] = 1736,
  [SMALL_STATE(75)] = 1755,
  [SMALL_STATE(76)] = 1778,
  [SMALL_STATE(77)] = 1799,
  [SMALL_STATE(78)] = 1822,
  [SMALL_STATE(79)] = 1837,
  [SMALL_STATE(80)] = 1852,
  [SMALL_STATE(81)] = 1870,
  [SMALL_STATE(82)] = 1884,
  [SMALL_STATE(83)] = 1902,
  [SMALL_STATE(84)] = 1916,
  [SMALL_STATE(85)] = 1936,
  [SMALL_STATE(86)] = 1950,
  [SMALL_STATE(87)] = 1964,
  [SMALL_STATE(88)] = 1978,
  [SMALL_STATE(89)] = 1992,
  [SMALL_STATE(90)] = 2012,
  [SMALL_STATE(91)] = 2030,
  [SMALL_STATE(92)] = 2044,
  [SMALL_STATE(93)] = 2062,
  [SMALL_STATE(94)] = 2090,
  [SMALL_STATE(95)] = 2110,
  [SMALL_STATE(96)] = 2128,
  [SMALL_STATE(97)] = 2146,
  [SMALL_STATE(98)] = 2164,
  [SMALL_STATE(99)] = 2192,
  [SMALL_STATE(100)] = 2218,
  [SMALL_STATE(101)] = 2236,
  [SMALL_STATE(102)] = 2251,
  [SMALL_STATE(103)] = 2264,
  [SMALL_STATE(104)] = 2283,
  [SMALL_STATE(105)] = 2300,
  [SMALL_STATE(106)] = 2313,
  [SMALL_STATE(107)] = 2332,
  [SMALL_STATE(108)] = 2345,
  [SMALL_STATE(109)] = 2358,
  [SMALL_STATE(110)] = 2377,
  [SMALL_STATE(111)] = 2390,
  [SMALL_STATE(112)] = 2403,
  [SMALL_STATE(113)] = 2422,
  [SMALL_STATE(114)] = 2441,
  [SMALL_STATE(115)] = 2454,
  [SMALL_STATE(116)] = 2467,
  [SMALL_STATE(117)] = 2480,
  [SMALL_STATE(118)] = 2499,
  [SMALL_STATE(119)] = 2514,
  [SMALL_STATE(120)] = 2535,
  [SMALL_STATE(121)] = 2556,
  [SMALL_STATE(122)] = 2575,
  [SMALL_STATE(123)] = 2590,
  [SMALL_STATE(124)] = 2609,
  [SMALL_STATE(125)] = 2628,
  [SMALL_STATE(126)] = 2647,
  [SMALL_STATE(127)] = 2662,
  [SMALL_STATE(128)] = 2675,
  [SMALL_STATE(129)] = 2694,
  [SMALL_STATE(130)] = 2713,
  [SMALL_STATE(131)] = 2728,
  [SMALL_STATE(132)] = 2747,
  [SMALL_STATE(133)] = 2766,
  [SMALL_STATE(134)] = 2785,
  [SMALL_STATE(135)] = 2799,
  [SMALL_STATE(136)] = 2811,
  [SMALL_STATE(137)] = 2823,
  [SMALL_STATE(138)] = 2835,
  [SMALL_STATE(139)] = 2847,
  [SMALL_STATE(140)] = 2861,
  [SMALL_STATE(141)] = 2875,
  [SMALL_STATE(142)] = 2891,
  [SMALL_STATE(143)] = 2907,
  [SMALL_STATE(144)] = 2923,
  [SMALL_STATE(145)] = 2935,
  [SMALL_STATE(146)] = 2946,
  [SMALL_STATE(147)] = 2957,
  [SMALL_STATE(148)] = 2968,
  [SMALL_STATE(149)] = 2979,
  [SMALL_STATE(150)] = 2990,
  [SMALL_STATE(151)] = 3001,
  [SMALL_STATE(152)] = 3012,
  [SMALL_STATE(153)] = 3023,
  [SMALL_STATE(154)] = 3034,
  [SMALL_STATE(155)] = 3045,
  [SMALL_STATE(156)] = 3056,
  [SMALL_STATE(157)] = 3067,
  [SMALL_STATE(158)] = 3078,
  [SMALL_STATE(159)] = 3089,
  [SMALL_STATE(160)] = 3100,
  [SMALL_STATE(161)] = 3111,
  [SMALL_STATE(162)] = 3120,
  [SMALL_STATE(163)] = 3129,
  [SMALL_STATE(164)] = 3140,
  [SMALL_STATE(165)] = 3149,
  [SMALL_STATE(166)] = 3158,
  [SMALL_STATE(167)] = 3169,
  [SMALL_STATE(168)] = 3180,
  [SMALL_STATE(169)] = 3189,
  [SMALL_STATE(170)] = 3200,
  [SMALL_STATE(171)] = 3211,
  [SMALL_STATE(172)] = 3222,
  [SMALL_STATE(173)] = 3233,
  [SMALL_STATE(174)] = 3244,
  [SMALL_STATE(175)] = 3255,
  [SMALL_STATE(176)] = 3266,
  [SMALL_STATE(177)] = 3277,
  [SMALL_STATE(178)] = 3288,
  [SMALL_STATE(179)] = 3299,
  [SMALL_STATE(180)] = 3310,
  [SMALL_STATE(181)] = 3319,
  [SMALL_STATE(182)] = 3330,
  [SMALL_STATE(183)] = 3341,
  [SMALL_STATE(184)] = 3352,
  [SMALL_STATE(185)] = 3363,
  [SMALL_STATE(186)] = 3374,
  [SMALL_STATE(187)] = 3385,
  [SMALL_STATE(188)] = 3402,
  [SMALL_STATE(189)] = 3413,
  [SMALL_STATE(190)] = 3424,
  [SMALL_STATE(191)] = 3435,
  [SMALL_STATE(192)] = 3452,
  [SMALL_STATE(193)] = 3460,
  [SMALL_STATE(194)] = 3468,
  [SMALL_STATE(195)] = 3476,
  [SMALL_STATE(196)] = 3484,
  [SMALL_STATE(197)] = 3492,
  [SMALL_STATE(198)] = 3500,
  [SMALL_STATE(199)] = 3510,
  [SMALL_STATE(200)] = 3520,
  [SMALL_STATE(201)] = 3532,
  [SMALL_STATE(202)] = 3542,
  [SMALL_STATE(203)] = 3552,
  [SMALL_STATE(204)] = 3560,
  [SMALL_STATE(205)] = 3568,
  [SMALL_STATE(206)] = 3576,
  [SMALL_STATE(207)] = 3588,
  [SMALL_STATE(208)] = 3602,
  [SMALL_STATE(209)] = 3610,
  [SMALL_STATE(210)] = 3622,
  [SMALL_STATE(211)] = 3630,
  [SMALL_STATE(212)] = 3638,
  [SMALL_STATE(213)] = 3646,
  [SMALL_STATE(214)] = 3654,
  [SMALL_STATE(215)] = 3664,
  [SMALL_STATE(216)] = 3674,
  [SMALL_STATE(217)] = 3688,
  [SMALL_STATE(218)] = 3702,
  [SMALL_STATE(219)] = 3716,
  [SMALL_STATE(220)] = 3724,
  [SMALL_STATE(221)] = 3732,
  [SMALL_STATE(222)] = 3740,
  [SMALL_STATE(223)] = 3748,
  [SMALL_STATE(224)] = 3756,
  [SMALL_STATE(225)] = 3764,
  [SMALL_STATE(226)] = 3772,
  [SMALL_STATE(227)] = 3784,
  [SMALL_STATE(228)] = 3792,
  [SMALL_STATE(229)] = 3800,
  [SMALL_STATE(230)] = 3810,
  [SMALL_STATE(231)] = 3818,
  [SMALL_STATE(232)] = 3826,
  [SMALL_STATE(233)] = 3834,
  [SMALL_STATE(234)] = 3842,
  [SMALL_STATE(235)] = 3852,
  [SMALL_STATE(236)] = 3860,
  [SMALL_STATE(237)] = 3868,
  [SMALL_STATE(238)] = 3882,
  [SMALL_STATE(239)] = 3894,
  [SMALL_STATE(240)] = 3908,
  [SMALL_STATE(241)] = 3916,
  [SMALL_STATE(242)] = 3930,
  [SMALL_STATE(243)] = 3944,
  [SMALL_STATE(244)] = 3958,
  [SMALL_STATE(245)] = 3966,
  [SMALL_STATE(246)] = 3980,
  [SMALL_STATE(247)] = 3994,
  [SMALL_STATE(248)] = 4002,
  [SMALL_STATE(249)] = 4016,
  [SMALL_STATE(250)] = 4028,
  [SMALL_STATE(251)] = 4040,
  [SMALL_STATE(252)] = 4052,
  [SMALL_STATE(253)] = 4066,
  [SMALL_STATE(254)] = 4080,
  [SMALL_STATE(255)] = 4087,
  [SMALL_STATE(256)] = 4096,
  [SMALL_STATE(257)] = 4109,
  [SMALL_STATE(258)] = 4118,
  [SMALL_STATE(259)] = 4125,
  [SMALL_STATE(260)] = 4136,
  [SMALL_STATE(261)] = 4143,
  [SMALL_STATE(262)] = 4152,
  [SMALL_STATE(263)] = 4163,
  [SMALL_STATE(264)] = 4174,
  [SMALL_STATE(265)] = 4181,
  [SMALL_STATE(266)] = 4194,
  [SMALL_STATE(267)] = 4204,
  [SMALL_STATE(268)] = 4214,
  [SMALL_STATE(269)] = 4224,
  [SMALL_STATE(270)] = 4230,
  [SMALL_STATE(271)] = 4240,
  [SMALL_STATE(272)] = 4250,
  [SMALL_STATE(273)] = 4260,
  [SMALL_STATE(274)] = 4270,
  [SMALL_STATE(275)] = 4280,
  [SMALL_STATE(276)] = 4290,
  [SMALL_STATE(277)] = 4296,
  [SMALL_STATE(278)] = 4306,
  [SMALL_STATE(279)] = 4316,
  [SMALL_STATE(280)] = 4326,
  [SMALL_STATE(281)] = 4336,
  [SMALL_STATE(282)] = 4346,
  [SMALL_STATE(283)] = 4356,
  [SMALL_STATE(284)] = 4366,
  [SMALL_STATE(285)] = 4372,
  [SMALL_STATE(286)] = 4382,
  [SMALL_STATE(287)] = 4392,
  [SMALL_STATE(288)] = 4402,
  [SMALL_STATE(289)] = 4408,
  [SMALL_STATE(290)] = 4418,
  [SMALL_STATE(291)] = 4428,
  [SMALL_STATE(292)] = 4438,
  [SMALL_STATE(293)] = 4448,
  [SMALL_STATE(294)] = 4458,
  [SMALL_STATE(295)] = 4464,
  [SMALL_STATE(296)] = 4474,
  [SMALL_STATE(297)] = 4484,
  [SMALL_STATE(298)] = 4494,
  [SMALL_STATE(299)] = 4504,
  [SMALL_STATE(300)] = 4514,
  [SMALL_STATE(301)] = 4524,
  [SMALL_STATE(302)] = 4534,
  [SMALL_STATE(303)] = 4544,
  [SMALL_STATE(304)] = 4554,
  [SMALL_STATE(305)] = 4564,
  [SMALL_STATE(306)] = 4574,
  [SMALL_STATE(307)] = 4581,
  [SMALL_STATE(308)] = 4588,
  [SMALL_STATE(309)] = 4595,
  [SMALL_STATE(310)] = 4602,
  [SMALL_STATE(311)] = 4609,
  [SMALL_STATE(312)] = 4616,
  [SMALL_STATE(313)] = 4623,
  [SMALL_STATE(314)] = 4630,
  [SMALL_STATE(315)] = 4637,
  [SMALL_STATE(316)] = 4644,
  [SMALL_STATE(317)] = 4651,
  [SMALL_STATE(318)] = 4658,
  [SMALL_STATE(319)] = 4665,
  [SMALL_STATE(320)] = 4672,
  [SMALL_STATE(321)] = 4679,
  [SMALL_STATE(322)] = 4686,
  [SMALL_STATE(323)] = 4693,
  [SMALL_STATE(324)] = 4700,
  [SMALL_STATE(325)] = 4707,
  [SMALL_STATE(326)] = 4714,
  [SMALL_STATE(327)] = 4721,
  [SMALL_STATE(328)] = 4728,
  [SMALL_STATE(329)] = 4735,
  [SMALL_STATE(330)] = 4742,
  [SMALL_STATE(331)] = 4749,
  [SMALL_STATE(332)] = 4756,
  [SMALL_STATE(333)] = 4760,
  [SMALL_STATE(334)] = 4764,
  [SMALL_STATE(335)] = 4768,
  [SMALL_STATE(336)] = 4772,
  [SMALL_STATE(337)] = 4776,
  [SMALL_STATE(338)] = 4780,
  [SMALL_STATE(339)] = 4784,
  [SMALL_STATE(340)] = 4788,
  [SMALL_STATE(341)] = 4792,
  [SMALL_STATE(342)] = 4796,
  [SMALL_STATE(343)] = 4800,
  [SMALL_STATE(344)] = 4804,
  [SMALL_STATE(345)] = 4808,
  [SMALL_STATE(346)] = 4812,
  [SMALL_STATE(347)] = 4816,
  [SMALL_STATE(348)] = 4820,
  [SMALL_STATE(349)] = 4824,
  [SMALL_STATE(350)] = 4828,
  [SMALL_STATE(351)] = 4832,
  [SMALL_STATE(352)] = 4836,
  [SMALL_STATE(353)] = 4840,
  [SMALL_STATE(354)] = 4844,
  [SMALL_STATE(355)] = 4848,
  [SMALL_STATE(356)] = 4852,
  [SMALL_STATE(357)] = 4856,
  [SMALL_STATE(358)] = 4860,
  [SMALL_STATE(359)] = 4864,
  [SMALL_STATE(360)] = 4868,
  [SMALL_STATE(361)] = 4872,
  [SMALL_STATE(362)] = 4876,
  [SMALL_STATE(363)] = 4880,
  [SMALL_STATE(364)] = 4884,
  [SMALL_STATE(365)] = 4888,
  [SMALL_STATE(366)] = 4892,
  [SMALL_STATE(367)] = 4896,
  [SMALL_STATE(368)] = 4900,
  [SMALL_STATE(369)] = 4904,
  [SMALL_STATE(370)] = 4908,
  [SMALL_STATE(371)] = 4912,
  [SMALL_STATE(372)] = 4916,
  [SMALL_STATE(373)] = 4920,
  [SMALL_STATE(374)] = 4924,
  [SMALL_STATE(375)] = 4928,
  [SMALL_STATE(376)] = 4932,
  [SMALL_STATE(377)] = 4936,
  [SMALL_STATE(378)] = 4940,
  [SMALL_STATE(379)] = 4944,
  [SMALL_STATE(380)] = 4948,
  [SMALL_STATE(381)] = 4952,
  [SMALL_STATE(382)] = 4956,
  [SMALL_STATE(383)] = 4960,
  [SMALL_STATE(384)] = 4964,
  [SMALL_STATE(385)] = 4968,
  [SMALL_STATE(386)] = 4972,
  [SMALL_STATE(387)] = 4976,
  [SMALL_STATE(388)] = 4980,
  [SMALL_STATE(389)] = 4984,
  [SMALL_STATE(390)] = 4988,
  [SMALL_STATE(391)] = 4992,
  [SMALL_STATE(392)] = 4996,
  [SMALL_STATE(393)] = 5000,
  [SMALL_STATE(394)] = 5004,
  [SMALL_STATE(395)] = 5008,
  [SMALL_STATE(396)] = 5012,
  [SMALL_STATE(397)] = 5016,
  [SMALL_STATE(398)] = 5020,
  [SMALL_STATE(399)] = 5024,
  [SMALL_STATE(400)] = 5028,
  [SMALL_STATE(401)] = 5032,
  [SMALL_STATE(402)] = 5036,
  [SMALL_STATE(403)] = 5040,
  [SMALL_STATE(404)] = 5044,
  [SMALL_STATE(405)] = 5048,
  [SMALL_STATE(406)] = 5052,
  [SMALL_STATE(407)] = 5056,
  [SMALL_STATE(408)] = 5060,
  [SMALL_STATE(409)] = 5064,
  [SMALL_STATE(410)] = 5068,
  [SMALL_STATE(411)] = 5072,
  [SMALL_STATE(412)] = 5076,
  [SMALL_STATE(413)] = 5080,
  [SMALL_STATE(414)] = 5084,
  [SMALL_STATE(415)] = 5088,
  [SMALL_STATE(416)] = 5092,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(266),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(6),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(6),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(286),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_expansion, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_expansion, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 2), SHIFT_REPEAT(12),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 2), SHIFT_REPEAT(390),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 2), SHIFT_REPEAT(351),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2), SHIFT_REPEAT(15),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2), SHIFT_REPEAT(397),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2), SHIFT_REPEAT(415),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_platform, 3, .production_id = 9),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(22),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(22),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(289),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chmod, 3, .production_id = 9),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(301),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(32),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_secret, 3, .production_id = 9),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_secret, 3, .production_id = 9),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(293),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(40),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(304),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(43),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount, 3, .production_id = 9),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount, 3, .production_id = 9),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(55),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(55),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(295),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(267),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(58),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(281),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(270),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(395),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(274),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(63),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(302),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(74),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(272),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(76),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(273),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(36),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(9),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 4),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 4),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 2),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(89),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(89),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(300),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(296),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(90),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat2, 2),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_command_repeat2, 2),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat2, 2), SHIFT_REPEAT(362),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 23), SHIFT_REPEAT(275),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 23), SHIFT_REPEAT(92),
  [483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 23), SHIFT_REPEAT(329),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 23), SHIFT_REPEAT(353),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [495] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(103),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(103),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(277),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(106),
  [513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(106),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(282),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg_flag, 4, .production_id = 18),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg_flag, 4, .production_id = 18),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [549] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(119),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(119),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(285),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat2, 2), SHIFT_REPEAT(414),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 1),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 3, .production_id = 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 4, .production_id = 1),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 4, .production_id = 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(278),
  [620] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(143),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 17),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 17),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 12),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 12),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 14),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 14),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 17),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 17),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 16),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 16),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 21),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 21),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 20),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 20),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 11),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 11),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 7, .production_id = 1),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 7, .production_id = 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 8, .production_id = 20),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 8, .production_id = 20),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 8, .production_id = 21),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 8, .production_id = 21),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 1),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 5, .production_id = 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 8),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 8),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 7),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 7),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 11),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 11),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 15),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 15),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 5, .production_id = 6),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 5, .production_id = 6),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 14),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 14),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 10),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 10),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 8),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 8),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 3),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 3),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 13),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 13),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 6),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 6),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 2),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 2),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6, .production_id = 1),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 6, .production_id = 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 3, .production_id = 2),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 3, .production_id = 2),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 3, .production_id = 22),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 19),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 4, .production_id = 26),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 5, .production_id = 27),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 5, .production_id = 28),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2), SHIFT_REPEAT(216),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2), SHIFT_REPEAT(356),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [811] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(238),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 24),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [850] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(252),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2),
  [855] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(252),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact, 6, .production_id = 29),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact, 5, .production_id = 29),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [876] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat2, 2), SHIFT_REPEAT(416),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact, 3, .production_id = 25),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2),
  [895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2), SHIFT_REPEAT(268),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_platform, 3, .production_id = 9),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1246] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
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
