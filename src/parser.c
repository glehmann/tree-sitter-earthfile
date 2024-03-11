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
#define STATE_COUNT 241
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 115
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 37

enum ts_symbol_identifiers {
  anon_sym_ARG = 1,
  anon_sym_EQ = 2,
  anon_sym_BUILD = 3,
  anon_sym_FROM = 4,
  anon_sym_PROJECT = 5,
  anon_sym_SLASH = 6,
  anon_sym_COLON = 7,
  anon_sym_VERSION = 8,
  anon_sym_COPY = 9,
  anon_sym_LET = 10,
  anon_sym_RUN = 11,
  anon_sym_DASH_DASH = 12,
  anon_sym_SAVE = 13,
  anon_sym_ARTIFACT = 14,
  anon_sym_AS = 15,
  anon_sym_LOCAL = 16,
  anon_sym_IMAGE = 17,
  anon_sym_SET = 18,
  sym_expr = 19,
  sym_identifier = 20,
  anon_sym_COLON2 = 21,
  anon_sym_AT = 22,
  sym_image_name = 23,
  sym_image_tag = 24,
  sym_image_digest = 25,
  sym_immediate_identifier = 26,
  sym_path = 27,
  aux_sym_shell_fragment_token1 = 28,
  aux_sym_shell_fragment_token2 = 29,
  aux_sym_shell_fragment_token3 = 30,
  anon_sym_PLUS = 31,
  anon_sym_LPAREN = 32,
  anon_sym_RPAREN = 33,
  sym_version_major_minor = 34,
  sym_allow_privileged = 35,
  anon_sym_DASH_DASH2 = 36,
  aux_sym_build_arg_token1 = 37,
  anon_sym_DASH_DASHcache_DASHfrom = 38,
  sym_cache_hint = 39,
  anon_sym_DASH_DASHchmod = 40,
  anon_sym_DASH_DASHchown = 41,
  sym_dir = 42,
  sym_entrypoint = 43,
  sym_feature_flag = 44,
  sym_force = 45,
  sym_global = 46,
  sym_if_exists = 47,
  sym_keep_own = 48,
  sym_keep_ts = 49,
  anon_sym_DASH_DASHmount = 50,
  sym_network_none = 51,
  sym_no_cache = 52,
  sym_pass_args = 53,
  anon_sym_DASH_DASHplatform = 54,
  sym_privileged = 55,
  sym_push = 56,
  sym_required = 57,
  anon_sym_DASH_DASHsecret = 58,
  sym_ssh = 59,
  sym_symlink_no_follow = 60,
  anon_sym_DQUOTE = 61,
  aux_sym_double_quoted_string_token1 = 62,
  anon_sym_SQUOTE = 63,
  aux_sym_single_quoted_string_token1 = 64,
  sym_unquoted_string = 65,
  sym_line_continuation = 66,
  sym_comment = 67,
  sym_line_continuation_comment = 68,
  anon_sym_LF = 69,
  anon_sym_CRn = 70,
  anon_sym_FF = 71,
  sym__indent = 72,
  sym__dedent = 73,
  sym_source_file = 74,
  sym_arg_command = 75,
  sym_from_command = 76,
  sym_project_command = 77,
  sym_target = 78,
  sym_version_command = 79,
  sym_copy_command = 80,
  sym_let_command = 81,
  sym_run_command = 82,
  sym_save_artifact_command = 83,
  sym_save_image_command = 84,
  sym_set_command = 85,
  sym_image_spec = 86,
  sym_shell_fragment = 87,
  sym_target_ref = 88,
  sym_target_artifact = 89,
  sym_target_artifact_build_args = 90,
  sym_build_arg = 91,
  sym_cache_from = 92,
  sym_chmod = 93,
  sym_chown = 94,
  sym_mount = 95,
  sym_platform = 96,
  sym_secret = 97,
  sym__string = 98,
  sym_double_quoted_string = 99,
  sym_single_quoted_string = 100,
  sym__eol = 101,
  aux_sym_source_file_repeat1 = 102,
  aux_sym_arg_command_repeat1 = 103,
  aux_sym_build_command_repeat2 = 104,
  aux_sym_from_command_repeat1 = 105,
  aux_sym_target_repeat1 = 106,
  aux_sym_version_command_repeat1 = 107,
  aux_sym_copy_command_repeat1 = 108,
  aux_sym_copy_command_repeat2 = 109,
  aux_sym_run_command_repeat1 = 110,
  aux_sym_save_artifact_command_repeat1 = 111,
  aux_sym_save_image_command_repeat1 = 112,
  aux_sym_save_image_command_repeat2 = 113,
  aux_sym_shell_fragment_repeat1 = 114,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ARG] = "ARG",
  [anon_sym_EQ] = "=",
  [anon_sym_BUILD] = "BUILD",
  [anon_sym_FROM] = "FROM",
  [anon_sym_PROJECT] = "PROJECT",
  [anon_sym_SLASH] = "/",
  [anon_sym_COLON] = ":",
  [anon_sym_VERSION] = "VERSION",
  [anon_sym_COPY] = "COPY",
  [anon_sym_LET] = "LET",
  [anon_sym_RUN] = "RUN",
  [anon_sym_DASH_DASH] = " -- ",
  [anon_sym_SAVE] = "SAVE",
  [anon_sym_ARTIFACT] = "ARTIFACT",
  [anon_sym_AS] = "AS",
  [anon_sym_LOCAL] = "LOCAL",
  [anon_sym_IMAGE] = "IMAGE",
  [anon_sym_SET] = "SET",
  [sym_expr] = "expr",
  [sym_identifier] = "identifier",
  [anon_sym_COLON2] = ":",
  [anon_sym_AT] = "@",
  [sym_image_name] = "image_name",
  [sym_image_tag] = "image_tag",
  [sym_image_digest] = "image_digest",
  [sym_immediate_identifier] = "immediate_identifier",
  [sym_path] = "path",
  [aux_sym_shell_fragment_token1] = "shell_fragment_token1",
  [aux_sym_shell_fragment_token2] = "shell_fragment_token2",
  [aux_sym_shell_fragment_token3] = "shell_fragment_token3",
  [anon_sym_PLUS] = "+",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_version_major_minor] = "version_major_minor",
  [sym_allow_privileged] = "allow_privileged",
  [anon_sym_DASH_DASH2] = "--",
  [aux_sym_build_arg_token1] = "build_arg_token1",
  [anon_sym_DASH_DASHcache_DASHfrom] = "--cache-from",
  [sym_cache_hint] = "cache_hint",
  [anon_sym_DASH_DASHchmod] = "--chmod",
  [anon_sym_DASH_DASHchown] = "--chown",
  [sym_dir] = "dir",
  [sym_entrypoint] = "entrypoint",
  [sym_feature_flag] = "feature_flag",
  [sym_force] = "force",
  [sym_global] = "global",
  [sym_if_exists] = "if_exists",
  [sym_keep_own] = "keep_own",
  [sym_keep_ts] = "keep_ts",
  [anon_sym_DASH_DASHmount] = "--mount",
  [sym_network_none] = "network_none",
  [sym_no_cache] = "no_cache",
  [sym_pass_args] = "pass_args",
  [anon_sym_DASH_DASHplatform] = "--platform",
  [sym_privileged] = "privileged",
  [sym_push] = "push",
  [sym_required] = "required",
  [anon_sym_DASH_DASHsecret] = "--secret",
  [sym_ssh] = "ssh",
  [sym_symlink_no_follow] = "symlink_no_follow",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quoted_string_token1] = "single_quoted_string_token1",
  [sym_unquoted_string] = "unquoted_string",
  [sym_line_continuation] = "line_continuation",
  [sym_comment] = "comment",
  [sym_line_continuation_comment] = "line_continuation_comment",
  [anon_sym_LF] = "\n",
  [anon_sym_CRn] = "\rn",
  [anon_sym_FF] = "\f",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym_arg_command] = "arg_command",
  [sym_from_command] = "from_command",
  [sym_project_command] = "project_command",
  [sym_target] = "target",
  [sym_version_command] = "version_command",
  [sym_copy_command] = "copy_command",
  [sym_let_command] = "let_command",
  [sym_run_command] = "run_command",
  [sym_save_artifact_command] = "save_artifact_command",
  [sym_save_image_command] = "save_image_command",
  [sym_set_command] = "set_command",
  [sym_image_spec] = "image_spec",
  [sym_shell_fragment] = "shell_fragment",
  [sym_target_ref] = "target_ref",
  [sym_target_artifact] = "target_artifact",
  [sym_target_artifact_build_args] = "target_artifact_build_args",
  [sym_build_arg] = "build_arg",
  [sym_cache_from] = "cache_from",
  [sym_chmod] = "chmod",
  [sym_chown] = "chown",
  [sym_mount] = "mount",
  [sym_platform] = "platform",
  [sym_secret] = "secret",
  [sym__string] = "_string",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym__eol] = "_eol",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_arg_command_repeat1] = "arg_command_repeat1",
  [aux_sym_build_command_repeat2] = "build_command_repeat2",
  [aux_sym_from_command_repeat1] = "from_command_repeat1",
  [aux_sym_target_repeat1] = "target_repeat1",
  [aux_sym_version_command_repeat1] = "version_command_repeat1",
  [aux_sym_copy_command_repeat1] = "copy_command_repeat1",
  [aux_sym_copy_command_repeat2] = "copy_command_repeat2",
  [aux_sym_run_command_repeat1] = "run_command_repeat1",
  [aux_sym_save_artifact_command_repeat1] = "save_artifact_command_repeat1",
  [aux_sym_save_image_command_repeat1] = "save_image_command_repeat1",
  [aux_sym_save_image_command_repeat2] = "save_image_command_repeat2",
  [aux_sym_shell_fragment_repeat1] = "shell_fragment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ARG] = anon_sym_ARG,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BUILD] = anon_sym_BUILD,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_PROJECT] = anon_sym_PROJECT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_VERSION] = anon_sym_VERSION,
  [anon_sym_COPY] = anon_sym_COPY,
  [anon_sym_LET] = anon_sym_LET,
  [anon_sym_RUN] = anon_sym_RUN,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_SAVE] = anon_sym_SAVE,
  [anon_sym_ARTIFACT] = anon_sym_ARTIFACT,
  [anon_sym_AS] = anon_sym_AS,
  [anon_sym_LOCAL] = anon_sym_LOCAL,
  [anon_sym_IMAGE] = anon_sym_IMAGE,
  [anon_sym_SET] = anon_sym_SET,
  [sym_expr] = sym_expr,
  [sym_identifier] = sym_identifier,
  [anon_sym_COLON2] = anon_sym_COLON,
  [anon_sym_AT] = anon_sym_AT,
  [sym_image_name] = sym_image_name,
  [sym_image_tag] = sym_image_tag,
  [sym_image_digest] = sym_image_digest,
  [sym_immediate_identifier] = sym_immediate_identifier,
  [sym_path] = sym_path,
  [aux_sym_shell_fragment_token1] = aux_sym_shell_fragment_token1,
  [aux_sym_shell_fragment_token2] = aux_sym_shell_fragment_token2,
  [aux_sym_shell_fragment_token3] = aux_sym_shell_fragment_token3,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_version_major_minor] = sym_version_major_minor,
  [sym_allow_privileged] = sym_allow_privileged,
  [anon_sym_DASH_DASH2] = anon_sym_DASH_DASH2,
  [aux_sym_build_arg_token1] = aux_sym_build_arg_token1,
  [anon_sym_DASH_DASHcache_DASHfrom] = anon_sym_DASH_DASHcache_DASHfrom,
  [sym_cache_hint] = sym_cache_hint,
  [anon_sym_DASH_DASHchmod] = anon_sym_DASH_DASHchmod,
  [anon_sym_DASH_DASHchown] = anon_sym_DASH_DASHchown,
  [sym_dir] = sym_dir,
  [sym_entrypoint] = sym_entrypoint,
  [sym_feature_flag] = sym_feature_flag,
  [sym_force] = sym_force,
  [sym_global] = sym_global,
  [sym_if_exists] = sym_if_exists,
  [sym_keep_own] = sym_keep_own,
  [sym_keep_ts] = sym_keep_ts,
  [anon_sym_DASH_DASHmount] = anon_sym_DASH_DASHmount,
  [sym_network_none] = sym_network_none,
  [sym_no_cache] = sym_no_cache,
  [sym_pass_args] = sym_pass_args,
  [anon_sym_DASH_DASHplatform] = anon_sym_DASH_DASHplatform,
  [sym_privileged] = sym_privileged,
  [sym_push] = sym_push,
  [sym_required] = sym_required,
  [anon_sym_DASH_DASHsecret] = anon_sym_DASH_DASHsecret,
  [sym_ssh] = sym_ssh,
  [sym_symlink_no_follow] = sym_symlink_no_follow,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quoted_string_token1] = aux_sym_single_quoted_string_token1,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_line_continuation] = sym_line_continuation,
  [sym_comment] = sym_comment,
  [sym_line_continuation_comment] = sym_line_continuation_comment,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CRn] = anon_sym_CRn,
  [anon_sym_FF] = anon_sym_FF,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_source_file] = sym_source_file,
  [sym_arg_command] = sym_arg_command,
  [sym_from_command] = sym_from_command,
  [sym_project_command] = sym_project_command,
  [sym_target] = sym_target,
  [sym_version_command] = sym_version_command,
  [sym_copy_command] = sym_copy_command,
  [sym_let_command] = sym_let_command,
  [sym_run_command] = sym_run_command,
  [sym_save_artifact_command] = sym_save_artifact_command,
  [sym_save_image_command] = sym_save_image_command,
  [sym_set_command] = sym_set_command,
  [sym_image_spec] = sym_image_spec,
  [sym_shell_fragment] = sym_shell_fragment,
  [sym_target_ref] = sym_target_ref,
  [sym_target_artifact] = sym_target_artifact,
  [sym_target_artifact_build_args] = sym_target_artifact_build_args,
  [sym_build_arg] = sym_build_arg,
  [sym_cache_from] = sym_cache_from,
  [sym_chmod] = sym_chmod,
  [sym_chown] = sym_chown,
  [sym_mount] = sym_mount,
  [sym_platform] = sym_platform,
  [sym_secret] = sym_secret,
  [sym__string] = sym__string,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym__eol] = sym__eol,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_arg_command_repeat1] = aux_sym_arg_command_repeat1,
  [aux_sym_build_command_repeat2] = aux_sym_build_command_repeat2,
  [aux_sym_from_command_repeat1] = aux_sym_from_command_repeat1,
  [aux_sym_target_repeat1] = aux_sym_target_repeat1,
  [aux_sym_version_command_repeat1] = aux_sym_version_command_repeat1,
  [aux_sym_copy_command_repeat1] = aux_sym_copy_command_repeat1,
  [aux_sym_copy_command_repeat2] = aux_sym_copy_command_repeat2,
  [aux_sym_run_command_repeat1] = aux_sym_run_command_repeat1,
  [aux_sym_save_artifact_command_repeat1] = aux_sym_save_artifact_command_repeat1,
  [aux_sym_save_image_command_repeat1] = aux_sym_save_image_command_repeat1,
  [aux_sym_save_image_command_repeat2] = aux_sym_save_image_command_repeat2,
  [aux_sym_shell_fragment_repeat1] = aux_sym_shell_fragment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ARG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BUILD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FROM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROJECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VERSION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COPY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LET] = {
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
  [anon_sym_SAVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ARTIFACT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOCAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IMAGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SET] = {
    .visible = true,
    .named = false,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
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
  [sym_immediate_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
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
  [anon_sym_PLUS] = {
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
  [sym_version_major_minor] = {
    .visible = true,
    .named = true,
  },
  [sym_allow_privileged] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_build_arg_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASHcache_DASHfrom] = {
    .visible = true,
    .named = false,
  },
  [sym_cache_hint] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHchmod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHchown] = {
    .visible = true,
    .named = false,
  },
  [sym_dir] = {
    .visible = true,
    .named = true,
  },
  [sym_entrypoint] = {
    .visible = true,
    .named = true,
  },
  [sym_feature_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_force] = {
    .visible = true,
    .named = true,
  },
  [sym_global] = {
    .visible = true,
    .named = true,
  },
  [sym_if_exists] = {
    .visible = true,
    .named = true,
  },
  [sym_keep_own] = {
    .visible = true,
    .named = true,
  },
  [sym_keep_ts] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHmount] = {
    .visible = true,
    .named = false,
  },
  [sym_network_none] = {
    .visible = true,
    .named = true,
  },
  [sym_no_cache] = {
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
  [sym_privileged] = {
    .visible = true,
    .named = true,
  },
  [sym_push] = {
    .visible = true,
    .named = true,
  },
  [sym_required] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHsecret] = {
    .visible = true,
    .named = false,
  },
  [sym_ssh] = {
    .visible = true,
    .named = true,
  },
  [sym_symlink_no_follow] = {
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_continuation_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CRn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FF] = {
    .visible = true,
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
  [sym_arg_command] = {
    .visible = true,
    .named = true,
  },
  [sym_from_command] = {
    .visible = true,
    .named = true,
  },
  [sym_project_command] = {
    .visible = true,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_version_command] = {
    .visible = true,
    .named = true,
  },
  [sym_copy_command] = {
    .visible = true,
    .named = true,
  },
  [sym_let_command] = {
    .visible = true,
    .named = true,
  },
  [sym_run_command] = {
    .visible = true,
    .named = true,
  },
  [sym_save_artifact_command] = {
    .visible = true,
    .named = true,
  },
  [sym_save_image_command] = {
    .visible = true,
    .named = true,
  },
  [sym_set_command] = {
    .visible = true,
    .named = true,
  },
  [sym_image_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_target_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_target_artifact] = {
    .visible = true,
    .named = true,
  },
  [sym_target_artifact_build_args] = {
    .visible = true,
    .named = true,
  },
  [sym_build_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_cache_from] = {
    .visible = true,
    .named = true,
  },
  [sym_chmod] = {
    .visible = true,
    .named = true,
  },
  [sym_chown] = {
    .visible = true,
    .named = true,
  },
  [sym_mount] = {
    .visible = true,
    .named = true,
  },
  [sym_platform] = {
    .visible = true,
    .named = true,
  },
  [sym_secret] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
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
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_build_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_target_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_version_command_repeat1] = {
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
  [aux_sym_run_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_save_artifact_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_save_image_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_save_image_command_repeat2] = {
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
  field_dest = 4,
  field_digest = 5,
  field_local_dest = 6,
  field_name = 7,
  field_option = 8,
  field_org_name = 9,
  field_project_name = 10,
  field_src = 11,
  field_tag = 12,
  field_value = 13,
  field_version = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_command] = "command",
  [field_default_value] = "default_value",
  [field_default_value_expr] = "default_value_expr",
  [field_dest] = "dest",
  [field_digest] = "digest",
  [field_local_dest] = "local_dest",
  [field_name] = "name",
  [field_option] = "option",
  [field_org_name] = "org_name",
  [field_project_name] = "project_name",
  [field_src] = "src",
  [field_tag] = "tag",
  [field_value] = "value",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 3},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 3},
  [16] = {.index = 27, .length = 3},
  [17] = {.index = 30, .length = 5},
  [18] = {.index = 35, .length = 2},
  [19] = {.index = 37, .length = 1},
  [20] = {.index = 38, .length = 2},
  [21] = {.index = 40, .length = 1},
  [22] = {.index = 41, .length = 1},
  [23] = {.index = 42, .length = 1},
  [24] = {.index = 43, .length = 1},
  [25] = {.index = 44, .length = 2},
  [26] = {.index = 46, .length = 1},
  [27] = {.index = 47, .length = 2},
  [28] = {.index = 49, .length = 2},
  [29] = {.index = 51, .length = 2},
  [30] = {.index = 53, .length = 3},
  [31] = {.index = 56, .length = 2},
  [32] = {.index = 58, .length = 3},
  [33] = {.index = 61, .length = 2},
  [34] = {.index = 63, .length = 3},
  [35] = {.index = 66, .length = 3},
  [36] = {.index = 69, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_option, 0},
  [1] =
    {field_name, 0},
  [2] =
    {field_name, 1},
  [3] =
    {field_option, 0, .inherited = true},
    {field_option, 1, .inherited = true},
  [5] =
    {field_option, 1, .inherited = true},
  [6] =
    {field_version, 1},
  [7] =
    {field_name, 2},
    {field_option, 1, .inherited = true},
  [9] =
    {field_name, 0},
    {field_tag, 1},
    {field_tag, 2},
  [12] =
    {field_digest, 1},
    {field_digest, 2},
    {field_name, 0},
  [15] =
    {field_value, 2},
  [16] =
    {field_option, 1},
    {field_version, 2},
  [18] =
    {field_default_value_expr, 3},
    {field_name, 1},
  [20] =
    {field_default_value, 3},
    {field_name, 1},
  [22] =
    {field_org_name, 1},
    {field_project_name, 3},
  [24] =
    {field_default_value_expr, 4},
    {field_name, 2},
    {field_option, 1, .inherited = true},
  [27] =
    {field_default_value, 4},
    {field_name, 2},
    {field_option, 1, .inherited = true},
  [30] =
    {field_digest, 3},
    {field_digest, 4},
    {field_name, 0},
    {field_tag, 1},
    {field_tag, 2},
  [35] =
    {field_name, 1},
    {field_value, 3},
  [37] =
    {field_src, 0},
  [38] =
    {field_src, 0, .inherited = true},
    {field_src, 1, .inherited = true},
  [40] =
    {field_command, 1},
  [41] =
    {field_src, 2},
  [42] =
    {field_option, 2},
  [43] =
    {field_option, 2, .inherited = true},
  [44] =
    {field_dest, 2},
    {field_src, 1, .inherited = true},
  [46] =
    {field_command, 2},
  [47] =
    {field_command, 2},
    {field_option, 1, .inherited = true},
  [49] =
    {field_dest, 3},
    {field_src, 2},
  [51] =
    {field_option, 2, .inherited = true},
    {field_src, 3},
  [53] =
    {field_dest, 3},
    {field_option, 1, .inherited = true},
    {field_src, 2, .inherited = true},
  [56] =
    {field_command, 3},
    {field_option, 1, .inherited = true},
  [58] =
    {field_dest, 4},
    {field_option, 2, .inherited = true},
    {field_src, 3},
  [61] =
    {field_local_dest, 5},
    {field_src, 2},
  [63] =
    {field_dest, 3},
    {field_local_dest, 6},
    {field_src, 2},
  [66] =
    {field_local_dest, 6},
    {field_option, 2, .inherited = true},
    {field_src, 3},
  [69] =
    {field_dest, 4},
    {field_local_dest, 7},
    {field_option, 2, .inherited = true},
    {field_src, 3},
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
  [18] = 15,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 16,
  [25] = 14,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 14,
  [32] = 32,
  [33] = 16,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 34,
  [44] = 44,
  [45] = 45,
  [46] = 36,
  [47] = 47,
  [48] = 48,
  [49] = 47,
  [50] = 50,
  [51] = 51,
  [52] = 44,
  [53] = 35,
  [54] = 39,
  [55] = 55,
  [56] = 14,
  [57] = 57,
  [58] = 58,
  [59] = 38,
  [60] = 41,
  [61] = 16,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 57,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 34,
  [77] = 14,
  [78] = 16,
  [79] = 48,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 55,
  [85] = 58,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 91,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 47,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 94,
  [106] = 93,
  [107] = 86,
  [108] = 58,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 75,
  [117] = 117,
  [118] = 118,
  [119] = 68,
  [120] = 69,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 87,
  [126] = 64,
  [127] = 127,
  [128] = 57,
  [129] = 129,
  [130] = 130,
  [131] = 115,
  [132] = 88,
  [133] = 133,
  [134] = 133,
  [135] = 135,
  [136] = 136,
  [137] = 136,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 151,
  [155] = 150,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 143,
  [160] = 142,
  [161] = 161,
  [162] = 144,
  [163] = 163,
  [164] = 148,
  [165] = 165,
  [166] = 166,
  [167] = 14,
  [168] = 16,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 178,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 179,
  [212] = 208,
  [213] = 210,
  [214] = 214,
  [215] = 215,
  [216] = 214,
  [217] = 206,
  [218] = 215,
  [219] = 179,
  [220] = 208,
  [221] = 215,
  [222] = 214,
  [223] = 206,
  [224] = 215,
  [225] = 214,
  [226] = 215,
  [227] = 214,
  [228] = 215,
  [229] = 214,
  [230] = 230,
  [231] = 200,
  [232] = 192,
  [233] = 200,
  [234] = 192,
  [235] = 200,
  [236] = 192,
  [237] = 200,
  [238] = 192,
  [239] = 200,
  [240] = 192,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(209);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(428);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(432);
      if (lookahead == '(') ADVANCE(397);
      if (lookahead == ')') ADVANCE(398);
      if (lookahead == '+') ADVANCE(396);
      if (lookahead == ',') ADVANCE(389);
      if (lookahead == '-') ADVANCE(390);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '=') ADVANCE(214);
      if (lookahead == '@') ADVANCE(267);
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'B') ADVANCE(98);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'F') ADVANCE(90);
      if (lookahead == 'I') ADVANCE(79);
      if (lookahead == 'L') ADVANCE(64);
      if (lookahead == 'P') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'V') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(205)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == '\f') ADVANCE(440);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == '#') ADVANCE(394);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(393);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '\f') ADVANCE(444);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(445);
      if (lookahead == '\f') ADVANCE(453);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '+') ADVANCE(396);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(269);
      if (lookahead == 'n') ADVANCE(450);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(445);
      if (lookahead == '\f') ADVANCE(453);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '+') ADVANCE(396);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(269);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(446);
      if (lookahead == '\f') ADVANCE(454);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '(') ADVANCE(397);
      if (lookahead == '+') ADVANCE(396);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(451);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(388);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(446);
      if (lookahead == '\f') ADVANCE(454);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '(') ADVANCE(397);
      if (lookahead == '+') ADVANCE(396);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(388);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(447);
      if (lookahead == '\f') ADVANCE(455);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(452);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(392);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(447);
      if (lookahead == '\f') ADVANCE(455);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(392);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '#') ADVANCE(433);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(435);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '#') ADVANCE(429);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(430);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(431);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(448);
      if (lookahead == '\f') ADVANCE(456);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(448);
      if (lookahead == '\f') ADVANCE(456);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(449);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(448);
      if (lookahead == '\f') ADVANCE(456);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(428);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(432);
      if (lookahead == '(') ADVANCE(397);
      if (lookahead == ')') ADVANCE(398);
      if (lookahead == '+') ADVANCE(396);
      if (lookahead == '-') ADVANCE(390);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'B') ADVANCE(98);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'F') ADVANCE(90);
      if (lookahead == 'I') ADVANCE(79);
      if (lookahead == 'L') ADVANCE(64);
      if (lookahead == 'P') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'V') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(449);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(389);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(428);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(432);
      if (lookahead == '(') ADVANCE(397);
      if (lookahead == ')') ADVANCE(398);
      if (lookahead == '+') ADVANCE(396);
      if (lookahead == '-') ADVANCE(390);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'B') ADVANCE(98);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'F') ADVANCE(90);
      if (lookahead == 'I') ADVANCE(79);
      if (lookahead == 'L') ADVANCE(64);
      if (lookahead == 'P') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'V') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(389);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 18:
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(428);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(432);
      if (lookahead == '(') ADVANCE(397);
      if (lookahead == ')') ADVANCE(398);
      if (lookahead == '+') ADVANCE(396);
      if (lookahead == '-') ADVANCE(391);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'B') ADVANCE(98);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'F') ADVANCE(90);
      if (lookahead == 'I') ADVANCE(79);
      if (lookahead == 'L') ADVANCE(64);
      if (lookahead == 'P') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'V') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(389);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(235);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'm') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(125);
      if (lookahead == 'p') ADVANCE(174);
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '=') ADVANCE(402);
      if (lookahead == 'A') ADVANCE(91);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'F') ADVANCE(90);
      if (lookahead == 'L') ADVANCE(63);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(26)
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(404);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(402);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(31)
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(389);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(22)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(392);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(389);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(22)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(392);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(428);
      if (lookahead == '#') ADVANCE(436);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(432);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0) ADVANCE(437);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '@') ADVANCE(267);
      if (lookahead == 'A') ADVANCE(91);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'F') ADVANCE(90);
      if (lookahead == 'L') ADVANCE(63);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 'A') ADVANCE(91);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'F') ADVANCE(90);
      if (lookahead == 'L') ADVANCE(63);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(389);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(392);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '(') ADVANCE(397);
      if (lookahead == '+') ADVANCE(396);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(388);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '(') ADVANCE(397);
      if (lookahead == '+') ADVANCE(396);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(388);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '-') ADVANCE(297);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(388);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == 'A') ADVANCE(312);
      if (lookahead == 'C') ADVANCE(309);
      if (lookahead == 'F') ADVANCE(313);
      if (lookahead == 'L') ADVANCE(304);
      if (lookahead == 'R') ADVANCE(316);
      if (lookahead == 'S') ADVANCE(303);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(388);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(388);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '@') ADVANCE(267);
      if (lookahead == 'A') ADVANCE(280);
      if (lookahead == 'C') ADVANCE(277);
      if (lookahead == 'F') ADVANCE(281);
      if (lookahead == 'L') ADVANCE(272);
      if (lookahead == 'R') ADVANCE(284);
      if (lookahead == 'S') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(269);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(287);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(280);
      if (lookahead == 'C') ADVANCE(277);
      if (lookahead == 'F') ADVANCE(281);
      if (lookahead == 'L') ADVANCE(272);
      if (lookahead == 'R') ADVANCE(284);
      if (lookahead == 'S') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(269);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '\\') ADVANCE(289);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(291);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '(') ADVANCE(204);
      END_STATE();
    case 43:
      if (lookahead == ')') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(401);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(114);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(131);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(103);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(136);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(203);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(110);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(172);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(106);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == '=') ADVANCE(159);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(100);
      if (lookahead == 'E') ADVANCE(95);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(72);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(78);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == 'C') ADVANCE(57);
      END_STATE();
    case 60:
      if (lookahead == 'C') ADVANCE(96);
      END_STATE();
    case 61:
      if (lookahead == 'C') ADVANCE(97);
      END_STATE();
    case 62:
      if (lookahead == 'D') ADVANCE(215);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(59);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(236);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(243);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(89);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(60);
      END_STATE();
    case 69:
      if (lookahead == 'F') ADVANCE(58);
      END_STATE();
    case 70:
      if (lookahead == 'G') ADVANCE(210);
      END_STATE();
    case 71:
      if (lookahead == 'G') ADVANCE(210);
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 72:
      if (lookahead == 'G') ADVANCE(66);
      END_STATE();
    case 73:
      if (lookahead == 'I') ADVANCE(77);
      END_STATE();
    case 74:
      if (lookahead == 'I') ADVANCE(69);
      END_STATE();
    case 75:
      if (lookahead == 'I') ADVANCE(86);
      END_STATE();
    case 76:
      if (lookahead == 'J') ADVANCE(68);
      END_STATE();
    case 77:
      if (lookahead == 'L') ADVANCE(62);
      END_STATE();
    case 78:
      if (lookahead == 'L') ADVANCE(242);
      END_STATE();
    case 79:
      if (lookahead == 'M') ADVANCE(56);
      END_STATE();
    case 80:
      if (lookahead == 'M') ADVANCE(216);
      END_STATE();
    case 81:
      if (lookahead == 'N') ADVANCE(232);
      END_STATE();
    case 82:
      if (lookahead == 'N') ADVANCE(224);
      END_STATE();
    case 83:
      if (lookahead == 'O') ADVANCE(87);
      END_STATE();
    case 84:
      if (lookahead == 'O') ADVANCE(76);
      END_STATE();
    case 85:
      if (lookahead == 'O') ADVANCE(80);
      END_STATE();
    case 86:
      if (lookahead == 'O') ADVANCE(82);
      END_STATE();
    case 87:
      if (lookahead == 'P') ADVANCE(101);
      END_STATE();
    case 88:
      if (lookahead == 'R') ADVANCE(71);
      if (lookahead == 'S') ADVANCE(240);
      END_STATE();
    case 89:
      if (lookahead == 'R') ADVANCE(93);
      END_STATE();
    case 90:
      if (lookahead == 'R') ADVANCE(85);
      END_STATE();
    case 91:
      if (lookahead == 'R') ADVANCE(70);
      END_STATE();
    case 92:
      if (lookahead == 'R') ADVANCE(84);
      END_STATE();
    case 93:
      if (lookahead == 'S') ADVANCE(75);
      END_STATE();
    case 94:
      if (lookahead == 'T') ADVANCE(229);
      END_STATE();
    case 95:
      if (lookahead == 'T') ADVANCE(244);
      END_STATE();
    case 96:
      if (lookahead == 'T') ADVANCE(220);
      END_STATE();
    case 97:
      if (lookahead == 'T') ADVANCE(239);
      END_STATE();
    case 98:
      if (lookahead == 'U') ADVANCE(73);
      END_STATE();
    case 99:
      if (lookahead == 'U') ADVANCE(81);
      END_STATE();
    case 100:
      if (lookahead == 'V') ADVANCE(65);
      END_STATE();
    case 101:
      if (lookahead == 'Y') ADVANCE(226);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 109:
      if (lookahead == 'b') ADVANCE(105);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 111:
      if (lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 112:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 115:
      if (lookahead == 'd') ADVANCE(422);
      END_STATE();
    case 116:
      if (lookahead == 'd') ADVANCE(400);
      END_STATE();
    case 117:
      if (lookahead == 'd') ADVANCE(424);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'm') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(125);
      if (lookahead == 'p') ADVANCE(174);
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 131:
      if (lookahead == 'f') ADVANCE(180);
      if (lookahead == 'h') ADVANCE(145);
      END_STATE();
    case 132:
      if (lookahead == 'f') ADVANCE(170);
      END_STATE();
    case 133:
      if (lookahead == 'g') ADVANCE(183);
      END_STATE();
    case 134:
      if (lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 135:
      if (lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 136:
      if (lookahead == 'g') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 137:
      if (lookahead == 'h') ADVANCE(426);
      END_STATE();
    case 138:
      if (lookahead == 'h') ADVANCE(423);
      END_STATE();
    case 139:
      if (lookahead == 'h') ADVANCE(121);
      END_STATE();
    case 140:
      if (lookahead == 'h') ADVANCE(129);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 148:
      if (lookahead == 'k') ADVANCE(54);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(413);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(421);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(405);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 171:
      if (lookahead == 'p') ADVANCE(168);
      END_STATE();
    case 172:
      if (lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 173:
      if (lookahead == 'q') ADVANCE(195);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(420);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(410);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(406);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 194:
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 195:
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 197:
      if (lookahead == 'v') ADVANCE(142);
      END_STATE();
    case 198:
      if (lookahead == 'v') ADVANCE(146);
      END_STATE();
    case 199:
      if (lookahead == 'w') ADVANCE(169);
      END_STATE();
    case 200:
      if (lookahead == 'w') ADVANCE(51);
      END_STATE();
    case 201:
      if (lookahead == 'y') ADVANCE(171);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 203:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 204:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 205:
      if (eof) ADVANCE(209);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(428);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(432);
      if (lookahead == '(') ADVANCE(397);
      if (lookahead == ')') ADVANCE(398);
      if (lookahead == '+') ADVANCE(396);
      if (lookahead == '-') ADVANCE(390);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'B') ADVANCE(98);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'F') ADVANCE(90);
      if (lookahead == 'I') ADVANCE(79);
      if (lookahead == 'L') ADVANCE(64);
      if (lookahead == 'P') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'V') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(389);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(205)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 206:
      if (eof) ADVANCE(209);
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(398);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '=') ADVANCE(402);
      if (lookahead == 'A') ADVANCE(259);
      if (lookahead == 'F') ADVANCE(260);
      if (lookahead == 'P') ADVANCE(262);
      if (lookahead == 'V') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(208)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 207:
      if (eof) ADVANCE(209);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(398);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '=') ADVANCE(214);
      if (lookahead == '@') ADVANCE(267);
      if (lookahead == 'A') ADVANCE(259);
      if (lookahead == 'F') ADVANCE(260);
      if (lookahead == 'P') ADVANCE(262);
      if (lookahead == 'V') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(208)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 208:
      if (eof) ADVANCE(209);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(398);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 'A') ADVANCE(259);
      if (lookahead == 'F') ADVANCE(260);
      if (lookahead == 'P') ADVANCE(262);
      if (lookahead == 'V') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(208)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_BUILD);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_LET);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_RUN);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_SAVE);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_SAVE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_SAVE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_ARTIFACT);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_AS);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_AS);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_LOCAL);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_IMAGE);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == ')') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'J') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == '\f') ADVANCE(440);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == '#') ADVANCE(270);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '\f') ADVANCE(444);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(285);
      if (lookahead == 'E') ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(282);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'G') ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'M') ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(233);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(275);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'P') ADVANCE(286);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(274);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(278);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(230);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'U') ADVANCE(276);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'V') ADVANCE(273);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == '\f') ADVANCE(440);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == '#') ADVANCE(290);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(291);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '\f') ADVANCE(444);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_image_digest);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_immediate_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == '\f') ADVANCE(440);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(364);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(335);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(322);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(367);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(327);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(357);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(334);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(317);
      if (lookahead == 'E') ADVANCE(315);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(314);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G') ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M') ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(311);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(307);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P') ADVANCE(318);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(306);
      if (lookahead == 'S') ADVANCE(241);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(246);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U') ADVANCE(308);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'V') ADVANCE(305);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(346);
      if (lookahead == 'c') ADVANCE(338);
      if (lookahead == 'd') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == 'k') ADVANCE(329);
      if (lookahead == 'p') ADVANCE(320);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(376);
      if (lookahead == 'l') ADVANCE(321);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(379);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(369);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(328);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(366);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(336);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(300);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(360);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(365);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(362);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == 'k') ADVANCE(329);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(330);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(375);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(352);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(368);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(381);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(355);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'k') ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(359);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(345);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(341);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(361);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(349);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(421);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(358);
      if (lookahead == 'o') ADVANCE(382);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(347);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(408);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(344);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(363);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(385);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(371);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(383);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(370);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(302);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(384);
      if (lookahead == 't') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(296);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(409);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(337);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(340);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(416);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(414);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(420);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(378);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(380);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(374);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'v') ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(354);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(427);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(356);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'x') ADVANCE(342);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'y') ADVANCE(353);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(118);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '\f') ADVANCE(444);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_version_major_minor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_allow_privileged);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_build_arg_token1);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_build_arg_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_build_arg_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcache_DASHfrom);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_cache_hint);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchmod);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_dir);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_entrypoint);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_feature_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_force);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_if_exists);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_keep_own);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_keep_ts);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_DASH_DASHmount);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_network_none);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_no_cache);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_pass_args);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_privileged);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_push);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsecret);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_ssh);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_symlink_no_follow);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == '\f') ADVANCE(442);
      if (lookahead == '\r') ADVANCE(429);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(429);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(431);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == '\f') ADVANCE(441);
      if (lookahead == '\r') ADVANCE(433);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(433);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(435);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == '\f') ADVANCE(440);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == '\f') ADVANCE(440);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == '\f') ADVANCE(441);
      if (lookahead == '\r') ADVANCE(433);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(433);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == '\f') ADVANCE(442);
      if (lookahead == '\r') ADVANCE(429);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(429);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '\f') ADVANCE(444);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(445);
      if (lookahead == '\f') ADVANCE(453);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '+') ADVANCE(396);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(269);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(446);
      if (lookahead == '\f') ADVANCE(454);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '+') ADVANCE(396);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(447);
      if (lookahead == '\f') ADVANCE(455);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(448);
      if (lookahead == '\f') ADVANCE(456);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_CRn);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(287);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(388);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(392);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(445);
      if (lookahead == '\f') ADVANCE(453);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '+') ADVANCE(396);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(269);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(446);
      if (lookahead == '\f') ADVANCE(454);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '+') ADVANCE(396);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(447);
      if (lookahead == '\f') ADVANCE(455);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(448);
      if (lookahead == '\f') ADVANCE(456);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 207},
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 38, .external_lex_state = 2},
  [11] = {.lex_state = 38, .external_lex_state = 2},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 33},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 38, .external_lex_state = 2},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 207},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 207},
  [27] = {.lex_state = 22},
  [28] = {.lex_state = 22},
  [29] = {.lex_state = 38, .external_lex_state = 2},
  [30] = {.lex_state = 38, .external_lex_state = 2},
  [31] = {.lex_state = 38, .external_lex_state = 2},
  [32] = {.lex_state = 38, .external_lex_state = 2},
  [33] = {.lex_state = 38, .external_lex_state = 2},
  [34] = {.lex_state = 38, .external_lex_state = 2},
  [35] = {.lex_state = 25, .external_lex_state = 2},
  [36] = {.lex_state = 25, .external_lex_state = 2},
  [37] = {.lex_state = 38, .external_lex_state = 2},
  [38] = {.lex_state = 25, .external_lex_state = 2},
  [39] = {.lex_state = 25, .external_lex_state = 2},
  [40] = {.lex_state = 38, .external_lex_state = 2},
  [41] = {.lex_state = 25, .external_lex_state = 2},
  [42] = {.lex_state = 36, .external_lex_state = 2},
  [43] = {.lex_state = 25, .external_lex_state = 2},
  [44] = {.lex_state = 20, .external_lex_state = 2},
  [45] = {.lex_state = 36, .external_lex_state = 2},
  [46] = {.lex_state = 207},
  [47] = {.lex_state = 38, .external_lex_state = 2},
  [48] = {.lex_state = 25, .external_lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 206},
  [53] = {.lex_state = 207},
  [54] = {.lex_state = 207},
  [55] = {.lex_state = 25, .external_lex_state = 2},
  [56] = {.lex_state = 25, .external_lex_state = 2},
  [57] = {.lex_state = 38, .external_lex_state = 2},
  [58] = {.lex_state = 38, .external_lex_state = 2},
  [59] = {.lex_state = 207},
  [60] = {.lex_state = 207},
  [61] = {.lex_state = 25, .external_lex_state = 2},
  [62] = {.lex_state = 0, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 207},
  [77] = {.lex_state = 207},
  [78] = {.lex_state = 207},
  [79] = {.lex_state = 207},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 207},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 34},
  [91] = {.lex_state = 33},
  [92] = {.lex_state = 35},
  [93] = {.lex_state = 24},
  [94] = {.lex_state = 24},
  [95] = {.lex_state = 33},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 35},
  [98] = {.lex_state = 35},
  [99] = {.lex_state = 207},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 34},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 34},
  [104] = {.lex_state = 207, .external_lex_state = 3},
  [105] = {.lex_state = 24},
  [106] = {.lex_state = 24},
  [107] = {.lex_state = 207},
  [108] = {.lex_state = 207},
  [109] = {.lex_state = 24},
  [110] = {.lex_state = 24},
  [111] = {.lex_state = 24},
  [112] = {.lex_state = 207},
  [113] = {.lex_state = 24},
  [114] = {.lex_state = 24},
  [115] = {.lex_state = 24},
  [116] = {.lex_state = 207},
  [117] = {.lex_state = 35},
  [118] = {.lex_state = 207},
  [119] = {.lex_state = 207},
  [120] = {.lex_state = 207},
  [121] = {.lex_state = 33},
  [122] = {.lex_state = 24},
  [123] = {.lex_state = 207},
  [124] = {.lex_state = 24},
  [125] = {.lex_state = 207},
  [126] = {.lex_state = 207},
  [127] = {.lex_state = 24},
  [128] = {.lex_state = 207},
  [129] = {.lex_state = 207},
  [130] = {.lex_state = 207},
  [131] = {.lex_state = 24},
  [132] = {.lex_state = 207},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 30},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 30},
  [139] = {.lex_state = 33},
  [140] = {.lex_state = 13},
  [141] = {.lex_state = 13},
  [142] = {.lex_state = 27},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 13},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 207},
  [147] = {.lex_state = 13},
  [148] = {.lex_state = 13},
  [149] = {.lex_state = 13},
  [150] = {.lex_state = 27},
  [151] = {.lex_state = 13},
  [152] = {.lex_state = 13},
  [153] = {.lex_state = 27},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 27},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 207},
  [158] = {.lex_state = 13},
  [159] = {.lex_state = 13},
  [160] = {.lex_state = 27},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 13},
  [163] = {.lex_state = 13},
  [164] = {.lex_state = 13},
  [165] = {.lex_state = 34},
  [166] = {.lex_state = 34},
  [167] = {.lex_state = 13},
  [168] = {.lex_state = 13},
  [169] = {.lex_state = 34},
  [170] = {.lex_state = 34},
  [171] = {.lex_state = 27},
  [172] = {.lex_state = 29},
  [173] = {.lex_state = 29},
  [174] = {.lex_state = 29},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 21},
  [178] = {.lex_state = 29},
  [179] = {.lex_state = 40},
  [180] = {.lex_state = 37},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 207},
  [183] = {.lex_state = 21},
  [184] = {.lex_state = 21},
  [185] = {.lex_state = 207},
  [186] = {.lex_state = 27},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 21},
  [190] = {.lex_state = 21},
  [191] = {.lex_state = 37},
  [192] = {.lex_state = 11},
  [193] = {.lex_state = 21},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 29},
  [196] = {.lex_state = 37},
  [197] = {.lex_state = 27},
  [198] = {.lex_state = 37},
  [199] = {.lex_state = 37},
  [200] = {.lex_state = 12},
  [201] = {.lex_state = 27},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 27},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 27},
  [206] = {.lex_state = 32},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 32},
  [209] = {.lex_state = 37},
  [210] = {.lex_state = 29},
  [211] = {.lex_state = 40},
  [212] = {.lex_state = 32},
  [213] = {.lex_state = 29},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 32},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 40},
  [220] = {.lex_state = 32},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 32},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 12},
  [232] = {.lex_state = 11},
  [233] = {.lex_state = 12},
  [234] = {.lex_state = 11},
  [235] = {.lex_state = 12},
  [236] = {.lex_state = 11},
  [237] = {.lex_state = 12},
  [238] = {.lex_state = 11},
  [239] = {.lex_state = 12},
  [240] = {.lex_state = 11},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ARG] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BUILD] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_PROJECT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_VERSION] = ACTIONS(1),
    [anon_sym_COPY] = ACTIONS(1),
    [anon_sym_LET] = ACTIONS(1),
    [anon_sym_RUN] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_SAVE] = ACTIONS(1),
    [anon_sym_ARTIFACT] = ACTIONS(1),
    [anon_sym_AS] = ACTIONS(1),
    [anon_sym_LOCAL] = ACTIONS(1),
    [anon_sym_IMAGE] = ACTIONS(1),
    [anon_sym_SET] = ACTIONS(1),
    [sym_expr] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_shell_fragment_token1] = ACTIONS(1),
    [aux_sym_shell_fragment_token3] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_version_major_minor] = ACTIONS(1),
    [sym_entrypoint] = ACTIONS(1),
    [anon_sym_DASH_DASHmount] = ACTIONS(1),
    [sym_network_none] = ACTIONS(1),
    [sym_no_cache] = ACTIONS(1),
    [sym_privileged] = ACTIONS(1),
    [sym_push] = ACTIONS(1),
    [anon_sym_DASH_DASHsecret] = ACTIONS(1),
    [sym_ssh] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation_comment] = ACTIONS(5),
    [anon_sym_CRn] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(202),
    [sym_arg_command] = STATE(23),
    [sym_from_command] = STATE(23),
    [sym_project_command] = STATE(23),
    [sym_target] = STATE(23),
    [sym_version_command] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_ARG] = ACTIONS(9),
    [anon_sym_FROM] = ACTIONS(11),
    [anon_sym_PROJECT] = ACTIONS(13),
    [anon_sym_VERSION] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      sym_path,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(29), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(31), 1,
      anon_sym_DASH_DASHplatform,
    STATE(6), 1,
      aux_sym_copy_command_repeat1,
    STATE(101), 1,
      aux_sym_copy_command_repeat2,
    STATE(188), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(166), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(17), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(25), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [53] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      sym_path,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(29), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(31), 1,
      anon_sym_DASH_DASHplatform,
    STATE(2), 1,
      aux_sym_copy_command_repeat1,
    STATE(90), 1,
      aux_sym_copy_command_repeat2,
    STATE(188), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(166), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(17), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(25), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [106] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(33), 1,
      anon_sym_DASH_DASH,
    ACTIONS(37), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(41), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(43), 1,
      anon_sym_DASH_DASHsecret,
    STATE(9), 1,
      aux_sym_run_command_repeat1,
    STATE(96), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(140), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(35), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(22), 2,
      sym_mount,
      sym_secret,
    ACTIONS(39), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [151] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(45), 1,
      anon_sym_ARG,
    ACTIONS(47), 1,
      anon_sym_FROM,
    ACTIONS(49), 1,
      anon_sym_COPY,
    ACTIONS(51), 1,
      anon_sym_LET,
    ACTIONS(53), 1,
      anon_sym_RUN,
    ACTIONS(55), 1,
      anon_sym_SAVE,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(7), 9,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      aux_sym_target_repeat1,
  [194] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      sym_path,
    ACTIONS(68), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(71), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(74), 1,
      anon_sym_DASH_DASHplatform,
    STATE(6), 1,
      aux_sym_copy_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    STATE(17), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(65), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [235] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(45), 1,
      anon_sym_ARG,
    ACTIONS(47), 1,
      anon_sym_FROM,
    ACTIONS(49), 1,
      anon_sym_COPY,
    ACTIONS(51), 1,
      anon_sym_LET,
    ACTIONS(53), 1,
      anon_sym_RUN,
    ACTIONS(55), 1,
      anon_sym_SAVE,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(77), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(8), 9,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      aux_sym_target_repeat1,
  [278] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(79), 1,
      anon_sym_ARG,
    ACTIONS(82), 1,
      anon_sym_FROM,
    ACTIONS(85), 1,
      anon_sym_COPY,
    ACTIONS(88), 1,
      anon_sym_LET,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(94), 1,
      anon_sym_SAVE,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(100), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(8), 9,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      aux_sym_target_repeat1,
  [321] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(37), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(41), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(43), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(102), 1,
      anon_sym_DASH_DASH,
    STATE(12), 1,
      aux_sym_run_command_repeat1,
    STATE(96), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(158), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(35), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(22), 2,
      sym_mount,
      sym_secret,
    ACTIONS(39), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [366] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(106), 1,
      sym_image_name,
    ACTIONS(108), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(110), 1,
      sym_cache_hint,
    ACTIONS(112), 1,
      sym_push,
    ACTIONS(114), 1,
      sym__dedent,
    STATE(11), 1,
      aux_sym_save_image_command_repeat1,
    STATE(40), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(30), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(104), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [408] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(106), 1,
      sym_image_name,
    ACTIONS(108), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(112), 1,
      sym_push,
    ACTIONS(118), 1,
      sym__dedent,
    STATE(21), 1,
      aux_sym_save_image_command_repeat1,
    STATE(40), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(32), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(116), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [447] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(127), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(130), 1,
      anon_sym_DASH_DASHsecret,
    STATE(12), 1,
      aux_sym_run_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(120), 2,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
    ACTIONS(122), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(22), 2,
      sym_mount,
      sym_secret,
    ACTIONS(124), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [484] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(133), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(135), 12,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      sym_allow_privileged,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHchown,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
      sym_symlink_no_follow,
  [509] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(137), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(139), 12,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      sym_allow_privileged,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHchown,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
      sym_symlink_no_follow,
  [534] = 10,
    ACTIONS(141), 1,
      sym_image_name,
    ACTIONS(143), 1,
      anon_sym_PLUS,
    ACTIONS(147), 1,
      anon_sym_DASH_DASHplatform,
    STATE(39), 1,
      sym_target_ref,
    STATE(95), 1,
      aux_sym_from_command_repeat1,
    STATE(139), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(145), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(64), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(149), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [571] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(151), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(153), 12,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      sym_allow_privileged,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHchown,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
      sym_symlink_no_follow,
  [596] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(155), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(157), 12,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      sym_allow_privileged,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHchown,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
      sym_symlink_no_follow,
  [621] = 10,
    ACTIONS(147), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(159), 1,
      sym_image_name,
    ACTIONS(161), 1,
      anon_sym_PLUS,
    STATE(54), 1,
      sym_target_ref,
    STATE(91), 1,
      aux_sym_from_command_repeat1,
    STATE(139), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(145), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(126), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(163), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [658] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(165), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(167), 12,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      sym_allow_privileged,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHchown,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
      sym_symlink_no_follow,
  [683] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(169), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(171), 12,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      sym_allow_privileged,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHchown,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
      sym_symlink_no_follow,
  [708] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(175), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(178), 1,
      sym_push,
    ACTIONS(181), 1,
      sym__dedent,
    STATE(21), 1,
      aux_sym_save_image_command_repeat1,
    STATE(40), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(173), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [741] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(185), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(183), 10,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      sym_entrypoint,
      anon_sym_DASH_DASHmount,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      anon_sym_DASH_DASHsecret,
      sym_ssh,
  [765] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(9), 1,
      anon_sym_ARG,
    ACTIONS(11), 1,
      anon_sym_FROM,
    ACTIONS(13), 1,
      anon_sym_PROJECT,
    ACTIONS(15), 1,
      anon_sym_VERSION,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(26), 6,
      sym_arg_command,
      sym_from_command,
      sym_project_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [799] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(151), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(153), 10,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      sym_entrypoint,
      anon_sym_DASH_DASHmount,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      anon_sym_DASH_DASHsecret,
      sym_ssh,
  [823] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(137), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(139), 10,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      sym_entrypoint,
      anon_sym_DASH_DASHmount,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      anon_sym_DASH_DASHsecret,
      sym_ssh,
  [847] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 1,
      anon_sym_ARG,
    ACTIONS(194), 1,
      anon_sym_FROM,
    ACTIONS(197), 1,
      anon_sym_PROJECT,
    ACTIONS(200), 1,
      anon_sym_VERSION,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(26), 6,
      sym_arg_command,
      sym_from_command,
      sym_project_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [881] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(208), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(206), 10,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      sym_entrypoint,
      anon_sym_DASH_DASHmount,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      anon_sym_DASH_DASHsecret,
      sym_ssh,
  [905] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(212), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(210), 10,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      sym_entrypoint,
      anon_sym_DASH_DASHmount,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      anon_sym_DASH_DASHsecret,
      sym_ssh,
  [929] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(216), 1,
      sym_image_name,
    ACTIONS(219), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(29), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(214), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [956] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(106), 1,
      sym_image_name,
    ACTIONS(223), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(29), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(221), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [983] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(139), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(137), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1006] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(106), 1,
      sym_image_name,
    ACTIONS(227), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(29), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(225), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1033] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(153), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(151), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1056] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(231), 1,
      anon_sym_COLON2,
    ACTIONS(233), 1,
      anon_sym_AT,
    ACTIONS(235), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(229), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1083] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(239), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(36), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(237), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1108] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(243), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(36), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(241), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1133] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(248), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(246), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1156] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(239), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(35), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(250), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1181] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(239), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(41), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(252), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1206] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(256), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(254), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1229] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(239), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(36), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(258), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1254] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(262), 1,
      anon_sym_AS,
    ACTIONS(264), 1,
      sym_path,
    ACTIONS(266), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(260), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1280] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(268), 1,
      anon_sym_COLON2,
    ACTIONS(270), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(235), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1304] = 4,
    ACTIONS(274), 1,
      aux_sym_build_arg_token1,
    ACTIONS(276), 1,
      sym__dedent,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(272), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_DASH_DASH2,
  [1326] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(280), 1,
      anon_sym_AS,
    ACTIONS(282), 1,
      sym_path,
    ACTIONS(284), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(278), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1352] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(288), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(46), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(286), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [1378] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(293), 1,
      anon_sym_AT,
    ACTIONS(295), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(291), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1402] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(297), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_DASH_DASH2,
  [1421] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(299), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(295), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1442] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(303), 1,
      anon_sym_AS,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(301), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1463] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(307), 1,
      anon_sym_AS,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(305), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1484] = 4,
    ACTIONS(276), 1,
      ts_builtin_sym_end,
    ACTIONS(309), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(272), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
  [1505] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(313), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(46), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(311), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [1530] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(313), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(60), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(315), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [1555] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(317), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_DASH_DASH2,
  [1574] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(139), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_DASH_DASH2,
  [1593] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(321), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(319), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1614] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(325), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(323), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1635] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    ACTIONS(313), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(53), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(327), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [1660] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    ACTIONS(313), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(46), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(329), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [1685] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(153), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_DASH_DASH2,
  [1704] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(331), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1722] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(333), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1740] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(252), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1758] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(335), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1776] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(337), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1794] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(339), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1812] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(341), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1830] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(343), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1848] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(321), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1866] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(345), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1884] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(347), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1902] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(349), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1920] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(351), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1938] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(353), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1956] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 1,
      anon_sym_COLON2,
    ACTIONS(357), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(229), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [1980] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(137), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2000] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(153), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(151), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2020] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(297), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_DASH_DASH2,
    ACTIONS(359), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2040] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(361), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2058] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(363), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2076] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(365), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2094] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(367), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2112] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(317), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(369), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2132] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(325), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2150] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(371), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2168] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(373), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2186] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(375), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2204] = 4,
    STATE(66), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(377), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(379), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2223] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_path,
    STATE(103), 1,
      aux_sym_copy_command_repeat2,
    STATE(188), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(166), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [2250] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(31), 1,
      anon_sym_DASH_DASHplatform,
    STATE(59), 1,
      sym_target_ref,
    STATE(121), 1,
      aux_sym_from_command_repeat1,
    STATE(139), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(383), 2,
      sym_allow_privileged,
      sym_pass_args,
  [2277] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(385), 1,
      sym_path,
    STATE(92), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(387), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [2298] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(390), 1,
      sym_expr,
    ACTIONS(392), 1,
      anon_sym_DQUOTE,
    ACTIONS(394), 1,
      anon_sym_SQUOTE,
    ACTIONS(396), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(144), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2323] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(392), 1,
      anon_sym_DQUOTE,
    ACTIONS(394), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      sym_expr,
    ACTIONS(400), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(164), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2348] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(31), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(402), 1,
      anon_sym_PLUS,
    STATE(38), 1,
      sym_target_ref,
    STATE(121), 1,
      aux_sym_from_command_repeat1,
    STATE(139), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(383), 2,
      sym_allow_privileged,
      sym_pass_args,
  [2375] = 4,
    STATE(100), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(404), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(406), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2394] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(408), 1,
      sym_path,
    STATE(98), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(410), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [2415] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(412), 1,
      sym_path,
    STATE(92), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(410), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [2436] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(414), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(291), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2457] = 4,
    STATE(100), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(416), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(419), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2476] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      sym_path,
    STATE(103), 1,
      aux_sym_copy_command_repeat2,
    STATE(188), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(166), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [2503] = 4,
    STATE(73), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(377), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(423), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2522] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(425), 1,
      sym_path,
    ACTIONS(428), 1,
      anon_sym_PLUS,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    STATE(103), 1,
      aux_sym_copy_command_repeat2,
    STATE(188), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(166), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [2549] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(434), 1,
      ts_builtin_sym_end,
    ACTIONS(438), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(436), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2570] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(392), 1,
      anon_sym_DQUOTE,
    ACTIONS(394), 1,
      anon_sym_SQUOTE,
    ACTIONS(440), 1,
      sym_expr,
    ACTIONS(442), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(148), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2595] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(392), 1,
      anon_sym_DQUOTE,
    ACTIONS(394), 1,
      anon_sym_SQUOTE,
    ACTIONS(444), 1,
      sym_expr,
    ACTIONS(446), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(162), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2620] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(448), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2638] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(323), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2656] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(452), 1,
      anon_sym_SQUOTE,
    ACTIONS(454), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(27), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2678] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(452), 1,
      anon_sym_SQUOTE,
    ACTIONS(456), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(28), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2700] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(458), 1,
      anon_sym_DQUOTE,
    ACTIONS(460), 1,
      anon_sym_SQUOTE,
    ACTIONS(462), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(20), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2722] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(464), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(466), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2740] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(468), 1,
      anon_sym_DQUOTE,
    ACTIONS(470), 1,
      anon_sym_SQUOTE,
    ACTIONS(472), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(37), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2762] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(392), 1,
      anon_sym_DQUOTE,
    ACTIONS(394), 1,
      anon_sym_SQUOTE,
    ACTIONS(474), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(149), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2784] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(476), 1,
      anon_sym_DQUOTE,
    ACTIONS(478), 1,
      anon_sym_SQUOTE,
    ACTIONS(480), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(55), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2806] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(482), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2824] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(484), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(486), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [2842] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(490), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2860] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(492), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2878] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(494), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2896] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(496), 1,
      anon_sym_PLUS,
    ACTIONS(501), 1,
      anon_sym_DASH_DASHplatform,
    STATE(121), 1,
      aux_sym_from_command_repeat1,
    STATE(139), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(498), 2,
      sym_allow_privileged,
      sym_pass_args,
  [2920] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(458), 1,
      anon_sym_DQUOTE,
    ACTIONS(460), 1,
      anon_sym_SQUOTE,
    ACTIONS(504), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(19), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2942] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(506), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(508), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2960] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(392), 1,
      anon_sym_DQUOTE,
    ACTIONS(394), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(145), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2982] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(512), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3000] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(315), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3018] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(458), 1,
      anon_sym_DQUOTE,
    ACTIONS(460), 1,
      anon_sym_SQUOTE,
    ACTIONS(514), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(13), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3040] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(319), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3058] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(516), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(518), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3076] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(520), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(522), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3094] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(524), 1,
      anon_sym_DQUOTE,
    ACTIONS(526), 1,
      anon_sym_SQUOTE,
    ACTIONS(528), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(84), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3116] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(530), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3134] = 4,
    ACTIONS(532), 1,
      anon_sym_EQ,
    STATE(68), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(534), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3151] = 4,
    ACTIONS(536), 1,
      anon_sym_EQ,
    STATE(119), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(538), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3168] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(35), 1,
      aux_sym_shell_fragment_token3,
    STATE(96), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(156), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(37), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [3189] = 4,
    ACTIONS(540), 1,
      anon_sym_EQ,
    STATE(120), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(542), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3206] = 4,
    ACTIONS(544), 1,
      anon_sym_EQ,
    STATE(69), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(546), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3223] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(35), 1,
      aux_sym_shell_fragment_token3,
    STATE(96), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(147), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(37), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [3244] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(548), 4,
      anon_sym_PLUS,
      sym_allow_privileged,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
  [3258] = 3,
    STATE(67), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(550), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3272] = 3,
    STATE(130), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(552), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3286] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(554), 1,
      sym_identifier,
    STATE(150), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(556), 2,
      sym_global,
      sym_required,
  [3304] = 3,
    STATE(125), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(558), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3318] = 3,
    STATE(107), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(560), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3332] = 3,
    STATE(80), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(562), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3346] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(313), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(157), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [3364] = 3,
    STATE(63), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(566), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3378] = 3,
    STATE(88), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(568), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3392] = 3,
    STATE(72), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(570), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3406] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(572), 1,
      sym_identifier,
    STATE(153), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(556), 2,
      sym_global,
      sym_required,
  [3424] = 3,
    STATE(75), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(574), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3438] = 3,
    STATE(104), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(576), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3452] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(578), 1,
      sym_identifier,
    STATE(153), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(580), 2,
      sym_global,
      sym_required,
  [3470] = 3,
    STATE(116), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(583), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3484] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(585), 1,
      sym_identifier,
    STATE(153), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(556), 2,
      sym_global,
      sym_required,
  [3502] = 3,
    STATE(71), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(587), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3516] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(313), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(46), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [3534] = 3,
    STATE(65), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(591), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3548] = 3,
    STATE(87), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(593), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3562] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(595), 1,
      sym_identifier,
    STATE(155), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(556), 2,
      sym_global,
      sym_required,
  [3580] = 3,
    STATE(123), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(597), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3594] = 3,
    STATE(86), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(599), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3608] = 3,
    STATE(112), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(601), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3622] = 3,
    STATE(132), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(603), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3636] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(605), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(607), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3651] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(377), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(609), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3666] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(137), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3677] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(151), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3688] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(611), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(613), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3703] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(615), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(617), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3718] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(619), 3,
      sym_identifier,
      sym_global,
      sym_required,
  [3731] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(621), 1,
      sym_version_major_minor,
    ACTIONS(623), 1,
      sym_feature_flag,
    STATE(174), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3748] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(625), 1,
      sym_version_major_minor,
    ACTIONS(627), 1,
      sym_feature_flag,
    STATE(172), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3765] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(629), 1,
      sym_version_major_minor,
    ACTIONS(631), 1,
      sym_feature_flag,
    STATE(174), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3782] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    STATE(181), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3796] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(634), 1,
      anon_sym_ARTIFACT,
    ACTIONS(636), 1,
      anon_sym_IMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3810] = 2,
    ACTIONS(638), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3819] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(640), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3830] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(642), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3841] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(644), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3852] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(646), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3863] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(648), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3874] = 2,
    ACTIONS(650), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3883] = 2,
    ACTIONS(652), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3892] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(654), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3903] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(656), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3914] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(658), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3925] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(660), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3936] = 2,
    ACTIONS(662), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3945] = 2,
    ACTIONS(664), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3954] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(666), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3965] = 2,
    ACTIONS(668), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3974] = 2,
    ACTIONS(670), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3983] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(672), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3994] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(674), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4005] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(676), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4016] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(678), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4027] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(680), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4038] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(682), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4049] = 2,
    ACTIONS(684), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4058] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(686), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4069] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(688), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4080] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(690), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4091] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(692), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4102] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4113] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(696), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4124] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(698), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4135] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(700), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4146] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(702), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4157] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(704), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4168] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(706), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4179] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(708), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4190] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(710), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4201] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(712), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4212] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(714), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4223] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(716), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4234] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(718), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4245] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(720), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4256] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(722), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4267] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(724), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4278] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4289] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(728), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4300] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(730), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4311] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4322] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(734), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4333] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4344] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(738), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4355] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(740), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4366] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(742), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4377] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(744), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4388] = 2,
    ACTIONS(746), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4397] = 2,
    ACTIONS(748), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4406] = 2,
    ACTIONS(750), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4415] = 2,
    ACTIONS(752), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4424] = 2,
    ACTIONS(754), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4433] = 2,
    ACTIONS(756), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4442] = 2,
    ACTIONS(758), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4451] = 2,
    ACTIONS(760), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4460] = 2,
    ACTIONS(762), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4469] = 2,
    ACTIONS(764), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 151,
  [SMALL_STATE(6)] = 194,
  [SMALL_STATE(7)] = 235,
  [SMALL_STATE(8)] = 278,
  [SMALL_STATE(9)] = 321,
  [SMALL_STATE(10)] = 366,
  [SMALL_STATE(11)] = 408,
  [SMALL_STATE(12)] = 447,
  [SMALL_STATE(13)] = 484,
  [SMALL_STATE(14)] = 509,
  [SMALL_STATE(15)] = 534,
  [SMALL_STATE(16)] = 571,
  [SMALL_STATE(17)] = 596,
  [SMALL_STATE(18)] = 621,
  [SMALL_STATE(19)] = 658,
  [SMALL_STATE(20)] = 683,
  [SMALL_STATE(21)] = 708,
  [SMALL_STATE(22)] = 741,
  [SMALL_STATE(23)] = 765,
  [SMALL_STATE(24)] = 799,
  [SMALL_STATE(25)] = 823,
  [SMALL_STATE(26)] = 847,
  [SMALL_STATE(27)] = 881,
  [SMALL_STATE(28)] = 905,
  [SMALL_STATE(29)] = 929,
  [SMALL_STATE(30)] = 956,
  [SMALL_STATE(31)] = 983,
  [SMALL_STATE(32)] = 1006,
  [SMALL_STATE(33)] = 1033,
  [SMALL_STATE(34)] = 1056,
  [SMALL_STATE(35)] = 1083,
  [SMALL_STATE(36)] = 1108,
  [SMALL_STATE(37)] = 1133,
  [SMALL_STATE(38)] = 1156,
  [SMALL_STATE(39)] = 1181,
  [SMALL_STATE(40)] = 1206,
  [SMALL_STATE(41)] = 1229,
  [SMALL_STATE(42)] = 1254,
  [SMALL_STATE(43)] = 1280,
  [SMALL_STATE(44)] = 1304,
  [SMALL_STATE(45)] = 1326,
  [SMALL_STATE(46)] = 1352,
  [SMALL_STATE(47)] = 1378,
  [SMALL_STATE(48)] = 1402,
  [SMALL_STATE(49)] = 1421,
  [SMALL_STATE(50)] = 1442,
  [SMALL_STATE(51)] = 1463,
  [SMALL_STATE(52)] = 1484,
  [SMALL_STATE(53)] = 1505,
  [SMALL_STATE(54)] = 1530,
  [SMALL_STATE(55)] = 1555,
  [SMALL_STATE(56)] = 1574,
  [SMALL_STATE(57)] = 1593,
  [SMALL_STATE(58)] = 1614,
  [SMALL_STATE(59)] = 1635,
  [SMALL_STATE(60)] = 1660,
  [SMALL_STATE(61)] = 1685,
  [SMALL_STATE(62)] = 1704,
  [SMALL_STATE(63)] = 1722,
  [SMALL_STATE(64)] = 1740,
  [SMALL_STATE(65)] = 1758,
  [SMALL_STATE(66)] = 1776,
  [SMALL_STATE(67)] = 1794,
  [SMALL_STATE(68)] = 1812,
  [SMALL_STATE(69)] = 1830,
  [SMALL_STATE(70)] = 1848,
  [SMALL_STATE(71)] = 1866,
  [SMALL_STATE(72)] = 1884,
  [SMALL_STATE(73)] = 1902,
  [SMALL_STATE(74)] = 1920,
  [SMALL_STATE(75)] = 1938,
  [SMALL_STATE(76)] = 1956,
  [SMALL_STATE(77)] = 1980,
  [SMALL_STATE(78)] = 2000,
  [SMALL_STATE(79)] = 2020,
  [SMALL_STATE(80)] = 2040,
  [SMALL_STATE(81)] = 2058,
  [SMALL_STATE(82)] = 2076,
  [SMALL_STATE(83)] = 2094,
  [SMALL_STATE(84)] = 2112,
  [SMALL_STATE(85)] = 2132,
  [SMALL_STATE(86)] = 2150,
  [SMALL_STATE(87)] = 2168,
  [SMALL_STATE(88)] = 2186,
  [SMALL_STATE(89)] = 2204,
  [SMALL_STATE(90)] = 2223,
  [SMALL_STATE(91)] = 2250,
  [SMALL_STATE(92)] = 2277,
  [SMALL_STATE(93)] = 2298,
  [SMALL_STATE(94)] = 2323,
  [SMALL_STATE(95)] = 2348,
  [SMALL_STATE(96)] = 2375,
  [SMALL_STATE(97)] = 2394,
  [SMALL_STATE(98)] = 2415,
  [SMALL_STATE(99)] = 2436,
  [SMALL_STATE(100)] = 2457,
  [SMALL_STATE(101)] = 2476,
  [SMALL_STATE(102)] = 2503,
  [SMALL_STATE(103)] = 2522,
  [SMALL_STATE(104)] = 2549,
  [SMALL_STATE(105)] = 2570,
  [SMALL_STATE(106)] = 2595,
  [SMALL_STATE(107)] = 2620,
  [SMALL_STATE(108)] = 2638,
  [SMALL_STATE(109)] = 2656,
  [SMALL_STATE(110)] = 2678,
  [SMALL_STATE(111)] = 2700,
  [SMALL_STATE(112)] = 2722,
  [SMALL_STATE(113)] = 2740,
  [SMALL_STATE(114)] = 2762,
  [SMALL_STATE(115)] = 2784,
  [SMALL_STATE(116)] = 2806,
  [SMALL_STATE(117)] = 2824,
  [SMALL_STATE(118)] = 2842,
  [SMALL_STATE(119)] = 2860,
  [SMALL_STATE(120)] = 2878,
  [SMALL_STATE(121)] = 2896,
  [SMALL_STATE(122)] = 2920,
  [SMALL_STATE(123)] = 2942,
  [SMALL_STATE(124)] = 2960,
  [SMALL_STATE(125)] = 2982,
  [SMALL_STATE(126)] = 3000,
  [SMALL_STATE(127)] = 3018,
  [SMALL_STATE(128)] = 3040,
  [SMALL_STATE(129)] = 3058,
  [SMALL_STATE(130)] = 3076,
  [SMALL_STATE(131)] = 3094,
  [SMALL_STATE(132)] = 3116,
  [SMALL_STATE(133)] = 3134,
  [SMALL_STATE(134)] = 3151,
  [SMALL_STATE(135)] = 3168,
  [SMALL_STATE(136)] = 3189,
  [SMALL_STATE(137)] = 3206,
  [SMALL_STATE(138)] = 3223,
  [SMALL_STATE(139)] = 3244,
  [SMALL_STATE(140)] = 3258,
  [SMALL_STATE(141)] = 3272,
  [SMALL_STATE(142)] = 3286,
  [SMALL_STATE(143)] = 3304,
  [SMALL_STATE(144)] = 3318,
  [SMALL_STATE(145)] = 3332,
  [SMALL_STATE(146)] = 3346,
  [SMALL_STATE(147)] = 3364,
  [SMALL_STATE(148)] = 3378,
  [SMALL_STATE(149)] = 3392,
  [SMALL_STATE(150)] = 3406,
  [SMALL_STATE(151)] = 3424,
  [SMALL_STATE(152)] = 3438,
  [SMALL_STATE(153)] = 3452,
  [SMALL_STATE(154)] = 3470,
  [SMALL_STATE(155)] = 3484,
  [SMALL_STATE(156)] = 3502,
  [SMALL_STATE(157)] = 3516,
  [SMALL_STATE(158)] = 3534,
  [SMALL_STATE(159)] = 3548,
  [SMALL_STATE(160)] = 3562,
  [SMALL_STATE(161)] = 3580,
  [SMALL_STATE(162)] = 3594,
  [SMALL_STATE(163)] = 3608,
  [SMALL_STATE(164)] = 3622,
  [SMALL_STATE(165)] = 3636,
  [SMALL_STATE(166)] = 3651,
  [SMALL_STATE(167)] = 3666,
  [SMALL_STATE(168)] = 3677,
  [SMALL_STATE(169)] = 3688,
  [SMALL_STATE(170)] = 3703,
  [SMALL_STATE(171)] = 3718,
  [SMALL_STATE(172)] = 3731,
  [SMALL_STATE(173)] = 3748,
  [SMALL_STATE(174)] = 3765,
  [SMALL_STATE(175)] = 3782,
  [SMALL_STATE(176)] = 3796,
  [SMALL_STATE(177)] = 3810,
  [SMALL_STATE(178)] = 3819,
  [SMALL_STATE(179)] = 3830,
  [SMALL_STATE(180)] = 3841,
  [SMALL_STATE(181)] = 3852,
  [SMALL_STATE(182)] = 3863,
  [SMALL_STATE(183)] = 3874,
  [SMALL_STATE(184)] = 3883,
  [SMALL_STATE(185)] = 3892,
  [SMALL_STATE(186)] = 3903,
  [SMALL_STATE(187)] = 3914,
  [SMALL_STATE(188)] = 3925,
  [SMALL_STATE(189)] = 3936,
  [SMALL_STATE(190)] = 3945,
  [SMALL_STATE(191)] = 3954,
  [SMALL_STATE(192)] = 3965,
  [SMALL_STATE(193)] = 3974,
  [SMALL_STATE(194)] = 3983,
  [SMALL_STATE(195)] = 3994,
  [SMALL_STATE(196)] = 4005,
  [SMALL_STATE(197)] = 4016,
  [SMALL_STATE(198)] = 4027,
  [SMALL_STATE(199)] = 4038,
  [SMALL_STATE(200)] = 4049,
  [SMALL_STATE(201)] = 4058,
  [SMALL_STATE(202)] = 4069,
  [SMALL_STATE(203)] = 4080,
  [SMALL_STATE(204)] = 4091,
  [SMALL_STATE(205)] = 4102,
  [SMALL_STATE(206)] = 4113,
  [SMALL_STATE(207)] = 4124,
  [SMALL_STATE(208)] = 4135,
  [SMALL_STATE(209)] = 4146,
  [SMALL_STATE(210)] = 4157,
  [SMALL_STATE(211)] = 4168,
  [SMALL_STATE(212)] = 4179,
  [SMALL_STATE(213)] = 4190,
  [SMALL_STATE(214)] = 4201,
  [SMALL_STATE(215)] = 4212,
  [SMALL_STATE(216)] = 4223,
  [SMALL_STATE(217)] = 4234,
  [SMALL_STATE(218)] = 4245,
  [SMALL_STATE(219)] = 4256,
  [SMALL_STATE(220)] = 4267,
  [SMALL_STATE(221)] = 4278,
  [SMALL_STATE(222)] = 4289,
  [SMALL_STATE(223)] = 4300,
  [SMALL_STATE(224)] = 4311,
  [SMALL_STATE(225)] = 4322,
  [SMALL_STATE(226)] = 4333,
  [SMALL_STATE(227)] = 4344,
  [SMALL_STATE(228)] = 4355,
  [SMALL_STATE(229)] = 4366,
  [SMALL_STATE(230)] = 4377,
  [SMALL_STATE(231)] = 4388,
  [SMALL_STATE(232)] = 4397,
  [SMALL_STATE(233)] = 4406,
  [SMALL_STATE(234)] = 4415,
  [SMALL_STATE(235)] = 4424,
  [SMALL_STATE(236)] = 4433,
  [SMALL_STATE(237)] = 4442,
  [SMALL_STATE(238)] = 4451,
  [SMALL_STATE(239)] = 4460,
  [SMALL_STATE(240)] = 4469,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(17),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(190),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(177),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(193),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(142),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(15),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(3),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(201),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(4),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(176),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(197),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 3, .production_id = 24),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3, .production_id = 24),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(22),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(184),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(183),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_platform, 3, .production_id = 10),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_platform, 3, .production_id = 10),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chown, 3, .production_id = 10),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chown, 3, .production_id = 10),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(189),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(40),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(160),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(205),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(173),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(203),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount, 3, .production_id = 10),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount, 3, .production_id = 10),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_secret, 3, .production_id = 10),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_secret, 3, .production_id = 10),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(34),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 4, .production_id = 24),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 4, .production_id = 24),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(213),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 22),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 22),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 29),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 29),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(210),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 32),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 28),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 4, .production_id = 18),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 5, .production_id = 17),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 5, .production_id = 17),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3, .production_id = 23),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 5, .production_id = 31),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 27),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 5, .production_id = 30),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 3, .production_id = 21),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 26),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_command, 5, .production_id = 18),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 4, .production_id = 25),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 8, .production_id = 36),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_command, 5, .production_id = 18),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 6, .production_id = 33),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 7, .production_id = 34),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 7, .production_id = 35),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 4, .production_id = 18),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 19),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(117),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(100),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 20), SHIFT_REPEAT(166),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 20), SHIFT_REPEAT(195),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 20), SHIFT_REPEAT(175),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 2),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 3, .production_id = 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6, .production_id = 2),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 6, .production_id = 2),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(139),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(193),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 2),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 5, .production_id = 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 1, .production_id = 1),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(171),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 6),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 6),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 19),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 5),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 5),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact, 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact, 3),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 1, .production_id = 1),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2), SHIFT_REPEAT(174),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [688] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
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
