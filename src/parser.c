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
#define STATE_COUNT 282
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 130
#define ALIAS_COUNT 0
#define TOKEN_COUNT 81
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 42

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
  anon_sym_DOCKERFILE = 10,
  anon_sym_GIT = 11,
  anon_sym_CLONE = 12,
  anon_sym_LET = 13,
  anon_sym_RUN = 14,
  anon_sym_DASH_DASH = 15,
  anon_sym_SAVE = 16,
  anon_sym_ARTIFACT = 17,
  anon_sym_AS = 18,
  anon_sym_LOCAL = 19,
  anon_sym_IMAGE = 20,
  anon_sym_SET = 21,
  sym_expr = 22,
  sym_identifier = 23,
  anon_sym_COLON2 = 24,
  anon_sym_AT = 25,
  sym_image_name = 26,
  sym_image_tag = 27,
  sym_image_digest = 28,
  sym_immediate_identifier = 29,
  sym_path = 30,
  aux_sym_shell_fragment_token1 = 31,
  aux_sym_shell_fragment_token2 = 32,
  aux_sym_shell_fragment_token3 = 33,
  anon_sym_PLUS = 34,
  anon_sym_LPAREN = 35,
  anon_sym_RPAREN = 36,
  sym_version_major_minor = 37,
  sym_allow_privileged = 38,
  anon_sym_DASH_DASHbranch = 39,
  aux_sym_branch_token1 = 40,
  anon_sym_DASH_DASH2 = 41,
  anon_sym_DASH_DASHcache_DASHfrom = 42,
  sym_cache_hint = 43,
  anon_sym_DASH_DASHchmod = 44,
  anon_sym_DASH_DASHchown = 45,
  sym_dir = 46,
  anon_sym_DASH_DASHbuild_DASHarg = 47,
  anon_sym_DASHf = 48,
  anon_sym_DASH_DASHtarget = 49,
  sym_entrypoint = 50,
  sym_feature_flag = 51,
  sym_force = 52,
  sym_global = 53,
  sym_if_exists = 54,
  sym_keep_own = 55,
  sym_keep_ts = 56,
  anon_sym_DASH_DASHmount = 57,
  sym_network_none = 58,
  sym_no_cache = 59,
  sym_pass_args = 60,
  anon_sym_DASH_DASHplatform = 61,
  sym_privileged = 62,
  sym_push = 63,
  sym_required = 64,
  anon_sym_DASH_DASHsecret = 65,
  sym_ssh = 66,
  sym_symlink_no_follow = 67,
  anon_sym_DQUOTE = 68,
  aux_sym_double_quoted_string_token1 = 69,
  anon_sym_SQUOTE = 70,
  aux_sym_single_quoted_string_token1 = 71,
  sym_unquoted_string = 72,
  sym_line_continuation = 73,
  sym_comment = 74,
  sym_line_continuation_comment = 75,
  anon_sym_LF = 76,
  anon_sym_CRn = 77,
  anon_sym_FF = 78,
  sym__indent = 79,
  sym__dedent = 80,
  sym_source_file = 81,
  sym_arg_command = 82,
  sym_from_command = 83,
  sym_project_command = 84,
  sym_target = 85,
  sym_version_command = 86,
  sym_copy_command = 87,
  sym_from_dockerfile_command = 88,
  sym_git_clone_command = 89,
  sym_let_command = 90,
  sym_run_command = 91,
  sym_save_artifact_command = 92,
  sym_save_image_command = 93,
  sym_set_command = 94,
  sym_image_spec = 95,
  sym_shell_fragment = 96,
  sym_target_ref = 97,
  sym_target_artifact = 98,
  sym_target_artifact_build_args = 99,
  sym_branch = 100,
  sym_build_arg = 101,
  sym_cache_from = 102,
  sym_chmod = 103,
  sym_chown = 104,
  sym_docker_build_arg = 105,
  sym_docker_file = 106,
  sym_docker_target = 107,
  sym_mount = 108,
  sym_platform = 109,
  sym_secret = 110,
  sym__string = 111,
  sym_double_quoted_string = 112,
  sym_single_quoted_string = 113,
  sym__eol = 114,
  aux_sym_source_file_repeat1 = 115,
  aux_sym_arg_command_repeat1 = 116,
  aux_sym_build_command_repeat2 = 117,
  aux_sym_from_command_repeat1 = 118,
  aux_sym_target_repeat1 = 119,
  aux_sym_version_command_repeat1 = 120,
  aux_sym_copy_command_repeat1 = 121,
  aux_sym_copy_command_repeat2 = 122,
  aux_sym_from_dockerfile_command_repeat1 = 123,
  aux_sym_git_clone_command_repeat1 = 124,
  aux_sym_run_command_repeat1 = 125,
  aux_sym_save_artifact_command_repeat1 = 126,
  aux_sym_save_image_command_repeat1 = 127,
  aux_sym_save_image_command_repeat2 = 128,
  aux_sym_shell_fragment_repeat1 = 129,
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
  [anon_sym_DOCKERFILE] = "DOCKERFILE",
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
  [anon_sym_DASH_DASHbuild_DASHarg] = "--build-arg",
  [anon_sym_DASHf] = "-f",
  [anon_sym_DASH_DASHtarget] = "--target",
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
  [sym_from_dockerfile_command] = "from_dockerfile_command",
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
  [sym_docker_build_arg] = "docker_build_arg",
  [sym_docker_file] = "docker_file",
  [sym_docker_target] = "docker_target",
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
  [aux_sym_from_dockerfile_command_repeat1] = "from_dockerfile_command_repeat1",
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
  [anon_sym_DOCKERFILE] = anon_sym_DOCKERFILE,
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
  [anon_sym_DASH_DASHbuild_DASHarg] = anon_sym_DASH_DASHbuild_DASHarg,
  [anon_sym_DASHf] = anon_sym_DASHf,
  [anon_sym_DASH_DASHtarget] = anon_sym_DASH_DASHtarget,
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
  [sym_from_dockerfile_command] = sym_from_dockerfile_command,
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
  [sym_docker_build_arg] = sym_docker_build_arg,
  [sym_docker_file] = sym_docker_file,
  [sym_docker_target] = sym_docker_target,
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
  [aux_sym_from_dockerfile_command_repeat1] = aux_sym_from_dockerfile_command_repeat1,
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
  [anon_sym_DOCKERFILE] = {
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
  [anon_sym_DASH_DASHbuild_DASHarg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHtarget] = {
    .visible = true,
    .named = false,
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
  [sym_from_dockerfile_command] = {
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
  [sym_docker_build_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_docker_file] = {
    .visible = true,
    .named = true,
  },
  [sym_docker_target] = {
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
  [aux_sym_from_dockerfile_command_repeat1] = {
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
  field_context = 2,
  field_default_value = 3,
  field_default_value_expr = 4,
  field_dest = 5,
  field_digest = 6,
  field_key = 7,
  field_local_dest = 8,
  field_name = 9,
  field_option = 10,
  field_org_name = 11,
  field_project_name = 12,
  field_src = 13,
  field_tag = 14,
  field_url = 15,
  field_value = 16,
  field_version = 17,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_command] = "command",
  [field_context] = "context",
  [field_default_value] = "default_value",
  [field_default_value_expr] = "default_value_expr",
  [field_dest] = "dest",
  [field_digest] = "digest",
  [field_key] = "key",
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
  [25] = {.index = 44, .length = 1},
  [26] = {.index = 45, .length = 2},
  [27] = {.index = 47, .length = 1},
  [28] = {.index = 48, .length = 2},
  [29] = {.index = 50, .length = 2},
  [30] = {.index = 52, .length = 2},
  [31] = {.index = 54, .length = 2},
  [32] = {.index = 56, .length = 3},
  [33] = {.index = 59, .length = 2},
  [34] = {.index = 61, .length = 2},
  [35] = {.index = 63, .length = 3},
  [36] = {.index = 66, .length = 2},
  [37] = {.index = 68, .length = 3},
  [38] = {.index = 71, .length = 2},
  [39] = {.index = 73, .length = 3},
  [40] = {.index = 76, .length = 3},
  [41] = {.index = 79, .length = 4},
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
    {field_context, 2},
  [45] =
    {field_dest, 2},
    {field_src, 1, .inherited = true},
  [47] =
    {field_command, 2},
  [48] =
    {field_command, 2},
    {field_option, 1, .inherited = true},
  [50] =
    {field_dest, 3},
    {field_src, 2},
  [52] =
    {field_option, 2, .inherited = true},
    {field_src, 3},
  [54] =
    {field_context, 3},
    {field_option, 2, .inherited = true},
  [56] =
    {field_dest, 3},
    {field_option, 1, .inherited = true},
    {field_src, 2, .inherited = true},
  [59] =
    {field_dest, 3},
    {field_url, 2},
  [61] =
    {field_command, 3},
    {field_option, 1, .inherited = true},
  [63] =
    {field_dest, 4},
    {field_option, 2, .inherited = true},
    {field_src, 3},
  [66] =
    {field_key, 2},
    {field_value, 3},
  [68] =
    {field_dest, 4},
    {field_option, 2, .inherited = true},
    {field_url, 3},
  [71] =
    {field_local_dest, 5},
    {field_src, 2},
  [73] =
    {field_dest, 3},
    {field_local_dest, 6},
    {field_src, 2},
  [76] =
    {field_local_dest, 6},
    {field_option, 2, .inherited = true},
    {field_src, 3},
  [79] =
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
  [35] = 15,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 19,
  [40] = 15,
  [41] = 19,
  [42] = 24,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 15,
  [51] = 51,
  [52] = 52,
  [53] = 19,
  [54] = 45,
  [55] = 29,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 58,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 44,
  [71] = 32,
  [72] = 72,
  [73] = 73,
  [74] = 52,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 23,
  [81] = 81,
  [82] = 82,
  [83] = 25,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 30,
  [89] = 89,
  [90] = 90,
  [91] = 15,
  [92] = 47,
  [93] = 56,
  [94] = 19,
  [95] = 24,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 102,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 98,
  [108] = 97,
  [109] = 109,
  [110] = 110,
  [111] = 45,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 65,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 63,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 58,
  [129] = 129,
  [130] = 114,
  [131] = 131,
  [132] = 52,
  [133] = 77,
  [134] = 87,
  [135] = 135,
  [136] = 136,
  [137] = 64,
  [138] = 138,
  [139] = 60,
  [140] = 89,
  [141] = 121,
  [142] = 19,
  [143] = 15,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 146,
  [149] = 149,
  [150] = 18,
  [151] = 151,
  [152] = 147,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 159,
  [171] = 171,
  [172] = 172,
  [173] = 166,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 165,
  [179] = 179,
  [180] = 180,
  [181] = 176,
  [182] = 182,
  [183] = 169,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 171,
  [188] = 188,
  [189] = 15,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 19,
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
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 244,
  [247] = 242,
  [248] = 248,
  [249] = 241,
  [250] = 243,
  [251] = 237,
  [252] = 236,
  [253] = 235,
  [254] = 254,
  [255] = 244,
  [256] = 242,
  [257] = 237,
  [258] = 236,
  [259] = 235,
  [260] = 237,
  [261] = 236,
  [262] = 237,
  [263] = 236,
  [264] = 237,
  [265] = 236,
  [266] = 237,
  [267] = 236,
  [268] = 268,
  [269] = 248,
  [270] = 239,
  [271] = 238,
  [272] = 239,
  [273] = 238,
  [274] = 239,
  [275] = 238,
  [276] = 239,
  [277] = 238,
  [278] = 239,
  [279] = 238,
  [280] = 239,
  [281] = 238,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(228);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(498);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(502);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '+') ADVANCE(462);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '-') ADVANCE(456);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == ':') ADVANCE(291);
      if (lookahead == '=') ADVANCE(233);
      if (lookahead == '@') ADVANCE(292);
      if (lookahead == 'A') ADVANCE(105);
      if (lookahead == 'B') ADVANCE(118);
      if (lookahead == 'C') ADVANCE(91);
      if (lookahead == 'D') ADVANCE(99);
      if (lookahead == 'F') ADVANCE(109);
      if (lookahead == 'G') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == 'L') ADVANCE(74);
      if (lookahead == 'P') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(117);
      if (lookahead == 'S') ADVANCE(59);
      if (lookahead == 'V') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(224)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '\f') ADVANCE(510);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(508);
      if (lookahead == '#') ADVANCE(460);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(459);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(508);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '\f') ADVANCE(514);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '\f') ADVANCE(524);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '+') ADVANCE(462);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'D') ADVANCE(312);
      if (lookahead == '\\') ADVANCE(294);
      if (lookahead == 'n') ADVANCE(521);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '\f') ADVANCE(524);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '+') ADVANCE(462);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'D') ADVANCE(312);
      if (lookahead == '\\') ADVANCE(294);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '\f') ADVANCE(525);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(523);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(458);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '\f') ADVANCE(525);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(458);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(517);
      if (lookahead == '\f') ADVANCE(526);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == '+') ADVANCE(462);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(522);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(454);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(517);
      if (lookahead == '\f') ADVANCE(526);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == '+') ADVANCE(462);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(454);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '#') ADVANCE(503);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(505);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(500);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(501);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(518);
      if (lookahead == '\f') ADVANCE(527);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '+') ADVANCE(462);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(294);
      if (lookahead == 'n') ADVANCE(521);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(518);
      if (lookahead == '\f') ADVANCE(527);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '+') ADVANCE(462);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(294);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == '\f') ADVANCE(528);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(233);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == '\f') ADVANCE(528);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(520);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == '\f') ADVANCE(528);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(498);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(502);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '+') ADVANCE(462);
      if (lookahead == '-') ADVANCE(456);
      if (lookahead == ':') ADVANCE(242);
      if (lookahead == 'A') ADVANCE(105);
      if (lookahead == 'B') ADVANCE(118);
      if (lookahead == 'C') ADVANCE(91);
      if (lookahead == 'D') ADVANCE(99);
      if (lookahead == 'F') ADVANCE(109);
      if (lookahead == 'G') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == 'L') ADVANCE(74);
      if (lookahead == 'P') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(117);
      if (lookahead == 'S') ADVANCE(59);
      if (lookahead == 'V') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(520);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(455);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 19:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(498);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(502);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '+') ADVANCE(462);
      if (lookahead == '-') ADVANCE(456);
      if (lookahead == ':') ADVANCE(242);
      if (lookahead == 'A') ADVANCE(105);
      if (lookahead == 'B') ADVANCE(118);
      if (lookahead == 'C') ADVANCE(91);
      if (lookahead == 'D') ADVANCE(99);
      if (lookahead == 'F') ADVANCE(109);
      if (lookahead == 'G') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == 'L') ADVANCE(74);
      if (lookahead == 'P') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(117);
      if (lookahead == 'S') ADVANCE(59);
      if (lookahead == 'V') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(455);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 20:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(498);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(502);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '+') ADVANCE(462);
      if (lookahead == '-') ADVANCE(457);
      if (lookahead == ':') ADVANCE(242);
      if (lookahead == 'A') ADVANCE(105);
      if (lookahead == 'B') ADVANCE(118);
      if (lookahead == 'C') ADVANCE(91);
      if (lookahead == 'D') ADVANCE(99);
      if (lookahead == 'F') ADVANCE(109);
      if (lookahead == 'G') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == 'L') ADVANCE(74);
      if (lookahead == 'P') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(117);
      if (lookahead == 'S') ADVANCE(59);
      if (lookahead == 'V') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(455);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'm') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(193);
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(469);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '=') ADVANCE(468);
      if (lookahead == 'A') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(98);
      if (lookahead == 'F') ADVANCE(109);
      if (lookahead == 'G') ADVANCE(82);
      if (lookahead == 'L') ADVANCE(73);
      if (lookahead == 'R') ADVANCE(117);
      if (lookahead == 'S') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(28)
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(470);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(468);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(33)
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(456);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(455);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(24)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(458);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(457);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(455);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(24)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(458);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(498);
      if (lookahead == '#') ADVANCE(506);
      if (lookahead == '$') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(502);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0) ADVANCE(507);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == ':') ADVANCE(291);
      if (lookahead == '@') ADVANCE(292);
      if (lookahead == 'A') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(98);
      if (lookahead == 'F') ADVANCE(109);
      if (lookahead == 'G') ADVANCE(82);
      if (lookahead == 'L') ADVANCE(73);
      if (lookahead == 'R') ADVANCE(117);
      if (lookahead == 'S') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == 'A') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(98);
      if (lookahead == 'F') ADVANCE(109);
      if (lookahead == 'G') ADVANCE(82);
      if (lookahead == 'L') ADVANCE(73);
      if (lookahead == 'R') ADVANCE(117);
      if (lookahead == 'S') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == ':') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(455);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(458);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(328);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == '+') ADVANCE(462);
      if (lookahead == '-') ADVANCE(331);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(454);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == '+') ADVANCE(462);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(454);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '-') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(454);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '-') ADVANCE(334);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(454);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '-') ADVANCE(335);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(454);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == 'A') ADVANCE(353);
      if (lookahead == 'C') ADVANCE(350);
      if (lookahead == 'F') ADVANCE(354);
      if (lookahead == 'G') ADVANCE(347);
      if (lookahead == 'L') ADVANCE(345);
      if (lookahead == 'R') ADVANCE(358);
      if (lookahead == 'S') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(454);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(454);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == ':') ADVANCE(291);
      if (lookahead == '@') ADVANCE(292);
      if (lookahead == 'A') ADVANCE(314);
      if (lookahead == 'C') ADVANCE(310);
      if (lookahead == 'F') ADVANCE(316);
      if (lookahead == 'G') ADVANCE(304);
      if (lookahead == 'L') ADVANCE(300);
      if (lookahead == 'R') ADVANCE(320);
      if (lookahead == 'S') ADVANCE(296);
      if (lookahead == '\\') ADVANCE(294);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43)
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(323);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(314);
      if (lookahead == 'C') ADVANCE(310);
      if (lookahead == 'F') ADVANCE(316);
      if (lookahead == 'G') ADVANCE(304);
      if (lookahead == 'L') ADVANCE(300);
      if (lookahead == 'R') ADVANCE(320);
      if (lookahead == 'S') ADVANCE(296);
      if (lookahead == '\\') ADVANCE(294);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(324);
      if (lookahead == '\\') ADVANCE(325);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(327);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == '(') ADVANCE(223);
      END_STATE();
    case 47:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(471);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(133);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(150);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(122);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(155);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(222);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(129);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(191);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(125);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == '=') ADVANCE(178);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(119);
      if (lookahead == 'E') ADVANCE(114);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(81);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(90);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 'C') ADVANCE(88);
      END_STATE();
    case 64:
      if (lookahead == 'C') ADVANCE(61);
      END_STATE();
    case 65:
      if (lookahead == 'C') ADVANCE(115);
      END_STATE();
    case 66:
      if (lookahead == 'C') ADVANCE(116);
      END_STATE();
    case 67:
      if (lookahead == 'D') ADVANCE(234);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(261);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(253);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(268);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(248);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(106);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(113);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(64);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(108);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(65);
      END_STATE();
    case 77:
      if (lookahead == 'F') ADVANCE(62);
      END_STATE();
    case 78:
      if (lookahead == 'F') ADVANCE(85);
      END_STATE();
    case 79:
      if (lookahead == 'G') ADVANCE(229);
      END_STATE();
    case 80:
      if (lookahead == 'G') ADVANCE(229);
      if (lookahead == 'T') ADVANCE(84);
      END_STATE();
    case 81:
      if (lookahead == 'G') ADVANCE(70);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(112);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(89);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(77);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(92);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(103);
      END_STATE();
    case 87:
      if (lookahead == 'J') ADVANCE(76);
      END_STATE();
    case 88:
      if (lookahead == 'K') ADVANCE(75);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(67);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(267);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead == 'O') ADVANCE(104);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(71);
      END_STATE();
    case 93:
      if (lookahead == 'M') ADVANCE(60);
      END_STATE();
    case 94:
      if (lookahead == 'M') ADVANCE(235);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(257);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(243);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(69);
      END_STATE();
    case 98:
      if (lookahead == 'O') ADVANCE(104);
      END_STATE();
    case 99:
      if (lookahead == 'O') ADVANCE(63);
      END_STATE();
    case 100:
      if (lookahead == 'O') ADVANCE(87);
      END_STATE();
    case 101:
      if (lookahead == 'O') ADVANCE(94);
      END_STATE();
    case 102:
      if (lookahead == 'O') ADVANCE(97);
      END_STATE();
    case 103:
      if (lookahead == 'O') ADVANCE(96);
      END_STATE();
    case 104:
      if (lookahead == 'P') ADVANCE(120);
      END_STATE();
    case 105:
      if (lookahead == 'R') ADVANCE(80);
      if (lookahead == 'S') ADVANCE(265);
      END_STATE();
    case 106:
      if (lookahead == 'R') ADVANCE(111);
      END_STATE();
    case 107:
      if (lookahead == 'R') ADVANCE(79);
      END_STATE();
    case 108:
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 109:
      if (lookahead == 'R') ADVANCE(101);
      END_STATE();
    case 110:
      if (lookahead == 'R') ADVANCE(100);
      END_STATE();
    case 111:
      if (lookahead == 'S') ADVANCE(86);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(250);
      END_STATE();
    case 113:
      if (lookahead == 'T') ADVANCE(254);
      END_STATE();
    case 114:
      if (lookahead == 'T') ADVANCE(269);
      END_STATE();
    case 115:
      if (lookahead == 'T') ADVANCE(239);
      END_STATE();
    case 116:
      if (lookahead == 'T') ADVANCE(264);
      END_STATE();
    case 117:
      if (lookahead == 'U') ADVANCE(95);
      END_STATE();
    case 118:
      if (lookahead == 'U') ADVANCE(83);
      END_STATE();
    case 119:
      if (lookahead == 'V') ADVANCE(68);
      END_STATE();
    case 120:
      if (lookahead == 'Y') ADVANCE(245);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 128:
      if (lookahead == 'b') ADVANCE(124);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(195);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(213);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(492);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(466);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(494);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'm') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(193);
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 150:
      if (lookahead == 'f') ADVANCE(199);
      if (lookahead == 'h') ADVANCE(164);
      END_STATE();
    case 151:
      if (lookahead == 'f') ADVANCE(189);
      END_STATE();
    case 152:
      if (lookahead == 'g') ADVANCE(202);
      END_STATE();
    case 153:
      if (lookahead == 'g') ADVANCE(141);
      END_STATE();
    case 154:
      if (lookahead == 'g') ADVANCE(145);
      END_STATE();
    case 155:
      if (lookahead == 'g') ADVANCE(172);
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 156:
      if (lookahead == 'h') ADVANCE(496);
      END_STATE();
    case 157:
      if (lookahead == 'h') ADVANCE(493);
      END_STATE();
    case 158:
      if (lookahead == 'h') ADVANCE(140);
      END_STATE();
    case 159:
      if (lookahead == 'h') ADVANCE(148);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 167:
      if (lookahead == 'k') ADVANCE(58);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(483);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(491);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(472);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 190:
      if (lookahead == 'p') ADVANCE(187);
      END_STATE();
    case 191:
      if (lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 192:
      if (lookahead == 'q') ADVANCE(214);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(490);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(487);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(480);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 213:
      if (lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 214:
      if (lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 216:
      if (lookahead == 'v') ADVANCE(161);
      END_STATE();
    case 217:
      if (lookahead == 'v') ADVANCE(165);
      END_STATE();
    case 218:
      if (lookahead == 'w') ADVANCE(188);
      END_STATE();
    case 219:
      if (lookahead == 'w') ADVANCE(55);
      END_STATE();
    case 220:
      if (lookahead == 'y') ADVANCE(190);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 222:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 223:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 224:
      if (eof) ADVANCE(228);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(498);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(502);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '+') ADVANCE(462);
      if (lookahead == '-') ADVANCE(456);
      if (lookahead == ':') ADVANCE(242);
      if (lookahead == 'A') ADVANCE(105);
      if (lookahead == 'B') ADVANCE(118);
      if (lookahead == 'C') ADVANCE(91);
      if (lookahead == 'D') ADVANCE(99);
      if (lookahead == 'F') ADVANCE(109);
      if (lookahead == 'G') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == 'L') ADVANCE(74);
      if (lookahead == 'P') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(117);
      if (lookahead == 'S') ADVANCE(59);
      if (lookahead == 'V') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(455);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(224)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 225:
      if (eof) ADVANCE(228);
      if (lookahead == ' ') ADVANCE(469);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '=') ADVANCE(468);
      if (lookahead == 'A') ADVANCE(284);
      if (lookahead == 'F') ADVANCE(285);
      if (lookahead == 'P') ADVANCE(287);
      if (lookahead == 'V') ADVANCE(275);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(227)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 226:
      if (eof) ADVANCE(228);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == ':') ADVANCE(291);
      if (lookahead == '=') ADVANCE(233);
      if (lookahead == '@') ADVANCE(292);
      if (lookahead == 'A') ADVANCE(284);
      if (lookahead == 'F') ADVANCE(285);
      if (lookahead == 'P') ADVANCE(287);
      if (lookahead == 'V') ADVANCE(275);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(227)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 227:
      if (eof) ADVANCE(228);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == 'A') ADVANCE(284);
      if (lookahead == 'F') ADVANCE(285);
      if (lookahead == 'P') ADVANCE(287);
      if (lookahead == 'V') ADVANCE(275);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(227)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_BUILD);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_DOCKERFILE);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_DOCKERFILE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_GIT);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_CLONE);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_LET);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_RUN);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_SAVE);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_SAVE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_SAVE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_ARTIFACT);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_AS);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_AS);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LOCAL);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_IMAGE);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'J') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '\f') ADVANCE(510);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '\n') ADVANCE(508);
      if (lookahead == '#') ADVANCE(295);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '\f') ADVANCE(514);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(321);
      if (lookahead == 'E') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'C') ADVANCE(306);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(262);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(249);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(318);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(315);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'F') ADVANCE(305);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'G') ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(317);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(307);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'K') ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'M') ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(258);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(313);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(308);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'P') ADVANCE(322);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(303);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(302);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(311);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(251);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(255);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(270);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'U') ADVANCE(309);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'V') ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(246);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '\f') ADVANCE(510);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(508);
      if (lookahead == '#') ADVANCE(326);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(327);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '\f') ADVANCE(514);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_image_digest);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_immediate_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '\f') ADVANCE(510);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(361);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(423);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == 'f') ADVANCE(478);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(387);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(369);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(364);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(426);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(376);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(416);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(444);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(367);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(359);
      if (lookahead == 'E') ADVANCE(357);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(263);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(356);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G') ADVANCE(232);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(355);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M') ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(259);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(352);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(348);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P') ADVANCE(360);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(346);
      if (lookahead == 'S') ADVANCE(266);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(351);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(252);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(271);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U') ADVANCE(349);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'V') ADVANCE(344);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead == 'c') ADVANCE(392);
      if (lookahead == 'd') ADVANCE(394);
      if (lookahead == 'i') ADVANCE(384);
      if (lookahead == 'k') ADVANCE(378);
      if (lookahead == 'p') ADVANCE(362);
      if (lookahead == 's') ADVANCE(453);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(439);
      if (lookahead == 'l') ADVANCE(363);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(429);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(415);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(432);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'b') ADVANCE(446);
      if (lookahead == 'p') ADVANCE(401);
      if (lookahead == 't') ADVANCE(365);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'b') ADVANCE(434);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(474);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(466);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(342);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(452);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(442);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(382);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(338);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(419);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(424);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(422);
      if (lookahead == 'i') ADVANCE(384);
      if (lookahead == 'k') ADVANCE(378);
      if (lookahead == 's') ADVANCE(453);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(477);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(379);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(381);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(438);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(410);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(467);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(447);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(413);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(405);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'k') ADVANCE(339);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(363);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(418);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(402);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(374);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(380);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(420);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(491);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(448);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(404);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(475);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(485);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(421);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(372);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(451);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(431);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(449);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(430);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(450);
      if (lookahead == 't') ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(408);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(433);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(341);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(476);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(391);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(371);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(409);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(388);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(395);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(366);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(486);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(484);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(490);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(445);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(479);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(437);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'u') ADVANCE(399);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'v') ADVANCE(398);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(497);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(414);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(337);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'x') ADVANCE(397);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'y') ADVANCE(411);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(137);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(21);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '\f') ADVANCE(514);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_version_major_minor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_allow_privileged);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_DASH_DASHbranch);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcache_DASHfrom);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_cache_hint);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchmod);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_dir);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_DASH_DASHbuild_DASHarg);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_DASHf);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtarget);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_entrypoint);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_feature_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_force);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_if_exists);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_keep_own);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_keep_ts);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_DASH_DASHmount);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_network_none);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_no_cache);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_pass_args);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_privileged);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_push);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsecret);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_ssh);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_symlink_no_follow);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '\f') ADVANCE(512);
      if (lookahead == '\r') ADVANCE(499);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(499);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(501);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '\f') ADVANCE(511);
      if (lookahead == '\r') ADVANCE(503);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(503);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(503);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(505);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(505);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '\f') ADVANCE(510);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(506);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(507);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '\f') ADVANCE(510);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '\f') ADVANCE(511);
      if (lookahead == '\r') ADVANCE(503);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(503);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '\f') ADVANCE(512);
      if (lookahead == '\r') ADVANCE(499);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(499);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '\f') ADVANCE(514);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '\f') ADVANCE(524);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '+') ADVANCE(462);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(294);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '\f') ADVANCE(525);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(517);
      if (lookahead == '\f') ADVANCE(526);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '+') ADVANCE(462);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(518);
      if (lookahead == '\f') ADVANCE(527);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '+') ADVANCE(462);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(294);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == '\f') ADVANCE(528);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_CRn);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(323);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(458);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '\f') ADVANCE(524);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '+') ADVANCE(462);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(294);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '\f') ADVANCE(525);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(517);
      if (lookahead == '\f') ADVANCE(526);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '+') ADVANCE(462);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(518);
      if (lookahead == '\f') ADVANCE(527);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '+') ADVANCE(462);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(294);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == '\f') ADVANCE(528);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 226},
  [2] = {.lex_state = 35},
  [3] = {.lex_state = 35},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 42, .external_lex_state = 2},
  [10] = {.lex_state = 35},
  [11] = {.lex_state = 42, .external_lex_state = 2},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 42, .external_lex_state = 2},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 35},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 35},
  [18] = {.lex_state = 35},
  [19] = {.lex_state = 35},
  [20] = {.lex_state = 35},
  [21] = {.lex_state = 35},
  [22] = {.lex_state = 226},
  [23] = {.lex_state = 27, .external_lex_state = 2},
  [24] = {.lex_state = 42, .external_lex_state = 2},
  [25] = {.lex_state = 27, .external_lex_state = 2},
  [26] = {.lex_state = 42, .external_lex_state = 2},
  [27] = {.lex_state = 42, .external_lex_state = 2},
  [28] = {.lex_state = 42, .external_lex_state = 2},
  [29] = {.lex_state = 27, .external_lex_state = 2},
  [30] = {.lex_state = 27, .external_lex_state = 2},
  [31] = {.lex_state = 24},
  [32] = {.lex_state = 27, .external_lex_state = 2},
  [33] = {.lex_state = 24},
  [34] = {.lex_state = 24},
  [35] = {.lex_state = 24},
  [36] = {.lex_state = 226},
  [37] = {.lex_state = 42, .external_lex_state = 2},
  [38] = {.lex_state = 42, .external_lex_state = 2},
  [39] = {.lex_state = 24},
  [40] = {.lex_state = 42, .external_lex_state = 2},
  [41] = {.lex_state = 42, .external_lex_state = 2},
  [42] = {.lex_state = 27, .external_lex_state = 2},
  [43] = {.lex_state = 40, .external_lex_state = 2},
  [44] = {.lex_state = 22, .external_lex_state = 2},
  [45] = {.lex_state = 42, .external_lex_state = 2},
  [46] = {.lex_state = 40, .external_lex_state = 2},
  [47] = {.lex_state = 27, .external_lex_state = 2},
  [48] = {.lex_state = 37},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 27, .external_lex_state = 2},
  [51] = {.lex_state = 37},
  [52] = {.lex_state = 42, .external_lex_state = 2},
  [53] = {.lex_state = 27, .external_lex_state = 2},
  [54] = {.lex_state = 0, .external_lex_state = 2},
  [55] = {.lex_state = 226},
  [56] = {.lex_state = 27, .external_lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 2},
  [58] = {.lex_state = 42, .external_lex_state = 2},
  [59] = {.lex_state = 37},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 0, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 225},
  [71] = {.lex_state = 226},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 226},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 226},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 226},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 226},
  [92] = {.lex_state = 226},
  [93] = {.lex_state = 226},
  [94] = {.lex_state = 226},
  [95] = {.lex_state = 226},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 26},
  [98] = {.lex_state = 26},
  [99] = {.lex_state = 226, .external_lex_state = 3},
  [100] = {.lex_state = 36},
  [101] = {.lex_state = 38},
  [102] = {.lex_state = 35},
  [103] = {.lex_state = 35},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 38},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 26},
  [108] = {.lex_state = 26},
  [109] = {.lex_state = 38},
  [110] = {.lex_state = 36},
  [111] = {.lex_state = 226},
  [112] = {.lex_state = 36},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 26},
  [115] = {.lex_state = 226},
  [116] = {.lex_state = 35},
  [117] = {.lex_state = 26},
  [118] = {.lex_state = 226},
  [119] = {.lex_state = 26},
  [120] = {.lex_state = 26},
  [121] = {.lex_state = 26},
  [122] = {.lex_state = 226},
  [123] = {.lex_state = 226},
  [124] = {.lex_state = 26},
  [125] = {.lex_state = 26},
  [126] = {.lex_state = 26},
  [127] = {.lex_state = 226},
  [128] = {.lex_state = 226},
  [129] = {.lex_state = 226},
  [130] = {.lex_state = 26},
  [131] = {.lex_state = 38},
  [132] = {.lex_state = 226},
  [133] = {.lex_state = 226},
  [134] = {.lex_state = 226},
  [135] = {.lex_state = 226},
  [136] = {.lex_state = 26},
  [137] = {.lex_state = 226},
  [138] = {.lex_state = 26},
  [139] = {.lex_state = 226},
  [140] = {.lex_state = 226},
  [141] = {.lex_state = 26},
  [142] = {.lex_state = 37},
  [143] = {.lex_state = 37},
  [144] = {.lex_state = 37},
  [145] = {.lex_state = 37},
  [146] = {.lex_state = 15},
  [147] = {.lex_state = 15},
  [148] = {.lex_state = 15},
  [149] = {.lex_state = 39},
  [150] = {.lex_state = 37},
  [151] = {.lex_state = 37},
  [152] = {.lex_state = 15},
  [153] = {.lex_state = 32},
  [154] = {.lex_state = 39},
  [155] = {.lex_state = 32},
  [156] = {.lex_state = 37},
  [157] = {.lex_state = 39},
  [158] = {.lex_state = 15},
  [159] = {.lex_state = 15},
  [160] = {.lex_state = 15},
  [161] = {.lex_state = 35},
  [162] = {.lex_state = 15},
  [163] = {.lex_state = 15},
  [164] = {.lex_state = 15},
  [165] = {.lex_state = 29},
  [166] = {.lex_state = 15},
  [167] = {.lex_state = 15},
  [168] = {.lex_state = 226},
  [169] = {.lex_state = 15},
  [170] = {.lex_state = 15},
  [171] = {.lex_state = 15},
  [172] = {.lex_state = 15},
  [173] = {.lex_state = 15},
  [174] = {.lex_state = 15},
  [175] = {.lex_state = 15},
  [176] = {.lex_state = 29},
  [177] = {.lex_state = 29},
  [178] = {.lex_state = 29},
  [179] = {.lex_state = 15},
  [180] = {.lex_state = 226},
  [181] = {.lex_state = 29},
  [182] = {.lex_state = 15},
  [183] = {.lex_state = 15},
  [184] = {.lex_state = 15},
  [185] = {.lex_state = 15},
  [186] = {.lex_state = 15},
  [187] = {.lex_state = 15},
  [188] = {.lex_state = 39},
  [189] = {.lex_state = 15},
  [190] = {.lex_state = 29},
  [191] = {.lex_state = 36},
  [192] = {.lex_state = 36},
  [193] = {.lex_state = 31},
  [194] = {.lex_state = 31},
  [195] = {.lex_state = 31},
  [196] = {.lex_state = 39},
  [197] = {.lex_state = 36},
  [198] = {.lex_state = 15},
  [199] = {.lex_state = 36},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 41},
  [204] = {.lex_state = 41},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 41},
  [207] = {.lex_state = 41},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 41},
  [211] = {.lex_state = 41},
  [212] = {.lex_state = 41},
  [213] = {.lex_state = 41},
  [214] = {.lex_state = 29},
  [215] = {.lex_state = 23},
  [216] = {.lex_state = 29},
  [217] = {.lex_state = 29},
  [218] = {.lex_state = 23},
  [219] = {.lex_state = 41},
  [220] = {.lex_state = 41},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 23},
  [223] = {.lex_state = 23},
  [224] = {.lex_state = 23},
  [225] = {.lex_state = 226},
  [226] = {.lex_state = 23},
  [227] = {.lex_state = 23},
  [228] = {.lex_state = 226},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 23},
  [231] = {.lex_state = 23},
  [232] = {.lex_state = 29},
  [233] = {.lex_state = 29},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 34},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 11},
  [239] = {.lex_state = 12},
  [240] = {.lex_state = 29},
  [241] = {.lex_state = 31},
  [242] = {.lex_state = 34},
  [243] = {.lex_state = 31},
  [244] = {.lex_state = 44},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 44},
  [247] = {.lex_state = 34},
  [248] = {.lex_state = 23},
  [249] = {.lex_state = 31},
  [250] = {.lex_state = 31},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 34},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 44},
  [256] = {.lex_state = 34},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 34},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 29},
  [269] = {.lex_state = 23},
  [270] = {.lex_state = 12},
  [271] = {.lex_state = 11},
  [272] = {.lex_state = 12},
  [273] = {.lex_state = 11},
  [274] = {.lex_state = 12},
  [275] = {.lex_state = 11},
  [276] = {.lex_state = 12},
  [277] = {.lex_state = 11},
  [278] = {.lex_state = 12},
  [279] = {.lex_state = 11},
  [280] = {.lex_state = 12},
  [281] = {.lex_state = 11},
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
    [anon_sym_DOCKERFILE] = ACTIONS(1),
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
    [sym_source_file] = STATE(254),
    [sym_arg_command] = STATE(36),
    [sym_from_command] = STATE(36),
    [sym_project_command] = STATE(36),
    [sym_target] = STATE(36),
    [sym_version_command] = STATE(36),
    [aux_sym_source_file_repeat1] = STATE(36),
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
    STATE(10), 1,
      aux_sym_copy_command_repeat1,
    STATE(112), 1,
      aux_sym_copy_command_repeat2,
    STATE(229), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(199), 2,
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
    STATE(100), 1,
      aux_sym_copy_command_repeat2,
    STATE(229), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(199), 2,
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
    STATE(5), 11,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      aux_sym_target_repeat1,
  [154] = 12,
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
    ACTIONS(51), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(6), 11,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      aux_sym_target_repeat1,
  [202] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(53), 1,
      anon_sym_ARG,
    ACTIONS(56), 1,
      anon_sym_FROM,
    ACTIONS(59), 1,
      anon_sym_COPY,
    ACTIONS(62), 1,
      anon_sym_GIT,
    ACTIONS(65), 1,
      anon_sym_LET,
    ACTIONS(68), 1,
      anon_sym_RUN,
    ACTIONS(71), 1,
      anon_sym_SAVE,
    ACTIONS(74), 1,
      anon_sym_SET,
    ACTIONS(77), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(6), 11,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      aux_sym_target_repeat1,
  [250] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(79), 1,
      anon_sym_DASH_DASH,
    ACTIONS(83), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(87), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(89), 1,
      anon_sym_DASH_DASHsecret,
    STATE(8), 1,
      aux_sym_run_command_repeat1,
    STATE(104), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(164), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(81), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(31), 2,
      sym_mount,
      sym_secret,
    ACTIONS(85), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [295] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(83), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(87), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(89), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(91), 1,
      anon_sym_DASH_DASH,
    STATE(12), 1,
      aux_sym_run_command_repeat1,
    STATE(104), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(185), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(81), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(31), 2,
      sym_mount,
      sym_secret,
    ACTIONS(85), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [340] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(95), 1,
      sym_image_name,
    ACTIONS(97), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(99), 1,
      sym_cache_hint,
    ACTIONS(101), 1,
      sym_push,
    ACTIONS(103), 1,
      sym__dedent,
    STATE(11), 1,
      aux_sym_save_image_command_repeat1,
    STATE(28), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(27), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(93), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [383] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(105), 1,
      sym_path,
    ACTIONS(112), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(115), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(118), 1,
      anon_sym_DASH_DASHplatform,
    STATE(10), 1,
      aux_sym_copy_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(107), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    STATE(17), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(109), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [424] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(95), 1,
      sym_image_name,
    ACTIONS(97), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(101), 1,
      sym_push,
    ACTIONS(123), 1,
      sym__dedent,
    STATE(13), 1,
      aux_sym_save_image_command_repeat1,
    STATE(28), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(37), 2,
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
  [464] = 9,
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
    STATE(31), 2,
      sym_mount,
      sym_secret,
    ACTIONS(129), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [501] = 8,
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
    STATE(28), 1,
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
  [535] = 11,
    ACTIONS(148), 1,
      anon_sym_DOCKERFILE,
    ACTIONS(150), 1,
      sym_image_name,
    ACTIONS(152), 1,
      anon_sym_PLUS,
    ACTIONS(156), 1,
      anon_sym_DASH_DASHplatform,
    STATE(23), 1,
      sym_target_ref,
    STATE(103), 1,
      aux_sym_from_command_repeat1,
    STATE(161), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(154), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(65), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(158), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [575] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(160), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(162), 12,
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
  [600] = 10,
    ACTIONS(156), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(164), 1,
      sym_image_name,
    ACTIONS(166), 1,
      anon_sym_PLUS,
    STATE(80), 1,
      sym_target_ref,
    STATE(102), 1,
      aux_sym_from_command_repeat1,
    STATE(161), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(154), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(118), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(168), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [637] = 4,
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
  [662] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(174), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(176), 12,
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
  [687] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(178), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(180), 12,
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
  [712] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(182), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(184), 12,
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
  [737] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(186), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(188), 12,
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
  [762] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    ACTIONS(192), 1,
      anon_sym_ARG,
    ACTIONS(195), 1,
      anon_sym_FROM,
    ACTIONS(198), 1,
      anon_sym_PROJECT,
    ACTIONS(201), 1,
      anon_sym_VERSION,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(22), 6,
      sym_arg_command,
      sym_from_command,
      sym_project_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [796] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(209), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(30), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(207), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [822] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(213), 1,
      anon_sym_COLON2,
    ACTIONS(215), 1,
      anon_sym_AT,
    ACTIONS(217), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(211), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [850] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(209), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(32), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(219), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [876] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(223), 1,
      sym_image_name,
    ACTIONS(226), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(26), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(221), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [904] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(95), 1,
      sym_image_name,
    ACTIONS(230), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(26), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(228), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [932] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(234), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(232), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [956] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(238), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(29), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(236), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [982] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(209), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(29), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(241), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1008] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(245), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(243), 10,
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
  [1032] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(209), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(29), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(247), 9,
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
    ACTIONS(251), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(249), 10,
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
  [1082] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(255), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(253), 10,
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
  [1106] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(160), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(162), 10,
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
  [1130] = 9,
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
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(22), 6,
      sym_arg_command,
      sym_from_command,
      sym_project_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [1164] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(95), 1,
      sym_image_name,
    ACTIONS(261), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(26), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(259), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1192] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(265), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(263), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1216] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(178), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(180), 10,
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
  [1240] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(162), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(160), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1264] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(180), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(178), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1288] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(267), 1,
      anon_sym_COLON2,
    ACTIONS(269), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(217), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1313] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(273), 1,
      anon_sym_AS,
    ACTIONS(275), 1,
      sym_path,
    ACTIONS(277), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(271), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1340] = 4,
    ACTIONS(281), 1,
      aux_sym_branch_token1,
    ACTIONS(283), 1,
      sym__dedent,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(279), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_DASH_DASH2,
  [1363] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(287), 1,
      anon_sym_AT,
    ACTIONS(289), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(285), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1388] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(293), 1,
      anon_sym_AS,
    ACTIONS(295), 1,
      sym_path,
    ACTIONS(297), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(291), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1415] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(299), 10,
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
  [1435] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(301), 1,
      sym_path,
    ACTIONS(303), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(305), 1,
      anon_sym_DASHf,
    ACTIONS(307), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(309), 1,
      anon_sym_DASH_DASHplatform,
    STATE(51), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(156), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [1467] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(313), 1,
      anon_sym_AS,
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
  [1489] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(162), 10,
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
  [1509] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(303), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(305), 1,
      anon_sym_DASHf,
    ACTIONS(307), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(309), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(315), 1,
      sym_path,
    STATE(59), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(156), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [1541] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(319), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(317), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1563] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(180), 10,
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
  [1583] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(321), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(289), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1605] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(325), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(236), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(55), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(323), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [1631] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(328), 10,
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
  [1651] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(332), 1,
      anon_sym_AS,
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
  [1673] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(336), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(334), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      sym_image_name,
  [1695] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(338), 1,
      sym_path,
    ACTIONS(340), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(343), 1,
      anon_sym_DASHf,
    ACTIONS(346), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(349), 1,
      anon_sym_DASH_DASHplatform,
    STATE(59), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(156), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [1727] = 3,
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
  [1746] = 3,
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
  [1765] = 3,
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
  [1784] = 3,
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
  [1803] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(358), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
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
    ACTIONS(207), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1841] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(360), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1860] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(362), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1879] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(364), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [1898] = 3,
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
  [1917] = 4,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(368), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(279), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
  [1938] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    ACTIONS(372), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(55), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(370), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [1963] = 3,
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
  [1982] = 3,
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
  [2001] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(319), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2020] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(378), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2039] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(380), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
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
    ACTIONS(382), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2077] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(384), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2096] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(386), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2115] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(372), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(88), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(388), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2140] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(390), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2159] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(392), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2178] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(372), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(71), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(394), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2203] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(396), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2222] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(398), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2241] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(400), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2260] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(402), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2279] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(372), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(55), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(404), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2304] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(406), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2323] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(408), 9,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
  [2342] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(162), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(160), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2362] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(299), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(410), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2382] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(328), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_DASH_DASH2,
    ACTIONS(412), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2402] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(180), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(178), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2422] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(414), 1,
      anon_sym_COLON2,
    ACTIONS(416), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(211), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2446] = 4,
    STATE(96), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(418), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(421), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2465] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(423), 1,
      sym_expr,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 1,
      anon_sym_SQUOTE,
    ACTIONS(429), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(169), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2490] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 1,
      anon_sym_SQUOTE,
    ACTIONS(431), 1,
      sym_expr,
    ACTIONS(433), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(171), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2515] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(435), 1,
      ts_builtin_sym_end,
    ACTIONS(439), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(437), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2536] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      sym_path,
    STATE(110), 1,
      aux_sym_copy_command_repeat2,
    STATE(229), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(199), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [2563] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(443), 1,
      sym_path,
    STATE(101), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(445), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [2584] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(31), 1,
      anon_sym_DASH_DASHplatform,
    STATE(83), 1,
      sym_target_ref,
    STATE(116), 1,
      aux_sym_from_command_repeat1,
    STATE(161), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(448), 2,
      sym_allow_privileged,
      sym_pass_args,
  [2611] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(31), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(450), 1,
      anon_sym_PLUS,
    STATE(25), 1,
      sym_target_ref,
    STATE(116), 1,
      aux_sym_from_command_repeat1,
    STATE(161), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(448), 2,
      sym_allow_privileged,
      sym_pass_args,
  [2638] = 4,
    STATE(96), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(452), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(454), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2657] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(456), 1,
      sym_path,
    STATE(109), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(458), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [2678] = 4,
    STATE(78), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(460), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(462), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2697] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 1,
      anon_sym_SQUOTE,
    ACTIONS(464), 1,
      sym_expr,
    ACTIONS(466), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(187), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2722] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 1,
      anon_sym_SQUOTE,
    ACTIONS(468), 1,
      sym_expr,
    ACTIONS(470), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(183), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2747] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(472), 1,
      sym_path,
    STATE(101), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(458), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [2768] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(474), 1,
      sym_path,
    ACTIONS(477), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      aux_sym_copy_command_repeat2,
    STATE(229), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(199), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [2795] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    ACTIONS(483), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(285), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2816] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(485), 1,
      sym_path,
    STATE(110), 1,
      aux_sym_copy_command_repeat2,
    STATE(229), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(199), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [2843] = 4,
    STATE(84), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(460), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(487), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2862] = 6,
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
    STATE(92), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2884] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(495), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(497), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2902] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(499), 1,
      anon_sym_PLUS,
    ACTIONS(504), 1,
      anon_sym_DASH_DASHplatform,
    STATE(116), 1,
      aux_sym_from_command_repeat1,
    STATE(161), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(501), 2,
      sym_allow_privileged,
      sym_pass_args,
  [2926] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(507), 1,
      anon_sym_DQUOTE,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    ACTIONS(511), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(38), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2948] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(388), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2966] = 6,
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
    STATE(21), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2988] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(513), 1,
      anon_sym_DQUOTE,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(519), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(20), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3010] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(513), 1,
      anon_sym_DQUOTE,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(18), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3032] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(523), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3050] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(525), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(527), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3068] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(162), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3090] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(531), 1,
      anon_sym_DQUOTE,
    ACTIONS(533), 1,
      anon_sym_SQUOTE,
    ACTIONS(535), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(33), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3112] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(531), 1,
      anon_sym_DQUOTE,
    ACTIONS(533), 1,
      anon_sym_SQUOTE,
    ACTIONS(537), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(34), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3134] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(541), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3152] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(334), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3170] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(543), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(545), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3188] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(551), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(47), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3210] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(553), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(555), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [3228] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(317), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3246] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(557), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3264] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(559), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3282] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(561), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(563), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3300] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(565), 1,
      anon_sym_DQUOTE,
    ACTIONS(567), 1,
      anon_sym_SQUOTE,
    ACTIONS(569), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(151), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3322] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(571), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3340] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 1,
      anon_sym_SQUOTE,
    ACTIONS(573), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(163), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3362] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(575), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3380] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(406), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(577), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3398] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(565), 1,
      anon_sym_DQUOTE,
    ACTIONS(567), 1,
      anon_sym_SQUOTE,
    ACTIONS(579), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(150), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3420] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(178), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(180), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [3437] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(160), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(162), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [3454] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(581), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(583), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [3471] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(585), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(587), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [3488] = 4,
    ACTIONS(589), 1,
      anon_sym_EQ,
    STATE(63), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(591), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3505] = 4,
    ACTIONS(593), 1,
      anon_sym_EQ,
    STATE(137), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(595), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3522] = 4,
    ACTIONS(597), 1,
      anon_sym_EQ,
    STATE(122), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(599), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3539] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(601), 1,
      sym_path,
    ACTIONS(603), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(606), 1,
      sym_keep_ts,
    STATE(149), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(188), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3562] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(174), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(176), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [3579] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(609), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(611), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [3596] = 4,
    ACTIONS(613), 1,
      anon_sym_EQ,
    STATE(64), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(615), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3613] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(81), 1,
      aux_sym_shell_fragment_token3,
    STATE(104), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(160), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(83), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [3634] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(617), 1,
      sym_path,
    ACTIONS(619), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(621), 1,
      sym_keep_ts,
    STATE(149), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(188), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3657] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(81), 1,
      aux_sym_shell_fragment_token3,
    STATE(104), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(186), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(83), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [3678] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(623), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(625), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [3695] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(619), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(621), 1,
      sym_keep_ts,
    ACTIONS(627), 1,
      sym_path,
    STATE(154), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(188), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3718] = 3,
    STATE(61), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(629), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3732] = 3,
    STATE(60), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(631), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3746] = 3,
    STATE(75), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(633), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3760] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(635), 4,
      anon_sym_PLUS,
      sym_allow_privileged,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
  [3774] = 3,
    STATE(76), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(637), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3788] = 3,
    STATE(73), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(639), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3802] = 3,
    STATE(90), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(641), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3816] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(643), 1,
      sym_identifier,
    STATE(181), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(645), 2,
      sym_global,
      sym_required,
  [3834] = 3,
    STATE(134), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(647), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3848] = 3,
    STATE(135), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(649), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3862] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(372), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(180), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [3880] = 3,
    STATE(133), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(653), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3894] = 3,
    STATE(139), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(655), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3908] = 3,
    STATE(89), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(657), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3922] = 3,
    STATE(72), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(659), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3936] = 3,
    STATE(87), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(661), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3950] = 3,
    STATE(99), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(663), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3964] = 3,
    STATE(79), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(665), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3978] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(667), 1,
      sym_identifier,
    STATE(177), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(645), 2,
      sym_global,
      sym_required,
  [3996] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(669), 1,
      sym_identifier,
    STATE(177), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(671), 2,
      sym_global,
      sym_required,
  [4014] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(674), 1,
      sym_identifier,
    STATE(176), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(645), 2,
      sym_global,
      sym_required,
  [4032] = 3,
    STATE(85), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(676), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4046] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(372), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(55), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [4064] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(680), 1,
      sym_identifier,
    STATE(177), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(645), 2,
      sym_global,
      sym_required,
  [4082] = 3,
    STATE(123), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(682), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4096] = 3,
    STATE(77), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(684), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4110] = 3,
    STATE(129), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(686), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4124] = 3,
    STATE(81), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(688), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4138] = 3,
    STATE(82), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(690), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4152] = 3,
    STATE(140), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(692), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4166] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(694), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(696), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [4181] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(160), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4192] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(698), 3,
      sym_identifier,
      sym_global,
      sym_required,
  [4205] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(700), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(702), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [4220] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(704), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(706), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [4235] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(708), 1,
      sym_version_major_minor,
    ACTIONS(710), 1,
      sym_feature_flag,
    STATE(193), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4252] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(713), 1,
      sym_version_major_minor,
    ACTIONS(715), 1,
      sym_feature_flag,
    STATE(195), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4269] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(717), 1,
      sym_version_major_minor,
    ACTIONS(719), 1,
      sym_feature_flag,
    STATE(193), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4286] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(721), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(723), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [4301] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(725), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(727), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [4316] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(178), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4327] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(460), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(729), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [4342] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(731), 1,
      anon_sym_ARTIFACT,
    ACTIONS(733), 1,
      anon_sym_IMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4356] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    STATE(221), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4370] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(735), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4381] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(737), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4392] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(739), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4403] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(741), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4414] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(743), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4425] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(745), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4436] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(747), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4447] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(749), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4458] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(751), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4469] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(753), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4480] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(755), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4491] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(757), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4502] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(759), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4513] = 2,
    ACTIONS(761), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4522] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4533] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(765), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4544] = 2,
    ACTIONS(767), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4553] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(769), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4564] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(771), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4575] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(773), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4586] = 2,
    ACTIONS(775), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4595] = 2,
    ACTIONS(777), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4604] = 2,
    ACTIONS(779), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4613] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(781), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4624] = 2,
    ACTIONS(783), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4633] = 2,
    ACTIONS(785), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4642] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(787), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4653] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(789), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4664] = 2,
    ACTIONS(791), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4673] = 2,
    ACTIONS(793), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4682] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(795), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4693] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(797), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4704] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(799), 1,
      anon_sym_CLONE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4715] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(801), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4726] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(803), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4737] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(805), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4748] = 2,
    ACTIONS(807), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4757] = 2,
    ACTIONS(809), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4766] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(811), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4777] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(813), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4788] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(815), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4799] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(817), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4810] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(819), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4821] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(821), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4832] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(823), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4843] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(825), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4854] = 2,
    ACTIONS(827), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4863] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(829), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4874] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(831), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4885] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(833), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4896] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(835), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4907] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(837), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4918] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(839), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4929] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(841), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4940] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(843), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4951] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(845), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4962] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(847), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4973] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(849), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4984] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(851), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4995] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(853), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5006] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(855), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5017] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(857), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5028] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(859), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5039] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(861), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5050] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(863), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5061] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(865), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5072] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(867), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5083] = 2,
    ACTIONS(869), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5092] = 2,
    ACTIONS(871), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5101] = 2,
    ACTIONS(873), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5110] = 2,
    ACTIONS(875), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5119] = 2,
    ACTIONS(877), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5128] = 2,
    ACTIONS(879), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5137] = 2,
    ACTIONS(881), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5146] = 2,
    ACTIONS(883), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5155] = 2,
    ACTIONS(885), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5164] = 2,
    ACTIONS(887), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5173] = 2,
    ACTIONS(889), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5182] = 2,
    ACTIONS(891), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5191] = 2,
    ACTIONS(893), 1,
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
  [SMALL_STATE(5)] = 154,
  [SMALL_STATE(6)] = 202,
  [SMALL_STATE(7)] = 250,
  [SMALL_STATE(8)] = 295,
  [SMALL_STATE(9)] = 340,
  [SMALL_STATE(10)] = 383,
  [SMALL_STATE(11)] = 424,
  [SMALL_STATE(12)] = 464,
  [SMALL_STATE(13)] = 501,
  [SMALL_STATE(14)] = 535,
  [SMALL_STATE(15)] = 575,
  [SMALL_STATE(16)] = 600,
  [SMALL_STATE(17)] = 637,
  [SMALL_STATE(18)] = 662,
  [SMALL_STATE(19)] = 687,
  [SMALL_STATE(20)] = 712,
  [SMALL_STATE(21)] = 737,
  [SMALL_STATE(22)] = 762,
  [SMALL_STATE(23)] = 796,
  [SMALL_STATE(24)] = 822,
  [SMALL_STATE(25)] = 850,
  [SMALL_STATE(26)] = 876,
  [SMALL_STATE(27)] = 904,
  [SMALL_STATE(28)] = 932,
  [SMALL_STATE(29)] = 956,
  [SMALL_STATE(30)] = 982,
  [SMALL_STATE(31)] = 1008,
  [SMALL_STATE(32)] = 1032,
  [SMALL_STATE(33)] = 1058,
  [SMALL_STATE(34)] = 1082,
  [SMALL_STATE(35)] = 1106,
  [SMALL_STATE(36)] = 1130,
  [SMALL_STATE(37)] = 1164,
  [SMALL_STATE(38)] = 1192,
  [SMALL_STATE(39)] = 1216,
  [SMALL_STATE(40)] = 1240,
  [SMALL_STATE(41)] = 1264,
  [SMALL_STATE(42)] = 1288,
  [SMALL_STATE(43)] = 1313,
  [SMALL_STATE(44)] = 1340,
  [SMALL_STATE(45)] = 1363,
  [SMALL_STATE(46)] = 1388,
  [SMALL_STATE(47)] = 1415,
  [SMALL_STATE(48)] = 1435,
  [SMALL_STATE(49)] = 1467,
  [SMALL_STATE(50)] = 1489,
  [SMALL_STATE(51)] = 1509,
  [SMALL_STATE(52)] = 1541,
  [SMALL_STATE(53)] = 1563,
  [SMALL_STATE(54)] = 1583,
  [SMALL_STATE(55)] = 1605,
  [SMALL_STATE(56)] = 1631,
  [SMALL_STATE(57)] = 1651,
  [SMALL_STATE(58)] = 1673,
  [SMALL_STATE(59)] = 1695,
  [SMALL_STATE(60)] = 1727,
  [SMALL_STATE(61)] = 1746,
  [SMALL_STATE(62)] = 1765,
  [SMALL_STATE(63)] = 1784,
  [SMALL_STATE(64)] = 1803,
  [SMALL_STATE(65)] = 1822,
  [SMALL_STATE(66)] = 1841,
  [SMALL_STATE(67)] = 1860,
  [SMALL_STATE(68)] = 1879,
  [SMALL_STATE(69)] = 1898,
  [SMALL_STATE(70)] = 1917,
  [SMALL_STATE(71)] = 1938,
  [SMALL_STATE(72)] = 1963,
  [SMALL_STATE(73)] = 1982,
  [SMALL_STATE(74)] = 2001,
  [SMALL_STATE(75)] = 2020,
  [SMALL_STATE(76)] = 2039,
  [SMALL_STATE(77)] = 2058,
  [SMALL_STATE(78)] = 2077,
  [SMALL_STATE(79)] = 2096,
  [SMALL_STATE(80)] = 2115,
  [SMALL_STATE(81)] = 2140,
  [SMALL_STATE(82)] = 2159,
  [SMALL_STATE(83)] = 2178,
  [SMALL_STATE(84)] = 2203,
  [SMALL_STATE(85)] = 2222,
  [SMALL_STATE(86)] = 2241,
  [SMALL_STATE(87)] = 2260,
  [SMALL_STATE(88)] = 2279,
  [SMALL_STATE(89)] = 2304,
  [SMALL_STATE(90)] = 2323,
  [SMALL_STATE(91)] = 2342,
  [SMALL_STATE(92)] = 2362,
  [SMALL_STATE(93)] = 2382,
  [SMALL_STATE(94)] = 2402,
  [SMALL_STATE(95)] = 2422,
  [SMALL_STATE(96)] = 2446,
  [SMALL_STATE(97)] = 2465,
  [SMALL_STATE(98)] = 2490,
  [SMALL_STATE(99)] = 2515,
  [SMALL_STATE(100)] = 2536,
  [SMALL_STATE(101)] = 2563,
  [SMALL_STATE(102)] = 2584,
  [SMALL_STATE(103)] = 2611,
  [SMALL_STATE(104)] = 2638,
  [SMALL_STATE(105)] = 2657,
  [SMALL_STATE(106)] = 2678,
  [SMALL_STATE(107)] = 2697,
  [SMALL_STATE(108)] = 2722,
  [SMALL_STATE(109)] = 2747,
  [SMALL_STATE(110)] = 2768,
  [SMALL_STATE(111)] = 2795,
  [SMALL_STATE(112)] = 2816,
  [SMALL_STATE(113)] = 2843,
  [SMALL_STATE(114)] = 2862,
  [SMALL_STATE(115)] = 2884,
  [SMALL_STATE(116)] = 2902,
  [SMALL_STATE(117)] = 2926,
  [SMALL_STATE(118)] = 2948,
  [SMALL_STATE(119)] = 2966,
  [SMALL_STATE(120)] = 2988,
  [SMALL_STATE(121)] = 3010,
  [SMALL_STATE(122)] = 3032,
  [SMALL_STATE(123)] = 3050,
  [SMALL_STATE(124)] = 3068,
  [SMALL_STATE(125)] = 3090,
  [SMALL_STATE(126)] = 3112,
  [SMALL_STATE(127)] = 3134,
  [SMALL_STATE(128)] = 3152,
  [SMALL_STATE(129)] = 3170,
  [SMALL_STATE(130)] = 3188,
  [SMALL_STATE(131)] = 3210,
  [SMALL_STATE(132)] = 3228,
  [SMALL_STATE(133)] = 3246,
  [SMALL_STATE(134)] = 3264,
  [SMALL_STATE(135)] = 3282,
  [SMALL_STATE(136)] = 3300,
  [SMALL_STATE(137)] = 3322,
  [SMALL_STATE(138)] = 3340,
  [SMALL_STATE(139)] = 3362,
  [SMALL_STATE(140)] = 3380,
  [SMALL_STATE(141)] = 3398,
  [SMALL_STATE(142)] = 3420,
  [SMALL_STATE(143)] = 3437,
  [SMALL_STATE(144)] = 3454,
  [SMALL_STATE(145)] = 3471,
  [SMALL_STATE(146)] = 3488,
  [SMALL_STATE(147)] = 3505,
  [SMALL_STATE(148)] = 3522,
  [SMALL_STATE(149)] = 3539,
  [SMALL_STATE(150)] = 3562,
  [SMALL_STATE(151)] = 3579,
  [SMALL_STATE(152)] = 3596,
  [SMALL_STATE(153)] = 3613,
  [SMALL_STATE(154)] = 3634,
  [SMALL_STATE(155)] = 3657,
  [SMALL_STATE(156)] = 3678,
  [SMALL_STATE(157)] = 3695,
  [SMALL_STATE(158)] = 3718,
  [SMALL_STATE(159)] = 3732,
  [SMALL_STATE(160)] = 3746,
  [SMALL_STATE(161)] = 3760,
  [SMALL_STATE(162)] = 3774,
  [SMALL_STATE(163)] = 3788,
  [SMALL_STATE(164)] = 3802,
  [SMALL_STATE(165)] = 3816,
  [SMALL_STATE(166)] = 3834,
  [SMALL_STATE(167)] = 3848,
  [SMALL_STATE(168)] = 3862,
  [SMALL_STATE(169)] = 3880,
  [SMALL_STATE(170)] = 3894,
  [SMALL_STATE(171)] = 3908,
  [SMALL_STATE(172)] = 3922,
  [SMALL_STATE(173)] = 3936,
  [SMALL_STATE(174)] = 3950,
  [SMALL_STATE(175)] = 3964,
  [SMALL_STATE(176)] = 3978,
  [SMALL_STATE(177)] = 3996,
  [SMALL_STATE(178)] = 4014,
  [SMALL_STATE(179)] = 4032,
  [SMALL_STATE(180)] = 4046,
  [SMALL_STATE(181)] = 4064,
  [SMALL_STATE(182)] = 4082,
  [SMALL_STATE(183)] = 4096,
  [SMALL_STATE(184)] = 4110,
  [SMALL_STATE(185)] = 4124,
  [SMALL_STATE(186)] = 4138,
  [SMALL_STATE(187)] = 4152,
  [SMALL_STATE(188)] = 4166,
  [SMALL_STATE(189)] = 4181,
  [SMALL_STATE(190)] = 4192,
  [SMALL_STATE(191)] = 4205,
  [SMALL_STATE(192)] = 4220,
  [SMALL_STATE(193)] = 4235,
  [SMALL_STATE(194)] = 4252,
  [SMALL_STATE(195)] = 4269,
  [SMALL_STATE(196)] = 4286,
  [SMALL_STATE(197)] = 4301,
  [SMALL_STATE(198)] = 4316,
  [SMALL_STATE(199)] = 4327,
  [SMALL_STATE(200)] = 4342,
  [SMALL_STATE(201)] = 4356,
  [SMALL_STATE(202)] = 4370,
  [SMALL_STATE(203)] = 4381,
  [SMALL_STATE(204)] = 4392,
  [SMALL_STATE(205)] = 4403,
  [SMALL_STATE(206)] = 4414,
  [SMALL_STATE(207)] = 4425,
  [SMALL_STATE(208)] = 4436,
  [SMALL_STATE(209)] = 4447,
  [SMALL_STATE(210)] = 4458,
  [SMALL_STATE(211)] = 4469,
  [SMALL_STATE(212)] = 4480,
  [SMALL_STATE(213)] = 4491,
  [SMALL_STATE(214)] = 4502,
  [SMALL_STATE(215)] = 4513,
  [SMALL_STATE(216)] = 4522,
  [SMALL_STATE(217)] = 4533,
  [SMALL_STATE(218)] = 4544,
  [SMALL_STATE(219)] = 4553,
  [SMALL_STATE(220)] = 4564,
  [SMALL_STATE(221)] = 4575,
  [SMALL_STATE(222)] = 4586,
  [SMALL_STATE(223)] = 4595,
  [SMALL_STATE(224)] = 4604,
  [SMALL_STATE(225)] = 4613,
  [SMALL_STATE(226)] = 4624,
  [SMALL_STATE(227)] = 4633,
  [SMALL_STATE(228)] = 4642,
  [SMALL_STATE(229)] = 4653,
  [SMALL_STATE(230)] = 4664,
  [SMALL_STATE(231)] = 4673,
  [SMALL_STATE(232)] = 4682,
  [SMALL_STATE(233)] = 4693,
  [SMALL_STATE(234)] = 4704,
  [SMALL_STATE(235)] = 4715,
  [SMALL_STATE(236)] = 4726,
  [SMALL_STATE(237)] = 4737,
  [SMALL_STATE(238)] = 4748,
  [SMALL_STATE(239)] = 4757,
  [SMALL_STATE(240)] = 4766,
  [SMALL_STATE(241)] = 4777,
  [SMALL_STATE(242)] = 4788,
  [SMALL_STATE(243)] = 4799,
  [SMALL_STATE(244)] = 4810,
  [SMALL_STATE(245)] = 4821,
  [SMALL_STATE(246)] = 4832,
  [SMALL_STATE(247)] = 4843,
  [SMALL_STATE(248)] = 4854,
  [SMALL_STATE(249)] = 4863,
  [SMALL_STATE(250)] = 4874,
  [SMALL_STATE(251)] = 4885,
  [SMALL_STATE(252)] = 4896,
  [SMALL_STATE(253)] = 4907,
  [SMALL_STATE(254)] = 4918,
  [SMALL_STATE(255)] = 4929,
  [SMALL_STATE(256)] = 4940,
  [SMALL_STATE(257)] = 4951,
  [SMALL_STATE(258)] = 4962,
  [SMALL_STATE(259)] = 4973,
  [SMALL_STATE(260)] = 4984,
  [SMALL_STATE(261)] = 4995,
  [SMALL_STATE(262)] = 5006,
  [SMALL_STATE(263)] = 5017,
  [SMALL_STATE(264)] = 5028,
  [SMALL_STATE(265)] = 5039,
  [SMALL_STATE(266)] = 5050,
  [SMALL_STATE(267)] = 5061,
  [SMALL_STATE(268)] = 5072,
  [SMALL_STATE(269)] = 5083,
  [SMALL_STATE(270)] = 5092,
  [SMALL_STATE(271)] = 5101,
  [SMALL_STATE(272)] = 5110,
  [SMALL_STATE(273)] = 5119,
  [SMALL_STATE(274)] = 5128,
  [SMALL_STATE(275)] = 5137,
  [SMALL_STATE(276)] = 5146,
  [SMALL_STATE(277)] = 5155,
  [SMALL_STATE(278)] = 5164,
  [SMALL_STATE(279)] = 5173,
  [SMALL_STATE(280)] = 5182,
  [SMALL_STATE(281)] = 5191,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(165),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(14),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(3),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(234),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(233),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(7),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(200),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(232),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(17),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(231),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(230),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(248),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 3, .production_id = 24),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3, .production_id = 24),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(31),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(227),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(226),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(215),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(28),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_platform, 3, .production_id = 10),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_platform, 3, .production_id = 10),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chown, 3, .production_id = 10),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chown, 3, .production_id = 10),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(178),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(217),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(194),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(268),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(24),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(249),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount, 3, .production_id = 10),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount, 3, .production_id = 10),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_secret, 3, .production_id = 10),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_secret, 3, .production_id = 10),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 4, .production_id = 24),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 4, .production_id = 24),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 22),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 22),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 30),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 30),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 4, .production_id = 18),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 35),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 5, .production_id = 17),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 5, .production_id = 17),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(241),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 29),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(224),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(223),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(222),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(269),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 5, .production_id = 33),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 8, .production_id = 41),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 7, .production_id = 40),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 7, .production_id = 39),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 6, .production_id = 38),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 6, .production_id = 37),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_command, 5, .production_id = 18),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 5, .production_id = 34),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_command, 5, .production_id = 18),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 5, .production_id = 32),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_dockerfile_command, 5, .production_id = 31),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 28),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 27),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 4, .production_id = 26),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_dockerfile_command, 4, .production_id = 25),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3, .production_id = 23),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 3, .production_id = 21),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 4, .production_id = 18),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(96),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 3, .production_id = 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(131),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 19),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 20), SHIFT_REPEAT(199),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 20), SHIFT_REPEAT(250),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 20), SHIFT_REPEAT(201),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 2),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 5, .production_id = 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(161),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(248),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6, .production_id = 2),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 6, .production_id = 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_target, 3, .production_id = 10),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_target, 3, .production_id = 10),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_file, 3, .production_id = 10),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_file, 3, .production_id = 10),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(218),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(188),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_build_arg, 4, .production_id = 36),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_build_arg, 4, .production_id = 36),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 1, .production_id = 1),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 1, .production_id = 1),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 1, .production_id = 1),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(190),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 1, .production_id = 1),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 6),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 6),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 5),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 5),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2), SHIFT_REPEAT(193),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 3, .production_id = 10),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3, .production_id = 10),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact, 3),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact, 3),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 19),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [839] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
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
