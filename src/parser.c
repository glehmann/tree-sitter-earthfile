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
#define STATE_COUNT 236
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 113
#define ALIAS_COUNT 0
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 36

enum ts_symbol_identifiers {
  anon_sym_ARG = 1,
  anon_sym_EQ = 2,
  anon_sym_BUILD = 3,
  anon_sym_FROM = 4,
  anon_sym_COLON = 5,
  anon_sym_VERSION = 6,
  anon_sym_COPY = 7,
  anon_sym_LET = 8,
  anon_sym_RUN = 9,
  anon_sym_DASH_DASH = 10,
  anon_sym_SAVE = 11,
  anon_sym_ARTIFACT = 12,
  anon_sym_AS = 13,
  anon_sym_LOCAL = 14,
  anon_sym_IMAGE = 15,
  anon_sym_SET = 16,
  sym_expr = 17,
  sym_identifier = 18,
  anon_sym_COLON2 = 19,
  anon_sym_AT = 20,
  sym_image_name = 21,
  sym_image_tag = 22,
  sym_image_digest = 23,
  sym_immediate_identifier = 24,
  sym_path = 25,
  aux_sym_shell_fragment_token1 = 26,
  aux_sym_shell_fragment_token2 = 27,
  aux_sym_shell_fragment_token3 = 28,
  anon_sym_PLUS = 29,
  anon_sym_SLASH = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  sym_version_major_minor = 33,
  sym_allow_privileged = 34,
  anon_sym_DASH_DASH2 = 35,
  aux_sym_build_arg_token1 = 36,
  anon_sym_DASH_DASHcache_DASHfrom = 37,
  sym_cache_hint = 38,
  anon_sym_DASH_DASHchmod = 39,
  anon_sym_DASH_DASHchown = 40,
  sym_dir = 41,
  sym_entrypoint = 42,
  sym_feature_flag = 43,
  sym_force = 44,
  sym_global = 45,
  sym_if_exists = 46,
  sym_keep_own = 47,
  sym_keep_ts = 48,
  anon_sym_DASH_DASHmount = 49,
  sym_network_none = 50,
  sym_no_cache = 51,
  sym_pass_args = 52,
  anon_sym_DASH_DASHplatform = 53,
  sym_privileged = 54,
  sym_push = 55,
  sym_required = 56,
  anon_sym_DASH_DASHsecret = 57,
  sym_ssh = 58,
  sym_symlink_no_follow = 59,
  anon_sym_DQUOTE = 60,
  aux_sym_double_quoted_string_token1 = 61,
  anon_sym_SQUOTE = 62,
  aux_sym_single_quoted_string_token1 = 63,
  sym_unquoted_string = 64,
  sym_line_continuation = 65,
  sym_comment = 66,
  sym_line_continuation_comment = 67,
  anon_sym_LF = 68,
  anon_sym_CRn = 69,
  anon_sym_FF = 70,
  sym__indent = 71,
  sym__dedent = 72,
  sym_source_file = 73,
  sym_arg_command = 74,
  sym_from_command = 75,
  sym_target = 76,
  sym_version_command = 77,
  sym_copy_command = 78,
  sym_let_command = 79,
  sym_run_command = 80,
  sym_save_artifact_command = 81,
  sym_save_image_command = 82,
  sym_set_command = 83,
  sym_image_spec = 84,
  sym_shell_fragment = 85,
  sym_target_ref = 86,
  sym_target_artifact = 87,
  sym_target_artifact_build_args = 88,
  sym_build_arg = 89,
  sym_cache_from = 90,
  sym_chmod = 91,
  sym_chown = 92,
  sym_mount = 93,
  sym_platform = 94,
  sym_secret = 95,
  sym__string = 96,
  sym_double_quoted_string = 97,
  sym_single_quoted_string = 98,
  sym__eol = 99,
  aux_sym_source_file_repeat1 = 100,
  aux_sym_arg_command_repeat1 = 101,
  aux_sym_build_command_repeat2 = 102,
  aux_sym_from_command_repeat1 = 103,
  aux_sym_target_repeat1 = 104,
  aux_sym_version_command_repeat1 = 105,
  aux_sym_copy_command_repeat1 = 106,
  aux_sym_copy_command_repeat2 = 107,
  aux_sym_run_command_repeat1 = 108,
  aux_sym_save_artifact_command_repeat1 = 109,
  aux_sym_save_image_command_repeat1 = 110,
  aux_sym_save_image_command_repeat2 = 111,
  aux_sym_shell_fragment_repeat1 = 112,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ARG] = "ARG",
  [anon_sym_EQ] = "=",
  [anon_sym_BUILD] = "BUILD",
  [anon_sym_FROM] = "FROM",
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
  [anon_sym_SLASH] = "/",
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
  [anon_sym_SLASH] = anon_sym_SLASH,
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
  field_src = 9,
  field_tag = 10,
  field_value = 11,
  field_version = 12,
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
  [14] = {.index = 22, .length = 3},
  [15] = {.index = 25, .length = 3},
  [16] = {.index = 28, .length = 5},
  [17] = {.index = 33, .length = 2},
  [18] = {.index = 35, .length = 1},
  [19] = {.index = 36, .length = 2},
  [20] = {.index = 38, .length = 1},
  [21] = {.index = 39, .length = 1},
  [22] = {.index = 40, .length = 1},
  [23] = {.index = 41, .length = 1},
  [24] = {.index = 42, .length = 2},
  [25] = {.index = 44, .length = 1},
  [26] = {.index = 45, .length = 2},
  [27] = {.index = 47, .length = 2},
  [28] = {.index = 49, .length = 2},
  [29] = {.index = 51, .length = 3},
  [30] = {.index = 54, .length = 2},
  [31] = {.index = 56, .length = 3},
  [32] = {.index = 59, .length = 2},
  [33] = {.index = 61, .length = 3},
  [34] = {.index = 64, .length = 3},
  [35] = {.index = 67, .length = 4},
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
    {field_default_value_expr, 4},
    {field_name, 2},
    {field_option, 1, .inherited = true},
  [25] =
    {field_default_value, 4},
    {field_name, 2},
    {field_option, 1, .inherited = true},
  [28] =
    {field_digest, 3},
    {field_digest, 4},
    {field_name, 0},
    {field_tag, 1},
    {field_tag, 2},
  [33] =
    {field_name, 1},
    {field_value, 3},
  [35] =
    {field_src, 0},
  [36] =
    {field_src, 0, .inherited = true},
    {field_src, 1, .inherited = true},
  [38] =
    {field_command, 1},
  [39] =
    {field_src, 2},
  [40] =
    {field_option, 2},
  [41] =
    {field_option, 2, .inherited = true},
  [42] =
    {field_dest, 2},
    {field_src, 1, .inherited = true},
  [44] =
    {field_command, 2},
  [45] =
    {field_command, 2},
    {field_option, 1, .inherited = true},
  [47] =
    {field_dest, 3},
    {field_src, 2},
  [49] =
    {field_option, 2, .inherited = true},
    {field_src, 3},
  [51] =
    {field_dest, 3},
    {field_option, 1, .inherited = true},
    {field_src, 2, .inherited = true},
  [54] =
    {field_command, 3},
    {field_option, 1, .inherited = true},
  [56] =
    {field_dest, 4},
    {field_option, 2, .inherited = true},
    {field_src, 3},
  [59] =
    {field_local_dest, 5},
    {field_src, 2},
  [61] =
    {field_dest, 3},
    {field_local_dest, 6},
    {field_src, 2},
  [64] =
    {field_local_dest, 6},
    {field_option, 2, .inherited = true},
    {field_src, 3},
  [67] =
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
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 14,
  [22] = 22,
  [23] = 23,
  [24] = 18,
  [25] = 13,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 13,
  [35] = 18,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 37,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 13,
  [52] = 52,
  [53] = 28,
  [54] = 46,
  [55] = 55,
  [56] = 18,
  [57] = 57,
  [58] = 55,
  [59] = 59,
  [60] = 38,
  [61] = 49,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 44,
  [67] = 27,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 36,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 39,
  [84] = 48,
  [85] = 85,
  [86] = 86,
  [87] = 18,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 47,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 89,
  [99] = 13,
  [100] = 37,
  [101] = 101,
  [102] = 101,
  [103] = 103,
  [104] = 93,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 46,
  [118] = 105,
  [119] = 76,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 65,
  [124] = 63,
  [125] = 49,
  [126] = 120,
  [127] = 69,
  [128] = 128,
  [129] = 55,
  [130] = 71,
  [131] = 131,
  [132] = 74,
  [133] = 133,
  [134] = 122,
  [135] = 68,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 140,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 145,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 150,
  [157] = 157,
  [158] = 149,
  [159] = 148,
  [160] = 147,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 13,
  [165] = 18,
  [166] = 166,
  [167] = 167,
  [168] = 168,
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
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 176,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 197,
  [208] = 196,
  [209] = 209,
  [210] = 179,
  [211] = 175,
  [212] = 209,
  [213] = 203,
  [214] = 176,
  [215] = 197,
  [216] = 179,
  [217] = 175,
  [218] = 209,
  [219] = 179,
  [220] = 175,
  [221] = 179,
  [222] = 175,
  [223] = 179,
  [224] = 175,
  [225] = 225,
  [226] = 189,
  [227] = 188,
  [228] = 189,
  [229] = 188,
  [230] = 189,
  [231] = 188,
  [232] = 189,
  [233] = 188,
  [234] = 189,
  [235] = 188,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(203);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(414);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(418);
      if (lookahead == '(') ADVANCE(383);
      if (lookahead == ')') ADVANCE(384);
      if (lookahead == '+') ADVANCE(381);
      if (lookahead == ',') ADVANCE(374);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead == '/') ADVANCE(382);
      if (lookahead == ':') ADVANCE(251);
      if (lookahead == '=') ADVANCE(208);
      if (lookahead == '@') ADVANCE(252);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'B') ADVANCE(92);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'L') ADVANCE(63);
      if (lookahead == 'R') ADVANCE(93);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'V') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(199)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '\f') ADVANCE(426);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == '#') ADVANCE(379);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(378);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == '\f') ADVANCE(430);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == '\f') ADVANCE(439);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '+') ADVANCE(381);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(436);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == '\f') ADVANCE(439);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '+') ADVANCE(381);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(254);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == '\f') ADVANCE(440);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '(') ADVANCE(383);
      if (lookahead == '+') ADVANCE(381);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(437);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(373);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == '\f') ADVANCE(440);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '(') ADVANCE(383);
      if (lookahead == '+') ADVANCE(381);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(373);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == '\f') ADVANCE(441);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(438);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(377);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == '\f') ADVANCE(441);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(377);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '#') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(421);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(416);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(417);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == '\f') ADVANCE(442);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == '\f') ADVANCE(442);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(435);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == '\f') ADVANCE(442);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(414);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(418);
      if (lookahead == '(') ADVANCE(383);
      if (lookahead == ')') ADVANCE(384);
      if (lookahead == '+') ADVANCE(381);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'B') ADVANCE(92);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'L') ADVANCE(63);
      if (lookahead == 'R') ADVANCE(93);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'V') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(435);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(414);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(418);
      if (lookahead == '(') ADVANCE(383);
      if (lookahead == ')') ADVANCE(384);
      if (lookahead == '+') ADVANCE(381);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'B') ADVANCE(92);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'L') ADVANCE(63);
      if (lookahead == 'R') ADVANCE(93);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'V') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 18:
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(414);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(418);
      if (lookahead == '(') ADVANCE(383);
      if (lookahead == ')') ADVANCE(384);
      if (lookahead == '+') ADVANCE(381);
      if (lookahead == '-') ADVANCE(376);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'B') ADVANCE(92);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'L') ADVANCE(63);
      if (lookahead == 'R') ADVANCE(93);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'V') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'm') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(168);
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(389);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '=') ADVANCE(388);
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(86);
      if (lookahead == 'L') ADVANCE(62);
      if (lookahead == 'R') ADVANCE(93);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(26)
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(390);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(388);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(31)
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(22)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(377);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(376);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(22)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(377);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(414);
      if (lookahead == '#') ADVANCE(422);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(418);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == ':') ADVANCE(251);
      if (lookahead == '@') ADVANCE(252);
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(86);
      if (lookahead == 'L') ADVANCE(62);
      if (lookahead == 'R') ADVANCE(93);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(86);
      if (lookahead == 'L') ADVANCE(62);
      if (lookahead == 'R') ADVANCE(93);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(377);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '(') ADVANCE(383);
      if (lookahead == '+') ADVANCE(381);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(373);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '(') ADVANCE(383);
      if (lookahead == '+') ADVANCE(381);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(373);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '-') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(373);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == 'A') ADVANCE(297);
      if (lookahead == 'C') ADVANCE(294);
      if (lookahead == 'F') ADVANCE(298);
      if (lookahead == 'L') ADVANCE(289);
      if (lookahead == 'R') ADVANCE(301);
      if (lookahead == 'S') ADVANCE(288);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(373);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(373);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == ':') ADVANCE(251);
      if (lookahead == '@') ADVANCE(252);
      if (lookahead == 'A') ADVANCE(265);
      if (lookahead == 'C') ADVANCE(262);
      if (lookahead == 'F') ADVANCE(266);
      if (lookahead == 'L') ADVANCE(257);
      if (lookahead == 'R') ADVANCE(269);
      if (lookahead == 'S') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(254);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(272);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(265);
      if (lookahead == 'C') ADVANCE(262);
      if (lookahead == 'F') ADVANCE(266);
      if (lookahead == 'L') ADVANCE(257);
      if (lookahead == 'R') ADVANCE(269);
      if (lookahead == 'S') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(254);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '\\') ADVANCE(274);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(276);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '(') ADVANCE(198);
      END_STATE();
    case 43:
      if (lookahead == ')') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(387);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(108);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(125);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(97);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(130);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(197);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(104);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(166);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(100);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == '=') ADVANCE(153);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(94);
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(70);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(60);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(75);
      END_STATE();
    case 59:
      if (lookahead == 'C') ADVANCE(58);
      END_STATE();
    case 60:
      if (lookahead == 'C') ADVANCE(91);
      END_STATE();
    case 61:
      if (lookahead == 'D') ADVANCE(209);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(89);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(89);
      if (lookahead == 'O') ADVANCE(59);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(227);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(234);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(85);
      END_STATE();
    case 67:
      if (lookahead == 'F') ADVANCE(57);
      END_STATE();
    case 68:
      if (lookahead == 'G') ADVANCE(204);
      END_STATE();
    case 69:
      if (lookahead == 'G') ADVANCE(204);
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 70:
      if (lookahead == 'G') ADVANCE(65);
      END_STATE();
    case 71:
      if (lookahead == 'I') ADVANCE(74);
      END_STATE();
    case 72:
      if (lookahead == 'I') ADVANCE(67);
      END_STATE();
    case 73:
      if (lookahead == 'I') ADVANCE(82);
      END_STATE();
    case 74:
      if (lookahead == 'L') ADVANCE(61);
      END_STATE();
    case 75:
      if (lookahead == 'L') ADVANCE(233);
      END_STATE();
    case 76:
      if (lookahead == 'M') ADVANCE(56);
      END_STATE();
    case 77:
      if (lookahead == 'M') ADVANCE(210);
      END_STATE();
    case 78:
      if (lookahead == 'N') ADVANCE(223);
      END_STATE();
    case 79:
      if (lookahead == 'N') ADVANCE(215);
      END_STATE();
    case 80:
      if (lookahead == 'O') ADVANCE(83);
      END_STATE();
    case 81:
      if (lookahead == 'O') ADVANCE(77);
      END_STATE();
    case 82:
      if (lookahead == 'O') ADVANCE(79);
      END_STATE();
    case 83:
      if (lookahead == 'P') ADVANCE(95);
      END_STATE();
    case 84:
      if (lookahead == 'R') ADVANCE(69);
      if (lookahead == 'S') ADVANCE(231);
      END_STATE();
    case 85:
      if (lookahead == 'R') ADVANCE(88);
      END_STATE();
    case 86:
      if (lookahead == 'R') ADVANCE(81);
      END_STATE();
    case 87:
      if (lookahead == 'R') ADVANCE(68);
      END_STATE();
    case 88:
      if (lookahead == 'S') ADVANCE(73);
      END_STATE();
    case 89:
      if (lookahead == 'T') ADVANCE(220);
      END_STATE();
    case 90:
      if (lookahead == 'T') ADVANCE(235);
      END_STATE();
    case 91:
      if (lookahead == 'T') ADVANCE(230);
      END_STATE();
    case 92:
      if (lookahead == 'U') ADVANCE(71);
      END_STATE();
    case 93:
      if (lookahead == 'U') ADVANCE(78);
      END_STATE();
    case 94:
      if (lookahead == 'V') ADVANCE(64);
      END_STATE();
    case 95:
      if (lookahead == 'Y') ADVANCE(217);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 103:
      if (lookahead == 'b') ADVANCE(99);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'p') ADVANCE(188);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(408);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(386);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(410);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'm') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(168);
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 125:
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'h') ADVANCE(139);
      END_STATE();
    case 126:
      if (lookahead == 'f') ADVANCE(164);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(177);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(116);
      END_STATE();
    case 129:
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 130:
      if (lookahead == 'g') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 131:
      if (lookahead == 'h') ADVANCE(412);
      END_STATE();
    case 132:
      if (lookahead == 'h') ADVANCE(409);
      END_STATE();
    case 133:
      if (lookahead == 'h') ADVANCE(115);
      END_STATE();
    case 134:
      if (lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 142:
      if (lookahead == 'k') ADVANCE(54);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(399);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(407);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(391);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 165:
      if (lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 167:
      if (lookahead == 'q') ADVANCE(189);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(406);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(403);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(411);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(396);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 191:
      if (lookahead == 'v') ADVANCE(136);
      END_STATE();
    case 192:
      if (lookahead == 'v') ADVANCE(140);
      END_STATE();
    case 193:
      if (lookahead == 'w') ADVANCE(163);
      END_STATE();
    case 194:
      if (lookahead == 'w') ADVANCE(51);
      END_STATE();
    case 195:
      if (lookahead == 'y') ADVANCE(165);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(385);
      END_STATE();
    case 197:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 198:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 199:
      if (eof) ADVANCE(203);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(414);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(418);
      if (lookahead == '(') ADVANCE(383);
      if (lookahead == ')') ADVANCE(384);
      if (lookahead == '+') ADVANCE(381);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'B') ADVANCE(92);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'L') ADVANCE(63);
      if (lookahead == 'R') ADVANCE(93);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'V') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(199)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 200:
      if (eof) ADVANCE(203);
      if (lookahead == ' ') ADVANCE(389);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(384);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '=') ADVANCE(388);
      if (lookahead == 'A') ADVANCE(246);
      if (lookahead == 'F') ADVANCE(247);
      if (lookahead == 'V') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(202)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 201:
      if (eof) ADVANCE(203);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(384);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '/') ADVANCE(382);
      if (lookahead == ':') ADVANCE(251);
      if (lookahead == '=') ADVANCE(208);
      if (lookahead == '@') ADVANCE(252);
      if (lookahead == 'A') ADVANCE(246);
      if (lookahead == 'F') ADVANCE(247);
      if (lookahead == 'V') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(202)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 202:
      if (eof) ADVANCE(203);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(384);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 'A') ADVANCE(246);
      if (lookahead == 'F') ADVANCE(247);
      if (lookahead == 'V') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(202)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_BUILD);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LET);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_RUN);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_SAVE);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_SAVE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_SAVE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_ARTIFACT);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_AS);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_AS);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_LOCAL);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_IMAGE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '\f') ADVANCE(426);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == '#') ADVANCE(255);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == '\f') ADVANCE(430);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(270);
      if (lookahead == 'E') ADVANCE(268);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(267);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'G') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'M') ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(264);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(260);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'P') ADVANCE(271);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(259);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(263);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'U') ADVANCE(261);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'V') ADVANCE(258);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '\f') ADVANCE(426);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == '#') ADVANCE(275);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(276);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == '\f') ADVANCE(430);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_image_digest);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_immediate_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '\f') ADVANCE(426);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(304);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(349);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(320);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(307);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(352);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(312);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(342);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == 'E') ADVANCE(300);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G') ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M') ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(296);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(292);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P') ADVANCE(303);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(291);
      if (lookahead == 'S') ADVANCE(232);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U') ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'V') ADVANCE(290);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead == 'c') ADVANCE(323);
      if (lookahead == 'd') ADVANCE(324);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'k') ADVANCE(314);
      if (lookahead == 'p') ADVANCE(305);
      if (lookahead == 's') ADVANCE(372);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'l') ADVANCE(306);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(313);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(393);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(386);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(285);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(345);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(350);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(347);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'k') ADVANCE(314);
      if (lookahead == 's') ADVANCE(372);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(315);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(360);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(337);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(353);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(366);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'k') ADVANCE(286);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(344);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(330);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(326);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(316);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(346);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(334);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(367);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(394);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(329);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(401);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(348);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(309);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(370);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(356);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(368);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(369);
      if (lookahead == 't') ADVANCE(358);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(335);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(281);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(357);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(395);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(322);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(308);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(325);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(402);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(406);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(363);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(365);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(359);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'v') ADVANCE(328);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(339);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(413);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(341);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(284);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'x') ADVANCE(327);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'y') ADVANCE(338);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(112);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == '\f') ADVANCE(430);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_version_major_minor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_allow_privileged);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_build_arg_token1);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_build_arg_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_build_arg_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcache_DASHfrom);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_cache_hint);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchmod);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_dir);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_entrypoint);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_feature_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_force);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_if_exists);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_keep_own);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_keep_ts);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_DASH_DASHmount);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_network_none);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_no_cache);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_pass_args);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_privileged);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_push);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsecret);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_ssh);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_symlink_no_follow);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '\f') ADVANCE(428);
      if (lookahead == '\r') ADVANCE(415);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(417);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '\f') ADVANCE(427);
      if (lookahead == '\r') ADVANCE(419);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '\f') ADVANCE(426);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '\f') ADVANCE(426);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '\f') ADVANCE(427);
      if (lookahead == '\r') ADVANCE(419);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '\f') ADVANCE(428);
      if (lookahead == '\r') ADVANCE(415);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(415);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == '\f') ADVANCE(430);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == '\f') ADVANCE(439);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '+') ADVANCE(381);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(254);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == '\f') ADVANCE(440);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '+') ADVANCE(381);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == '\f') ADVANCE(441);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == '\f') ADVANCE(442);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_CRn);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(272);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(373);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(377);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == '\f') ADVANCE(439);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '+') ADVANCE(381);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(254);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == '\f') ADVANCE(440);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '+') ADVANCE(381);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == '\f') ADVANCE(441);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == '\f') ADVANCE(442);
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
  [1] = {.lex_state = 201},
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 33},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 38, .external_lex_state = 2},
  [11] = {.lex_state = 38, .external_lex_state = 2},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 33},
  [17] = {.lex_state = 38, .external_lex_state = 2},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 22},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 22},
  [27] = {.lex_state = 25, .external_lex_state = 2},
  [28] = {.lex_state = 25, .external_lex_state = 2},
  [29] = {.lex_state = 38, .external_lex_state = 2},
  [30] = {.lex_state = 38, .external_lex_state = 2},
  [31] = {.lex_state = 38, .external_lex_state = 2},
  [32] = {.lex_state = 38, .external_lex_state = 2},
  [33] = {.lex_state = 38, .external_lex_state = 2},
  [34] = {.lex_state = 38, .external_lex_state = 2},
  [35] = {.lex_state = 38, .external_lex_state = 2},
  [36] = {.lex_state = 25, .external_lex_state = 2},
  [37] = {.lex_state = 38, .external_lex_state = 2},
  [38] = {.lex_state = 25, .external_lex_state = 2},
  [39] = {.lex_state = 25, .external_lex_state = 2},
  [40] = {.lex_state = 36, .external_lex_state = 2},
  [41] = {.lex_state = 36, .external_lex_state = 2},
  [42] = {.lex_state = 201},
  [43] = {.lex_state = 25, .external_lex_state = 2},
  [44] = {.lex_state = 20, .external_lex_state = 2},
  [45] = {.lex_state = 201},
  [46] = {.lex_state = 38, .external_lex_state = 2},
  [47] = {.lex_state = 25, .external_lex_state = 2},
  [48] = {.lex_state = 25, .external_lex_state = 2},
  [49] = {.lex_state = 38, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 25, .external_lex_state = 2},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 201},
  [54] = {.lex_state = 0, .external_lex_state = 2},
  [55] = {.lex_state = 38, .external_lex_state = 2},
  [56] = {.lex_state = 25, .external_lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 2},
  [58] = {.lex_state = 0, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 201},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 0, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 200},
  [67] = {.lex_state = 201},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 201},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 201},
  [84] = {.lex_state = 201},
  [85] = {.lex_state = 34},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 201},
  [88] = {.lex_state = 35},
  [89] = {.lex_state = 33},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 35},
  [92] = {.lex_state = 35},
  [93] = {.lex_state = 24},
  [94] = {.lex_state = 201},
  [95] = {.lex_state = 34},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 34},
  [98] = {.lex_state = 33},
  [99] = {.lex_state = 201},
  [100] = {.lex_state = 201},
  [101] = {.lex_state = 24},
  [102] = {.lex_state = 24},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 24},
  [105] = {.lex_state = 24},
  [106] = {.lex_state = 24},
  [107] = {.lex_state = 24},
  [108] = {.lex_state = 24},
  [109] = {.lex_state = 24},
  [110] = {.lex_state = 33},
  [111] = {.lex_state = 24},
  [112] = {.lex_state = 35},
  [113] = {.lex_state = 24},
  [114] = {.lex_state = 201, .external_lex_state = 3},
  [115] = {.lex_state = 24},
  [116] = {.lex_state = 24},
  [117] = {.lex_state = 201},
  [118] = {.lex_state = 24},
  [119] = {.lex_state = 201},
  [120] = {.lex_state = 13},
  [121] = {.lex_state = 201},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 201},
  [124] = {.lex_state = 201},
  [125] = {.lex_state = 201},
  [126] = {.lex_state = 13},
  [127] = {.lex_state = 201},
  [128] = {.lex_state = 201},
  [129] = {.lex_state = 201},
  [130] = {.lex_state = 201},
  [131] = {.lex_state = 30},
  [132] = {.lex_state = 201},
  [133] = {.lex_state = 201},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 201},
  [136] = {.lex_state = 201},
  [137] = {.lex_state = 30},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 33},
  [140] = {.lex_state = 27},
  [141] = {.lex_state = 27},
  [142] = {.lex_state = 13},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 201},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 27},
  [147] = {.lex_state = 13},
  [148] = {.lex_state = 13},
  [149] = {.lex_state = 13},
  [150] = {.lex_state = 27},
  [151] = {.lex_state = 13},
  [152] = {.lex_state = 201},
  [153] = {.lex_state = 13},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 13},
  [156] = {.lex_state = 27},
  [157] = {.lex_state = 13},
  [158] = {.lex_state = 13},
  [159] = {.lex_state = 13},
  [160] = {.lex_state = 13},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 13},
  [163] = {.lex_state = 34},
  [164] = {.lex_state = 13},
  [165] = {.lex_state = 13},
  [166] = {.lex_state = 34},
  [167] = {.lex_state = 29},
  [168] = {.lex_state = 27},
  [169] = {.lex_state = 29},
  [170] = {.lex_state = 34},
  [171] = {.lex_state = 34},
  [172] = {.lex_state = 29},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 40},
  [177] = {.lex_state = 21},
  [178] = {.lex_state = 37},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 27},
  [181] = {.lex_state = 27},
  [182] = {.lex_state = 37},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 37},
  [185] = {.lex_state = 37},
  [186] = {.lex_state = 21},
  [187] = {.lex_state = 21},
  [188] = {.lex_state = 11},
  [189] = {.lex_state = 12},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 201},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 27},
  [196] = {.lex_state = 29},
  [197] = {.lex_state = 32},
  [198] = {.lex_state = 40},
  [199] = {.lex_state = 37},
  [200] = {.lex_state = 21},
  [201] = {.lex_state = 21},
  [202] = {.lex_state = 201},
  [203] = {.lex_state = 29},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 37},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 32},
  [208] = {.lex_state = 29},
  [209] = {.lex_state = 32},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 32},
  [213] = {.lex_state = 29},
  [214] = {.lex_state = 40},
  [215] = {.lex_state = 32},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 32},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 21},
  [226] = {.lex_state = 12},
  [227] = {.lex_state = 11},
  [228] = {.lex_state = 12},
  [229] = {.lex_state = 11},
  [230] = {.lex_state = 12},
  [231] = {.lex_state = 11},
  [232] = {.lex_state = 12},
  [233] = {.lex_state = 11},
  [234] = {.lex_state = 12},
  [235] = {.lex_state = 11},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ARG] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BUILD] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
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
    [anon_sym_SLASH] = ACTIONS(1),
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
    [sym_source_file] = STATE(194),
    [sym_arg_command] = STATE(45),
    [sym_from_command] = STATE(45),
    [sym_target] = STATE(45),
    [sym_version_command] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_ARG] = ACTIONS(9),
    [anon_sym_FROM] = ACTIONS(11),
    [anon_sym_VERSION] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym_path,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(27), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(29), 1,
      anon_sym_DASH_DASHplatform,
    STATE(3), 1,
      aux_sym_copy_command_repeat1,
    STATE(85), 1,
      aux_sym_copy_command_repeat2,
    STATE(190), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(170), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(20), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(23), 7,
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
    ACTIONS(17), 1,
      sym_path,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(27), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(29), 1,
      anon_sym_DASH_DASHplatform,
    STATE(7), 1,
      aux_sym_copy_command_repeat1,
    STATE(95), 1,
      aux_sym_copy_command_repeat2,
    STATE(190), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(170), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(20), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(23), 7,
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
    ACTIONS(31), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(39), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(41), 1,
      anon_sym_DASH_DASHsecret,
    STATE(12), 1,
      aux_sym_run_command_repeat1,
    STATE(90), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(154), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(33), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(26), 2,
      sym_mount,
      sym_secret,
    ACTIONS(37), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [151] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(43), 1,
      anon_sym_ARG,
    ACTIONS(45), 1,
      anon_sym_FROM,
    ACTIONS(47), 1,
      anon_sym_COPY,
    ACTIONS(49), 1,
      anon_sym_LET,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SAVE,
    ACTIONS(55), 1,
      anon_sym_SET,
    ACTIONS(57), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(9), 9,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      aux_sym_target_repeat1,
  [194] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(43), 1,
      anon_sym_ARG,
    ACTIONS(45), 1,
      anon_sym_FROM,
    ACTIONS(47), 1,
      anon_sym_COPY,
    ACTIONS(49), 1,
      anon_sym_LET,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SAVE,
    ACTIONS(55), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(5), 9,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      aux_sym_target_repeat1,
  [237] = 10,
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
    STATE(7), 1,
      aux_sym_copy_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    STATE(20), 3,
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
  [278] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(35), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(39), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(41), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(77), 1,
      anon_sym_DASH_DASH,
    STATE(4), 1,
      aux_sym_run_command_repeat1,
    STATE(90), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(142), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(33), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(26), 2,
      sym_mount,
      sym_secret,
    ACTIONS(37), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [323] = 11,
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
    STATE(9), 9,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      aux_sym_target_repeat1,
  [366] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(104), 1,
      sym_image_name,
    ACTIONS(106), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(108), 1,
      sym_cache_hint,
    ACTIONS(110), 1,
      sym_push,
    ACTIONS(112), 1,
      sym__dedent,
    STATE(11), 1,
      aux_sym_save_image_command_repeat1,
    STATE(30), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(29), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(102), 7,
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
    ACTIONS(104), 1,
      sym_image_name,
    ACTIONS(106), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(110), 1,
      sym_push,
    ACTIONS(116), 1,
      sym__dedent,
    STATE(17), 1,
      aux_sym_save_image_command_repeat1,
    STATE(30), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(114), 7,
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
    ACTIONS(125), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(128), 1,
      anon_sym_DASH_DASHsecret,
    STATE(12), 1,
      aux_sym_run_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(118), 2,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
    ACTIONS(120), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(26), 2,
      sym_mount,
      sym_secret,
    ACTIONS(122), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [484] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(131), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(133), 12,
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
  [509] = 10,
    ACTIONS(135), 1,
      sym_image_name,
    ACTIONS(137), 1,
      anon_sym_PLUS,
    ACTIONS(141), 1,
      anon_sym_DASH_DASHplatform,
    STATE(36), 1,
      sym_target_ref,
    STATE(89), 1,
      aux_sym_from_command_repeat1,
    STATE(139), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(139), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(76), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(143), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [546] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(145), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(147), 12,
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
  [571] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(149), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(151), 12,
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
  [596] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(155), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(158), 1,
      sym_push,
    ACTIONS(161), 1,
      sym__dedent,
    STATE(17), 1,
      aux_sym_save_image_command_repeat1,
    STATE(30), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(153), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [629] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(163), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(165), 12,
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
  [654] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(167), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(169), 12,
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
  [679] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(171), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(173), 12,
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
  [704] = 10,
    ACTIONS(141), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(175), 1,
      sym_image_name,
    ACTIONS(177), 1,
      anon_sym_PLUS,
    STATE(72), 1,
      sym_target_ref,
    STATE(98), 1,
      aux_sym_from_command_repeat1,
    STATE(139), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(139), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(119), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(179), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [741] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(183), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(181), 10,
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
  [765] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(187), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(185), 10,
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
  [789] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(163), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(165), 10,
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
  [813] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(131), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(133), 10,
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
  [837] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(191), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(189), 10,
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
  [861] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(195), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(28), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(193), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [886] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(199), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(28), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(197), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [911] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(104), 1,
      sym_image_name,
    ACTIONS(204), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(32), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(202), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [938] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(208), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(206), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [961] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(104), 1,
      sym_image_name,
    ACTIONS(212), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(32), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(210), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [988] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(216), 1,
      sym_image_name,
    ACTIONS(219), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(32), 2,
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
  [1015] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(223), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(221), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1038] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(133), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(131), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1061] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(165), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(163), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1084] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(195), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(39), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(225), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1109] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(229), 1,
      anon_sym_COLON2,
    ACTIONS(231), 1,
      anon_sym_AT,
    ACTIONS(233), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(227), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1136] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(195), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(27), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(235), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1161] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(195), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(28), 2,
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
  [1186] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(241), 1,
      anon_sym_AS,
    ACTIONS(243), 1,
      sym_path,
    ACTIONS(245), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(239), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1212] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(249), 1,
      anon_sym_AS,
    ACTIONS(251), 1,
      sym_path,
    ACTIONS(253), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(247), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1238] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    ACTIONS(257), 1,
      anon_sym_ARG,
    ACTIONS(260), 1,
      anon_sym_FROM,
    ACTIONS(263), 1,
      anon_sym_VERSION,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(42), 5,
      sym_arg_command,
      sym_from_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [1268] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(269), 1,
      anon_sym_COLON2,
    ACTIONS(271), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(233), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1292] = 4,
    ACTIONS(275), 1,
      aux_sym_build_arg_token1,
    ACTIONS(277), 1,
      sym__dedent,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(273), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_DASH_DASH2,
  [1314] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(9), 1,
      anon_sym_ARG,
    ACTIONS(11), 1,
      anon_sym_FROM,
    ACTIONS(13), 1,
      anon_sym_VERSION,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(42), 5,
      sym_arg_command,
      sym_from_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [1344] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(281), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1368] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(287), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_DASH_DASH2,
  [1387] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(289), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_DASH_DASH2,
  [1406] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(293), 1,
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
  [1427] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(297), 1,
      anon_sym_AS,
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
  [1448] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(133), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_DASH_DASH2,
  [1467] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(301), 1,
      anon_sym_AS,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(299), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1488] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(305), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(53), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(303), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1513] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(308), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(285), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1534] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(312), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(310), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1555] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(165), 9,
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
    ACTIONS(314), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1592] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(312), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1610] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(316), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1628] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(67), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(318), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1652] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(293), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1670] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(322), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1688] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(324), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1706] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(326), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1724] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(328), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1742] = 4,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(273), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
  [1762] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(53), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(332), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1786] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(334), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1804] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(336), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1822] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(338), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1840] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(340), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1858] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(83), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(342), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1882] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(344), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1900] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(346), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1918] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(348), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1936] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(225), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1954] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(350), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1972] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(352), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1990] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(354), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2008] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(356), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2026] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(358), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2044] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(360), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2062] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(53), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(362), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2086] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(289), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(364), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2105] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_path,
    STATE(97), 1,
      aux_sym_copy_command_repeat2,
    STATE(190), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(170), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [2132] = 4,
    STATE(77), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(368), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(370), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2151] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(165), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(163), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2170] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(372), 1,
      sym_path,
    STATE(92), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(374), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [2191] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(29), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(376), 1,
      anon_sym_PLUS,
    STATE(38), 1,
      sym_target_ref,
    STATE(110), 1,
      aux_sym_from_command_repeat1,
    STATE(139), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(378), 2,
      sym_allow_privileged,
      sym_pass_args,
  [2218] = 4,
    STATE(103), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(380), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(382), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2237] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(384), 1,
      sym_path,
    STATE(88), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(374), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [2258] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(386), 1,
      sym_path,
    STATE(92), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(388), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [2279] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(391), 1,
      sym_expr,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(397), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(149), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2304] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(287), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_DASH_DASH2,
    ACTIONS(399), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2323] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      sym_path,
    STATE(97), 1,
      aux_sym_copy_command_repeat2,
    STATE(190), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(170), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [2350] = 4,
    STATE(59), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(368), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(403), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2369] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(405), 1,
      sym_path,
    ACTIONS(408), 1,
      anon_sym_PLUS,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      aux_sym_copy_command_repeat2,
    STATE(190), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(170), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [2396] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASHplatform,
    STATE(60), 1,
      sym_target_ref,
    STATE(110), 1,
      aux_sym_from_command_repeat1,
    STATE(139), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(378), 2,
      sym_allow_privileged,
      sym_pass_args,
  [2423] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(133), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(131), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2442] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    ACTIONS(414), 1,
      anon_sym_COLON2,
    ACTIONS(416), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(227), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2465] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(418), 1,
      sym_expr,
    ACTIONS(420), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(160), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2490] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(422), 1,
      sym_expr,
    ACTIONS(424), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(147), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2515] = 4,
    STATE(103), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(426), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(429), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2534] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(431), 1,
      sym_expr,
    ACTIONS(433), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(158), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2559] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(435), 1,
      anon_sym_DQUOTE,
    ACTIONS(437), 1,
      anon_sym_SQUOTE,
    ACTIONS(439), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(84), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2581] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(441), 1,
      anon_sym_DQUOTE,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    ACTIONS(445), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(33), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2603] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(15), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2625] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(453), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(16), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2647] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(455), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(161), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2669] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(457), 1,
      anon_sym_PLUS,
    ACTIONS(462), 1,
      anon_sym_DASH_DASHplatform,
    STATE(110), 1,
      aux_sym_from_command_repeat1,
    STATE(139), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(459), 2,
      sym_allow_privileged,
      sym_pass_args,
  [2693] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(465), 1,
      anon_sym_DQUOTE,
    ACTIONS(467), 1,
      anon_sym_SQUOTE,
    ACTIONS(469), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(22), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2715] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(471), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(473), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [2733] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(465), 1,
      anon_sym_DQUOTE,
    ACTIONS(467), 1,
      anon_sym_SQUOTE,
    ACTIONS(475), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(23), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2755] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    ACTIONS(481), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(479), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2775] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
    ACTIONS(483), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(19), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2797] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(143), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2819] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(487), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(281), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2839] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(489), 1,
      anon_sym_DQUOTE,
    ACTIONS(491), 1,
      anon_sym_SQUOTE,
    ACTIONS(493), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(48), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2861] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(342), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2878] = 4,
    ACTIONS(495), 1,
      anon_sym_EQ,
    STATE(74), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(497), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2895] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(499), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(501), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2912] = 4,
    ACTIONS(503), 1,
      anon_sym_EQ,
    STATE(71), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(505), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2929] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(507), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2946] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(509), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2963] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(291), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2980] = 4,
    ACTIONS(511), 1,
      anon_sym_EQ,
    STATE(132), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(513), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2997] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(515), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [3014] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(517), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(519), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [3031] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(310), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [3048] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(521), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [3065] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(33), 1,
      aux_sym_shell_fragment_token3,
    STATE(90), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(153), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(35), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [3086] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(523), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [3103] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(525), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(527), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [3120] = 4,
    ACTIONS(529), 1,
      anon_sym_EQ,
    STATE(130), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(531), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3137] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(533), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [3154] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(535), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(537), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [3171] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(33), 1,
      aux_sym_shell_fragment_token3,
    STATE(90), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(157), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(35), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [3192] = 3,
    STATE(128), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(539), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3206] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(541), 4,
      anon_sym_PLUS,
      sym_allow_privileged,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
  [3220] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(543), 1,
      sym_identifier,
    STATE(146), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(545), 2,
      sym_global,
      sym_required,
  [3238] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(547), 1,
      sym_identifier,
    STATE(146), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(545), 2,
      sym_global,
      sym_required,
  [3256] = 3,
    STATE(64), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(549), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3270] = 3,
    STATE(82), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(551), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3284] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(320), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(152), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [3302] = 3,
    STATE(123), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(555), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3316] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(557), 1,
      sym_identifier,
    STATE(146), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(559), 2,
      sym_global,
      sym_required,
  [3334] = 3,
    STATE(124), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(562), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3348] = 3,
    STATE(127), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(564), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3362] = 3,
    STATE(135), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(566), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3376] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(568), 1,
      sym_identifier,
    STATE(140), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(545), 2,
      sym_global,
      sym_required,
  [3394] = 3,
    STATE(65), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(570), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3408] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(320), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(53), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [3426] = 3,
    STATE(70), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(574), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3440] = 3,
    STATE(75), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(576), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3454] = 3,
    STATE(114), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(578), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3468] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(141), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(545), 2,
      sym_global,
      sym_required,
  [3486] = 3,
    STATE(62), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(582), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3500] = 3,
    STATE(68), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(584), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3514] = 3,
    STATE(69), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(586), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3528] = 3,
    STATE(63), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(588), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3542] = 3,
    STATE(80), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(590), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3556] = 3,
    STATE(133), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(592), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3570] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(594), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(596), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3585] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(131), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3596] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(163), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3607] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(598), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(600), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3622] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(602), 1,
      sym_version_major_minor,
    ACTIONS(604), 1,
      sym_feature_flag,
    STATE(172), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3639] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(606), 3,
      sym_identifier,
      sym_global,
      sym_required,
  [3652] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(608), 1,
      sym_version_major_minor,
    ACTIONS(610), 1,
      sym_feature_flag,
    STATE(167), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3669] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(368), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(612), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3684] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(614), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(616), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3699] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(618), 1,
      sym_version_major_minor,
    ACTIONS(620), 1,
      sym_feature_flag,
    STATE(172), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3716] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(623), 1,
      anon_sym_ARTIFACT,
    ACTIONS(625), 1,
      anon_sym_IMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3730] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    STATE(204), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3744] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(627), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3755] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(629), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3766] = 2,
    ACTIONS(631), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3775] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(633), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3786] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(635), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3797] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(637), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3808] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(639), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3819] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(641), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3830] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(643), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3841] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(645), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3852] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(647), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3863] = 2,
    ACTIONS(649), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3872] = 2,
    ACTIONS(651), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3881] = 2,
    ACTIONS(653), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3890] = 2,
    ACTIONS(655), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3899] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(657), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3910] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(659), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3921] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(661), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3932] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(663), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3943] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(665), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3954] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(667), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3965] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(669), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3976] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(671), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3987] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(673), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3998] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(675), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4009] = 2,
    ACTIONS(677), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4018] = 2,
    ACTIONS(679), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4027] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(681), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4038] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(683), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4049] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(685), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4060] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(687), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4071] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(689), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4082] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(691), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4093] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(693), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4104] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(695), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4115] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(697), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4126] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(699), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4137] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(701), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4148] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(703), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4159] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(705), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4170] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(707), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4181] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(709), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4192] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(711), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4203] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(713), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4214] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(715), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4225] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(717), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4236] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(719), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4247] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(721), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4258] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(723), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4269] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(725), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4280] = 2,
    ACTIONS(727), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4289] = 2,
    ACTIONS(729), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4298] = 2,
    ACTIONS(731), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4307] = 2,
    ACTIONS(733), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4316] = 2,
    ACTIONS(735), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4325] = 2,
    ACTIONS(737), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4334] = 2,
    ACTIONS(739), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4343] = 2,
    ACTIONS(741), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4352] = 2,
    ACTIONS(743), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4361] = 2,
    ACTIONS(745), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4370] = 2,
    ACTIONS(747), 1,
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
  [SMALL_STATE(7)] = 237,
  [SMALL_STATE(8)] = 278,
  [SMALL_STATE(9)] = 323,
  [SMALL_STATE(10)] = 366,
  [SMALL_STATE(11)] = 408,
  [SMALL_STATE(12)] = 447,
  [SMALL_STATE(13)] = 484,
  [SMALL_STATE(14)] = 509,
  [SMALL_STATE(15)] = 546,
  [SMALL_STATE(16)] = 571,
  [SMALL_STATE(17)] = 596,
  [SMALL_STATE(18)] = 629,
  [SMALL_STATE(19)] = 654,
  [SMALL_STATE(20)] = 679,
  [SMALL_STATE(21)] = 704,
  [SMALL_STATE(22)] = 741,
  [SMALL_STATE(23)] = 765,
  [SMALL_STATE(24)] = 789,
  [SMALL_STATE(25)] = 813,
  [SMALL_STATE(26)] = 837,
  [SMALL_STATE(27)] = 861,
  [SMALL_STATE(28)] = 886,
  [SMALL_STATE(29)] = 911,
  [SMALL_STATE(30)] = 938,
  [SMALL_STATE(31)] = 961,
  [SMALL_STATE(32)] = 988,
  [SMALL_STATE(33)] = 1015,
  [SMALL_STATE(34)] = 1038,
  [SMALL_STATE(35)] = 1061,
  [SMALL_STATE(36)] = 1084,
  [SMALL_STATE(37)] = 1109,
  [SMALL_STATE(38)] = 1136,
  [SMALL_STATE(39)] = 1161,
  [SMALL_STATE(40)] = 1186,
  [SMALL_STATE(41)] = 1212,
  [SMALL_STATE(42)] = 1238,
  [SMALL_STATE(43)] = 1268,
  [SMALL_STATE(44)] = 1292,
  [SMALL_STATE(45)] = 1314,
  [SMALL_STATE(46)] = 1344,
  [SMALL_STATE(47)] = 1368,
  [SMALL_STATE(48)] = 1387,
  [SMALL_STATE(49)] = 1406,
  [SMALL_STATE(50)] = 1427,
  [SMALL_STATE(51)] = 1448,
  [SMALL_STATE(52)] = 1467,
  [SMALL_STATE(53)] = 1488,
  [SMALL_STATE(54)] = 1513,
  [SMALL_STATE(55)] = 1534,
  [SMALL_STATE(56)] = 1555,
  [SMALL_STATE(57)] = 1574,
  [SMALL_STATE(58)] = 1592,
  [SMALL_STATE(59)] = 1610,
  [SMALL_STATE(60)] = 1628,
  [SMALL_STATE(61)] = 1652,
  [SMALL_STATE(62)] = 1670,
  [SMALL_STATE(63)] = 1688,
  [SMALL_STATE(64)] = 1706,
  [SMALL_STATE(65)] = 1724,
  [SMALL_STATE(66)] = 1742,
  [SMALL_STATE(67)] = 1762,
  [SMALL_STATE(68)] = 1786,
  [SMALL_STATE(69)] = 1804,
  [SMALL_STATE(70)] = 1822,
  [SMALL_STATE(71)] = 1840,
  [SMALL_STATE(72)] = 1858,
  [SMALL_STATE(73)] = 1882,
  [SMALL_STATE(74)] = 1900,
  [SMALL_STATE(75)] = 1918,
  [SMALL_STATE(76)] = 1936,
  [SMALL_STATE(77)] = 1954,
  [SMALL_STATE(78)] = 1972,
  [SMALL_STATE(79)] = 1990,
  [SMALL_STATE(80)] = 2008,
  [SMALL_STATE(81)] = 2026,
  [SMALL_STATE(82)] = 2044,
  [SMALL_STATE(83)] = 2062,
  [SMALL_STATE(84)] = 2086,
  [SMALL_STATE(85)] = 2105,
  [SMALL_STATE(86)] = 2132,
  [SMALL_STATE(87)] = 2151,
  [SMALL_STATE(88)] = 2170,
  [SMALL_STATE(89)] = 2191,
  [SMALL_STATE(90)] = 2218,
  [SMALL_STATE(91)] = 2237,
  [SMALL_STATE(92)] = 2258,
  [SMALL_STATE(93)] = 2279,
  [SMALL_STATE(94)] = 2304,
  [SMALL_STATE(95)] = 2323,
  [SMALL_STATE(96)] = 2350,
  [SMALL_STATE(97)] = 2369,
  [SMALL_STATE(98)] = 2396,
  [SMALL_STATE(99)] = 2423,
  [SMALL_STATE(100)] = 2442,
  [SMALL_STATE(101)] = 2465,
  [SMALL_STATE(102)] = 2490,
  [SMALL_STATE(103)] = 2515,
  [SMALL_STATE(104)] = 2534,
  [SMALL_STATE(105)] = 2559,
  [SMALL_STATE(106)] = 2581,
  [SMALL_STATE(107)] = 2603,
  [SMALL_STATE(108)] = 2625,
  [SMALL_STATE(109)] = 2647,
  [SMALL_STATE(110)] = 2669,
  [SMALL_STATE(111)] = 2693,
  [SMALL_STATE(112)] = 2715,
  [SMALL_STATE(113)] = 2733,
  [SMALL_STATE(114)] = 2755,
  [SMALL_STATE(115)] = 2775,
  [SMALL_STATE(116)] = 2797,
  [SMALL_STATE(117)] = 2819,
  [SMALL_STATE(118)] = 2839,
  [SMALL_STATE(119)] = 2861,
  [SMALL_STATE(120)] = 2878,
  [SMALL_STATE(121)] = 2895,
  [SMALL_STATE(122)] = 2912,
  [SMALL_STATE(123)] = 2929,
  [SMALL_STATE(124)] = 2946,
  [SMALL_STATE(125)] = 2963,
  [SMALL_STATE(126)] = 2980,
  [SMALL_STATE(127)] = 2997,
  [SMALL_STATE(128)] = 3014,
  [SMALL_STATE(129)] = 3031,
  [SMALL_STATE(130)] = 3048,
  [SMALL_STATE(131)] = 3065,
  [SMALL_STATE(132)] = 3086,
  [SMALL_STATE(133)] = 3103,
  [SMALL_STATE(134)] = 3120,
  [SMALL_STATE(135)] = 3137,
  [SMALL_STATE(136)] = 3154,
  [SMALL_STATE(137)] = 3171,
  [SMALL_STATE(138)] = 3192,
  [SMALL_STATE(139)] = 3206,
  [SMALL_STATE(140)] = 3220,
  [SMALL_STATE(141)] = 3238,
  [SMALL_STATE(142)] = 3256,
  [SMALL_STATE(143)] = 3270,
  [SMALL_STATE(144)] = 3284,
  [SMALL_STATE(145)] = 3302,
  [SMALL_STATE(146)] = 3316,
  [SMALL_STATE(147)] = 3334,
  [SMALL_STATE(148)] = 3348,
  [SMALL_STATE(149)] = 3362,
  [SMALL_STATE(150)] = 3376,
  [SMALL_STATE(151)] = 3394,
  [SMALL_STATE(152)] = 3408,
  [SMALL_STATE(153)] = 3426,
  [SMALL_STATE(154)] = 3440,
  [SMALL_STATE(155)] = 3454,
  [SMALL_STATE(156)] = 3468,
  [SMALL_STATE(157)] = 3486,
  [SMALL_STATE(158)] = 3500,
  [SMALL_STATE(159)] = 3514,
  [SMALL_STATE(160)] = 3528,
  [SMALL_STATE(161)] = 3542,
  [SMALL_STATE(162)] = 3556,
  [SMALL_STATE(163)] = 3570,
  [SMALL_STATE(164)] = 3585,
  [SMALL_STATE(165)] = 3596,
  [SMALL_STATE(166)] = 3607,
  [SMALL_STATE(167)] = 3622,
  [SMALL_STATE(168)] = 3639,
  [SMALL_STATE(169)] = 3652,
  [SMALL_STATE(170)] = 3669,
  [SMALL_STATE(171)] = 3684,
  [SMALL_STATE(172)] = 3699,
  [SMALL_STATE(173)] = 3716,
  [SMALL_STATE(174)] = 3730,
  [SMALL_STATE(175)] = 3744,
  [SMALL_STATE(176)] = 3755,
  [SMALL_STATE(177)] = 3766,
  [SMALL_STATE(178)] = 3775,
  [SMALL_STATE(179)] = 3786,
  [SMALL_STATE(180)] = 3797,
  [SMALL_STATE(181)] = 3808,
  [SMALL_STATE(182)] = 3819,
  [SMALL_STATE(183)] = 3830,
  [SMALL_STATE(184)] = 3841,
  [SMALL_STATE(185)] = 3852,
  [SMALL_STATE(186)] = 3863,
  [SMALL_STATE(187)] = 3872,
  [SMALL_STATE(188)] = 3881,
  [SMALL_STATE(189)] = 3890,
  [SMALL_STATE(190)] = 3899,
  [SMALL_STATE(191)] = 3910,
  [SMALL_STATE(192)] = 3921,
  [SMALL_STATE(193)] = 3932,
  [SMALL_STATE(194)] = 3943,
  [SMALL_STATE(195)] = 3954,
  [SMALL_STATE(196)] = 3965,
  [SMALL_STATE(197)] = 3976,
  [SMALL_STATE(198)] = 3987,
  [SMALL_STATE(199)] = 3998,
  [SMALL_STATE(200)] = 4009,
  [SMALL_STATE(201)] = 4018,
  [SMALL_STATE(202)] = 4027,
  [SMALL_STATE(203)] = 4038,
  [SMALL_STATE(204)] = 4049,
  [SMALL_STATE(205)] = 4060,
  [SMALL_STATE(206)] = 4071,
  [SMALL_STATE(207)] = 4082,
  [SMALL_STATE(208)] = 4093,
  [SMALL_STATE(209)] = 4104,
  [SMALL_STATE(210)] = 4115,
  [SMALL_STATE(211)] = 4126,
  [SMALL_STATE(212)] = 4137,
  [SMALL_STATE(213)] = 4148,
  [SMALL_STATE(214)] = 4159,
  [SMALL_STATE(215)] = 4170,
  [SMALL_STATE(216)] = 4181,
  [SMALL_STATE(217)] = 4192,
  [SMALL_STATE(218)] = 4203,
  [SMALL_STATE(219)] = 4214,
  [SMALL_STATE(220)] = 4225,
  [SMALL_STATE(221)] = 4236,
  [SMALL_STATE(222)] = 4247,
  [SMALL_STATE(223)] = 4258,
  [SMALL_STATE(224)] = 4269,
  [SMALL_STATE(225)] = 4280,
  [SMALL_STATE(226)] = 4289,
  [SMALL_STATE(227)] = 4298,
  [SMALL_STATE(228)] = 4307,
  [SMALL_STATE(229)] = 4316,
  [SMALL_STATE(230)] = 4325,
  [SMALL_STATE(231)] = 4334,
  [SMALL_STATE(232)] = 4343,
  [SMALL_STATE(233)] = 4352,
  [SMALL_STATE(234)] = 4361,
  [SMALL_STATE(235)] = 4370,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(20),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(186),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(187),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(177),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(150),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(14),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(180),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(8),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(173),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(181),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 3, .production_id = 23),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3, .production_id = 23),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(26),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(200),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(201),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chown, 3, .production_id = 10),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chown, 3, .production_id = 10),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(225),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(30),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_platform, 3, .production_id = 10),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_platform, 3, .production_id = 10),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount, 3, .production_id = 10),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount, 3, .production_id = 10),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_secret, 3, .production_id = 10),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_secret, 3, .production_id = 10),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(208),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 4, .production_id = 23),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 4, .production_id = 23),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(37),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 21),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 21),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 28),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 28),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 4, .production_id = 17),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 5, .production_id = 16),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 5, .production_id = 16),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 27),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 31),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(196),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 6, .production_id = 32),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 4, .production_id = 24),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 25),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 3, .production_id = 20),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 14),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 5, .production_id = 30),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3, .production_id = 22),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 26),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 5, .production_id = 29),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 8, .production_id = 35),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 7, .production_id = 34),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_command, 5, .production_id = 17),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 7, .production_id = 33),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_command, 5, .production_id = 17),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 4, .production_id = 17),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 18),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(112),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 19), SHIFT_REPEAT(170),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 19), SHIFT_REPEAT(213),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 19), SHIFT_REPEAT(174),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(103),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(139),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(177),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 2),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 3, .production_id = 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 2),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 5, .production_id = 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 14),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6, .production_id = 2),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 6, .production_id = 2),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 1, .production_id = 1),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(168),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 6),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 6),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact, 3),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact, 3),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 1, .production_id = 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 18),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 5),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 5),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2), SHIFT_REPEAT(172),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [665] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
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
