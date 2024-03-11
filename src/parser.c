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
#define STATE_COUNT 255
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 121
#define ALIAS_COUNT 0
#define TOKEN_COUNT 77
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 39

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
  anon_sym_GIT = 10,
  anon_sym_CLONE = 11,
  anon_sym_LET = 12,
  anon_sym_RUN = 13,
  anon_sym_DASH_DASH = 14,
  anon_sym_SAVE = 15,
  anon_sym_ARTIFACT = 16,
  anon_sym_AS = 17,
  anon_sym_LOCAL = 18,
  anon_sym_IMAGE = 19,
  anon_sym_SET = 20,
  sym_expr = 21,
  sym_identifier = 22,
  anon_sym_COLON2 = 23,
  anon_sym_AT = 24,
  sym_image_name = 25,
  sym_image_tag = 26,
  sym_image_digest = 27,
  sym_immediate_identifier = 28,
  sym_path = 29,
  aux_sym_shell_fragment_token1 = 30,
  aux_sym_shell_fragment_token2 = 31,
  aux_sym_shell_fragment_token3 = 32,
  anon_sym_PLUS = 33,
  anon_sym_LPAREN = 34,
  anon_sym_RPAREN = 35,
  sym_version_major_minor = 36,
  sym_allow_privileged = 37,
  anon_sym_DASH_DASHbranch = 38,
  aux_sym_branch_token1 = 39,
  anon_sym_DASH_DASH2 = 40,
  anon_sym_DASH_DASHcache_DASHfrom = 41,
  sym_cache_hint = 42,
  anon_sym_DASH_DASHchmod = 43,
  anon_sym_DASH_DASHchown = 44,
  sym_dir = 45,
  sym_entrypoint = 46,
  sym_feature_flag = 47,
  sym_force = 48,
  sym_global = 49,
  sym_if_exists = 50,
  sym_keep_own = 51,
  sym_keep_ts = 52,
  anon_sym_DASH_DASHmount = 53,
  sym_network_none = 54,
  sym_no_cache = 55,
  sym_pass_args = 56,
  anon_sym_DASH_DASHplatform = 57,
  sym_privileged = 58,
  sym_push = 59,
  sym_required = 60,
  anon_sym_DASH_DASHsecret = 61,
  sym_ssh = 62,
  sym_symlink_no_follow = 63,
  anon_sym_DQUOTE = 64,
  aux_sym_double_quoted_string_token1 = 65,
  anon_sym_SQUOTE = 66,
  aux_sym_single_quoted_string_token1 = 67,
  sym_unquoted_string = 68,
  sym_line_continuation = 69,
  sym_comment = 70,
  sym_line_continuation_comment = 71,
  anon_sym_LF = 72,
  anon_sym_CRn = 73,
  anon_sym_FF = 74,
  sym__indent = 75,
  sym__dedent = 76,
  sym_source_file = 77,
  sym_arg_command = 78,
  sym_from_command = 79,
  sym_project_command = 80,
  sym_target = 81,
  sym_version_command = 82,
  sym_copy_command = 83,
  sym_git_clone_command = 84,
  sym_let_command = 85,
  sym_run_command = 86,
  sym_save_artifact_command = 87,
  sym_save_image_command = 88,
  sym_set_command = 89,
  sym_image_spec = 90,
  sym_shell_fragment = 91,
  sym_target_ref = 92,
  sym_target_artifact = 93,
  sym_target_artifact_build_args = 94,
  sym_branch = 95,
  sym_build_arg = 96,
  sym_cache_from = 97,
  sym_chmod = 98,
  sym_chown = 99,
  sym_mount = 100,
  sym_platform = 101,
  sym_secret = 102,
  sym__string = 103,
  sym_double_quoted_string = 104,
  sym_single_quoted_string = 105,
  sym__eol = 106,
  aux_sym_source_file_repeat1 = 107,
  aux_sym_arg_command_repeat1 = 108,
  aux_sym_build_command_repeat2 = 109,
  aux_sym_from_command_repeat1 = 110,
  aux_sym_target_repeat1 = 111,
  aux_sym_version_command_repeat1 = 112,
  aux_sym_copy_command_repeat1 = 113,
  aux_sym_copy_command_repeat2 = 114,
  aux_sym_git_clone_command_repeat1 = 115,
  aux_sym_run_command_repeat1 = 116,
  aux_sym_save_artifact_command_repeat1 = 117,
  aux_sym_save_image_command_repeat1 = 118,
  aux_sym_save_image_command_repeat2 = 119,
  aux_sym_shell_fragment_repeat1 = 120,
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
  [anon_sym_GIT] = "GIT",
  [anon_sym_CLONE] = "CLONE",
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
  [anon_sym_DASH_DASHbranch] = "--branch",
  [aux_sym_branch_token1] = "branch_token1",
  [anon_sym_DASH_DASH2] = "--",
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
  [sym_git_clone_command] = "git_clone_command",
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
  [sym_branch] = "branch",
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
  [aux_sym_git_clone_command_repeat1] = "git_clone_command_repeat1",
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
  [anon_sym_GIT] = anon_sym_GIT,
  [anon_sym_CLONE] = anon_sym_CLONE,
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
  [anon_sym_DASH_DASHbranch] = anon_sym_DASH_DASHbranch,
  [aux_sym_branch_token1] = aux_sym_branch_token1,
  [anon_sym_DASH_DASH2] = anon_sym_DASH_DASH2,
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
  [sym_git_clone_command] = sym_git_clone_command,
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
  [sym_branch] = sym_branch,
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
  [aux_sym_git_clone_command_repeat1] = aux_sym_git_clone_command_repeat1,
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
  [anon_sym_GIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CLONE] = {
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
  [anon_sym_DASH_DASHbranch] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_branch_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH2] = {
    .visible = true,
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
  [sym_git_clone_command] = {
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
  [sym_branch] = {
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
  [aux_sym_git_clone_command_repeat1] = {
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
  field_url = 13,
  field_value = 14,
  field_version = 15,
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
  [field_url] = "url",
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
  [32] = {.index = 58, .length = 2},
  [33] = {.index = 60, .length = 3},
  [34] = {.index = 63, .length = 3},
  [35] = {.index = 66, .length = 2},
  [36] = {.index = 68, .length = 3},
  [37] = {.index = 71, .length = 3},
  [38] = {.index = 74, .length = 4},
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
    {field_dest, 3},
    {field_url, 2},
  [58] =
    {field_command, 3},
    {field_option, 1, .inherited = true},
  [60] =
    {field_dest, 4},
    {field_option, 2, .inherited = true},
    {field_src, 3},
  [63] =
    {field_dest, 4},
    {field_option, 2, .inherited = true},
    {field_url, 3},
  [66] =
    {field_local_dest, 5},
    {field_src, 2},
  [68] =
    {field_dest, 3},
    {field_local_dest, 6},
    {field_src, 2},
  [71] =
    {field_local_dest, 6},
    {field_option, 2, .inherited = true},
    {field_src, 3},
  [74] =
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
  [19] = 14,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 18,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 20,
  [34] = 34,
  [35] = 18,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 20,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 25,
  [47] = 47,
  [48] = 43,
  [49] = 18,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 38,
  [54] = 20,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 52,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 27,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 37,
  [76] = 32,
  [77] = 42,
  [78] = 23,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 47,
  [84] = 84,
  [85] = 85,
  [86] = 55,
  [87] = 18,
  [88] = 20,
  [89] = 25,
  [90] = 50,
  [91] = 91,
  [92] = 43,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 94,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 99,
  [105] = 100,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 58,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 81,
  [120] = 114,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 52,
  [127] = 127,
  [128] = 47,
  [129] = 129,
  [130] = 85,
  [131] = 74,
  [132] = 72,
  [133] = 65,
  [134] = 79,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 136,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 142,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 148,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 154,
  [159] = 157,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 165,
  [167] = 167,
  [168] = 150,
  [169] = 169,
  [170] = 170,
  [171] = 146,
  [172] = 172,
  [173] = 18,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 20,
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
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 215,
  [223] = 223,
  [224] = 224,
  [225] = 204,
  [226] = 203,
  [227] = 201,
  [228] = 228,
  [229] = 189,
  [230] = 188,
  [231] = 213,
  [232] = 232,
  [233] = 204,
  [234] = 203,
  [235] = 189,
  [236] = 188,
  [237] = 213,
  [238] = 189,
  [239] = 188,
  [240] = 189,
  [241] = 188,
  [242] = 189,
  [243] = 188,
  [244] = 244,
  [245] = 197,
  [246] = 196,
  [247] = 197,
  [248] = 196,
  [249] = 197,
  [250] = 196,
  [251] = 197,
  [252] = 196,
  [253] = 197,
  [254] = 196,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(216);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(456);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(460);
      if (lookahead == '(') ADVANCE(424);
      if (lookahead == ')') ADVANCE(425);
      if (lookahead == '+') ADVANCE(423);
      if (lookahead == ',') ADVANCE(416);
      if (lookahead == '-') ADVANCE(417);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '=') ADVANCE(221);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == 'A') ADVANCE(94);
      if (lookahead == 'B') ADVANCE(106);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(96);
      if (lookahead == 'G') ADVANCE(75);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(69);
      if (lookahead == 'P') ADVANCE(98);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == 'S') ADVANCE(56);
      if (lookahead == 'V') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(212)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(467);
      if (lookahead == '\f') ADVANCE(468);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(466);
      if (lookahead == '#') ADVANCE(421);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(420);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(466);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(471);
      if (lookahead == '\f') ADVANCE(472);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(473);
      if (lookahead == '\f') ADVANCE(481);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '+') ADVANCE(423);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(280);
      if (lookahead == 'n') ADVANCE(478);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(473);
      if (lookahead == '\f') ADVANCE(481);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '+') ADVANCE(423);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(280);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(474);
      if (lookahead == '\f') ADVANCE(482);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(480);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(419);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(474);
      if (lookahead == '\f') ADVANCE(482);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(419);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(475);
      if (lookahead == '\f') ADVANCE(483);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '(') ADVANCE(424);
      if (lookahead == '+') ADVANCE(423);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(479);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(415);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(475);
      if (lookahead == '\f') ADVANCE(483);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '(') ADVANCE(424);
      if (lookahead == '+') ADVANCE(423);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(415);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '#') ADVANCE(461);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(463);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '#') ADVANCE(457);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(458);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(459);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(476);
      if (lookahead == '\f') ADVANCE(484);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(476);
      if (lookahead == '\f') ADVANCE(484);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(477);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(476);
      if (lookahead == '\f') ADVANCE(484);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(456);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(460);
      if (lookahead == '(') ADVANCE(424);
      if (lookahead == ')') ADVANCE(425);
      if (lookahead == '+') ADVANCE(423);
      if (lookahead == '-') ADVANCE(417);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == 'A') ADVANCE(94);
      if (lookahead == 'B') ADVANCE(106);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(96);
      if (lookahead == 'G') ADVANCE(75);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(69);
      if (lookahead == 'P') ADVANCE(98);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == 'S') ADVANCE(56);
      if (lookahead == 'V') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(477);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(416);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 17:
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(456);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(460);
      if (lookahead == '(') ADVANCE(424);
      if (lookahead == ')') ADVANCE(425);
      if (lookahead == '+') ADVANCE(423);
      if (lookahead == '-') ADVANCE(417);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == 'A') ADVANCE(94);
      if (lookahead == 'B') ADVANCE(106);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(96);
      if (lookahead == 'G') ADVANCE(75);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(69);
      if (lookahead == 'P') ADVANCE(98);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == 'S') ADVANCE(56);
      if (lookahead == 'V') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(416);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 18:
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(456);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(460);
      if (lookahead == '(') ADVANCE(424);
      if (lookahead == ')') ADVANCE(425);
      if (lookahead == '+') ADVANCE(423);
      if (lookahead == '-') ADVANCE(418);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == 'A') ADVANCE(94);
      if (lookahead == 'B') ADVANCE(106);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(96);
      if (lookahead == 'G') ADVANCE(75);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(69);
      if (lookahead == 'P') ADVANCE(98);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == 'S') ADVANCE(56);
      if (lookahead == 'V') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(416);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'm') ADVANCE(170);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(430);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '=') ADVANCE(429);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'C') ADVANCE(88);
      if (lookahead == 'F') ADVANCE(96);
      if (lookahead == 'G') ADVANCE(75);
      if (lookahead == 'L') ADVANCE(68);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == 'S') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(26)
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(431);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(429);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(31)
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(417);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(416);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(22)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(419);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(418);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(416);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(22)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(419);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(456);
      if (lookahead == '#') ADVANCE(464);
      if (lookahead == '$') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(460);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'C') ADVANCE(88);
      if (lookahead == 'F') ADVANCE(96);
      if (lookahead == 'G') ADVANCE(75);
      if (lookahead == 'L') ADVANCE(68);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == 'S') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'C') ADVANCE(88);
      if (lookahead == 'F') ADVANCE(96);
      if (lookahead == 'G') ADVANCE(75);
      if (lookahead == 'L') ADVANCE(68);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == 'S') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(416);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(419);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '(') ADVANCE(424);
      if (lookahead == '+') ADVANCE(423);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(415);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '(') ADVANCE(424);
      if (lookahead == '+') ADVANCE(423);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(415);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '-') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(415);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(415);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == 'A') ADVANCE(328);
      if (lookahead == 'C') ADVANCE(325);
      if (lookahead == 'F') ADVANCE(329);
      if (lookahead == 'G') ADVANCE(322);
      if (lookahead == 'L') ADVANCE(320);
      if (lookahead == 'R') ADVANCE(333);
      if (lookahead == 'S') ADVANCE(318);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(415);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(415);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == 'A') ADVANCE(292);
      if (lookahead == 'C') ADVANCE(289);
      if (lookahead == 'F') ADVANCE(293);
      if (lookahead == 'G') ADVANCE(286);
      if (lookahead == 'L') ADVANCE(284);
      if (lookahead == 'R') ADVANCE(297);
      if (lookahead == 'S') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(280);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40)
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(300);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == 'A') ADVANCE(292);
      if (lookahead == 'C') ADVANCE(289);
      if (lookahead == 'F') ADVANCE(293);
      if (lookahead == 'G') ADVANCE(286);
      if (lookahead == 'L') ADVANCE(284);
      if (lookahead == 'R') ADVANCE(297);
      if (lookahead == 'S') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(280);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '\\') ADVANCE(302);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(304);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '(') ADVANCE(211);
      END_STATE();
    case 44:
      if (lookahead == ')') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(432);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(121);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(138);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(110);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(143);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(210);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(117);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(179);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(113);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == '=') ADVANCE(166);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(102);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(74);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(82);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == 'C') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == 'C') ADVANCE(103);
      END_STATE();
    case 62:
      if (lookahead == 'C') ADVANCE(104);
      END_STATE();
    case 63:
      if (lookahead == 'D') ADVANCE(222);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(247);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(239);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(254);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(95);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(101);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(101);
      if (lookahead == 'O') ADVANCE(60);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(61);
      END_STATE();
    case 71:
      if (lookahead == 'F') ADVANCE(59);
      END_STATE();
    case 72:
      if (lookahead == 'G') ADVANCE(217);
      END_STATE();
    case 73:
      if (lookahead == 'G') ADVANCE(217);
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 74:
      if (lookahead == 'G') ADVANCE(66);
      END_STATE();
    case 75:
      if (lookahead == 'I') ADVANCE(100);
      END_STATE();
    case 76:
      if (lookahead == 'I') ADVANCE(81);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(71);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(92);
      END_STATE();
    case 79:
      if (lookahead == 'J') ADVANCE(70);
      END_STATE();
    case 80:
      if (lookahead == 'L') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(93);
      END_STATE();
    case 81:
      if (lookahead == 'L') ADVANCE(63);
      END_STATE();
    case 82:
      if (lookahead == 'L') ADVANCE(253);
      END_STATE();
    case 83:
      if (lookahead == 'M') ADVANCE(57);
      END_STATE();
    case 84:
      if (lookahead == 'M') ADVANCE(223);
      END_STATE();
    case 85:
      if (lookahead == 'N') ADVANCE(243);
      END_STATE();
    case 86:
      if (lookahead == 'N') ADVANCE(231);
      END_STATE();
    case 87:
      if (lookahead == 'N') ADVANCE(65);
      END_STATE();
    case 88:
      if (lookahead == 'O') ADVANCE(93);
      END_STATE();
    case 89:
      if (lookahead == 'O') ADVANCE(79);
      END_STATE();
    case 90:
      if (lookahead == 'O') ADVANCE(84);
      END_STATE();
    case 91:
      if (lookahead == 'O') ADVANCE(87);
      END_STATE();
    case 92:
      if (lookahead == 'O') ADVANCE(86);
      END_STATE();
    case 93:
      if (lookahead == 'P') ADVANCE(108);
      END_STATE();
    case 94:
      if (lookahead == 'R') ADVANCE(73);
      if (lookahead == 'S') ADVANCE(251);
      END_STATE();
    case 95:
      if (lookahead == 'R') ADVANCE(99);
      END_STATE();
    case 96:
      if (lookahead == 'R') ADVANCE(90);
      END_STATE();
    case 97:
      if (lookahead == 'R') ADVANCE(72);
      END_STATE();
    case 98:
      if (lookahead == 'R') ADVANCE(89);
      END_STATE();
    case 99:
      if (lookahead == 'S') ADVANCE(78);
      END_STATE();
    case 100:
      if (lookahead == 'T') ADVANCE(236);
      END_STATE();
    case 101:
      if (lookahead == 'T') ADVANCE(240);
      END_STATE();
    case 102:
      if (lookahead == 'T') ADVANCE(255);
      END_STATE();
    case 103:
      if (lookahead == 'T') ADVANCE(227);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(250);
      END_STATE();
    case 105:
      if (lookahead == 'U') ADVANCE(85);
      END_STATE();
    case 106:
      if (lookahead == 'U') ADVANCE(76);
      END_STATE();
    case 107:
      if (lookahead == 'V') ADVANCE(64);
      END_STATE();
    case 108:
      if (lookahead == 'Y') ADVANCE(233);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 116:
      if (lookahead == 'b') ADVANCE(112);
      END_STATE();
    case 117:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 118:
      if (lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 119:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 120:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 121:
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(450);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(427);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(452);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'm') ADVANCE(170);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 138:
      if (lookahead == 'f') ADVANCE(187);
      if (lookahead == 'h') ADVANCE(152);
      END_STATE();
    case 139:
      if (lookahead == 'f') ADVANCE(177);
      END_STATE();
    case 140:
      if (lookahead == 'g') ADVANCE(190);
      END_STATE();
    case 141:
      if (lookahead == 'g') ADVANCE(129);
      END_STATE();
    case 142:
      if (lookahead == 'g') ADVANCE(133);
      END_STATE();
    case 143:
      if (lookahead == 'g') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 144:
      if (lookahead == 'h') ADVANCE(454);
      END_STATE();
    case 145:
      if (lookahead == 'h') ADVANCE(451);
      END_STATE();
    case 146:
      if (lookahead == 'h') ADVANCE(128);
      END_STATE();
    case 147:
      if (lookahead == 'h') ADVANCE(136);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 155:
      if (lookahead == 'k') ADVANCE(55);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(441);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(449);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(433);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 178:
      if (lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 179:
      if (lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 180:
      if (lookahead == 'q') ADVANCE(202);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(448);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(453);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 201:
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 202:
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 203:
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 204:
      if (lookahead == 'v') ADVANCE(149);
      END_STATE();
    case 205:
      if (lookahead == 'v') ADVANCE(153);
      END_STATE();
    case 206:
      if (lookahead == 'w') ADVANCE(176);
      END_STATE();
    case 207:
      if (lookahead == 'w') ADVANCE(52);
      END_STATE();
    case 208:
      if (lookahead == 'y') ADVANCE(178);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(426);
      END_STATE();
    case 210:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 211:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 212:
      if (eof) ADVANCE(216);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(456);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(460);
      if (lookahead == '(') ADVANCE(424);
      if (lookahead == ')') ADVANCE(425);
      if (lookahead == '+') ADVANCE(423);
      if (lookahead == '-') ADVANCE(417);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == 'A') ADVANCE(94);
      if (lookahead == 'B') ADVANCE(106);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(96);
      if (lookahead == 'G') ADVANCE(75);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(69);
      if (lookahead == 'P') ADVANCE(98);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == 'S') ADVANCE(56);
      if (lookahead == 'V') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(416);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(212)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 213:
      if (eof) ADVANCE(216);
      if (lookahead == ' ') ADVANCE(430);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(425);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '=') ADVANCE(429);
      if (lookahead == 'A') ADVANCE(270);
      if (lookahead == 'F') ADVANCE(271);
      if (lookahead == 'P') ADVANCE(273);
      if (lookahead == 'V') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(215)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 214:
      if (eof) ADVANCE(216);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(425);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '=') ADVANCE(221);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == 'A') ADVANCE(270);
      if (lookahead == 'F') ADVANCE(271);
      if (lookahead == 'P') ADVANCE(273);
      if (lookahead == 'V') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(215)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 215:
      if (eof) ADVANCE(216);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(425);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(270);
      if (lookahead == 'F') ADVANCE(271);
      if (lookahead == 'P') ADVANCE(273);
      if (lookahead == 'V') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(215)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_BUILD);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_GIT);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_CLONE);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LET);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_RUN);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_SAVE);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_SAVE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_SAVE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_ARTIFACT);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_AS);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_AS);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_LOCAL);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_IMAGE);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == ')') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'J') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '\n') ADVANCE(467);
      if (lookahead == '\f') ADVANCE(468);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '\n') ADVANCE(466);
      if (lookahead == '#') ADVANCE(281);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '\n') ADVANCE(471);
      if (lookahead == '\f') ADVANCE(472);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(298);
      if (lookahead == 'E') ADVANCE(296);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(248);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'G') ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'M') ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(244);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(291);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'P') ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(285);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(290);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(241);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'U') ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'V') ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(467);
      if (lookahead == '\f') ADVANCE(468);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(466);
      if (lookahead == '#') ADVANCE(303);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(304);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(471);
      if (lookahead == '\f') ADVANCE(472);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_image_digest);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_immediate_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(467);
      if (lookahead == '\f') ADVANCE(468);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(388);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(357);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(341);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(339);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(391);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(381);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(356);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(334);
      if (lookahead == 'E') ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(249);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(330);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M') ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(327);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P') ADVANCE(335);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(321);
      if (lookahead == 'S') ADVANCE(252);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(326);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(242);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(257);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U') ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'V') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(235);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(369);
      if (lookahead == 'c') ADVANCE(360);
      if (lookahead == 'd') ADVANCE(362);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == 'k') ADVANCE(349);
      if (lookahead == 'p') ADVANCE(337);
      if (lookahead == 's') ADVANCE(414);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(405);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(380);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'b') ADVANCE(397);
      if (lookahead == 'k') ADVANCE(353);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(361);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(348);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(435);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(427);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(413);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(345);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(314);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(384);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(389);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == 'k') ADVANCE(349);
      if (lookahead == 's') ADVANCE(414);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(350);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(401);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(375);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(428);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(393);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(403);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(371);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'k') ADVANCE(315);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(383);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(351);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(385);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(372);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(449);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(382);
      if (lookahead == 'o') ADVANCE(409);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(370);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(367);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(342);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(387);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(344);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(316);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead == 't') ADVANCE(399);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(398);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(317);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(437);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(359);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(374);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(340);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(363);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(444);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(442);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(448);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(404);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(312);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(355);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(399);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'v') ADVANCE(366);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(455);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(379);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(313);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'x') ADVANCE(365);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'y') ADVANCE(376);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(125);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n') ADVANCE(471);
      if (lookahead == '\f') ADVANCE(472);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_version_major_minor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_allow_privileged);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_DASH_DASHbranch);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcache_DASHfrom);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_cache_hint);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchmod);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_dir);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_entrypoint);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_feature_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_force);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_if_exists);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_keep_own);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_keep_ts);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_DASH_DASHmount);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_network_none);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_no_cache);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_pass_args);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_privileged);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_push);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsecret);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_ssh);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_symlink_no_follow);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(467);
      if (lookahead == '\f') ADVANCE(470);
      if (lookahead == '\r') ADVANCE(457);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(457);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(457);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(459);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(467);
      if (lookahead == '\f') ADVANCE(469);
      if (lookahead == '\r') ADVANCE(461);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(461);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(463);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\n') ADVANCE(467);
      if (lookahead == '\f') ADVANCE(468);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(467);
      if (lookahead == '\f') ADVANCE(468);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(467);
      if (lookahead == '\f') ADVANCE(469);
      if (lookahead == '\r') ADVANCE(461);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(467);
      if (lookahead == '\f') ADVANCE(470);
      if (lookahead == '\r') ADVANCE(457);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(457);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      if (lookahead == '\n') ADVANCE(471);
      if (lookahead == '\f') ADVANCE(472);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(473);
      if (lookahead == '\f') ADVANCE(481);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '+') ADVANCE(423);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(280);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(474);
      if (lookahead == '\f') ADVANCE(482);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(475);
      if (lookahead == '\f') ADVANCE(483);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '+') ADVANCE(423);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(476);
      if (lookahead == '\f') ADVANCE(484);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_CRn);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(300);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(419);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(473);
      if (lookahead == '\f') ADVANCE(481);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '+') ADVANCE(423);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(280);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(474);
      if (lookahead == '\f') ADVANCE(482);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(475);
      if (lookahead == '\f') ADVANCE(483);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '+') ADVANCE(423);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(476);
      if (lookahead == '\f') ADVANCE(484);
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
  [1] = {.lex_state = 214},
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 39, .external_lex_state = 2},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 39, .external_lex_state = 2},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 39, .external_lex_state = 2},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 33},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 33},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 25, .external_lex_state = 2},
  [24] = {.lex_state = 39, .external_lex_state = 2},
  [25] = {.lex_state = 39, .external_lex_state = 2},
  [26] = {.lex_state = 214},
  [27] = {.lex_state = 25, .external_lex_state = 2},
  [28] = {.lex_state = 39, .external_lex_state = 2},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 39, .external_lex_state = 2},
  [31] = {.lex_state = 214},
  [32] = {.lex_state = 25, .external_lex_state = 2},
  [33] = {.lex_state = 39, .external_lex_state = 2},
  [34] = {.lex_state = 39, .external_lex_state = 2},
  [35] = {.lex_state = 39, .external_lex_state = 2},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 25, .external_lex_state = 2},
  [38] = {.lex_state = 25, .external_lex_state = 2},
  [39] = {.lex_state = 39, .external_lex_state = 2},
  [40] = {.lex_state = 22},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 20, .external_lex_state = 2},
  [43] = {.lex_state = 39, .external_lex_state = 2},
  [44] = {.lex_state = 37, .external_lex_state = 2},
  [45] = {.lex_state = 37, .external_lex_state = 2},
  [46] = {.lex_state = 25, .external_lex_state = 2},
  [47] = {.lex_state = 39, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 25, .external_lex_state = 2},
  [50] = {.lex_state = 25, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 39, .external_lex_state = 2},
  [53] = {.lex_state = 214},
  [54] = {.lex_state = 25, .external_lex_state = 2},
  [55] = {.lex_state = 25, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 2},
  [58] = {.lex_state = 0, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 0, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 214},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 214},
  [76] = {.lex_state = 214},
  [77] = {.lex_state = 213},
  [78] = {.lex_state = 214},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 214},
  [87] = {.lex_state = 214},
  [88] = {.lex_state = 214},
  [89] = {.lex_state = 214},
  [90] = {.lex_state = 214},
  [91] = {.lex_state = 35},
  [92] = {.lex_state = 214},
  [93] = {.lex_state = 35},
  [94] = {.lex_state = 24},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 34},
  [97] = {.lex_state = 214, .external_lex_state = 3},
  [98] = {.lex_state = 24},
  [99] = {.lex_state = 33},
  [100] = {.lex_state = 24},
  [101] = {.lex_state = 35},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 33},
  [105] = {.lex_state = 24},
  [106] = {.lex_state = 34},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 34},
  [109] = {.lex_state = 214},
  [110] = {.lex_state = 24},
  [111] = {.lex_state = 214},
  [112] = {.lex_state = 33},
  [113] = {.lex_state = 24},
  [114] = {.lex_state = 24},
  [115] = {.lex_state = 24},
  [116] = {.lex_state = 24},
  [117] = {.lex_state = 214},
  [118] = {.lex_state = 214},
  [119] = {.lex_state = 214},
  [120] = {.lex_state = 24},
  [121] = {.lex_state = 214},
  [122] = {.lex_state = 24},
  [123] = {.lex_state = 35},
  [124] = {.lex_state = 24},
  [125] = {.lex_state = 24},
  [126] = {.lex_state = 214},
  [127] = {.lex_state = 214},
  [128] = {.lex_state = 214},
  [129] = {.lex_state = 24},
  [130] = {.lex_state = 214},
  [131] = {.lex_state = 214},
  [132] = {.lex_state = 214},
  [133] = {.lex_state = 214},
  [134] = {.lex_state = 214},
  [135] = {.lex_state = 30},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 30},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 36},
  [140] = {.lex_state = 36},
  [141] = {.lex_state = 36},
  [142] = {.lex_state = 13},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 27},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 13},
  [147] = {.lex_state = 13},
  [148] = {.lex_state = 13},
  [149] = {.lex_state = 13},
  [150] = {.lex_state = 27},
  [151] = {.lex_state = 13},
  [152] = {.lex_state = 13},
  [153] = {.lex_state = 13},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 13},
  [156] = {.lex_state = 214},
  [157] = {.lex_state = 13},
  [158] = {.lex_state = 13},
  [159] = {.lex_state = 13},
  [160] = {.lex_state = 13},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 33},
  [163] = {.lex_state = 13},
  [164] = {.lex_state = 13},
  [165] = {.lex_state = 27},
  [166] = {.lex_state = 27},
  [167] = {.lex_state = 13},
  [168] = {.lex_state = 27},
  [169] = {.lex_state = 13},
  [170] = {.lex_state = 214},
  [171] = {.lex_state = 13},
  [172] = {.lex_state = 27},
  [173] = {.lex_state = 13},
  [174] = {.lex_state = 29},
  [175] = {.lex_state = 34},
  [176] = {.lex_state = 29},
  [177] = {.lex_state = 34},
  [178] = {.lex_state = 36},
  [179] = {.lex_state = 29},
  [180] = {.lex_state = 36},
  [181] = {.lex_state = 34},
  [182] = {.lex_state = 13},
  [183] = {.lex_state = 34},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 21},
  [187] = {.lex_state = 21},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 38},
  [194] = {.lex_state = 27},
  [195] = {.lex_state = 27},
  [196] = {.lex_state = 11},
  [197] = {.lex_state = 12},
  [198] = {.lex_state = 27},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 21},
  [201] = {.lex_state = 29},
  [202] = {.lex_state = 21},
  [203] = {.lex_state = 32},
  [204] = {.lex_state = 41},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 38},
  [207] = {.lex_state = 38},
  [208] = {.lex_state = 214},
  [209] = {.lex_state = 38},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 21},
  [213] = {.lex_state = 32},
  [214] = {.lex_state = 21},
  [215] = {.lex_state = 29},
  [216] = {.lex_state = 38},
  [217] = {.lex_state = 21},
  [218] = {.lex_state = 214},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 38},
  [222] = {.lex_state = 29},
  [223] = {.lex_state = 27},
  [224] = {.lex_state = 38},
  [225] = {.lex_state = 41},
  [226] = {.lex_state = 32},
  [227] = {.lex_state = 29},
  [228] = {.lex_state = 27},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 32},
  [232] = {.lex_state = 38},
  [233] = {.lex_state = 41},
  [234] = {.lex_state = 32},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 32},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 38},
  [245] = {.lex_state = 12},
  [246] = {.lex_state = 11},
  [247] = {.lex_state = 12},
  [248] = {.lex_state = 11},
  [249] = {.lex_state = 12},
  [250] = {.lex_state = 11},
  [251] = {.lex_state = 12},
  [252] = {.lex_state = 11},
  [253] = {.lex_state = 12},
  [254] = {.lex_state = 11},
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
    [anon_sym_GIT] = ACTIONS(1),
    [anon_sym_CLONE] = ACTIONS(1),
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
    [sym_source_file] = STATE(219),
    [sym_arg_command] = STATE(31),
    [sym_from_command] = STATE(31),
    [sym_project_command] = STATE(31),
    [sym_target] = STATE(31),
    [sym_version_command] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(31),
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
    STATE(9), 1,
      aux_sym_copy_command_repeat1,
    STATE(106), 1,
      aux_sym_copy_command_repeat2,
    STATE(205), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(183), 2,
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
    STATE(96), 1,
      aux_sym_copy_command_repeat2,
    STATE(205), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(183), 2,
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
      anon_sym_ARG,
    ACTIONS(35), 1,
      anon_sym_FROM,
    ACTIONS(37), 1,
      anon_sym_COPY,
    ACTIONS(39), 1,
      anon_sym_GIT,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SAVE,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(5), 10,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_git_clone_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      aux_sym_target_repeat1,
  [153] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(51), 1,
      anon_sym_ARG,
    ACTIONS(54), 1,
      anon_sym_FROM,
    ACTIONS(57), 1,
      anon_sym_COPY,
    ACTIONS(60), 1,
      anon_sym_GIT,
    ACTIONS(63), 1,
      anon_sym_LET,
    ACTIONS(66), 1,
      anon_sym_RUN,
    ACTIONS(69), 1,
      anon_sym_SAVE,
    ACTIONS(72), 1,
      anon_sym_SET,
    ACTIONS(75), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(5), 10,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_git_clone_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      aux_sym_target_repeat1,
  [200] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(33), 1,
      anon_sym_ARG,
    ACTIONS(35), 1,
      anon_sym_FROM,
    ACTIONS(37), 1,
      anon_sym_COPY,
    ACTIONS(39), 1,
      anon_sym_GIT,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SAVE,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(77), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(4), 10,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_git_clone_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      aux_sym_target_repeat1,
  [247] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(81), 1,
      sym_image_name,
    ACTIONS(83), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(85), 1,
      sym_cache_hint,
    ACTIONS(87), 1,
      sym_push,
    ACTIONS(89), 1,
      sym__dedent,
    STATE(11), 1,
      aux_sym_save_image_command_repeat1,
    STATE(30), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(34), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(79), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [290] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(91), 1,
      anon_sym_DASH_DASH,
    ACTIONS(95), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(99), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(101), 1,
      anon_sym_DASH_DASHsecret,
    STATE(12), 1,
      aux_sym_run_command_repeat1,
    STATE(95), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(167), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(93), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(36), 2,
      sym_mount,
      sym_secret,
    ACTIONS(97), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [335] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(103), 1,
      sym_path,
    ACTIONS(110), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(113), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(116), 1,
      anon_sym_DASH_DASHplatform,
    STATE(9), 1,
      aux_sym_copy_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(105), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    STATE(17), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(107), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [376] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(95), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(99), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(101), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(119), 1,
      anon_sym_DASH_DASH,
    STATE(8), 1,
      aux_sym_run_command_repeat1,
    STATE(95), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(163), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(93), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(36), 2,
      sym_mount,
      sym_secret,
    ACTIONS(97), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [421] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(81), 1,
      sym_image_name,
    ACTIONS(83), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(87), 1,
      sym_push,
    ACTIONS(123), 1,
      sym__dedent,
    STATE(13), 1,
      aux_sym_save_image_command_repeat1,
    STATE(30), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(28), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(121), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [461] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(132), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(135), 1,
      anon_sym_DASH_DASHsecret,
    STATE(12), 1,
      aux_sym_run_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(125), 2,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
    ACTIONS(127), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(36), 2,
      sym_mount,
      sym_secret,
    ACTIONS(129), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [498] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(140), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(143), 1,
      sym_push,
    ACTIONS(146), 1,
      sym__dedent,
    STATE(13), 1,
      aux_sym_save_image_command_repeat1,
    STATE(30), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(138), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [532] = 10,
    ACTIONS(148), 1,
      sym_image_name,
    ACTIONS(150), 1,
      anon_sym_PLUS,
    ACTIONS(154), 1,
      anon_sym_DASH_DASHplatform,
    STATE(27), 1,
      sym_target_ref,
    STATE(104), 1,
      aux_sym_from_command_repeat1,
    STATE(162), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(152), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(74), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(156), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [569] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(158), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(160), 12,
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
  [594] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(162), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(164), 12,
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
  [619] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(166), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(168), 12,
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
  [644] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(170), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(172), 12,
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
  [669] = 10,
    ACTIONS(154), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(174), 1,
      sym_image_name,
    ACTIONS(176), 1,
      anon_sym_PLUS,
    STATE(69), 1,
      sym_target_ref,
    STATE(99), 1,
      aux_sym_from_command_repeat1,
    STATE(162), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(152), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(131), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(178), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [706] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(180), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(182), 12,
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
  [731] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(184), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(186), 12,
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
  [756] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(190), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(188), 10,
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
  [780] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(194), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(37), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(192), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [806] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(198), 1,
      sym_image_name,
    ACTIONS(201), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(24), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(196), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [834] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(205), 1,
      anon_sym_COLON2,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(203), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [862] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 1,
      anon_sym_ARG,
    ACTIONS(216), 1,
      anon_sym_FROM,
    ACTIONS(219), 1,
      anon_sym_PROJECT,
    ACTIONS(222), 1,
      anon_sym_VERSION,
    ACTIONS(225), 1,
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
  [896] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(194), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(32), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(228), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [922] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(81), 1,
      sym_image_name,
    ACTIONS(232), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(24), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(230), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [950] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(170), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(172), 10,
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
  [974] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(236), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(234), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [998] = 9,
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
    ACTIONS(238), 1,
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
  [1032] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(194), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(38), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(240), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1058] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(182), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(180), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1082] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(81), 1,
      sym_image_name,
    ACTIONS(244), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(24), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(242), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1110] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(172), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(170), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1134] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(248), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(246), 10,
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
  [1158] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(194), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(38), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(250), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1184] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(254), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(38), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(252), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1210] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(259), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(257), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1234] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(180), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(182), 10,
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
  [1258] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(263), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(261), 10,
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
  [1282] = 4,
    ACTIONS(267), 1,
      aux_sym_branch_token1,
    ACTIONS(269), 1,
      sym__dedent,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(265), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_DASH_DASH2,
  [1305] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(275), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(271), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1330] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(279), 1,
      anon_sym_AS,
    ACTIONS(281), 1,
      sym_path,
    ACTIONS(283), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(277), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1357] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(287), 1,
      anon_sym_AS,
    ACTIONS(289), 1,
      sym_path,
    ACTIONS(291), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(285), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1384] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(293), 1,
      anon_sym_COLON2,
    ACTIONS(295), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(209), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1409] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(299), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(297), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1431] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(301), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(275), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1453] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(172), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_DASH_DASH2,
  [1473] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(303), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_DASH_DASH2,
  [1493] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(307), 1,
      anon_sym_AS,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(305), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1515] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(311), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(309), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1537] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(315), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(53), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(313), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [1563] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(182), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_DASH_DASH2,
  [1583] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(318), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_DASH_DASH2,
  [1603] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(322), 1,
      anon_sym_AS,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(320), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1625] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(324), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1644] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(326), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1663] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(328), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1682] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(330), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1701] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(332), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1720] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(334), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1739] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(336), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
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
    ACTIONS(311), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1777] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(338), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1796] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(340), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1815] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(342), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1834] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(344), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1853] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(348), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(76), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(346), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [1878] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(350), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1897] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(352), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1916] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(354), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1935] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(356), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
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
    ACTIONS(228), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1973] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    ACTIONS(348), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(53), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(358), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [1998] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(348), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(53), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(360), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2023] = 4,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(362), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(265), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
  [2044] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(348), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(75), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(364), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2069] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(366), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2088] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(368), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2107] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(370), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2126] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(372), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2145] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(299), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2164] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(374), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2183] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(376), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2202] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(318), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(378), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2222] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(172), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(170), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2242] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(182), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(180), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2262] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(380), 1,
      anon_sym_COLON2,
    ACTIONS(382), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(203), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2286] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(303), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_DASH_DASH2,
    ACTIONS(384), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2306] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(386), 1,
      sym_path,
    STATE(101), 1,
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
  [2327] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(390), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(271), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2348] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(392), 1,
      sym_path,
    STATE(93), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(394), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [2369] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(397), 1,
      sym_expr,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
    ACTIONS(401), 1,
      anon_sym_SQUOTE,
    ACTIONS(403), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(148), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2394] = 4,
    STATE(103), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(405), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(407), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2413] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      sym_path,
    STATE(108), 1,
      aux_sym_copy_command_repeat2,
    STATE(205), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(183), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [2440] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(411), 1,
      ts_builtin_sym_end,
    ACTIONS(415), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(413), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2461] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
    ACTIONS(401), 1,
      anon_sym_SQUOTE,
    ACTIONS(417), 1,
      sym_expr,
    ACTIONS(419), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(151), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2486] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(31), 1,
      anon_sym_DASH_DASHplatform,
    STATE(78), 1,
      sym_target_ref,
    STATE(112), 1,
      aux_sym_from_command_repeat1,
    STATE(162), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(421), 2,
      sym_allow_privileged,
      sym_pass_args,
  [2513] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
    ACTIONS(401), 1,
      anon_sym_SQUOTE,
    ACTIONS(423), 1,
      sym_expr,
    ACTIONS(425), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(159), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2538] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(427), 1,
      sym_path,
    STATE(93), 1,
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
  [2559] = 4,
    STATE(71), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(429), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(431), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2578] = 4,
    STATE(103), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(433), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(436), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2597] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(31), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(438), 1,
      anon_sym_PLUS,
    STATE(23), 1,
      sym_target_ref,
    STATE(112), 1,
      aux_sym_from_command_repeat1,
    STATE(162), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(421), 2,
      sym_allow_privileged,
      sym_pass_args,
  [2624] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
    ACTIONS(401), 1,
      anon_sym_SQUOTE,
    ACTIONS(440), 1,
      sym_expr,
    ACTIONS(442), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(157), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2649] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      sym_path,
    STATE(108), 1,
      aux_sym_copy_command_repeat2,
    STATE(205), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(183), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [2676] = 4,
    STATE(57), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(429), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(446), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2695] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(448), 1,
      sym_path,
    ACTIONS(451), 1,
      anon_sym_PLUS,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      aux_sym_copy_command_repeat2,
    STATE(205), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(183), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [2722] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(457), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(459), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2740] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(461), 1,
      anon_sym_DQUOTE,
    ACTIONS(463), 1,
      anon_sym_SQUOTE,
    ACTIONS(465), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(16), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2762] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(467), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2780] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(469), 1,
      anon_sym_PLUS,
    ACTIONS(474), 1,
      anon_sym_DASH_DASHplatform,
    STATE(112), 1,
      aux_sym_from_command_repeat1,
    STATE(162), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(471), 2,
      sym_allow_privileged,
      sym_pass_args,
  [2804] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
    ACTIONS(401), 1,
      anon_sym_SQUOTE,
    ACTIONS(477), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(147), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2826] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(479), 1,
      anon_sym_DQUOTE,
    ACTIONS(481), 1,
      anon_sym_SQUOTE,
    ACTIONS(483), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(86), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2848] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      anon_sym_SQUOTE,
    ACTIONS(489), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(41), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2870] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      anon_sym_SQUOTE,
    ACTIONS(491), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(22), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2892] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(495), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2910] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(497), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(499), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2928] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(501), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2946] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(503), 1,
      anon_sym_DQUOTE,
    ACTIONS(505), 1,
      anon_sym_SQUOTE,
    ACTIONS(507), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(55), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2968] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(509), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(511), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2986] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(513), 1,
      anon_sym_DQUOTE,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(39), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3008] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(519), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(521), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [3026] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(461), 1,
      anon_sym_DQUOTE,
    ACTIONS(463), 1,
      anon_sym_SQUOTE,
    ACTIONS(523), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(15), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3048] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(461), 1,
      anon_sym_DQUOTE,
    ACTIONS(463), 1,
      anon_sym_SQUOTE,
    ACTIONS(525), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(21), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3070] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(309), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3088] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(527), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(529), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3106] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(297), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3124] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
    ACTIONS(401), 1,
      anon_sym_SQUOTE,
    ACTIONS(531), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(155), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3146] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(533), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3164] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(346), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3182] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(535), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3200] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(537), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3218] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(539), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3236] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(93), 1,
      aux_sym_shell_fragment_token3,
    STATE(95), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(145), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(95), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [3257] = 4,
    ACTIONS(541), 1,
      anon_sym_EQ,
    STATE(85), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(543), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3274] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(93), 1,
      aux_sym_shell_fragment_token3,
    STATE(95), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(169), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(95), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [3295] = 4,
    ACTIONS(545), 1,
      anon_sym_EQ,
    STATE(130), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(547), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3312] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(549), 1,
      sym_path,
    ACTIONS(551), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(553), 1,
      sym_keep_ts,
    STATE(140), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(178), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3335] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(555), 1,
      sym_path,
    ACTIONS(557), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(560), 1,
      sym_keep_ts,
    STATE(140), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(178), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3358] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(551), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(553), 1,
      sym_keep_ts,
    ACTIONS(563), 1,
      sym_path,
    STATE(139), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(178), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3381] = 4,
    ACTIONS(565), 1,
      anon_sym_EQ,
    STATE(134), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(567), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3398] = 4,
    ACTIONS(569), 1,
      anon_sym_EQ,
    STATE(79), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(571), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3415] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(573), 1,
      sym_identifier,
    STATE(144), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(575), 2,
      sym_global,
      sym_required,
  [3433] = 3,
    STATE(67), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(578), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3447] = 3,
    STATE(72), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(580), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3461] = 3,
    STATE(68), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(582), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3475] = 3,
    STATE(65), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(584), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3489] = 3,
    STATE(121), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(586), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3503] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(588), 1,
      sym_identifier,
    STATE(166), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(590), 2,
      sym_global,
      sym_required,
  [3521] = 3,
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
  [3535] = 3,
    STATE(70), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(594), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3549] = 3,
    STATE(97), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(596), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3563] = 3,
    STATE(119), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(598), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3577] = 3,
    STATE(63), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(600), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3591] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(348), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(170), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [3609] = 3,
    STATE(58), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(604), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3623] = 3,
    STATE(81), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(606), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3637] = 3,
    STATE(111), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(608), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3651] = 3,
    STATE(62), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(610), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3665] = 3,
    STATE(118), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(612), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3679] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(614), 4,
      anon_sym_PLUS,
      sym_allow_privileged,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
  [3693] = 3,
    STATE(82), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(616), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3707] = 3,
    STATE(109), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(618), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3721] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(620), 1,
      sym_identifier,
    STATE(144), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(590), 2,
      sym_global,
      sym_required,
  [3739] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(622), 1,
      sym_identifier,
    STATE(144), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(590), 2,
      sym_global,
      sym_required,
  [3757] = 3,
    STATE(80), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(624), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3771] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(626), 1,
      sym_identifier,
    STATE(165), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(590), 2,
      sym_global,
      sym_required,
  [3789] = 3,
    STATE(84), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(628), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3803] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(348), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(53), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [3821] = 3,
    STATE(132), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(632), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3835] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(634), 3,
      sym_identifier,
      sym_global,
      sym_required,
  [3848] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(170), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3859] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(636), 1,
      sym_version_major_minor,
    ACTIONS(638), 1,
      sym_feature_flag,
    STATE(176), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3876] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(640), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(642), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3891] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(644), 1,
      sym_version_major_minor,
    ACTIONS(646), 1,
      sym_feature_flag,
    STATE(179), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3908] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(648), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(650), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3923] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(652), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(654), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [3938] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(656), 1,
      sym_version_major_minor,
    ACTIONS(658), 1,
      sym_feature_flag,
    STATE(179), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3955] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(661), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(663), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [3970] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(665), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(667), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3985] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(180), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3996] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(429), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(669), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [4011] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(671), 1,
      anon_sym_ARTIFACT,
    ACTIONS(673), 1,
      anon_sym_IMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4025] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    STATE(220), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4039] = 2,
    ACTIONS(675), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4048] = 2,
    ACTIONS(677), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4057] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4068] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(681), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4079] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(683), 1,
      anon_sym_CLONE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4090] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(685), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4101] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(687), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4112] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(689), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4123] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(691), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4134] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(693), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4145] = 2,
    ACTIONS(695), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4154] = 2,
    ACTIONS(697), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4163] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(699), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4174] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(701), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4185] = 2,
    ACTIONS(703), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4194] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(705), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4205] = 2,
    ACTIONS(707), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4214] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(709), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4225] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(711), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4236] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(713), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4247] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(715), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4258] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(717), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4269] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(719), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4280] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(721), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4291] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(723), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4302] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(725), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4313] = 2,
    ACTIONS(727), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4322] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(729), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4333] = 2,
    ACTIONS(731), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4342] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(733), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4353] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(735), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4364] = 2,
    ACTIONS(737), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4373] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(739), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4384] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(741), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4395] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(743), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4406] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(745), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4417] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(747), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4428] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(749), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4439] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(751), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4450] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(753), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4461] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(755), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4472] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(757), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4483] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(759), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4494] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(761), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4505] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(763), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4516] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(765), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4527] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(767), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4538] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(769), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4549] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(771), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4560] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(773), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4571] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(775), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4582] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(777), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4593] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(779), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4604] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(781), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4615] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(783), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4626] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(785), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4637] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4648] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4659] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(791), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4670] = 2,
    ACTIONS(793), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4679] = 2,
    ACTIONS(795), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4688] = 2,
    ACTIONS(797), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4697] = 2,
    ACTIONS(799), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4706] = 2,
    ACTIONS(801), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4715] = 2,
    ACTIONS(803), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4724] = 2,
    ACTIONS(805), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4733] = 2,
    ACTIONS(807), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4742] = 2,
    ACTIONS(809), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4751] = 2,
    ACTIONS(811), 1,
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
  [SMALL_STATE(5)] = 153,
  [SMALL_STATE(6)] = 200,
  [SMALL_STATE(7)] = 247,
  [SMALL_STATE(8)] = 290,
  [SMALL_STATE(9)] = 335,
  [SMALL_STATE(10)] = 376,
  [SMALL_STATE(11)] = 421,
  [SMALL_STATE(12)] = 461,
  [SMALL_STATE(13)] = 498,
  [SMALL_STATE(14)] = 532,
  [SMALL_STATE(15)] = 569,
  [SMALL_STATE(16)] = 594,
  [SMALL_STATE(17)] = 619,
  [SMALL_STATE(18)] = 644,
  [SMALL_STATE(19)] = 669,
  [SMALL_STATE(20)] = 706,
  [SMALL_STATE(21)] = 731,
  [SMALL_STATE(22)] = 756,
  [SMALL_STATE(23)] = 780,
  [SMALL_STATE(24)] = 806,
  [SMALL_STATE(25)] = 834,
  [SMALL_STATE(26)] = 862,
  [SMALL_STATE(27)] = 896,
  [SMALL_STATE(28)] = 922,
  [SMALL_STATE(29)] = 950,
  [SMALL_STATE(30)] = 974,
  [SMALL_STATE(31)] = 998,
  [SMALL_STATE(32)] = 1032,
  [SMALL_STATE(33)] = 1058,
  [SMALL_STATE(34)] = 1082,
  [SMALL_STATE(35)] = 1110,
  [SMALL_STATE(36)] = 1134,
  [SMALL_STATE(37)] = 1158,
  [SMALL_STATE(38)] = 1184,
  [SMALL_STATE(39)] = 1210,
  [SMALL_STATE(40)] = 1234,
  [SMALL_STATE(41)] = 1258,
  [SMALL_STATE(42)] = 1282,
  [SMALL_STATE(43)] = 1305,
  [SMALL_STATE(44)] = 1330,
  [SMALL_STATE(45)] = 1357,
  [SMALL_STATE(46)] = 1384,
  [SMALL_STATE(47)] = 1409,
  [SMALL_STATE(48)] = 1431,
  [SMALL_STATE(49)] = 1453,
  [SMALL_STATE(50)] = 1473,
  [SMALL_STATE(51)] = 1493,
  [SMALL_STATE(52)] = 1515,
  [SMALL_STATE(53)] = 1537,
  [SMALL_STATE(54)] = 1563,
  [SMALL_STATE(55)] = 1583,
  [SMALL_STATE(56)] = 1603,
  [SMALL_STATE(57)] = 1625,
  [SMALL_STATE(58)] = 1644,
  [SMALL_STATE(59)] = 1663,
  [SMALL_STATE(60)] = 1682,
  [SMALL_STATE(61)] = 1701,
  [SMALL_STATE(62)] = 1720,
  [SMALL_STATE(63)] = 1739,
  [SMALL_STATE(64)] = 1758,
  [SMALL_STATE(65)] = 1777,
  [SMALL_STATE(66)] = 1796,
  [SMALL_STATE(67)] = 1815,
  [SMALL_STATE(68)] = 1834,
  [SMALL_STATE(69)] = 1853,
  [SMALL_STATE(70)] = 1878,
  [SMALL_STATE(71)] = 1897,
  [SMALL_STATE(72)] = 1916,
  [SMALL_STATE(73)] = 1935,
  [SMALL_STATE(74)] = 1954,
  [SMALL_STATE(75)] = 1973,
  [SMALL_STATE(76)] = 1998,
  [SMALL_STATE(77)] = 2023,
  [SMALL_STATE(78)] = 2044,
  [SMALL_STATE(79)] = 2069,
  [SMALL_STATE(80)] = 2088,
  [SMALL_STATE(81)] = 2107,
  [SMALL_STATE(82)] = 2126,
  [SMALL_STATE(83)] = 2145,
  [SMALL_STATE(84)] = 2164,
  [SMALL_STATE(85)] = 2183,
  [SMALL_STATE(86)] = 2202,
  [SMALL_STATE(87)] = 2222,
  [SMALL_STATE(88)] = 2242,
  [SMALL_STATE(89)] = 2262,
  [SMALL_STATE(90)] = 2286,
  [SMALL_STATE(91)] = 2306,
  [SMALL_STATE(92)] = 2327,
  [SMALL_STATE(93)] = 2348,
  [SMALL_STATE(94)] = 2369,
  [SMALL_STATE(95)] = 2394,
  [SMALL_STATE(96)] = 2413,
  [SMALL_STATE(97)] = 2440,
  [SMALL_STATE(98)] = 2461,
  [SMALL_STATE(99)] = 2486,
  [SMALL_STATE(100)] = 2513,
  [SMALL_STATE(101)] = 2538,
  [SMALL_STATE(102)] = 2559,
  [SMALL_STATE(103)] = 2578,
  [SMALL_STATE(104)] = 2597,
  [SMALL_STATE(105)] = 2624,
  [SMALL_STATE(106)] = 2649,
  [SMALL_STATE(107)] = 2676,
  [SMALL_STATE(108)] = 2695,
  [SMALL_STATE(109)] = 2722,
  [SMALL_STATE(110)] = 2740,
  [SMALL_STATE(111)] = 2762,
  [SMALL_STATE(112)] = 2780,
  [SMALL_STATE(113)] = 2804,
  [SMALL_STATE(114)] = 2826,
  [SMALL_STATE(115)] = 2848,
  [SMALL_STATE(116)] = 2870,
  [SMALL_STATE(117)] = 2892,
  [SMALL_STATE(118)] = 2910,
  [SMALL_STATE(119)] = 2928,
  [SMALL_STATE(120)] = 2946,
  [SMALL_STATE(121)] = 2968,
  [SMALL_STATE(122)] = 2986,
  [SMALL_STATE(123)] = 3008,
  [SMALL_STATE(124)] = 3026,
  [SMALL_STATE(125)] = 3048,
  [SMALL_STATE(126)] = 3070,
  [SMALL_STATE(127)] = 3088,
  [SMALL_STATE(128)] = 3106,
  [SMALL_STATE(129)] = 3124,
  [SMALL_STATE(130)] = 3146,
  [SMALL_STATE(131)] = 3164,
  [SMALL_STATE(132)] = 3182,
  [SMALL_STATE(133)] = 3200,
  [SMALL_STATE(134)] = 3218,
  [SMALL_STATE(135)] = 3236,
  [SMALL_STATE(136)] = 3257,
  [SMALL_STATE(137)] = 3274,
  [SMALL_STATE(138)] = 3295,
  [SMALL_STATE(139)] = 3312,
  [SMALL_STATE(140)] = 3335,
  [SMALL_STATE(141)] = 3358,
  [SMALL_STATE(142)] = 3381,
  [SMALL_STATE(143)] = 3398,
  [SMALL_STATE(144)] = 3415,
  [SMALL_STATE(145)] = 3433,
  [SMALL_STATE(146)] = 3447,
  [SMALL_STATE(147)] = 3461,
  [SMALL_STATE(148)] = 3475,
  [SMALL_STATE(149)] = 3489,
  [SMALL_STATE(150)] = 3503,
  [SMALL_STATE(151)] = 3521,
  [SMALL_STATE(152)] = 3535,
  [SMALL_STATE(153)] = 3549,
  [SMALL_STATE(154)] = 3563,
  [SMALL_STATE(155)] = 3577,
  [SMALL_STATE(156)] = 3591,
  [SMALL_STATE(157)] = 3609,
  [SMALL_STATE(158)] = 3623,
  [SMALL_STATE(159)] = 3637,
  [SMALL_STATE(160)] = 3651,
  [SMALL_STATE(161)] = 3665,
  [SMALL_STATE(162)] = 3679,
  [SMALL_STATE(163)] = 3693,
  [SMALL_STATE(164)] = 3707,
  [SMALL_STATE(165)] = 3721,
  [SMALL_STATE(166)] = 3739,
  [SMALL_STATE(167)] = 3757,
  [SMALL_STATE(168)] = 3771,
  [SMALL_STATE(169)] = 3789,
  [SMALL_STATE(170)] = 3803,
  [SMALL_STATE(171)] = 3821,
  [SMALL_STATE(172)] = 3835,
  [SMALL_STATE(173)] = 3848,
  [SMALL_STATE(174)] = 3859,
  [SMALL_STATE(175)] = 3876,
  [SMALL_STATE(176)] = 3891,
  [SMALL_STATE(177)] = 3908,
  [SMALL_STATE(178)] = 3923,
  [SMALL_STATE(179)] = 3938,
  [SMALL_STATE(180)] = 3955,
  [SMALL_STATE(181)] = 3970,
  [SMALL_STATE(182)] = 3985,
  [SMALL_STATE(183)] = 3996,
  [SMALL_STATE(184)] = 4011,
  [SMALL_STATE(185)] = 4025,
  [SMALL_STATE(186)] = 4039,
  [SMALL_STATE(187)] = 4048,
  [SMALL_STATE(188)] = 4057,
  [SMALL_STATE(189)] = 4068,
  [SMALL_STATE(190)] = 4079,
  [SMALL_STATE(191)] = 4090,
  [SMALL_STATE(192)] = 4101,
  [SMALL_STATE(193)] = 4112,
  [SMALL_STATE(194)] = 4123,
  [SMALL_STATE(195)] = 4134,
  [SMALL_STATE(196)] = 4145,
  [SMALL_STATE(197)] = 4154,
  [SMALL_STATE(198)] = 4163,
  [SMALL_STATE(199)] = 4174,
  [SMALL_STATE(200)] = 4185,
  [SMALL_STATE(201)] = 4194,
  [SMALL_STATE(202)] = 4205,
  [SMALL_STATE(203)] = 4214,
  [SMALL_STATE(204)] = 4225,
  [SMALL_STATE(205)] = 4236,
  [SMALL_STATE(206)] = 4247,
  [SMALL_STATE(207)] = 4258,
  [SMALL_STATE(208)] = 4269,
  [SMALL_STATE(209)] = 4280,
  [SMALL_STATE(210)] = 4291,
  [SMALL_STATE(211)] = 4302,
  [SMALL_STATE(212)] = 4313,
  [SMALL_STATE(213)] = 4322,
  [SMALL_STATE(214)] = 4333,
  [SMALL_STATE(215)] = 4342,
  [SMALL_STATE(216)] = 4353,
  [SMALL_STATE(217)] = 4364,
  [SMALL_STATE(218)] = 4373,
  [SMALL_STATE(219)] = 4384,
  [SMALL_STATE(220)] = 4395,
  [SMALL_STATE(221)] = 4406,
  [SMALL_STATE(222)] = 4417,
  [SMALL_STATE(223)] = 4428,
  [SMALL_STATE(224)] = 4439,
  [SMALL_STATE(225)] = 4450,
  [SMALL_STATE(226)] = 4461,
  [SMALL_STATE(227)] = 4472,
  [SMALL_STATE(228)] = 4483,
  [SMALL_STATE(229)] = 4494,
  [SMALL_STATE(230)] = 4505,
  [SMALL_STATE(231)] = 4516,
  [SMALL_STATE(232)] = 4527,
  [SMALL_STATE(233)] = 4538,
  [SMALL_STATE(234)] = 4549,
  [SMALL_STATE(235)] = 4560,
  [SMALL_STATE(236)] = 4571,
  [SMALL_STATE(237)] = 4582,
  [SMALL_STATE(238)] = 4593,
  [SMALL_STATE(239)] = 4604,
  [SMALL_STATE(240)] = 4615,
  [SMALL_STATE(241)] = 4626,
  [SMALL_STATE(242)] = 4637,
  [SMALL_STATE(243)] = 4648,
  [SMALL_STATE(244)] = 4659,
  [SMALL_STATE(245)] = 4670,
  [SMALL_STATE(246)] = 4679,
  [SMALL_STATE(247)] = 4688,
  [SMALL_STATE(248)] = 4697,
  [SMALL_STATE(249)] = 4706,
  [SMALL_STATE(250)] = 4715,
  [SMALL_STATE(251)] = 4724,
  [SMALL_STATE(252)] = 4733,
  [SMALL_STATE(253)] = 4742,
  [SMALL_STATE(254)] = 4751,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(150),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(14),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(3),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(190),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(194),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(10),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(184),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(195),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(17),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(200),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(202),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(186),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 3, .production_id = 24),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3, .production_id = 24),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(36),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(212),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(214),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(187),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(30),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chown, 3, .production_id = 10),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chown, 3, .production_id = 10),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_platform, 3, .production_id = 10),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_platform, 3, .production_id = 10),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_secret, 3, .production_id = 10),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_secret, 3, .production_id = 10),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(25),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(168),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(228),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(174),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(223),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 4, .production_id = 24),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 4, .production_id = 24),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(227),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount, 3, .production_id = 10),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount, 3, .production_id = 10),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 29),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 29),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 22),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 22),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 28),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 5, .production_id = 17),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 5, .production_id = 17),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(201),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 4, .production_id = 18),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 33),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 4, .production_id = 25),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 7, .production_id = 37),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 7, .production_id = 36),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 6, .production_id = 35),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 6, .production_id = 34),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_command, 5, .production_id = 18),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3, .production_id = 23),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 5, .production_id = 32),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_command, 5, .production_id = 18),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 5, .production_id = 31),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 5, .production_id = 30),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 8, .production_id = 38),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 27),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 3, .production_id = 21),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 26),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 4, .production_id = 18),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(123),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 2),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 3, .production_id = 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 19),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(103),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 20), SHIFT_REPEAT(183),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 20), SHIFT_REPEAT(215),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 20), SHIFT_REPEAT(185),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(162),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(186),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 2),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 5, .production_id = 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6, .production_id = 2),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 6, .production_id = 2),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(217),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(178),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(172),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 1, .production_id = 1),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 1, .production_id = 1),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact, 3),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact, 3),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 6),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 6),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2), SHIFT_REPEAT(179),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 3, .production_id = 10),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3, .production_id = 10),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 5),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 5),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 19),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [741] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
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
