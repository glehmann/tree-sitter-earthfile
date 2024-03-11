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
#define STATE_COUNT 536
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 149
#define ALIAS_COUNT 0
#define TOKEN_COUNT 88
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 52

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
  anon_sym_FROMDOCKERFILE = 10,
  anon_sym_GIT = 11,
  anon_sym_CLONE = 12,
  anon_sym_IF = 13,
  anon_sym_ELSEIF = 14,
  anon_sym_ELSE = 15,
  anon_sym_END = 16,
  anon_sym_LET = 17,
  anon_sym_RUN = 18,
  anon_sym_DASH_DASH = 19,
  anon_sym_SAVEARTIFACT = 20,
  anon_sym_ASLOCAL = 21,
  anon_sym_SAVEIMAGE = 22,
  anon_sym_SET = 23,
  anon_sym_WITHDOCKER = 24,
  sym_expr = 25,
  sym_identifier = 26,
  anon_sym_COLON2 = 27,
  anon_sym_AT = 28,
  sym_image_name = 29,
  sym_image_tag = 30,
  sym_image_digest = 31,
  sym_immediate_identifier = 32,
  sym_path = 33,
  aux_sym_shell_fragment_token1 = 34,
  aux_sym_shell_fragment_token2 = 35,
  aux_sym_shell_fragment_token3 = 36,
  anon_sym_PLUS = 37,
  anon_sym_LPAREN = 38,
  anon_sym_RPAREN = 39,
  sym_version_major_minor = 40,
  sym_allow_privileged = 41,
  anon_sym_DASH_DASHbranch = 42,
  aux_sym_branch_token1 = 43,
  anon_sym_DASH_DASH2 = 44,
  anon_sym_DASH_DASHcache_DASHfrom = 45,
  sym_cache_hint = 46,
  anon_sym_DASH_DASHchmod = 47,
  anon_sym_DASH_DASHchown = 48,
  anon_sym_DASH_DASHcompose = 49,
  sym_dir = 50,
  anon_sym_DASH_DASHbuild_DASHarg = 51,
  anon_sym_DASHf = 52,
  anon_sym_DASH_DASHtarget = 53,
  sym_entrypoint = 54,
  sym_feature_flag = 55,
  sym_force = 56,
  sym_global = 57,
  sym_if_exists = 58,
  sym_keep_own = 59,
  sym_keep_ts = 60,
  anon_sym_DASH_DASHload = 61,
  anon_sym_DASH_DASHmount = 62,
  sym_network_none = 63,
  sym_no_cache = 64,
  sym_pass_args = 65,
  anon_sym_DASH_DASHplatform = 66,
  sym_privileged = 67,
  anon_sym_DASH_DASHpull = 68,
  sym_push = 69,
  sym_required = 70,
  anon_sym_DASH_DASHsecret = 71,
  anon_sym_DASH_DASHservice = 72,
  sym_ssh = 73,
  sym_symlink_no_follow = 74,
  anon_sym_DQUOTE = 75,
  aux_sym_double_quoted_string_token1 = 76,
  anon_sym_SQUOTE = 77,
  aux_sym_single_quoted_string_token1 = 78,
  sym_unquoted_string = 79,
  sym_line_continuation = 80,
  sym_comment = 81,
  sym_line_continuation_comment = 82,
  anon_sym_LF = 83,
  anon_sym_CRn = 84,
  anon_sym_FF = 85,
  sym__indent = 86,
  sym__dedent = 87,
  sym_source_file = 88,
  sym_arg_command = 89,
  sym_from_command = 90,
  sym_project_command = 91,
  sym_target = 92,
  sym_version_command = 93,
  sym_copy_command = 94,
  sym_from_dockerfile_command = 95,
  sym_git_clone_command = 96,
  sym_if_command = 97,
  sym_let_command = 98,
  sym_run_command = 99,
  sym_save_artifact_command = 100,
  sym_save_image_command = 101,
  sym_set_command = 102,
  sym_with_docker_command = 103,
  aux_sym__target_block = 104,
  sym__conditional_block = 105,
  sym_else_if_block = 106,
  sym_else_block = 107,
  sym_image_spec = 108,
  sym_shell_fragment = 109,
  sym_target_ref = 110,
  sym_target_artifact = 111,
  sym_target_artifact_build_args = 112,
  sym_branch = 113,
  sym_build_arg = 114,
  sym_cache_from = 115,
  sym_chmod = 116,
  sym_chown = 117,
  sym_compose = 118,
  sym_docker_build_arg = 119,
  sym_docker_file = 120,
  sym_docker_target = 121,
  sym_load = 122,
  sym_mount = 123,
  sym_platform = 124,
  sym_pull = 125,
  sym_secret = 126,
  sym_service = 127,
  sym__string = 128,
  sym_double_quoted_string = 129,
  sym_single_quoted_string = 130,
  sym__eol = 131,
  aux_sym_source_file_repeat1 = 132,
  aux_sym_arg_command_repeat1 = 133,
  aux_sym_build_command_repeat2 = 134,
  aux_sym_from_command_repeat1 = 135,
  aux_sym_version_command_repeat1 = 136,
  aux_sym_copy_command_repeat1 = 137,
  aux_sym_copy_command_repeat2 = 138,
  aux_sym_from_dockerfile_command_repeat1 = 139,
  aux_sym_git_clone_command_repeat1 = 140,
  aux_sym_if_command_repeat1 = 141,
  aux_sym_run_command_repeat1 = 142,
  aux_sym_save_artifact_command_repeat1 = 143,
  aux_sym_save_image_command_repeat1 = 144,
  aux_sym_save_image_command_repeat2 = 145,
  aux_sym_with_docker_command_repeat1 = 146,
  aux_sym__conditional_block_repeat1 = 147,
  aux_sym_shell_fragment_repeat1 = 148,
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
  [anon_sym_FROMDOCKERFILE] = "FROM DOCKERFILE",
  [anon_sym_GIT] = "GIT",
  [anon_sym_CLONE] = "CLONE",
  [anon_sym_IF] = "IF",
  [anon_sym_ELSEIF] = "ELSE IF",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_END] = "END",
  [anon_sym_LET] = "LET",
  [anon_sym_RUN] = "RUN",
  [anon_sym_DASH_DASH] = " -- ",
  [anon_sym_SAVEARTIFACT] = "SAVE ARTIFACT",
  [anon_sym_ASLOCAL] = "AS LOCAL",
  [anon_sym_SAVEIMAGE] = "SAVE IMAGE",
  [anon_sym_SET] = "SET",
  [anon_sym_WITHDOCKER] = "WITH DOCKER",
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
  [anon_sym_DASH_DASHcompose] = "--compose",
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
  [anon_sym_DASH_DASHload] = "--load",
  [anon_sym_DASH_DASHmount] = "--mount",
  [sym_network_none] = "network_none",
  [sym_no_cache] = "no_cache",
  [sym_pass_args] = "pass_args",
  [anon_sym_DASH_DASHplatform] = "--platform",
  [sym_privileged] = "privileged",
  [anon_sym_DASH_DASHpull] = "--pull",
  [sym_push] = "push",
  [sym_required] = "required",
  [anon_sym_DASH_DASHsecret] = "--secret",
  [anon_sym_DASH_DASHservice] = "--service",
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
  [sym_if_command] = "if_command",
  [sym_let_command] = "let_command",
  [sym_run_command] = "run_command",
  [sym_save_artifact_command] = "save_artifact_command",
  [sym_save_image_command] = "save_image_command",
  [sym_set_command] = "set_command",
  [sym_with_docker_command] = "with_docker_command",
  [aux_sym__target_block] = "_target_block",
  [sym__conditional_block] = "_conditional_block",
  [sym_else_if_block] = "else_if_block",
  [sym_else_block] = "else_block",
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
  [sym_compose] = "compose",
  [sym_docker_build_arg] = "docker_build_arg",
  [sym_docker_file] = "docker_file",
  [sym_docker_target] = "docker_target",
  [sym_load] = "load",
  [sym_mount] = "mount",
  [sym_platform] = "platform",
  [sym_pull] = "pull",
  [sym_secret] = "secret",
  [sym_service] = "service",
  [sym__string] = "_string",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym__eol] = "_eol",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_arg_command_repeat1] = "arg_command_repeat1",
  [aux_sym_build_command_repeat2] = "build_command_repeat2",
  [aux_sym_from_command_repeat1] = "from_command_repeat1",
  [aux_sym_version_command_repeat1] = "version_command_repeat1",
  [aux_sym_copy_command_repeat1] = "copy_command_repeat1",
  [aux_sym_copy_command_repeat2] = "copy_command_repeat2",
  [aux_sym_from_dockerfile_command_repeat1] = "from_dockerfile_command_repeat1",
  [aux_sym_git_clone_command_repeat1] = "git_clone_command_repeat1",
  [aux_sym_if_command_repeat1] = "if_command_repeat1",
  [aux_sym_run_command_repeat1] = "run_command_repeat1",
  [aux_sym_save_artifact_command_repeat1] = "save_artifact_command_repeat1",
  [aux_sym_save_image_command_repeat1] = "save_image_command_repeat1",
  [aux_sym_save_image_command_repeat2] = "save_image_command_repeat2",
  [aux_sym_with_docker_command_repeat1] = "with_docker_command_repeat1",
  [aux_sym__conditional_block_repeat1] = "_conditional_block_repeat1",
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
  [anon_sym_FROMDOCKERFILE] = anon_sym_FROMDOCKERFILE,
  [anon_sym_GIT] = anon_sym_GIT,
  [anon_sym_CLONE] = anon_sym_CLONE,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_ELSEIF] = anon_sym_ELSEIF,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_LET] = anon_sym_LET,
  [anon_sym_RUN] = anon_sym_RUN,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_SAVEARTIFACT] = anon_sym_SAVEARTIFACT,
  [anon_sym_ASLOCAL] = anon_sym_ASLOCAL,
  [anon_sym_SAVEIMAGE] = anon_sym_SAVEIMAGE,
  [anon_sym_SET] = anon_sym_SET,
  [anon_sym_WITHDOCKER] = anon_sym_WITHDOCKER,
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
  [anon_sym_DASH_DASHcompose] = anon_sym_DASH_DASHcompose,
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
  [anon_sym_DASH_DASHload] = anon_sym_DASH_DASHload,
  [anon_sym_DASH_DASHmount] = anon_sym_DASH_DASHmount,
  [sym_network_none] = sym_network_none,
  [sym_no_cache] = sym_no_cache,
  [sym_pass_args] = sym_pass_args,
  [anon_sym_DASH_DASHplatform] = anon_sym_DASH_DASHplatform,
  [sym_privileged] = sym_privileged,
  [anon_sym_DASH_DASHpull] = anon_sym_DASH_DASHpull,
  [sym_push] = sym_push,
  [sym_required] = sym_required,
  [anon_sym_DASH_DASHsecret] = anon_sym_DASH_DASHsecret,
  [anon_sym_DASH_DASHservice] = anon_sym_DASH_DASHservice,
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
  [sym_if_command] = sym_if_command,
  [sym_let_command] = sym_let_command,
  [sym_run_command] = sym_run_command,
  [sym_save_artifact_command] = sym_save_artifact_command,
  [sym_save_image_command] = sym_save_image_command,
  [sym_set_command] = sym_set_command,
  [sym_with_docker_command] = sym_with_docker_command,
  [aux_sym__target_block] = aux_sym__target_block,
  [sym__conditional_block] = sym__conditional_block,
  [sym_else_if_block] = sym_else_if_block,
  [sym_else_block] = sym_else_block,
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
  [sym_compose] = sym_compose,
  [sym_docker_build_arg] = sym_docker_build_arg,
  [sym_docker_file] = sym_docker_file,
  [sym_docker_target] = sym_docker_target,
  [sym_load] = sym_load,
  [sym_mount] = sym_mount,
  [sym_platform] = sym_platform,
  [sym_pull] = sym_pull,
  [sym_secret] = sym_secret,
  [sym_service] = sym_service,
  [sym__string] = sym__string,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym__eol] = sym__eol,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_arg_command_repeat1] = aux_sym_arg_command_repeat1,
  [aux_sym_build_command_repeat2] = aux_sym_build_command_repeat2,
  [aux_sym_from_command_repeat1] = aux_sym_from_command_repeat1,
  [aux_sym_version_command_repeat1] = aux_sym_version_command_repeat1,
  [aux_sym_copy_command_repeat1] = aux_sym_copy_command_repeat1,
  [aux_sym_copy_command_repeat2] = aux_sym_copy_command_repeat2,
  [aux_sym_from_dockerfile_command_repeat1] = aux_sym_from_dockerfile_command_repeat1,
  [aux_sym_git_clone_command_repeat1] = aux_sym_git_clone_command_repeat1,
  [aux_sym_if_command_repeat1] = aux_sym_if_command_repeat1,
  [aux_sym_run_command_repeat1] = aux_sym_run_command_repeat1,
  [aux_sym_save_artifact_command_repeat1] = aux_sym_save_artifact_command_repeat1,
  [aux_sym_save_image_command_repeat1] = aux_sym_save_image_command_repeat1,
  [aux_sym_save_image_command_repeat2] = aux_sym_save_image_command_repeat2,
  [aux_sym_with_docker_command_repeat1] = aux_sym_with_docker_command_repeat1,
  [aux_sym__conditional_block_repeat1] = aux_sym__conditional_block_repeat1,
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
  [anon_sym_FROMDOCKERFILE] = {
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
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSEIF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
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
  [anon_sym_SAVEARTIFACT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ASLOCAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SAVEIMAGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WITHDOCKER] = {
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
  [anon_sym_DASH_DASHcompose] = {
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
  [anon_sym_DASH_DASHload] = {
    .visible = true,
    .named = false,
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
  [anon_sym_DASH_DASHpull] = {
    .visible = true,
    .named = false,
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
  [anon_sym_DASH_DASHservice] = {
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
  [sym_if_command] = {
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
  [sym_with_docker_command] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__target_block] = {
    .visible = false,
    .named = false,
  },
  [sym__conditional_block] = {
    .visible = false,
    .named = true,
  },
  [sym_else_if_block] = {
    .visible = true,
    .named = true,
  },
  [sym_else_block] = {
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
  [sym_compose] = {
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
  [sym_load] = {
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
  [sym_pull] = {
    .visible = true,
    .named = true,
  },
  [sym_secret] = {
    .visible = true,
    .named = true,
  },
  [sym_service] = {
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
  [aux_sym_if_command_repeat1] = {
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
  [aux_sym_with_docker_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__conditional_block_repeat1] = {
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
  field_condition = 2,
  field_context = 3,
  field_default_value = 4,
  field_default_value_expr = 5,
  field_dest = 6,
  field_digest = 7,
  field_else = 8,
  field_else_if = 9,
  field_image = 10,
  field_key = 11,
  field_local_dest = 12,
  field_name = 13,
  field_option = 14,
  field_org_name = 15,
  field_project_name = 16,
  field_src = 17,
  field_tag = 18,
  field_target = 19,
  field_url = 20,
  field_value = 21,
  field_version = 22,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_command] = "command",
  [field_condition] = "condition",
  [field_context] = "context",
  [field_default_value] = "default_value",
  [field_default_value_expr] = "default_value_expr",
  [field_dest] = "dest",
  [field_digest] = "digest",
  [field_else] = "else",
  [field_else_if] = "else_if",
  [field_image] = "image",
  [field_key] = "key",
  [field_local_dest] = "local_dest",
  [field_name] = "name",
  [field_option] = "option",
  [field_org_name] = "org_name",
  [field_project_name] = "project_name",
  [field_src] = "src",
  [field_tag] = "tag",
  [field_target] = "target",
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
  [20] = {.index = 38, .length = 1},
  [21] = {.index = 39, .length = 1},
  [22] = {.index = 40, .length = 2},
  [23] = {.index = 42, .length = 1},
  [24] = {.index = 43, .length = 1},
  [25] = {.index = 44, .length = 1},
  [26] = {.index = 45, .length = 2},
  [27] = {.index = 47, .length = 2},
  [28] = {.index = 49, .length = 2},
  [29] = {.index = 51, .length = 2},
  [30] = {.index = 53, .length = 2},
  [31] = {.index = 55, .length = 2},
  [32] = {.index = 57, .length = 2},
  [33] = {.index = 59, .length = 2},
  [34] = {.index = 61, .length = 2},
  [35] = {.index = 63, .length = 1},
  [36] = {.index = 64, .length = 2},
  [37] = {.index = 66, .length = 2},
  [38] = {.index = 68, .length = 3},
  [39] = {.index = 71, .length = 3},
  [40] = {.index = 74, .length = 2},
  [41] = {.index = 76, .length = 3},
  [42] = {.index = 79, .length = 2},
  [43] = {.index = 81, .length = 3},
  [44] = {.index = 84, .length = 3},
  [45] = {.index = 87, .length = 2},
  [46] = {.index = 89, .length = 3},
  [47] = {.index = 92, .length = 4},
  [48] = {.index = 96, .length = 4},
  [49] = {.index = 100, .length = 2},
  [50] = {.index = 102, .length = 5},
  [51] = {.index = 107, .length = 5},
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
    {field_src, 1},
  [39] =
    {field_option, 1},
  [40] =
    {field_src, 0, .inherited = true},
    {field_src, 1, .inherited = true},
  [42] =
    {field_context, 1},
  [43] =
    {field_condition, 0},
  [44] =
    {field_command, 1},
  [45] =
    {field_dest, 2},
    {field_src, 1},
  [47] =
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [49] =
    {field_dest, 2},
    {field_src, 1, .inherited = true},
  [51] =
    {field_context, 2},
    {field_option, 1, .inherited = true},
  [53] =
    {field_condition, 0, .inherited = true},
    {field_option, 0, .inherited = true},
  [55] =
    {field_else_if, 0},
    {field_else_if, 1},
  [57] =
    {field_condition, 1, .inherited = true},
    {field_option, 1, .inherited = true},
  [59] =
    {field_else_if, 0, .inherited = true},
    {field_else_if, 1, .inherited = true},
  [61] =
    {field_condition, 1},
    {field_option, 0, .inherited = true},
  [63] =
    {field_command, 2},
  [64] =
    {field_command, 2},
    {field_option, 1, .inherited = true},
  [66] =
    {field_local_dest, 3},
    {field_src, 1},
  [68] =
    {field_dest, 3},
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [71] =
    {field_dest, 3},
    {field_option, 1, .inherited = true},
    {field_src, 2, .inherited = true},
  [74] =
    {field_dest, 3},
    {field_url, 2},
  [76] =
    {field_condition, 1, .inherited = true},
    {field_else_if, 2, .inherited = true},
    {field_option, 1, .inherited = true},
  [79] =
    {field_command, 3},
    {field_option, 1, .inherited = true},
  [81] =
    {field_dest, 2},
    {field_local_dest, 4},
    {field_src, 1},
  [84] =
    {field_local_dest, 4},
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [87] =
    {field_key, 2},
    {field_value, 4},
  [89] =
    {field_dest, 4},
    {field_option, 2, .inherited = true},
    {field_url, 3},
  [92] =
    {field_condition, 1, .inherited = true},
    {field_else, 2},
    {field_else, 3},
    {field_option, 1, .inherited = true},
  [96] =
    {field_dest, 3},
    {field_local_dest, 5},
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [100] =
    {field_image, 2},
    {field_target, 4},
  [102] =
    {field_condition, 1, .inherited = true},
    {field_else, 3},
    {field_else, 4},
    {field_else_if, 2, .inherited = true},
    {field_option, 1, .inherited = true},
  [107] =
    {field_image, 2},
    {field_target, 4},
    {field_target, 5},
    {field_target, 6},
    {field_target, 7},
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
  [9] = 6,
  [10] = 10,
  [11] = 7,
  [12] = 12,
  [13] = 8,
  [14] = 6,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 17,
  [22] = 20,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 17,
  [27] = 23,
  [28] = 18,
  [29] = 18,
  [30] = 30,
  [31] = 31,
  [32] = 30,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 30,
  [41] = 41,
  [42] = 16,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 19,
  [50] = 50,
  [51] = 51,
  [52] = 50,
  [53] = 53,
  [54] = 46,
  [55] = 41,
  [56] = 35,
  [57] = 44,
  [58] = 37,
  [59] = 37,
  [60] = 34,
  [61] = 39,
  [62] = 39,
  [63] = 63,
  [64] = 33,
  [65] = 65,
  [66] = 43,
  [67] = 31,
  [68] = 24,
  [69] = 16,
  [70] = 33,
  [71] = 34,
  [72] = 25,
  [73] = 16,
  [74] = 36,
  [75] = 45,
  [76] = 38,
  [77] = 41,
  [78] = 45,
  [79] = 45,
  [80] = 41,
  [81] = 44,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 19,
  [90] = 16,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 19,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 53,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 53,
  [115] = 51,
  [116] = 116,
  [117] = 51,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 47,
  [123] = 123,
  [124] = 82,
  [125] = 25,
  [126] = 123,
  [127] = 19,
  [128] = 24,
  [129] = 25,
  [130] = 45,
  [131] = 41,
  [132] = 65,
  [133] = 24,
  [134] = 63,
  [135] = 83,
  [136] = 136,
  [137] = 136,
  [138] = 45,
  [139] = 95,
  [140] = 118,
  [141] = 119,
  [142] = 91,
  [143] = 106,
  [144] = 103,
  [145] = 145,
  [146] = 120,
  [147] = 108,
  [148] = 148,
  [149] = 97,
  [150] = 121,
  [151] = 25,
  [152] = 107,
  [153] = 84,
  [154] = 88,
  [155] = 41,
  [156] = 105,
  [157] = 92,
  [158] = 98,
  [159] = 86,
  [160] = 99,
  [161] = 87,
  [162] = 110,
  [163] = 145,
  [164] = 85,
  [165] = 93,
  [166] = 112,
  [167] = 167,
  [168] = 116,
  [169] = 100,
  [170] = 24,
  [171] = 101,
  [172] = 111,
  [173] = 113,
  [174] = 145,
  [175] = 104,
  [176] = 102,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 41,
  [185] = 45,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 35,
  [190] = 190,
  [191] = 190,
  [192] = 192,
  [193] = 192,
  [194] = 188,
  [195] = 195,
  [196] = 47,
  [197] = 31,
  [198] = 198,
  [199] = 16,
  [200] = 43,
  [201] = 201,
  [202] = 36,
  [203] = 38,
  [204] = 19,
  [205] = 41,
  [206] = 45,
  [207] = 63,
  [208] = 83,
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
  [219] = 214,
  [220] = 209,
  [221] = 213,
  [222] = 215,
  [223] = 216,
  [224] = 217,
  [225] = 218,
  [226] = 41,
  [227] = 45,
  [228] = 217,
  [229] = 229,
  [230] = 216,
  [231] = 83,
  [232] = 24,
  [233] = 215,
  [234] = 234,
  [235] = 212,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 213,
  [240] = 25,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 211,
  [246] = 246,
  [247] = 218,
  [248] = 167,
  [249] = 88,
  [250] = 250,
  [251] = 84,
  [252] = 107,
  [253] = 87,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 86,
  [259] = 93,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 264,
  [266] = 262,
  [267] = 267,
  [268] = 260,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 111,
  [274] = 180,
  [275] = 182,
  [276] = 262,
  [277] = 277,
  [278] = 255,
  [279] = 260,
  [280] = 264,
  [281] = 272,
  [282] = 282,
  [283] = 270,
  [284] = 45,
  [285] = 41,
  [286] = 257,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 167,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 295,
  [299] = 291,
  [300] = 300,
  [301] = 301,
  [302] = 45,
  [303] = 303,
  [304] = 41,
  [305] = 290,
  [306] = 295,
  [307] = 289,
  [308] = 291,
  [309] = 296,
  [310] = 292,
  [311] = 311,
  [312] = 312,
  [313] = 311,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 315,
  [325] = 325,
  [326] = 326,
  [327] = 321,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 319,
  [332] = 321,
  [333] = 333,
  [334] = 334,
  [335] = 325,
  [336] = 336,
  [337] = 312,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 339,
  [346] = 319,
  [347] = 316,
  [348] = 314,
  [349] = 317,
  [350] = 322,
  [351] = 351,
  [352] = 336,
  [353] = 353,
  [354] = 334,
  [355] = 336,
  [356] = 344,
  [357] = 323,
  [358] = 358,
  [359] = 359,
  [360] = 330,
  [361] = 343,
  [362] = 312,
  [363] = 359,
  [364] = 364,
  [365] = 339,
  [366] = 364,
  [367] = 334,
  [368] = 368,
  [369] = 342,
  [370] = 333,
  [371] = 371,
  [372] = 329,
  [373] = 373,
  [374] = 353,
  [375] = 320,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 41,
  [384] = 45,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 397,
  [401] = 401,
  [402] = 398,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 410,
  [416] = 409,
  [417] = 408,
  [418] = 418,
  [419] = 398,
  [420] = 397,
  [421] = 398,
  [422] = 422,
  [423] = 423,
  [424] = 418,
  [425] = 425,
  [426] = 404,
  [427] = 403,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 413,
  [435] = 435,
  [436] = 436,
  [437] = 410,
  [438] = 409,
  [439] = 408,
  [440] = 398,
  [441] = 401,
  [442] = 397,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 413,
  [447] = 410,
  [448] = 409,
  [449] = 398,
  [450] = 401,
  [451] = 397,
  [452] = 410,
  [453] = 409,
  [454] = 398,
  [455] = 401,
  [456] = 456,
  [457] = 410,
  [458] = 409,
  [459] = 398,
  [460] = 401,
  [461] = 397,
  [462] = 398,
  [463] = 401,
  [464] = 398,
  [465] = 401,
  [466] = 466,
  [467] = 401,
  [468] = 398,
  [469] = 401,
  [470] = 398,
  [471] = 401,
  [472] = 401,
  [473] = 401,
  [474] = 474,
  [475] = 475,
  [476] = 406,
  [477] = 405,
  [478] = 478,
  [479] = 475,
  [480] = 480,
  [481] = 481,
  [482] = 430,
  [483] = 431,
  [484] = 484,
  [485] = 428,
  [486] = 413,
  [487] = 433,
  [488] = 484,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 411,
  [496] = 425,
  [497] = 414,
  [498] = 492,
  [499] = 499,
  [500] = 475,
  [501] = 406,
  [502] = 405,
  [503] = 433,
  [504] = 406,
  [505] = 405,
  [506] = 406,
  [507] = 405,
  [508] = 406,
  [509] = 405,
  [510] = 406,
  [511] = 405,
  [512] = 406,
  [513] = 405,
  [514] = 406,
  [515] = 405,
  [516] = 406,
  [517] = 405,
  [518] = 406,
  [519] = 405,
  [520] = 406,
  [521] = 405,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 490,
  [527] = 432,
  [528] = 436,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 399,
  [534] = 466,
  [535] = 480,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(267);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(613);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == '\'') ADVANCE(617);
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == ')') ADVANCE(575);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == ',') ADVANCE(566);
      if (lookahead == '-') ADVANCE(567);
      if (lookahead == '/') ADVANCE(280);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '=') ADVANCE(272);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == 'A') ADVANCE(134);
      if (lookahead == 'B') ADVANCE(151);
      if (lookahead == 'C') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead == 'F') ADVANCE(136);
      if (lookahead == 'G') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(96);
      if (lookahead == 'L') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(138);
      if (lookahead == 'R') ADVANCE(150);
      if (lookahead == 'S') ADVANCE(72);
      if (lookahead == 'V') ADVANCE(90);
      if (lookahead == 'W') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(263)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(624);
      if (lookahead == '\f') ADVANCE(625);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(623);
      if (lookahead == '#') ADVANCE(571);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(570);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(623);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(628);
      if (lookahead == '\f') ADVANCE(629);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(630);
      if (lookahead == '\f') ADVANCE(638);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == '-') ADVANCE(342);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(635);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(630);
      if (lookahead == '\f') ADVANCE(638);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == '-') ADVANCE(342);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(631);
      if (lookahead == '\f') ADVANCE(639);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(429);
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(636);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(565);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(631);
      if (lookahead == '\f') ADVANCE(639);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(429);
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(565);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(632);
      if (lookahead == '\f') ADVANCE(640);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(637);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(569);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(632);
      if (lookahead == '\f') ADVANCE(640);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(569);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '#') ADVANCE(618);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(620);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '#') ADVANCE(614);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(615);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(616);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(633);
      if (lookahead == '\f') ADVANCE(641);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(633);
      if (lookahead == '\f') ADVANCE(641);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(634);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(633);
      if (lookahead == '\f') ADVANCE(641);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(613);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == '\'') ADVANCE(617);
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == ')') ADVANCE(575);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == '-') ADVANCE(567);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == 'A') ADVANCE(134);
      if (lookahead == 'B') ADVANCE(151);
      if (lookahead == 'C') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead == 'F') ADVANCE(136);
      if (lookahead == 'G') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(96);
      if (lookahead == 'L') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(138);
      if (lookahead == 'R') ADVANCE(150);
      if (lookahead == 'S') ADVANCE(72);
      if (lookahead == 'V') ADVANCE(90);
      if (lookahead == 'W') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(634);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(566);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 17:
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(613);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == '\'') ADVANCE(617);
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == ')') ADVANCE(575);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == '-') ADVANCE(567);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == 'A') ADVANCE(134);
      if (lookahead == 'B') ADVANCE(151);
      if (lookahead == 'C') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead == 'F') ADVANCE(136);
      if (lookahead == 'G') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(96);
      if (lookahead == 'L') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(138);
      if (lookahead == 'R') ADVANCE(150);
      if (lookahead == 'S') ADVANCE(72);
      if (lookahead == 'V') ADVANCE(90);
      if (lookahead == 'W') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(566);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 18:
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(613);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == '\'') ADVANCE(617);
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == ')') ADVANCE(575);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == '-') ADVANCE(568);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == 'A') ADVANCE(134);
      if (lookahead == 'B') ADVANCE(151);
      if (lookahead == 'C') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead == 'F') ADVANCE(136);
      if (lookahead == 'G') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(96);
      if (lookahead == 'L') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(138);
      if (lookahead == 'R') ADVANCE(150);
      if (lookahead == 'S') ADVANCE(72);
      if (lookahead == 'V') ADVANCE(90);
      if (lookahead == 'W') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(566);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 'm') ADVANCE(216);
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == 'p') ADVANCE(232);
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(580);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '=') ADVANCE(579);
      if (lookahead == 'A') ADVANCE(133);
      if (lookahead == 'C') ADVANCE(124);
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead == 'F') ADVANCE(136);
      if (lookahead == 'G') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(96);
      if (lookahead == 'L') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(150);
      if (lookahead == 'S') ADVANCE(72);
      if (lookahead == 'W') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(33)
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(581);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(579);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(48)
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(567);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(566);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(24)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(569);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(568);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(566);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(24)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(569);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(613);
      if (lookahead == '#') ADVANCE(621);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == '\'') ADVANCE(617);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(622);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == 'A') ADVANCE(133);
      if (lookahead == 'C') ADVANCE(124);
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead == 'F') ADVANCE(136);
      if (lookahead == 'G') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(96);
      if (lookahead == 'L') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(150);
      if (lookahead == 'S') ADVANCE(72);
      if (lookahead == 'W') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == 'A') ADVANCE(133);
      if (lookahead == 'C') ADVANCE(124);
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead == 'F') ADVANCE(136);
      if (lookahead == 'G') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(96);
      if (lookahead == 'L') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(150);
      if (lookahead == 'S') ADVANCE(72);
      if (lookahead == 'W') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(339);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == 'A') ADVANCE(363);
      if (lookahead == 'C') ADVANCE(360);
      if (lookahead == 'E') ADVANCE(356);
      if (lookahead == 'F') ADVANCE(364);
      if (lookahead == 'G') ADVANCE(354);
      if (lookahead == 'I') ADVANCE(351);
      if (lookahead == 'L') ADVANCE(350);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'S') ADVANCE(346);
      if (lookahead == 'W') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(339);
      if (lookahead == 'A') ADVANCE(363);
      if (lookahead == 'C') ADVANCE(360);
      if (lookahead == 'E') ADVANCE(358);
      if (lookahead == 'F') ADVANCE(364);
      if (lookahead == 'G') ADVANCE(354);
      if (lookahead == 'I') ADVANCE(351);
      if (lookahead == 'L') ADVANCE(350);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'S') ADVANCE(346);
      if (lookahead == 'W') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(339);
      if (lookahead == 'A') ADVANCE(363);
      if (lookahead == 'C') ADVANCE(360);
      if (lookahead == 'F') ADVANCE(364);
      if (lookahead == 'G') ADVANCE(354);
      if (lookahead == 'I') ADVANCE(351);
      if (lookahead == 'L') ADVANCE(350);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'S') ADVANCE(346);
      if (lookahead == 'W') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == 'A') ADVANCE(133);
      if (lookahead == 'C') ADVANCE(124);
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead == 'F') ADVANCE(136);
      if (lookahead == 'G') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(96);
      if (lookahead == 'L') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(150);
      if (lookahead == 'S') ADVANCE(72);
      if (lookahead == 'W') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(345);
      if (lookahead == 'A') ADVANCE(363);
      if (lookahead == 'C') ADVANCE(360);
      if (lookahead == 'E') ADVANCE(356);
      if (lookahead == 'F') ADVANCE(364);
      if (lookahead == 'G') ADVANCE(354);
      if (lookahead == 'I') ADVANCE(351);
      if (lookahead == 'L') ADVANCE(350);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'S') ADVANCE(346);
      if (lookahead == 'W') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(345);
      if (lookahead == 'A') ADVANCE(363);
      if (lookahead == 'C') ADVANCE(360);
      if (lookahead == 'E') ADVANCE(358);
      if (lookahead == 'F') ADVANCE(364);
      if (lookahead == 'G') ADVANCE(354);
      if (lookahead == 'I') ADVANCE(351);
      if (lookahead == 'L') ADVANCE(350);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'S') ADVANCE(346);
      if (lookahead == 'W') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(345);
      if (lookahead == 'A') ADVANCE(363);
      if (lookahead == 'C') ADVANCE(360);
      if (lookahead == 'F') ADVANCE(364);
      if (lookahead == 'G') ADVANCE(354);
      if (lookahead == 'I') ADVANCE(351);
      if (lookahead == 'L') ADVANCE(350);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'S') ADVANCE(346);
      if (lookahead == 'W') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == 'A') ADVANCE(363);
      if (lookahead == 'C') ADVANCE(360);
      if (lookahead == 'E') ADVANCE(356);
      if (lookahead == 'F') ADVANCE(364);
      if (lookahead == 'G') ADVANCE(354);
      if (lookahead == 'I') ADVANCE(351);
      if (lookahead == 'L') ADVANCE(350);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'S') ADVANCE(346);
      if (lookahead == 'W') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == 'A') ADVANCE(363);
      if (lookahead == 'C') ADVANCE(360);
      if (lookahead == 'E') ADVANCE(358);
      if (lookahead == 'F') ADVANCE(364);
      if (lookahead == 'G') ADVANCE(354);
      if (lookahead == 'I') ADVANCE(351);
      if (lookahead == 'L') ADVANCE(350);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'S') ADVANCE(346);
      if (lookahead == 'W') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == 'A') ADVANCE(363);
      if (lookahead == 'C') ADVANCE(360);
      if (lookahead == 'F') ADVANCE(364);
      if (lookahead == 'G') ADVANCE(354);
      if (lookahead == 'I') ADVANCE(351);
      if (lookahead == 'L') ADVANCE(350);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'S') ADVANCE(346);
      if (lookahead == 'W') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(363);
      if (lookahead == 'C') ADVANCE(360);
      if (lookahead == 'E') ADVANCE(356);
      if (lookahead == 'F') ADVANCE(364);
      if (lookahead == 'G') ADVANCE(354);
      if (lookahead == 'I') ADVANCE(351);
      if (lookahead == 'L') ADVANCE(350);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'S') ADVANCE(346);
      if (lookahead == 'W') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(363);
      if (lookahead == 'C') ADVANCE(360);
      if (lookahead == 'E') ADVANCE(358);
      if (lookahead == 'F') ADVANCE(364);
      if (lookahead == 'G') ADVANCE(354);
      if (lookahead == 'I') ADVANCE(351);
      if (lookahead == 'L') ADVANCE(350);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'S') ADVANCE(346);
      if (lookahead == 'W') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(363);
      if (lookahead == 'C') ADVANCE(360);
      if (lookahead == 'F') ADVANCE(364);
      if (lookahead == 'G') ADVANCE(354);
      if (lookahead == 'I') ADVANCE(351);
      if (lookahead == 'L') ADVANCE(350);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'S') ADVANCE(346);
      if (lookahead == 'W') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(566);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(569);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(429);
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == '-') ADVANCE(433);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(565);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(429);
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(565);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(429);
      if (lookahead == '-') ADVANCE(435);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(565);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(429);
      if (lookahead == '-') ADVANCE(436);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(565);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(429);
      if (lookahead == '-') ADVANCE(437);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(565);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(429);
      if (lookahead == 'A') ADVANCE(462);
      if (lookahead == 'C') ADVANCE(459);
      if (lookahead == 'E') ADVANCE(455);
      if (lookahead == 'F') ADVANCE(463);
      if (lookahead == 'G') ADVANCE(453);
      if (lookahead == 'I') ADVANCE(450);
      if (lookahead == 'L') ADVANCE(449);
      if (lookahead == 'R') ADVANCE(469);
      if (lookahead == 'S') ADVANCE(445);
      if (lookahead == 'W') ADVANCE(454);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(565);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(429);
      if (lookahead == 'A') ADVANCE(462);
      if (lookahead == 'C') ADVANCE(459);
      if (lookahead == 'E') ADVANCE(457);
      if (lookahead == 'F') ADVANCE(463);
      if (lookahead == 'G') ADVANCE(453);
      if (lookahead == 'I') ADVANCE(450);
      if (lookahead == 'L') ADVANCE(449);
      if (lookahead == 'R') ADVANCE(469);
      if (lookahead == 'S') ADVANCE(445);
      if (lookahead == 'W') ADVANCE(454);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(565);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(429);
      if (lookahead == 'A') ADVANCE(462);
      if (lookahead == 'C') ADVANCE(459);
      if (lookahead == 'F') ADVANCE(463);
      if (lookahead == 'G') ADVANCE(453);
      if (lookahead == 'I') ADVANCE(450);
      if (lookahead == 'L') ADVANCE(449);
      if (lookahead == 'R') ADVANCE(469);
      if (lookahead == 'S') ADVANCE(445);
      if (lookahead == 'W') ADVANCE(454);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(565);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(429);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(565);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(423);
      if (lookahead == '\\') ADVANCE(424);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(426);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '(') ADVANCE(262);
      END_STATE();
    case 62:
      if (lookahead == ')') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(582);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(155);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(189);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(261);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(162);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(228);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(158);
      END_STATE();
    case 70:
      if (lookahead == '.') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == '=') ADVANCE(213);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(152);
      if (lookahead == 'E') ADVANCE(145);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(101);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(140);
      if (lookahead == 'I') ADVANCE(120);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(115);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == 'C') ADVANCE(75);
      END_STATE();
    case 78:
      if (lookahead == 'C') ADVANCE(111);
      END_STATE();
    case 79:
      if (lookahead == 'C') ADVANCE(147);
      END_STATE();
    case 80:
      if (lookahead == 'C') ADVANCE(148);
      END_STATE();
    case 81:
      if (lookahead == 'C') ADVANCE(112);
      END_STATE();
    case 82:
      if (lookahead == 'D') ADVANCE(299);
      END_STATE();
    case 83:
      if (lookahead == 'D') ADVANCE(273);
      END_STATE();
    case 84:
      if (lookahead == 'D') ADVANCE(130);
      END_STATE();
    case 85:
      if (lookahead == 'D') ADVANCE(131);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(296);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(291);
      END_STATE();
    case 88:
      if (lookahead == 'E') ADVANCE(311);
      END_STATE();
    case 89:
      if (lookahead == 'E') ADVANCE(287);
      END_STATE();
    case 90:
      if (lookahead == 'E') ADVANCE(137);
      END_STATE();
    case 91:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 92:
      if (lookahead == 'E') ADVANCE(144);
      END_STATE();
    case 93:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 94:
      if (lookahead == 'E') ADVANCE(139);
      END_STATE();
    case 95:
      if (lookahead == 'E') ADVANCE(135);
      END_STATE();
    case 96:
      if (lookahead == 'F') ADVANCE(292);
      END_STATE();
    case 97:
      if (lookahead == 'F') ADVANCE(295);
      END_STATE();
    case 98:
      if (lookahead == 'F') ADVANCE(76);
      END_STATE();
    case 99:
      if (lookahead == 'F') ADVANCE(108);
      END_STATE();
    case 100:
      if (lookahead == 'G') ADVANCE(268);
      END_STATE();
    case 101:
      if (lookahead == 'G') ADVANCE(88);
      END_STATE();
    case 102:
      if (lookahead == 'H') ADVANCE(26);
      END_STATE();
    case 103:
      if (lookahead == 'I') ADVANCE(143);
      END_STATE();
    case 104:
      if (lookahead == 'I') ADVANCE(97);
      END_STATE();
    case 105:
      if (lookahead == 'I') ADVANCE(116);
      END_STATE();
    case 106:
      if (lookahead == 'I') ADVANCE(98);
      END_STATE();
    case 107:
      if (lookahead == 'I') ADVANCE(146);
      END_STATE();
    case 108:
      if (lookahead == 'I') ADVANCE(118);
      END_STATE();
    case 109:
      if (lookahead == 'I') ADVANCE(129);
      END_STATE();
    case 110:
      if (lookahead == 'J') ADVANCE(93);
      END_STATE();
    case 111:
      if (lookahead == 'K') ADVANCE(94);
      END_STATE();
    case 112:
      if (lookahead == 'K') ADVANCE(95);
      END_STATE();
    case 113:
      if (lookahead == 'L') ADVANCE(128);
      if (lookahead == 'O') ADVANCE(132);
      END_STATE();
    case 114:
      if (lookahead == 'L') ADVANCE(142);
      if (lookahead == 'N') ADVANCE(82);
      END_STATE();
    case 115:
      if (lookahead == 'L') ADVANCE(310);
      END_STATE();
    case 116:
      if (lookahead == 'L') ADVANCE(83);
      END_STATE();
    case 117:
      if (lookahead == 'L') ADVANCE(127);
      END_STATE();
    case 118:
      if (lookahead == 'L') ADVANCE(89);
      END_STATE();
    case 119:
      if (lookahead == 'M') ADVANCE(274);
      END_STATE();
    case 120:
      if (lookahead == 'M') ADVANCE(73);
      END_STATE();
    case 121:
      if (lookahead == 'N') ADVANCE(305);
      END_STATE();
    case 122:
      if (lookahead == 'N') ADVANCE(282);
      END_STATE();
    case 123:
      if (lookahead == 'N') ADVANCE(87);
      END_STATE();
    case 124:
      if (lookahead == 'O') ADVANCE(132);
      END_STATE();
    case 125:
      if (lookahead == 'O') ADVANCE(119);
      END_STATE();
    case 126:
      if (lookahead == 'O') ADVANCE(110);
      END_STATE();
    case 127:
      if (lookahead == 'O') ADVANCE(77);
      END_STATE();
    case 128:
      if (lookahead == 'O') ADVANCE(123);
      END_STATE();
    case 129:
      if (lookahead == 'O') ADVANCE(122);
      END_STATE();
    case 130:
      if (lookahead == 'O') ADVANCE(78);
      END_STATE();
    case 131:
      if (lookahead == 'O') ADVANCE(81);
      END_STATE();
    case 132:
      if (lookahead == 'P') ADVANCE(153);
      END_STATE();
    case 133:
      if (lookahead == 'R') ADVANCE(100);
      END_STATE();
    case 134:
      if (lookahead == 'R') ADVANCE(100);
      if (lookahead == 'S') ADVANCE(19);
      END_STATE();
    case 135:
      if (lookahead == 'R') ADVANCE(315);
      END_STATE();
    case 136:
      if (lookahead == 'R') ADVANCE(125);
      END_STATE();
    case 137:
      if (lookahead == 'R') ADVANCE(141);
      END_STATE();
    case 138:
      if (lookahead == 'R') ADVANCE(126);
      END_STATE();
    case 139:
      if (lookahead == 'R') ADVANCE(99);
      END_STATE();
    case 140:
      if (lookahead == 'R') ADVANCE(149);
      END_STATE();
    case 141:
      if (lookahead == 'S') ADVANCE(109);
      END_STATE();
    case 142:
      if (lookahead == 'S') ADVANCE(86);
      END_STATE();
    case 143:
      if (lookahead == 'T') ADVANCE(288);
      END_STATE();
    case 144:
      if (lookahead == 'T') ADVANCE(302);
      END_STATE();
    case 145:
      if (lookahead == 'T') ADVANCE(312);
      END_STATE();
    case 146:
      if (lookahead == 'T') ADVANCE(102);
      END_STATE();
    case 147:
      if (lookahead == 'T') ADVANCE(278);
      END_STATE();
    case 148:
      if (lookahead == 'T') ADVANCE(309);
      END_STATE();
    case 149:
      if (lookahead == 'T') ADVANCE(106);
      END_STATE();
    case 150:
      if (lookahead == 'U') ADVANCE(121);
      END_STATE();
    case 151:
      if (lookahead == 'U') ADVANCE(105);
      END_STATE();
    case 152:
      if (lookahead == 'V') ADVANCE(91);
      END_STATE();
    case 153:
      if (lookahead == 'Y') ADVANCE(284);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(243);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'c') ADVANCE(218);
      if (lookahead == 'l') ADVANCE(221);
      if (lookahead == 'p') ADVANCE(154);
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 161:
      if (lookahead == 'b') ADVANCE(159);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(234);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(605);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(599);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(577);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(608);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 'm') ADVANCE(216);
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == 'p') ADVANCE(232);
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 185:
      if (lookahead == 'f') ADVANCE(226);
      END_STATE();
    case 186:
      if (lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 187:
      if (lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 188:
      if (lookahead == 'g') ADVANCE(180);
      END_STATE();
    case 189:
      if (lookahead == 'g') ADVANCE(207);
      if (lookahead == 'm') ADVANCE(216);
      if (lookahead == 'n') ADVANCE(217);
      if (lookahead == 'p') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 190:
      if (lookahead == 'h') ADVANCE(611);
      END_STATE();
    case 191:
      if (lookahead == 'h') ADVANCE(607);
      END_STATE();
    case 192:
      if (lookahead == 'h') ADVANCE(173);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 195:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 196:
      if (lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 198:
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 199:
      if (lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 200:
      if (lookahead == 'k') ADVANCE(71);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(606);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(595);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 209:
      if (lookahead == 'm') ADVANCE(604);
      END_STATE();
    case 210:
      if (lookahead == 'm') ADVANCE(229);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 227:
      if (lookahead == 'p') ADVANCE(223);
      END_STATE();
    case 228:
      if (lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 229:
      if (lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 230:
      if (lookahead == 'q') ADVANCE(252);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead == 'u') ADVANCE(242);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(603);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(244);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(600);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(609);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(592);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 252:
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 253:
      if (lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 254:
      if (lookahead == 'v') ADVANCE(194);
      END_STATE();
    case 255:
      if (lookahead == 'v') ADVANCE(195);
      END_STATE();
    case 256:
      if (lookahead == 'v') ADVANCE(198);
      END_STATE();
    case 257:
      if (lookahead == 'w') ADVANCE(224);
      END_STATE();
    case 258:
      if (lookahead == 'w') ADVANCE(68);
      END_STATE();
    case 259:
      if (lookahead == 'y') ADVANCE(227);
      END_STATE();
    case 260:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 261:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 262:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 263:
      if (eof) ADVANCE(267);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(613);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == '\'') ADVANCE(617);
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == ')') ADVANCE(575);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == '-') ADVANCE(567);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == 'A') ADVANCE(134);
      if (lookahead == 'B') ADVANCE(151);
      if (lookahead == 'C') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead == 'F') ADVANCE(136);
      if (lookahead == 'G') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(96);
      if (lookahead == 'L') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(138);
      if (lookahead == 'R') ADVANCE(150);
      if (lookahead == 'S') ADVANCE(72);
      if (lookahead == 'V') ADVANCE(90);
      if (lookahead == 'W') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(566);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(263)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 264:
      if (eof) ADVANCE(267);
      if (lookahead == ' ') ADVANCE(580);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(575);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '=') ADVANCE(579);
      if (lookahead == 'A') ADVANCE(328);
      if (lookahead == 'F') ADVANCE(329);
      if (lookahead == 'P') ADVANCE(331);
      if (lookahead == 'V') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(266)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 265:
      if (eof) ADVANCE(267);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(575);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(280);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '=') ADVANCE(272);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == 'A') ADVANCE(328);
      if (lookahead == 'F') ADVANCE(329);
      if (lookahead == 'P') ADVANCE(331);
      if (lookahead == 'V') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(266)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 266:
      if (eof) ADVANCE(267);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(575);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == 'A') ADVANCE(328);
      if (lookahead == 'F') ADVANCE(329);
      if (lookahead == 'P') ADVANCE(331);
      if (lookahead == 'V') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(266)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_BUILD);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(84);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_FROMDOCKERFILE);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_GIT);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_CLONE);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_IF);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(104);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_END);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LET);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LET);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_RUN);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_SAVEARTIFACT);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_ASLOCAL);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_SAVEIMAGE);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_SET);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_WITHDOCKER);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == ')') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'J') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == ' ') ADVANCE(74);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == ' ') ADVANCE(85);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(379);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(388);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(389);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(374);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(408);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(376);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(382);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(371);
      if (lookahead == 'E') ADVANCE(368);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'D') ADVANCE(300);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(297);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(337);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(367);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'F') ADVANCE(293);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'G') ADVANCE(270);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'H') ADVANCE(338);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(366);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(369);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'N') ADVANCE(347);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'M') ADVANCE(275);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(347);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(306);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(362);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(357);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'P') ADVANCE(372);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(352);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(361);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'S') ADVANCE(348);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(289);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(303);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(313);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(353);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'U') ADVANCE(359);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'V') ADVANCE(349);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(285);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(380);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == 'p') ADVANCE(375);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(415);
      if (lookahead == 'l') ADVANCE(377);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(410);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(418);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(381);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(373);
      if (lookahead == 'p') ADVANCE(419);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(394);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(395);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(378);
      if (lookahead == 'p') ADVANCE(419);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'd') ADVANCE(577);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(383);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(340);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(391);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(341);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(409);
      if (lookahead == 'h') ADVANCE(396);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(409);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(407);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'g') ADVANCE(384);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'g') ADVANCE(413);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(607);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(385);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(387);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(404);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(420);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(399);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(386);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(406);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(400);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'm') ADVANCE(604);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'm') ADVANCE(583);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'n') ADVANCE(417);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(403);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(412);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'p') ADVANCE(411);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(405);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(392);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(397);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(402);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(603);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(393);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(416);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(344);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 't') ADVANCE(584);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 't') ADVANCE(390);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'u') ADVANCE(414);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'v') ADVANCE(398);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'w') ADVANCE(343);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_image_name);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(624);
      if (lookahead == '\f') ADVANCE(625);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(623);
      if (lookahead == '#') ADVANCE(425);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(426);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(628);
      if (lookahead == '\f') ADVANCE(629);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_image_digest);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_immediate_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(624);
      if (lookahead == '\f') ADVANCE(625);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(472);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(534);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == 'f') ADVANCE(590);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(480);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(475);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(537);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(487);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(527);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(497);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(555);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(470);
      if (lookahead == 'E') ADVANCE(467);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D') ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(466);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'F') ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G') ADVANCE(271);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H') ADVANCE(432);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(465);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(468);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(464);
      if (lookahead == 'N') ADVANCE(446);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M') ADVANCE(276);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(446);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(307);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(461);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(456);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P') ADVANCE(471);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'S') ADVANCE(430);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(460);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S') ADVANCE(447);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(290);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(304);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(314);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(452);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U') ADVANCE(458);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'V') ADVANCE(448);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(286);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(514);
      if (lookahead == 'c') ADVANCE(503);
      if (lookahead == 'd') ADVANCE(505);
      if (lookahead == 'i') ADVANCE(495);
      if (lookahead == 'k') ADVANCE(489);
      if (lookahead == 'p') ADVANCE(473);
      if (lookahead == 's') ADVANCE(564);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(550);
      if (lookahead == 'l') ADVANCE(474);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(540);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(546);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(526);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'b') ADVANCE(557);
      if (lookahead == 'p') ADVANCE(512);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'b') ADVANCE(545);
      if (lookahead == 'k') ADVANCE(494);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(504);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(488);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(577);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(585);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(444);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(563);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(594);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(486);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(483);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(500);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(538);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(530);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(535);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(533);
      if (lookahead == 'i') ADVANCE(495);
      if (lookahead == 'k') ADVANCE(489);
      if (lookahead == 's') ADVANCE(564);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(589);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(490);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(492);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(547);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(521);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(578);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(539);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(558);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(524);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(517);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(516);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'k') ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(474);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(529);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(513);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(507);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(485);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(491);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(531);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(518);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(604);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(528);
      if (lookahead == 'o') ADVANCE(559);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(515);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(586);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(511);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(597);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(481);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(532);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(484);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(562);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(542);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(442);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead == 't') ADVANCE(548);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(519);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(434);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(544);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(588);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(502);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(482);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(499);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(506);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(477);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(501);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(603);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(598);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(596);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(552);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(556);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(438);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(591);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(496);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(548);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(549);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'u') ADVANCE(510);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'v') ADVANCE(509);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(523);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(612);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(525);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(439);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'x') ADVANCE(508);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'y') ADVANCE(522);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(170);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(569);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n') ADVANCE(628);
      if (lookahead == '\f') ADVANCE(629);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_version_major_minor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_allow_privileged);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_DASH_DASHbranch);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcache_DASHfrom);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_cache_hint);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchmod);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcompose);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_dir);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_DASH_DASHbuild_DASHarg);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_DASHf);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtarget);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_entrypoint);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_feature_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_force);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_if_exists);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_keep_own);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_keep_ts);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_DASH_DASHload);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_DASH_DASHmount);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_network_none);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_no_cache);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_pass_args);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_privileged);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_DASH_DASHpull);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_push);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsecret);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_DASH_DASHservice);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_ssh);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_symlink_no_follow);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(624);
      if (lookahead == '\f') ADVANCE(627);
      if (lookahead == '\r') ADVANCE(614);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(614);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(614);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(616);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(616);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(624);
      if (lookahead == '\f') ADVANCE(626);
      if (lookahead == '\r') ADVANCE(618);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(618);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(618);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(620);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(620);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\n') ADVANCE(624);
      if (lookahead == '\f') ADVANCE(625);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(621);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(622);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(624);
      if (lookahead == '\f') ADVANCE(625);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(624);
      if (lookahead == '\f') ADVANCE(626);
      if (lookahead == '\r') ADVANCE(618);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(618);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(624);
      if (lookahead == '\f') ADVANCE(627);
      if (lookahead == '\r') ADVANCE(614);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(614);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      if (lookahead == '\n') ADVANCE(628);
      if (lookahead == '\f') ADVANCE(629);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(630);
      if (lookahead == '\f') ADVANCE(638);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == '-') ADVANCE(342);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(631);
      if (lookahead == '\f') ADVANCE(639);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(429);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(632);
      if (lookahead == '\f') ADVANCE(640);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(633);
      if (lookahead == '\f') ADVANCE(641);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_CRn);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(569);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(630);
      if (lookahead == '\f') ADVANCE(638);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == '-') ADVANCE(342);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(631);
      if (lookahead == '\f') ADVANCE(639);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(429);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(632);
      if (lookahead == '\f') ADVANCE(640);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(633);
      if (lookahead == '\f') ADVANCE(641);
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
  [1] = {.lex_state = 265},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 50},
  [21] = {.lex_state = 31},
  [22] = {.lex_state = 50},
  [23] = {.lex_state = 50},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 32, .external_lex_state = 2},
  [27] = {.lex_state = 50},
  [28] = {.lex_state = 38},
  [29] = {.lex_state = 39, .external_lex_state = 2},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 33},
  [32] = {.lex_state = 39, .external_lex_state = 2},
  [33] = {.lex_state = 40},
  [34] = {.lex_state = 40},
  [35] = {.lex_state = 33},
  [36] = {.lex_state = 33},
  [37] = {.lex_state = 40},
  [38] = {.lex_state = 33},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 38},
  [41] = {.lex_state = 37},
  [42] = {.lex_state = 40},
  [43] = {.lex_state = 33},
  [44] = {.lex_state = 37},
  [45] = {.lex_state = 37},
  [46] = {.lex_state = 24},
  [47] = {.lex_state = 22},
  [48] = {.lex_state = 50},
  [49] = {.lex_state = 40},
  [50] = {.lex_state = 24},
  [51] = {.lex_state = 55},
  [52] = {.lex_state = 24},
  [53] = {.lex_state = 55},
  [54] = {.lex_state = 24},
  [55] = {.lex_state = 38},
  [56] = {.lex_state = 33, .external_lex_state = 2},
  [57] = {.lex_state = 38},
  [58] = {.lex_state = 42, .external_lex_state = 2},
  [59] = {.lex_state = 41},
  [60] = {.lex_state = 41},
  [61] = {.lex_state = 38},
  [62] = {.lex_state = 39, .external_lex_state = 2},
  [63] = {.lex_state = 33},
  [64] = {.lex_state = 41},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 33, .external_lex_state = 2},
  [67] = {.lex_state = 33, .external_lex_state = 2},
  [68] = {.lex_state = 40},
  [69] = {.lex_state = 42, .external_lex_state = 2},
  [70] = {.lex_state = 42, .external_lex_state = 2},
  [71] = {.lex_state = 42, .external_lex_state = 2},
  [72] = {.lex_state = 40},
  [73] = {.lex_state = 41},
  [74] = {.lex_state = 33, .external_lex_state = 2},
  [75] = {.lex_state = 39, .external_lex_state = 2},
  [76] = {.lex_state = 33, .external_lex_state = 2},
  [77] = {.lex_state = 39, .external_lex_state = 2},
  [78] = {.lex_state = 38},
  [79] = {.lex_state = 33},
  [80] = {.lex_state = 33},
  [81] = {.lex_state = 39, .external_lex_state = 2},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 33},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 42, .external_lex_state = 2},
  [90] = {.lex_state = 28, .external_lex_state = 2},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 41},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 24},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 57, .external_lex_state = 2},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 56},
  [115] = {.lex_state = 56},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 57, .external_lex_state = 2},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 22, .external_lex_state = 2},
  [123] = {.lex_state = 28},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 42, .external_lex_state = 2},
  [126] = {.lex_state = 28},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 41},
  [129] = {.lex_state = 41},
  [130] = {.lex_state = 33, .external_lex_state = 2},
  [131] = {.lex_state = 33, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 42, .external_lex_state = 2},
  [134] = {.lex_state = 33, .external_lex_state = 2},
  [135] = {.lex_state = 33, .external_lex_state = 2},
  [136] = {.lex_state = 28},
  [137] = {.lex_state = 28},
  [138] = {.lex_state = 50},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 50},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 50},
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 50},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 28},
  [178] = {.lex_state = 50},
  [179] = {.lex_state = 50},
  [180] = {.lex_state = 24},
  [181] = {.lex_state = 24},
  [182] = {.lex_state = 24},
  [183] = {.lex_state = 265},
  [184] = {.lex_state = 24},
  [185] = {.lex_state = 24},
  [186] = {.lex_state = 265},
  [187] = {.lex_state = 34},
  [188] = {.lex_state = 34},
  [189] = {.lex_state = 265},
  [190] = {.lex_state = 52},
  [191] = {.lex_state = 52},
  [192] = {.lex_state = 52},
  [193] = {.lex_state = 52},
  [194] = {.lex_state = 34},
  [195] = {.lex_state = 52},
  [196] = {.lex_state = 264},
  [197] = {.lex_state = 265},
  [198] = {.lex_state = 34},
  [199] = {.lex_state = 265},
  [200] = {.lex_state = 265},
  [201] = {.lex_state = 34},
  [202] = {.lex_state = 265},
  [203] = {.lex_state = 265},
  [204] = {.lex_state = 265},
  [205] = {.lex_state = 265},
  [206] = {.lex_state = 265},
  [207] = {.lex_state = 265},
  [208] = {.lex_state = 265},
  [209] = {.lex_state = 8},
  [210] = {.lex_state = 28},
  [211] = {.lex_state = 51},
  [212] = {.lex_state = 51},
  [213] = {.lex_state = 53},
  [214] = {.lex_state = 8},
  [215] = {.lex_state = 53},
  [216] = {.lex_state = 27},
  [217] = {.lex_state = 27},
  [218] = {.lex_state = 28},
  [219] = {.lex_state = 8},
  [220] = {.lex_state = 8},
  [221] = {.lex_state = 53},
  [222] = {.lex_state = 53},
  [223] = {.lex_state = 27},
  [224] = {.lex_state = 27},
  [225] = {.lex_state = 28},
  [226] = {.lex_state = 28},
  [227] = {.lex_state = 28},
  [228] = {.lex_state = 27},
  [229] = {.lex_state = 265, .external_lex_state = 3},
  [230] = {.lex_state = 27},
  [231] = {.lex_state = 28},
  [232] = {.lex_state = 265},
  [233] = {.lex_state = 53},
  [234] = {.lex_state = 28},
  [235] = {.lex_state = 51},
  [236] = {.lex_state = 28},
  [237] = {.lex_state = 28},
  [238] = {.lex_state = 28},
  [239] = {.lex_state = 53},
  [240] = {.lex_state = 265},
  [241] = {.lex_state = 53},
  [242] = {.lex_state = 28},
  [243] = {.lex_state = 51},
  [244] = {.lex_state = 10},
  [245] = {.lex_state = 51},
  [246] = {.lex_state = 10},
  [247] = {.lex_state = 28},
  [248] = {.lex_state = 28},
  [249] = {.lex_state = 265},
  [250] = {.lex_state = 265},
  [251] = {.lex_state = 265},
  [252] = {.lex_state = 265},
  [253] = {.lex_state = 265},
  [254] = {.lex_state = 27},
  [255] = {.lex_state = 27},
  [256] = {.lex_state = 265},
  [257] = {.lex_state = 27},
  [258] = {.lex_state = 265},
  [259] = {.lex_state = 265},
  [260] = {.lex_state = 27},
  [261] = {.lex_state = 265},
  [262] = {.lex_state = 27},
  [263] = {.lex_state = 27},
  [264] = {.lex_state = 27},
  [265] = {.lex_state = 27},
  [266] = {.lex_state = 27},
  [267] = {.lex_state = 265},
  [268] = {.lex_state = 27},
  [269] = {.lex_state = 53},
  [270] = {.lex_state = 27},
  [271] = {.lex_state = 27},
  [272] = {.lex_state = 27},
  [273] = {.lex_state = 265},
  [274] = {.lex_state = 34},
  [275] = {.lex_state = 34},
  [276] = {.lex_state = 27},
  [277] = {.lex_state = 34},
  [278] = {.lex_state = 27},
  [279] = {.lex_state = 27},
  [280] = {.lex_state = 27},
  [281] = {.lex_state = 27},
  [282] = {.lex_state = 265},
  [283] = {.lex_state = 27},
  [284] = {.lex_state = 34},
  [285] = {.lex_state = 34},
  [286] = {.lex_state = 27},
  [287] = {.lex_state = 27},
  [288] = {.lex_state = 28},
  [289] = {.lex_state = 46},
  [290] = {.lex_state = 46},
  [291] = {.lex_state = 13},
  [292] = {.lex_state = 54},
  [293] = {.lex_state = 52},
  [294] = {.lex_state = 54},
  [295] = {.lex_state = 13},
  [296] = {.lex_state = 54},
  [297] = {.lex_state = 52},
  [298] = {.lex_state = 13},
  [299] = {.lex_state = 13},
  [300] = {.lex_state = 52},
  [301] = {.lex_state = 52},
  [302] = {.lex_state = 52},
  [303] = {.lex_state = 52},
  [304] = {.lex_state = 52},
  [305] = {.lex_state = 46},
  [306] = {.lex_state = 13},
  [307] = {.lex_state = 46},
  [308] = {.lex_state = 13},
  [309] = {.lex_state = 54},
  [310] = {.lex_state = 54},
  [311] = {.lex_state = 13},
  [312] = {.lex_state = 13},
  [313] = {.lex_state = 13},
  [314] = {.lex_state = 13},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 13},
  [317] = {.lex_state = 13},
  [318] = {.lex_state = 265},
  [319] = {.lex_state = 34},
  [320] = {.lex_state = 13},
  [321] = {.lex_state = 34},
  [322] = {.lex_state = 13},
  [323] = {.lex_state = 13},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 28},
  [327] = {.lex_state = 34},
  [328] = {.lex_state = 265},
  [329] = {.lex_state = 13},
  [330] = {.lex_state = 13},
  [331] = {.lex_state = 34},
  [332] = {.lex_state = 34},
  [333] = {.lex_state = 13},
  [334] = {.lex_state = 13},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 13},
  [337] = {.lex_state = 13},
  [338] = {.lex_state = 13},
  [339] = {.lex_state = 13},
  [340] = {.lex_state = 13},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 13},
  [343] = {.lex_state = 13},
  [344] = {.lex_state = 13},
  [345] = {.lex_state = 13},
  [346] = {.lex_state = 34},
  [347] = {.lex_state = 13},
  [348] = {.lex_state = 13},
  [349] = {.lex_state = 13},
  [350] = {.lex_state = 13},
  [351] = {.lex_state = 13},
  [352] = {.lex_state = 13},
  [353] = {.lex_state = 13},
  [354] = {.lex_state = 13},
  [355] = {.lex_state = 13},
  [356] = {.lex_state = 13},
  [357] = {.lex_state = 13},
  [358] = {.lex_state = 13},
  [359] = {.lex_state = 13},
  [360] = {.lex_state = 13},
  [361] = {.lex_state = 13},
  [362] = {.lex_state = 13},
  [363] = {.lex_state = 13},
  [364] = {.lex_state = 13},
  [365] = {.lex_state = 13},
  [366] = {.lex_state = 13},
  [367] = {.lex_state = 13},
  [368] = {.lex_state = 13},
  [369] = {.lex_state = 13},
  [370] = {.lex_state = 13},
  [371] = {.lex_state = 265},
  [372] = {.lex_state = 13},
  [373] = {.lex_state = 34},
  [374] = {.lex_state = 13},
  [375] = {.lex_state = 13},
  [376] = {.lex_state = 13},
  [377] = {.lex_state = 36},
  [378] = {.lex_state = 36},
  [379] = {.lex_state = 54},
  [380] = {.lex_state = 34},
  [381] = {.lex_state = 51},
  [382] = {.lex_state = 51},
  [383] = {.lex_state = 13},
  [384] = {.lex_state = 13},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 54},
  [388] = {.lex_state = 36},
  [389] = {.lex_state = 265},
  [390] = {.lex_state = 51},
  [391] = {.lex_state = 51},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 47},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 47},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 49},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 49},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 58},
  [404] = {.lex_state = 58},
  [405] = {.lex_state = 11},
  [406] = {.lex_state = 12},
  [407] = {.lex_state = 34},
  [408] = {.lex_state = 36},
  [409] = {.lex_state = 49},
  [410] = {.lex_state = 59},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 36},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 59},
  [416] = {.lex_state = 49},
  [417] = {.lex_state = 36},
  [418] = {.lex_state = 58},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 49},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 58},
  [423] = {.lex_state = 265},
  [424] = {.lex_state = 58},
  [425] = {.lex_state = 58},
  [426] = {.lex_state = 58},
  [427] = {.lex_state = 58},
  [428] = {.lex_state = 58},
  [429] = {.lex_state = 23},
  [430] = {.lex_state = 23},
  [431] = {.lex_state = 23},
  [432] = {.lex_state = 265},
  [433] = {.lex_state = 23},
  [434] = {.lex_state = 36},
  [435] = {.lex_state = 58},
  [436] = {.lex_state = 265},
  [437] = {.lex_state = 59},
  [438] = {.lex_state = 49},
  [439] = {.lex_state = 36},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 49},
  [443] = {.lex_state = 23},
  [444] = {.lex_state = 23},
  [445] = {.lex_state = 23},
  [446] = {.lex_state = 36},
  [447] = {.lex_state = 59},
  [448] = {.lex_state = 49},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 49},
  [452] = {.lex_state = 59},
  [453] = {.lex_state = 49},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 23},
  [457] = {.lex_state = 59},
  [458] = {.lex_state = 49},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 49},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 34},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 23},
  [475] = {.lex_state = 23},
  [476] = {.lex_state = 12},
  [477] = {.lex_state = 11},
  [478] = {.lex_state = 23},
  [479] = {.lex_state = 23},
  [480] = {.lex_state = 34},
  [481] = {.lex_state = 23},
  [482] = {.lex_state = 23},
  [483] = {.lex_state = 23},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 58},
  [486] = {.lex_state = 36},
  [487] = {.lex_state = 23},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 58},
  [490] = {.lex_state = 58},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 58},
  [494] = {.lex_state = 34},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 58},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 58},
  [500] = {.lex_state = 23},
  [501] = {.lex_state = 12},
  [502] = {.lex_state = 11},
  [503] = {.lex_state = 23},
  [504] = {.lex_state = 12},
  [505] = {.lex_state = 11},
  [506] = {.lex_state = 12},
  [507] = {.lex_state = 11},
  [508] = {.lex_state = 12},
  [509] = {.lex_state = 11},
  [510] = {.lex_state = 12},
  [511] = {.lex_state = 11},
  [512] = {.lex_state = 12},
  [513] = {.lex_state = 11},
  [514] = {.lex_state = 12},
  [515] = {.lex_state = 11},
  [516] = {.lex_state = 12},
  [517] = {.lex_state = 11},
  [518] = {.lex_state = 12},
  [519] = {.lex_state = 11},
  [520] = {.lex_state = 12},
  [521] = {.lex_state = 11},
  [522] = {.lex_state = 34},
  [523] = {.lex_state = 23},
  [524] = {.lex_state = 23},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 58},
  [527] = {.lex_state = 265},
  [528] = {.lex_state = 265},
  [529] = {.lex_state = 30},
  [530] = {.lex_state = 23},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 34},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 34},
  [535] = {.lex_state = 34},
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
    [anon_sym_FROMDOCKERFILE] = ACTIONS(1),
    [anon_sym_GIT] = ACTIONS(1),
    [anon_sym_CLONE] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_ELSEIF] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_LET] = ACTIONS(1),
    [anon_sym_RUN] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_SAVEARTIFACT] = ACTIONS(1),
    [anon_sym_ASLOCAL] = ACTIONS(1),
    [anon_sym_SAVEIMAGE] = ACTIONS(1),
    [anon_sym_SET] = ACTIONS(1),
    [anon_sym_WITHDOCKER] = ACTIONS(1),
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
    [sym_source_file] = STATE(525),
    [sym_arg_command] = STATE(183),
    [sym_from_command] = STATE(183),
    [sym_project_command] = STATE(183),
    [sym_target] = STATE(183),
    [sym_version_command] = STATE(183),
    [aux_sym_source_file_repeat1] = STATE(183),
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
  [0] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(27), 1,
      anon_sym_GIT,
    ACTIONS(29), 1,
      anon_sym_IF,
    ACTIONS(33), 1,
      anon_sym_ELSE,
    ACTIONS(35), 1,
      anon_sym_LET,
    ACTIONS(37), 1,
      anon_sym_RUN,
    ACTIONS(39), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(41), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(43), 1,
      anon_sym_SET,
    ACTIONS(45), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(31), 2,
      anon_sym_ELSEIF,
      anon_sym_END,
    STATE(6), 13,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [66] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(27), 1,
      anon_sym_GIT,
    ACTIONS(29), 1,
      anon_sym_IF,
    ACTIONS(35), 1,
      anon_sym_LET,
    ACTIONS(37), 1,
      anon_sym_RUN,
    ACTIONS(39), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(41), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(43), 1,
      anon_sym_SET,
    ACTIONS(45), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(49), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(47), 2,
      anon_sym_ELSEIF,
      anon_sym_END,
    STATE(2), 13,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [132] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(27), 1,
      anon_sym_GIT,
    ACTIONS(29), 1,
      anon_sym_IF,
    ACTIONS(35), 1,
      anon_sym_LET,
    ACTIONS(37), 1,
      anon_sym_RUN,
    ACTIONS(39), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(41), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(43), 1,
      anon_sym_SET,
    ACTIONS(45), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(53), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(51), 2,
      anon_sym_ELSEIF,
      anon_sym_END,
    STATE(5), 13,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [198] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(27), 1,
      anon_sym_GIT,
    ACTIONS(29), 1,
      anon_sym_IF,
    ACTIONS(35), 1,
      anon_sym_LET,
    ACTIONS(37), 1,
      anon_sym_RUN,
    ACTIONS(39), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(41), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(43), 1,
      anon_sym_SET,
    ACTIONS(45), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(57), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(55), 2,
      anon_sym_ELSEIF,
      anon_sym_END,
    STATE(6), 13,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [264] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(59), 1,
      anon_sym_ARG,
    ACTIONS(62), 1,
      anon_sym_FROM,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(68), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(71), 1,
      anon_sym_GIT,
    ACTIONS(74), 1,
      anon_sym_IF,
    ACTIONS(79), 1,
      anon_sym_ELSE,
    ACTIONS(81), 1,
      anon_sym_LET,
    ACTIONS(84), 1,
      anon_sym_RUN,
    ACTIONS(87), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(90), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(93), 1,
      anon_sym_SET,
    ACTIONS(96), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(77), 2,
      anon_sym_ELSEIF,
      anon_sym_END,
    STATE(6), 13,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [330] = 16,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(27), 1,
      anon_sym_GIT,
    ACTIONS(29), 1,
      anon_sym_IF,
    ACTIONS(35), 1,
      anon_sym_LET,
    ACTIONS(37), 1,
      anon_sym_RUN,
    ACTIONS(43), 1,
      anon_sym_SET,
    ACTIONS(45), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(99), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(101), 1,
      anon_sym_SAVEIMAGE,
    STATE(498), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(12), 13,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [392] = 16,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(27), 1,
      anon_sym_GIT,
    ACTIONS(29), 1,
      anon_sym_IF,
    ACTIONS(35), 1,
      anon_sym_LET,
    ACTIONS(37), 1,
      anon_sym_RUN,
    ACTIONS(43), 1,
      anon_sym_SET,
    ACTIONS(45), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(99), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(101), 1,
      anon_sym_SAVEIMAGE,
    STATE(497), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(12), 13,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [454] = 16,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(59), 1,
      anon_sym_ARG,
    ACTIONS(62), 1,
      anon_sym_FROM,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(68), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(71), 1,
      anon_sym_GIT,
    ACTIONS(74), 1,
      anon_sym_IF,
    ACTIONS(77), 1,
      anon_sym_END,
    ACTIONS(81), 1,
      anon_sym_LET,
    ACTIONS(84), 1,
      anon_sym_RUN,
    ACTIONS(93), 1,
      anon_sym_SET,
    ACTIONS(96), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(103), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(106), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(9), 13,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [516] = 16,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(109), 1,
      anon_sym_ARG,
    ACTIONS(111), 1,
      anon_sym_FROM,
    ACTIONS(113), 1,
      anon_sym_COPY,
    ACTIONS(115), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(117), 1,
      anon_sym_GIT,
    ACTIONS(119), 1,
      anon_sym_IF,
    ACTIONS(121), 1,
      anon_sym_LET,
    ACTIONS(123), 1,
      anon_sym_RUN,
    ACTIONS(125), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(127), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(129), 1,
      anon_sym_SET,
    ACTIONS(131), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(133), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(15), 13,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [578] = 16,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(27), 1,
      anon_sym_GIT,
    ACTIONS(29), 1,
      anon_sym_IF,
    ACTIONS(35), 1,
      anon_sym_LET,
    ACTIONS(37), 1,
      anon_sym_RUN,
    ACTIONS(43), 1,
      anon_sym_SET,
    ACTIONS(45), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(99), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(101), 1,
      anon_sym_SAVEIMAGE,
    STATE(492), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(12), 13,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [640] = 16,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(27), 1,
      anon_sym_GIT,
    ACTIONS(29), 1,
      anon_sym_IF,
    ACTIONS(35), 1,
      anon_sym_LET,
    ACTIONS(37), 1,
      anon_sym_RUN,
    ACTIONS(43), 1,
      anon_sym_SET,
    ACTIONS(45), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(99), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(101), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(135), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(9), 13,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [702] = 16,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(27), 1,
      anon_sym_GIT,
    ACTIONS(29), 1,
      anon_sym_IF,
    ACTIONS(35), 1,
      anon_sym_LET,
    ACTIONS(37), 1,
      anon_sym_RUN,
    ACTIONS(43), 1,
      anon_sym_SET,
    ACTIONS(45), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(99), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(101), 1,
      anon_sym_SAVEIMAGE,
    STATE(414), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(12), 13,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [764] = 16,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(77), 1,
      sym__dedent,
    ACTIONS(137), 1,
      anon_sym_ARG,
    ACTIONS(140), 1,
      anon_sym_FROM,
    ACTIONS(143), 1,
      anon_sym_COPY,
    ACTIONS(146), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(149), 1,
      anon_sym_GIT,
    ACTIONS(152), 1,
      anon_sym_IF,
    ACTIONS(155), 1,
      anon_sym_LET,
    ACTIONS(158), 1,
      anon_sym_RUN,
    ACTIONS(161), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(164), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(167), 1,
      anon_sym_SET,
    ACTIONS(170), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(14), 13,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [826] = 16,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(109), 1,
      anon_sym_ARG,
    ACTIONS(111), 1,
      anon_sym_FROM,
    ACTIONS(113), 1,
      anon_sym_COPY,
    ACTIONS(115), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(117), 1,
      anon_sym_GIT,
    ACTIONS(119), 1,
      anon_sym_IF,
    ACTIONS(121), 1,
      anon_sym_LET,
    ACTIONS(123), 1,
      anon_sym_RUN,
    ACTIONS(125), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(127), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(129), 1,
      anon_sym_SET,
    ACTIONS(131), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(173), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(14), 13,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [888] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(179), 1,
      anon_sym_COLON2,
    ACTIONS(181), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(177), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(175), 19,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [927] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(187), 1,
      sym_image_name,
    ACTIONS(189), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(191), 1,
      sym_cache_hint,
    ACTIONS(193), 1,
      sym_push,
    STATE(18), 1,
      aux_sym_save_image_command_repeat1,
    STATE(39), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(37), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(185), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(183), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [976] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(187), 1,
      sym_image_name,
    ACTIONS(189), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(193), 1,
      sym_push,
    STATE(30), 1,
      aux_sym_save_image_command_repeat1,
    STATE(39), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(33), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(197), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(195), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [1022] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(203), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(201), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(199), 19,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [1058] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(205), 1,
      sym_path,
    ACTIONS(207), 1,
      anon_sym_PLUS,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(215), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(217), 1,
      anon_sym_DASH_DASHplatform,
    STATE(23), 1,
      aux_sym_copy_command_repeat1,
    STATE(235), 1,
      aux_sym_copy_command_repeat2,
    STATE(531), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(382), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(148), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(211), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [1111] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(191), 1,
      sym_cache_hint,
    ACTIONS(219), 1,
      sym_image_name,
    ACTIONS(221), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(223), 1,
      sym_push,
    STATE(28), 1,
      aux_sym_save_image_command_repeat1,
    STATE(61), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(59), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(185), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(183), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [1158] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(205), 1,
      sym_path,
    ACTIONS(207), 1,
      anon_sym_PLUS,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(215), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(217), 1,
      anon_sym_DASH_DASHplatform,
    STATE(27), 1,
      aux_sym_copy_command_repeat1,
    STATE(212), 1,
      aux_sym_copy_command_repeat2,
    STATE(531), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(382), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(148), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(211), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [1211] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(205), 1,
      sym_path,
    ACTIONS(207), 1,
      anon_sym_PLUS,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(215), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(217), 1,
      anon_sym_DASH_DASHplatform,
    STATE(48), 1,
      aux_sym_copy_command_repeat1,
    STATE(245), 1,
      aux_sym_copy_command_repeat2,
    STATE(531), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(382), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(148), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(211), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [1264] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(227), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(225), 19,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [1297] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(231), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(229), 19,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [1330] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(233), 1,
      sym_image_name,
    ACTIONS(235), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(237), 1,
      sym_cache_hint,
    ACTIONS(239), 1,
      sym_push,
    STATE(29), 1,
      aux_sym_save_image_command_repeat1,
    STATE(62), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(58), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(185), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(183), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [1377] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(205), 1,
      sym_path,
    ACTIONS(207), 1,
      anon_sym_PLUS,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(215), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(217), 1,
      anon_sym_DASH_DASHplatform,
    STATE(48), 1,
      aux_sym_copy_command_repeat1,
    STATE(211), 1,
      aux_sym_copy_command_repeat2,
    STATE(531), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(382), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(148), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(211), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [1430] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(219), 1,
      sym_image_name,
    ACTIONS(221), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(223), 1,
      sym_push,
    STATE(40), 1,
      aux_sym_save_image_command_repeat1,
    STATE(61), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(64), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(197), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(195), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [1474] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(233), 1,
      sym_image_name,
    ACTIONS(235), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(239), 1,
      sym_push,
    STATE(32), 1,
      aux_sym_save_image_command_repeat1,
    STATE(62), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(70), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(197), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(195), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [1518] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(245), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(248), 1,
      sym_push,
    STATE(30), 1,
      aux_sym_save_image_command_repeat1,
    STATE(39), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(243), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(241), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [1558] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(255), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(253), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(35), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(251), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [1592] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(257), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(260), 1,
      sym_push,
    STATE(32), 1,
      aux_sym_save_image_command_repeat1,
    STATE(62), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(243), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(241), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [1630] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(187), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(34), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(265), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(263), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [1664] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(271), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(34), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(269), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(267), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [1698] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(278), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(276), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(35), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(274), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [1732] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(255), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(283), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(31), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(281), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [1766] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(187), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(34), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(287), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(285), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [1800] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(255), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(291), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(35), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(289), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [1834] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(295), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(293), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [1864] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(297), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(300), 1,
      sym_push,
    STATE(40), 1,
      aux_sym_save_image_command_repeat1,
    STATE(61), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(243), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(241), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [1902] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(305), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(303), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [1932] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(307), 1,
      anon_sym_COLON2,
    ACTIONS(309), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(175), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(177), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [1966] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(255), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(313), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(38), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(311), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [2000] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(317), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(315), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [2030] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(321), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(319), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [2060] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(323), 1,
      anon_sym_DASH_DASH,
    ACTIONS(327), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(331), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(333), 1,
      anon_sym_DASH_DASHsecret,
    STATE(96), 1,
      aux_sym_run_command_repeat1,
    STATE(246), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(311), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(325), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(181), 2,
      sym_mount,
      sym_secret,
    ACTIONS(329), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [2105] = 3,
    ACTIONS(337), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(335), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [2132] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(339), 1,
      sym_path,
    ACTIONS(346), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(349), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(352), 1,
      anon_sym_DASH_DASHplatform,
    STATE(48), 1,
      aux_sym_copy_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(341), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    STATE(148), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(343), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [2173] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(355), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(199), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(201), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [2204] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(327), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(331), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(333), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(357), 1,
      anon_sym_DASH_DASH,
    STATE(46), 1,
      aux_sym_run_command_repeat1,
    STATE(246), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(370), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(325), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(181), 2,
      sym_mount,
      sym_secret,
    ACTIONS(329), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [2249] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(363), 1,
      anon_sym_ASLOCAL,
    ACTIONS(365), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(361), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(359), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [2282] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(327), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(331), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(333), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(367), 1,
      anon_sym_DASH_DASH,
    STATE(54), 1,
      aux_sym_run_command_repeat1,
    STATE(246), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(333), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(325), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(181), 2,
      sym_mount,
      sym_secret,
    ACTIONS(329), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [2327] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(373), 1,
      anon_sym_ASLOCAL,
    ACTIONS(375), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(371), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(369), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [2360] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(327), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(331), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(333), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(377), 1,
      anon_sym_DASH_DASH,
    STATE(96), 1,
      aux_sym_run_command_repeat1,
    STATE(246), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(313), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(325), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(181), 2,
      sym_mount,
      sym_secret,
    ACTIONS(329), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [2405] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(305), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(303), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [2433] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(276), 1,
      anon_sym_FROM,
    ACTIONS(379), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(56), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(274), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [2465] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(317), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(315), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [2493] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(233), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(71), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(287), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(285), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [2525] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(219), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(60), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(287), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(285), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [2557] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(382), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(60), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(269), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(267), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [2589] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(295), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(293), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [2617] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(295), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(293), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [2645] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(387), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(385), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [2673] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(219), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(60), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(265), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(263), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [2705] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(393), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(391), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(389), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [2735] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(313), 1,
      anon_sym_FROM,
    ACTIONS(395), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(76), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(311), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [2767] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(253), 1,
      anon_sym_FROM,
    ACTIONS(395), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(56), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(251), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [2799] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(225), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(227), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [2827] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(397), 1,
      anon_sym_COLON2,
    ACTIONS(399), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(175), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(177), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [2859] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(233), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(71), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(265), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(263), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [2891] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(401), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(71), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(269), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(267), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [2923] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(229), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(231), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [2951] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(404), 1,
      anon_sym_COLON2,
    ACTIONS(406), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(175), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(177), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [2983] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(283), 1,
      anon_sym_FROM,
    ACTIONS(395), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(67), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(281), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3015] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(321), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(319), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [3043] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(291), 1,
      anon_sym_FROM,
    ACTIONS(395), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(56), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(289), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3075] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(305), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(303), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [3103] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(321), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(319), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [3131] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(319), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(321), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [3159] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(303), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(305), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [3187] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(317), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(315), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [3215] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(412), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(410), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(408), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3245] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(416), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(414), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [3273] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(420), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(418), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3300] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(424), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(422), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3327] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(428), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(426), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3354] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(432), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(430), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3381] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(436), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(434), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3408] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(438), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(199), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(201), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [3437] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(177), 1,
      anon_sym_FROM,
    ACTIONS(440), 1,
      anon_sym_COLON2,
    ACTIONS(442), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(175), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3468] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(446), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(444), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3495] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(450), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(448), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3522] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(313), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(311), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3549] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(452), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(199), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(201), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [3578] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(456), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(454), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3605] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(465), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(468), 1,
      anon_sym_DASH_DASHsecret,
    STATE(96), 1,
      aux_sym_run_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(458), 2,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
    ACTIONS(460), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(181), 2,
      sym_mount,
      sym_secret,
    ACTIONS(462), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [3642] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(473), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(471), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3669] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(477), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(475), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3696] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(481), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(479), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3723] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(485), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(483), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3750] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(489), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(487), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3777] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(493), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(491), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3804] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(497), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(495), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3831] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(501), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(499), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3858] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(505), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(503), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3885] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(509), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(507), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3912] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(513), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(511), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3939] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(517), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(515), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3966] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(519), 1,
      anon_sym_ASLOCAL,
    ACTIONS(521), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(371), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(369), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [3997] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(525), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(523), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4024] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(529), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(527), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4051] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(533), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(531), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4078] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(537), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(535), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4105] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(373), 1,
      anon_sym_ASLOCAL,
    ACTIONS(375), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(371), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(369), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [4136] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(363), 1,
      anon_sym_ASLOCAL,
    ACTIONS(365), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(361), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(359), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [4167] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(541), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(539), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4194] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(543), 1,
      anon_sym_ASLOCAL,
    ACTIONS(545), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(361), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(359), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [4225] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(549), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(547), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4252] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(553), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(551), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4279] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(557), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(555), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4306] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(561), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(559), 13,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4333] = 4,
    ACTIONS(563), 1,
      aux_sym_branch_token1,
    ACTIONS(565), 1,
      sym__dedent,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(335), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [4360] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(37), 1,
      anon_sym_RUN,
    ACTIONS(567), 1,
      sym_allow_privileged,
    ACTIONS(569), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(571), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(573), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(575), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(577), 1,
      anon_sym_DASH_DASHservice,
    STATE(177), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(411), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(210), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [4402] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(410), 1,
      anon_sym_FROM,
    ACTIONS(579), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(408), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4430] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(229), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(231), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [4456] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(37), 1,
      anon_sym_RUN,
    ACTIONS(567), 1,
      sym_allow_privileged,
    ACTIONS(569), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(571), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(573), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(575), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(577), 1,
      anon_sym_DASH_DASHservice,
    STATE(177), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(495), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(210), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [4498] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(201), 1,
      anon_sym_FROM,
    ACTIONS(581), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(199), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4526] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(225), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(227), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [4552] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(229), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(231), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_END,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [4578] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(319), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(321), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [4604] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(303), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(305), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [4630] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(391), 1,
      anon_sym_FROM,
    ACTIONS(583), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(389), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4658] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(225), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(227), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [4684] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(387), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(385), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [4710] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(416), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(414), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [4736] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(37), 1,
      anon_sym_RUN,
    ACTIONS(567), 1,
      sym_allow_privileged,
    ACTIONS(569), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(571), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(573), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(575), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(577), 1,
      anon_sym_DASH_DASHservice,
    STATE(123), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(484), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(210), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [4778] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(37), 1,
      anon_sym_RUN,
    ACTIONS(567), 1,
      sym_allow_privileged,
    ACTIONS(569), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(571), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(573), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(575), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(577), 1,
      anon_sym_DASH_DASHservice,
    STATE(126), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(488), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(210), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [4820] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(319), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(321), 12,
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
  [4845] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(456), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(454), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4870] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(549), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(547), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4895] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(553), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(551), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4920] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(446), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(444), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4945] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(509), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(507), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4970] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(497), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(495), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4995] = 10,
    ACTIONS(585), 1,
      sym_image_name,
    ACTIONS(587), 1,
      anon_sym_PLUS,
    ACTIONS(591), 1,
      anon_sym_DASH_DASHplatform,
    STATE(200), 1,
      sym_target_ref,
    STATE(247), 1,
      aux_sym_from_command_repeat1,
    STATE(326), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(589), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(259), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(593), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [5032] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(557), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(555), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5057] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(517), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(515), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5082] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(595), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(597), 12,
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
  [5107] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(473), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(471), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5132] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(561), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(559), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5157] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(231), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(229), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5182] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(513), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(511), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5207] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(420), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(418), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5232] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(436), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(434), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5257] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(303), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(305), 12,
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
  [5282] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(505), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(503), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5307] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(450), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(448), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5332] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(477), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(475), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5357] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(428), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(426), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5382] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(481), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(479), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5407] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(432), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(430), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5432] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(525), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(523), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5457] = 10,
    ACTIONS(591), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(599), 1,
      sym_image_name,
    ACTIONS(601), 1,
      anon_sym_PLUS,
    STATE(43), 1,
      sym_target_ref,
    STATE(218), 1,
      aux_sym_from_command_repeat1,
    STATE(326), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(589), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(93), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(603), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [5494] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(424), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(422), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5519] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(313), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(311), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5544] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(533), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(531), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5569] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(605), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(607), 12,
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
  [5594] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(541), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(539), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5619] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(485), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(483), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5644] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(227), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(225), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5669] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(489), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(487), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5694] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(529), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(527), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5719] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(537), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(535), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5744] = 10,
    ACTIONS(591), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(609), 1,
      sym_image_name,
    ACTIONS(611), 1,
      anon_sym_PLUS,
    STATE(66), 1,
      sym_target_ref,
    STATE(225), 1,
      aux_sym_from_command_repeat1,
    STATE(326), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(589), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(165), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(613), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [5781] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(501), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(499), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5806] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(493), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(491), 12,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5831] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(615), 1,
      anon_sym_RUN,
    ACTIONS(617), 1,
      sym_allow_privileged,
    ACTIONS(620), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(623), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(626), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(629), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(632), 1,
      anon_sym_DASH_DASHservice,
    STATE(177), 1,
      aux_sym_with_docker_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(210), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [5870] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(635), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(637), 12,
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
  [5895] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(639), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(641), 12,
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
  [5920] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(645), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(643), 10,
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
  [5944] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(649), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(647), 10,
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
  [5968] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(653), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(651), 10,
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
  [5992] = 9,
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
    ACTIONS(655), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(186), 6,
      sym_arg_command,
      sym_from_command,
      sym_project_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [6026] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(303), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(305), 10,
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
  [6050] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(319), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(321), 10,
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
  [6074] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(657), 1,
      ts_builtin_sym_end,
    ACTIONS(659), 1,
      anon_sym_ARG,
    ACTIONS(662), 1,
      anon_sym_FROM,
    ACTIONS(665), 1,
      anon_sym_PROJECT,
    ACTIONS(668), 1,
      anon_sym_VERSION,
    ACTIONS(671), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(186), 6,
      sym_arg_command,
      sym_from_command,
      sym_project_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [6108] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(676), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(680), 1,
      anon_sym_DASH_DASHsecret,
    STATE(201), 1,
      aux_sym__conditional_block_repeat1,
    STATE(386), 1,
      sym__conditional_block,
    STATE(392), 1,
      sym_else_if_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(277), 2,
      sym_mount,
      sym_secret,
    ACTIONS(678), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [6143] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(676), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(680), 1,
      anon_sym_DASH_DASHsecret,
    STATE(201), 1,
      aux_sym__conditional_block_repeat1,
    STATE(335), 1,
      sym__conditional_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(277), 2,
      sym_mount,
      sym_secret,
    ACTIONS(678), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [6175] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(682), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(274), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(189), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(276), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [6201] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(685), 1,
      sym_path,
    ACTIONS(687), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(689), 1,
      anon_sym_DASHf,
    ACTIONS(691), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(693), 1,
      anon_sym_DASH_DASHplatform,
    STATE(193), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(297), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [6233] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(687), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(689), 1,
      anon_sym_DASHf,
    ACTIONS(691), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(693), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(695), 1,
      sym_path,
    STATE(192), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(297), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [6265] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(687), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(689), 1,
      anon_sym_DASHf,
    ACTIONS(691), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(693), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(697), 1,
      sym_path,
    STATE(195), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(297), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [6297] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(687), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(689), 1,
      anon_sym_DASHf,
    ACTIONS(691), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(693), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(699), 1,
      sym_path,
    STATE(195), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(297), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [6329] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(676), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(680), 1,
      anon_sym_DASH_DASHsecret,
    STATE(201), 1,
      aux_sym__conditional_block_repeat1,
    STATE(325), 1,
      sym__conditional_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(277), 2,
      sym_mount,
      sym_secret,
    ACTIONS(678), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [6361] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(701), 1,
      sym_path,
    ACTIONS(703), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(706), 1,
      anon_sym_DASHf,
    ACTIONS(709), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(712), 1,
      anon_sym_DASH_DASHplatform,
    STATE(195), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(297), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [6393] = 4,
    ACTIONS(565), 1,
      ts_builtin_sym_end,
    ACTIONS(715), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(335), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
  [6414] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(717), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(189), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(253), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [6439] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(721), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(727), 1,
      anon_sym_DASH_DASHsecret,
    STATE(198), 1,
      aux_sym__conditional_block_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(277), 2,
      sym_mount,
      sym_secret,
    ACTIONS(724), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [6468] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(730), 1,
      anon_sym_COLON2,
    ACTIONS(732), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(177), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [6493] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    ACTIONS(717), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(203), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(313), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [6518] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(676), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(680), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(734), 1,
      sym_identifier,
    STATE(198), 1,
      aux_sym__conditional_block_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(277), 2,
      sym_mount,
      sym_secret,
    ACTIONS(678), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [6547] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    ACTIONS(717), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(197), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(283), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [6572] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    ACTIONS(717), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(189), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(291), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [6597] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(736), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(201), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [6619] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(305), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(303), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [6639] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(321), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(319), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [6659] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(385), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(387), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [6679] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(414), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_DASH_DASH2,
    ACTIONS(416), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [6699] = 4,
    STATE(173), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(738), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(740), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [6718] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(742), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [6735] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(207), 1,
      anon_sym_PLUS,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(744), 1,
      sym_path,
    STATE(243), 1,
      aux_sym_copy_command_repeat2,
    STATE(531), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(382), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [6762] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(207), 1,
      anon_sym_PLUS,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(746), 1,
      sym_path,
    STATE(243), 1,
      aux_sym_copy_command_repeat2,
    STATE(531), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(382), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [6789] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(748), 1,
      sym_path,
    STATE(241), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(750), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [6810] = 4,
    STATE(164), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(738), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(752), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [6829] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(754), 1,
      sym_path,
    STATE(213), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(750), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [6850] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(756), 1,
      sym_expr,
    ACTIONS(758), 1,
      anon_sym_DQUOTE,
    ACTIONS(760), 1,
      anon_sym_SQUOTE,
    ACTIONS(762), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(334), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [6875] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(758), 1,
      anon_sym_DQUOTE,
    ACTIONS(760), 1,
      anon_sym_SQUOTE,
    ACTIONS(764), 1,
      sym_expr,
    ACTIONS(766), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(337), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [6900] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(217), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(768), 1,
      anon_sym_PLUS,
    STATE(36), 1,
      sym_target_ref,
    STATE(288), 1,
      aux_sym_from_command_repeat1,
    STATE(326), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(770), 2,
      sym_allow_privileged,
      sym_pass_args,
  [6927] = 4,
    STATE(85), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(738), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(772), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [6946] = 4,
    STATE(113), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(738), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(774), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [6965] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(776), 1,
      sym_path,
    STATE(241), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(750), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [6986] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(778), 1,
      sym_path,
    STATE(221), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(750), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [7007] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(758), 1,
      anon_sym_DQUOTE,
    ACTIONS(760), 1,
      anon_sym_SQUOTE,
    ACTIONS(780), 1,
      sym_expr,
    ACTIONS(782), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(367), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [7032] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(758), 1,
      anon_sym_DQUOTE,
    ACTIONS(760), 1,
      anon_sym_SQUOTE,
    ACTIONS(784), 1,
      sym_expr,
    ACTIONS(786), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(312), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [7057] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(217), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(788), 1,
      anon_sym_PLUS,
    STATE(74), 1,
      sym_target_ref,
    STATE(288), 1,
      aux_sym_from_command_repeat1,
    STATE(326), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(770), 2,
      sym_allow_privileged,
      sym_pass_args,
  [7084] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(305), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [7101] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(321), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [7118] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(758), 1,
      anon_sym_DQUOTE,
    ACTIONS(760), 1,
      anon_sym_SQUOTE,
    ACTIONS(790), 1,
      sym_expr,
    ACTIONS(792), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(362), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [7143] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(794), 1,
      ts_builtin_sym_end,
    ACTIONS(798), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(796), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [7164] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(758), 1,
      anon_sym_DQUOTE,
    ACTIONS(760), 1,
      anon_sym_SQUOTE,
    ACTIONS(800), 1,
      sym_expr,
    ACTIONS(802), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(354), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [7189] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(414), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [7206] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(227), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [7225] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(804), 1,
      sym_path,
    STATE(239), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(750), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [7246] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(806), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [7263] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(207), 1,
      anon_sym_PLUS,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(808), 1,
      sym_path,
    STATE(243), 1,
      aux_sym_copy_command_repeat2,
    STATE(531), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(382), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [7290] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(810), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [7307] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(812), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [7324] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(814), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [7341] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(816), 1,
      sym_path,
    STATE(241), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(750), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [7362] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(231), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [7381] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(818), 1,
      sym_path,
    STATE(241), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(820), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [7402] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(823), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [7419] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(825), 1,
      sym_path,
    ACTIONS(828), 1,
      anon_sym_PLUS,
    ACTIONS(831), 1,
      anon_sym_LPAREN,
    STATE(243), 1,
      aux_sym_copy_command_repeat2,
    STATE(531), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(382), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [7446] = 4,
    STATE(244), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(834), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(837), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [7465] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(207), 1,
      anon_sym_PLUS,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(839), 1,
      sym_path,
    STATE(243), 1,
      aux_sym_copy_command_repeat2,
    STATE(531), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(382), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [7492] = 4,
    STATE(244), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(841), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(843), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [7511] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(207), 1,
      anon_sym_PLUS,
    ACTIONS(217), 1,
      anon_sym_DASH_DASHplatform,
    STATE(202), 1,
      sym_target_ref,
    STATE(288), 1,
      aux_sym_from_command_repeat1,
    STATE(326), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(770), 2,
      sym_allow_privileged,
      sym_pass_args,
  [7538] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(607), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [7555] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(434), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(436), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [7573] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(845), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(847), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [7591] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(418), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(420), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [7609] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(511), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(513), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [7627] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(430), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(432), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [7645] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(849), 1,
      anon_sym_DQUOTE,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
    ACTIONS(853), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(301), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [7667] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(758), 1,
      anon_sym_DQUOTE,
    ACTIONS(760), 1,
      anon_sym_SQUOTE,
    ACTIONS(855), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(344), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [7689] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(857), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(859), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [7707] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(758), 1,
      anon_sym_DQUOTE,
    ACTIONS(760), 1,
      anon_sym_SQUOTE,
    ACTIONS(861), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(363), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [7729] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(426), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(428), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [7747] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(313), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [7765] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(863), 1,
      anon_sym_DQUOTE,
    ACTIONS(865), 1,
      anon_sym_SQUOTE,
    ACTIONS(867), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(57), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [7787] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(869), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(871), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [7805] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(873), 1,
      anon_sym_DQUOTE,
    ACTIONS(875), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(63), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [7827] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(879), 1,
      anon_sym_DQUOTE,
    ACTIONS(881), 1,
      anon_sym_SQUOTE,
    ACTIONS(883), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(179), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [7849] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(879), 1,
      anon_sym_DQUOTE,
    ACTIONS(881), 1,
      anon_sym_SQUOTE,
    ACTIONS(885), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(167), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [7871] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(887), 1,
      anon_sym_DQUOTE,
    ACTIONS(889), 1,
      anon_sym_SQUOTE,
    ACTIONS(891), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(248), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [7893] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(893), 1,
      anon_sym_DQUOTE,
    ACTIONS(895), 1,
      anon_sym_SQUOTE,
    ACTIONS(897), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(207), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [7915] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(899), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(901), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [7933] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(903), 1,
      anon_sym_DQUOTE,
    ACTIONS(905), 1,
      anon_sym_SQUOTE,
    ACTIONS(907), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(44), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [7955] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(909), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(911), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [7973] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(913), 1,
      anon_sym_DQUOTE,
    ACTIONS(915), 1,
      anon_sym_SQUOTE,
    ACTIONS(917), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(182), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [7995] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(887), 1,
      anon_sym_DQUOTE,
    ACTIONS(889), 1,
      anon_sym_SQUOTE,
    ACTIONS(919), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(237), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [8017] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(913), 1,
      anon_sym_DQUOTE,
    ACTIONS(915), 1,
      anon_sym_SQUOTE,
    ACTIONS(921), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(180), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [8039] = 4,
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
  [8057] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(643), 6,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      sym_ssh,
  [8073] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(651), 6,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      sym_ssh,
  [8089] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(923), 1,
      anon_sym_DQUOTE,
    ACTIONS(925), 1,
      anon_sym_SQUOTE,
    ACTIONS(927), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(134), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [8111] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(929), 6,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      sym_ssh,
  [8127] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(758), 1,
      anon_sym_DQUOTE,
    ACTIONS(760), 1,
      anon_sym_SQUOTE,
    ACTIONS(931), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(356), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [8149] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(933), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      anon_sym_SQUOTE,
    ACTIONS(937), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(81), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [8171] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(849), 1,
      anon_sym_DQUOTE,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
    ACTIONS(939), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(293), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [8193] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(941), 1,
      anon_sym_DQUOTE,
    ACTIONS(943), 1,
      anon_sym_SQUOTE,
    ACTIONS(945), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(274), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [8215] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(947), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(949), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [8233] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(941), 1,
      anon_sym_DQUOTE,
    ACTIONS(943), 1,
      anon_sym_SQUOTE,
    ACTIONS(951), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(275), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [8255] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(321), 6,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      sym_ssh,
  [8271] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(305), 6,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      sym_ssh,
  [8287] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(758), 1,
      anon_sym_DQUOTE,
    ACTIONS(760), 1,
      anon_sym_SQUOTE,
    ACTIONS(953), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(359), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [8309] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(879), 1,
      anon_sym_DQUOTE,
    ACTIONS(881), 1,
      anon_sym_SQUOTE,
    ACTIONS(955), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(178), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [8331] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(957), 1,
      anon_sym_PLUS,
    ACTIONS(962), 1,
      anon_sym_DASH_DASHplatform,
    STATE(288), 1,
      aux_sym_from_command_repeat1,
    STATE(326), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(959), 2,
      sym_allow_privileged,
      sym_pass_args,
  [8355] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(325), 1,
      aux_sym_shell_fragment_token3,
    STATE(246), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(366), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(327), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [8376] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(325), 1,
      aux_sym_shell_fragment_token3,
    STATE(246), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(314), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(327), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [8397] = 4,
    ACTIONS(965), 1,
      anon_sym_EQ,
    STATE(154), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(967), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8414] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(969), 1,
      sym_path,
    ACTIONS(971), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(973), 1,
      sym_keep_ts,
    STATE(294), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(387), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [8437] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(605), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(607), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [8454] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(975), 1,
      sym_path,
    ACTIONS(977), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(980), 1,
      sym_keep_ts,
    STATE(294), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(387), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [8477] = 4,
    ACTIONS(983), 1,
      anon_sym_EQ,
    STATE(172), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(985), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8494] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(971), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(973), 1,
      sym_keep_ts,
    ACTIONS(987), 1,
      sym_path,
    STATE(292), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(387), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [8517] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(989), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(991), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [8534] = 4,
    ACTIONS(993), 1,
      anon_sym_EQ,
    STATE(111), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(995), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8551] = 4,
    ACTIONS(997), 1,
      anon_sym_EQ,
    STATE(88), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(999), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8568] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1001), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1003), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [8585] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1005), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1007), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [8602] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(319), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(321), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [8619] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1009), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1011), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [8636] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(303), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(305), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [8653] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(325), 1,
      aux_sym_shell_fragment_token3,
    STATE(246), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(348), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(327), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [8674] = 4,
    ACTIONS(1013), 1,
      anon_sym_EQ,
    STATE(273), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1015), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8691] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(325), 1,
      aux_sym_shell_fragment_token3,
    STATE(246), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(364), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(327), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [8712] = 4,
    ACTIONS(1017), 1,
      anon_sym_EQ,
    STATE(249), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1019), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8729] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(971), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(973), 1,
      sym_keep_ts,
    ACTIONS(1021), 1,
      sym_path,
    STATE(310), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(387), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [8752] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(971), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(973), 1,
      sym_keep_ts,
    ACTIONS(1023), 1,
      sym_path,
    STATE(294), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(387), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [8775] = 3,
    STATE(119), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1025), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8789] = 3,
    STATE(159), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1027), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8803] = 3,
    STATE(141), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1029), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8817] = 3,
    STATE(146), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1031), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8831] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1033), 1,
      anon_sym_ELSEIF,
    ACTIONS(1035), 1,
      anon_sym_ELSE,
    ACTIONS(1037), 1,
      anon_sym_END,
    STATE(341), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [8851] = 3,
    STATE(150), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1039), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8865] = 3,
    STATE(169), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1041), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8879] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(717), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(328), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [8897] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1045), 1,
      sym_identifier,
    STATE(373), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1047), 2,
      sym_global,
      sym_required,
  [8915] = 3,
    STATE(168), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1049), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8929] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1051), 1,
      sym_identifier,
    STATE(331), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1047), 2,
      sym_global,
      sym_required,
  [8947] = 3,
    STATE(160), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1053), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8961] = 3,
    STATE(158), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1055), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8975] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1033), 1,
      anon_sym_ELSEIF,
    ACTIONS(1057), 1,
      anon_sym_ELSE,
    ACTIONS(1059), 1,
      anon_sym_END,
    STATE(341), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [8995] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1033), 1,
      anon_sym_ELSEIF,
    ACTIONS(1061), 1,
      anon_sym_ELSE,
    ACTIONS(1063), 1,
      anon_sym_END,
    STATE(324), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [9015] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1065), 4,
      anon_sym_PLUS,
      sym_allow_privileged,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
  [9029] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1067), 1,
      sym_identifier,
    STATE(346), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1047), 2,
      sym_global,
      sym_required,
  [9047] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(717), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(189), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [9065] = 3,
    STATE(139), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1071), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9079] = 3,
    STATE(162), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1073), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9093] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1075), 1,
      sym_identifier,
    STATE(373), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1047), 2,
      sym_global,
      sym_required,
  [9111] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1077), 1,
      sym_identifier,
    STATE(319), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1047), 2,
      sym_global,
      sym_required,
  [9129] = 3,
    STATE(157), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1079), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9143] = 3,
    STATE(107), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1081), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9157] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1033), 1,
      anon_sym_ELSEIF,
    ACTIONS(1083), 1,
      anon_sym_ELSE,
    ACTIONS(1085), 1,
      anon_sym_END,
    STATE(315), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [9177] = 3,
    STATE(84), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1087), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9191] = 3,
    STATE(86), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1089), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9205] = 3,
    STATE(4), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1091), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9219] = 3,
    STATE(87), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1093), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9233] = 3,
    STATE(256), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1095), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9247] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1097), 1,
      anon_sym_ELSEIF,
    ACTIONS(1100), 1,
      anon_sym_ELSE,
    ACTIONS(1102), 1,
      anon_sym_END,
    STATE(341), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [9267] = 3,
    STATE(142), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1104), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9281] = 3,
    STATE(147), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1106), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9295] = 3,
    STATE(101), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1108), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9309] = 3,
    STATE(161), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1110), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9323] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1112), 1,
      sym_identifier,
    STATE(373), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1047), 2,
      sym_global,
      sym_required,
  [9341] = 3,
    STATE(121), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1114), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9355] = 3,
    STATE(120), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1116), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9369] = 3,
    STATE(100), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1118), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9383] = 3,
    STATE(99), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1120), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9397] = 3,
    STATE(3), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1122), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9411] = 3,
    STATE(153), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1124), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9425] = 3,
    STATE(112), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1126), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9439] = 3,
    STATE(252), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1128), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9453] = 3,
    STATE(251), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1130), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9467] = 3,
    STATE(171), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1132), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9481] = 3,
    STATE(98), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1134), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9495] = 3,
    STATE(267), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1136), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9509] = 3,
    STATE(143), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1138), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9523] = 3,
    STATE(110), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1140), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9537] = 3,
    STATE(108), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1142), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9551] = 3,
    STATE(258), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1144), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9565] = 3,
    STATE(106), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1146), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9579] = 3,
    STATE(105), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1148), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9593] = 3,
    STATE(253), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1150), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9607] = 3,
    STATE(156), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1152), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9621] = 3,
    STATE(152), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1154), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9635] = 3,
    STATE(282), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1156), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9649] = 3,
    STATE(91), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1158), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9663] = 3,
    STATE(92), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1160), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9677] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(717), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1162), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(189), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [9695] = 3,
    STATE(95), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1164), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9709] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1166), 1,
      sym_identifier,
    STATE(373), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1168), 2,
      sym_global,
      sym_required,
  [9727] = 3,
    STATE(166), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1171), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9741] = 3,
    STATE(116), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1173), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9755] = 3,
    STATE(229), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1175), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9769] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1177), 1,
      sym_version_major_minor,
    ACTIONS(1179), 1,
      sym_feature_flag,
    STATE(377), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [9786] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1182), 1,
      sym_version_major_minor,
    ACTIONS(1184), 1,
      sym_feature_flag,
    STATE(388), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [9803] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1186), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1188), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [9818] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1190), 3,
      sym_identifier,
      sym_global,
      sym_required,
  [9831] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1192), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1194), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [9846] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(738), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1196), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [9861] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(303), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9872] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(319), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9883] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1198), 1,
      anon_sym_PLUS,
    ACTIONS(1200), 1,
      anon_sym_LPAREN,
    STATE(238), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [9900] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1204), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1202), 2,
      anon_sym_ELSEIF,
      anon_sym_END,
  [9915] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1206), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1208), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [9930] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1210), 1,
      sym_version_major_minor,
    ACTIONS(1212), 1,
      sym_feature_flag,
    STATE(377), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [9947] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(717), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(371), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [9962] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1214), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1216), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [9977] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1218), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1220), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [9992] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1224), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1222), 2,
      anon_sym_ELSEIF,
      anon_sym_END,
  [10007] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1226), 1,
      sym_image_name,
    STATE(423), 1,
      sym_image_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10021] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(207), 1,
      anon_sym_PLUS,
    STATE(491), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10035] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1228), 1,
      sym_image_name,
    STATE(236), 1,
      sym_image_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10049] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(207), 1,
      anon_sym_PLUS,
    STATE(389), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10063] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1230), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10074] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1232), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10085] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1234), 1,
      anon_sym_CLONE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10096] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1236), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10107] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1238), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10118] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1240), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10129] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1242), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10140] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1244), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10151] = 2,
    ACTIONS(1246), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [10160] = 2,
    ACTIONS(1248), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [10169] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1250), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10180] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1252), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10191] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1254), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10202] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1256), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10213] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1258), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10224] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1260), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10235] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1262), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10246] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1264), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10257] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1266), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10268] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1268), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10279] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1270), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10290] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1272), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10301] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1274), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10312] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1276), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10323] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1278), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10334] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1280), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10345] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1282), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10356] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1284), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10367] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1286), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10378] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1288), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10389] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1290), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10400] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1292), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10411] = 2,
    ACTIONS(1294), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [10420] = 2,
    ACTIONS(1296), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [10429] = 2,
    ACTIONS(1298), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [10438] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1300), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10449] = 2,
    ACTIONS(1302), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [10458] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1304), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10469] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1306), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10480] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1308), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10491] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1310), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10502] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1312), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10513] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1314), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10524] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1316), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10535] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1318), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10546] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1320), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10557] = 2,
    ACTIONS(1322), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [10566] = 2,
    ACTIONS(1324), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [10575] = 2,
    ACTIONS(1326), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [10584] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1328), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10595] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1330), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10606] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1332), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10617] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1334), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10628] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1336), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10639] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1338), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10650] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1340), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10661] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1342), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10672] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1344), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10683] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1346), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10694] = 2,
    ACTIONS(1348), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [10703] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1350), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10714] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1352), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10725] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1354), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10736] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1356), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10747] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1358), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10758] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1360), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10769] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1362), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10780] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1364), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10791] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1366), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10802] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1368), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10813] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1370), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10824] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1372), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10835] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1374), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10846] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1376), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10857] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1378), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10868] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1380), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10879] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1382), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10890] = 2,
    ACTIONS(1384), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [10899] = 2,
    ACTIONS(1386), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [10908] = 2,
    ACTIONS(1388), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [10917] = 2,
    ACTIONS(1390), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [10926] = 2,
    ACTIONS(1392), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [10935] = 2,
    ACTIONS(1394), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [10944] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1396), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10955] = 2,
    ACTIONS(1398), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [10964] = 2,
    ACTIONS(1400), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [10973] = 2,
    ACTIONS(1402), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [10982] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1404), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10993] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1406), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11004] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1408), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11015] = 2,
    ACTIONS(1410), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11024] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1412), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11035] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1414), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11046] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1416), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11057] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1418), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11068] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1420), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11079] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1422), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11090] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1424), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11101] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1426), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11112] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1428), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11123] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1430), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11134] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1432), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11145] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1434), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11156] = 2,
    ACTIONS(1436), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11165] = 2,
    ACTIONS(1438), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11174] = 2,
    ACTIONS(1440), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11183] = 2,
    ACTIONS(1442), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11192] = 2,
    ACTIONS(1444), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11201] = 2,
    ACTIONS(1446), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11210] = 2,
    ACTIONS(1448), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11219] = 2,
    ACTIONS(1450), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11228] = 2,
    ACTIONS(1452), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11237] = 2,
    ACTIONS(1454), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11246] = 2,
    ACTIONS(1456), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11255] = 2,
    ACTIONS(1458), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11264] = 2,
    ACTIONS(1460), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11273] = 2,
    ACTIONS(1462), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11282] = 2,
    ACTIONS(1464), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11291] = 2,
    ACTIONS(1466), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11300] = 2,
    ACTIONS(1468), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11309] = 2,
    ACTIONS(1470), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11318] = 2,
    ACTIONS(1472), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11327] = 2,
    ACTIONS(1474), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11336] = 2,
    ACTIONS(1476), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11345] = 2,
    ACTIONS(1478), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11354] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1480), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11365] = 2,
    ACTIONS(1482), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11374] = 2,
    ACTIONS(1484), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11383] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1486), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11394] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1488), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11405] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1490), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11416] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1492), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11427] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1494), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11438] = 2,
    ACTIONS(1496), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [11447] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1498), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11458] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1500), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11469] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1502), 1,
      anon_sym_CLONE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11480] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1504), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11491] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1506), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 66,
  [SMALL_STATE(4)] = 132,
  [SMALL_STATE(5)] = 198,
  [SMALL_STATE(6)] = 264,
  [SMALL_STATE(7)] = 330,
  [SMALL_STATE(8)] = 392,
  [SMALL_STATE(9)] = 454,
  [SMALL_STATE(10)] = 516,
  [SMALL_STATE(11)] = 578,
  [SMALL_STATE(12)] = 640,
  [SMALL_STATE(13)] = 702,
  [SMALL_STATE(14)] = 764,
  [SMALL_STATE(15)] = 826,
  [SMALL_STATE(16)] = 888,
  [SMALL_STATE(17)] = 927,
  [SMALL_STATE(18)] = 976,
  [SMALL_STATE(19)] = 1022,
  [SMALL_STATE(20)] = 1058,
  [SMALL_STATE(21)] = 1111,
  [SMALL_STATE(22)] = 1158,
  [SMALL_STATE(23)] = 1211,
  [SMALL_STATE(24)] = 1264,
  [SMALL_STATE(25)] = 1297,
  [SMALL_STATE(26)] = 1330,
  [SMALL_STATE(27)] = 1377,
  [SMALL_STATE(28)] = 1430,
  [SMALL_STATE(29)] = 1474,
  [SMALL_STATE(30)] = 1518,
  [SMALL_STATE(31)] = 1558,
  [SMALL_STATE(32)] = 1592,
  [SMALL_STATE(33)] = 1630,
  [SMALL_STATE(34)] = 1664,
  [SMALL_STATE(35)] = 1698,
  [SMALL_STATE(36)] = 1732,
  [SMALL_STATE(37)] = 1766,
  [SMALL_STATE(38)] = 1800,
  [SMALL_STATE(39)] = 1834,
  [SMALL_STATE(40)] = 1864,
  [SMALL_STATE(41)] = 1902,
  [SMALL_STATE(42)] = 1932,
  [SMALL_STATE(43)] = 1966,
  [SMALL_STATE(44)] = 2000,
  [SMALL_STATE(45)] = 2030,
  [SMALL_STATE(46)] = 2060,
  [SMALL_STATE(47)] = 2105,
  [SMALL_STATE(48)] = 2132,
  [SMALL_STATE(49)] = 2173,
  [SMALL_STATE(50)] = 2204,
  [SMALL_STATE(51)] = 2249,
  [SMALL_STATE(52)] = 2282,
  [SMALL_STATE(53)] = 2327,
  [SMALL_STATE(54)] = 2360,
  [SMALL_STATE(55)] = 2405,
  [SMALL_STATE(56)] = 2433,
  [SMALL_STATE(57)] = 2465,
  [SMALL_STATE(58)] = 2493,
  [SMALL_STATE(59)] = 2525,
  [SMALL_STATE(60)] = 2557,
  [SMALL_STATE(61)] = 2589,
  [SMALL_STATE(62)] = 2617,
  [SMALL_STATE(63)] = 2645,
  [SMALL_STATE(64)] = 2673,
  [SMALL_STATE(65)] = 2705,
  [SMALL_STATE(66)] = 2735,
  [SMALL_STATE(67)] = 2767,
  [SMALL_STATE(68)] = 2799,
  [SMALL_STATE(69)] = 2827,
  [SMALL_STATE(70)] = 2859,
  [SMALL_STATE(71)] = 2891,
  [SMALL_STATE(72)] = 2923,
  [SMALL_STATE(73)] = 2951,
  [SMALL_STATE(74)] = 2983,
  [SMALL_STATE(75)] = 3015,
  [SMALL_STATE(76)] = 3043,
  [SMALL_STATE(77)] = 3075,
  [SMALL_STATE(78)] = 3103,
  [SMALL_STATE(79)] = 3131,
  [SMALL_STATE(80)] = 3159,
  [SMALL_STATE(81)] = 3187,
  [SMALL_STATE(82)] = 3215,
  [SMALL_STATE(83)] = 3245,
  [SMALL_STATE(84)] = 3273,
  [SMALL_STATE(85)] = 3300,
  [SMALL_STATE(86)] = 3327,
  [SMALL_STATE(87)] = 3354,
  [SMALL_STATE(88)] = 3381,
  [SMALL_STATE(89)] = 3408,
  [SMALL_STATE(90)] = 3437,
  [SMALL_STATE(91)] = 3468,
  [SMALL_STATE(92)] = 3495,
  [SMALL_STATE(93)] = 3522,
  [SMALL_STATE(94)] = 3549,
  [SMALL_STATE(95)] = 3578,
  [SMALL_STATE(96)] = 3605,
  [SMALL_STATE(97)] = 3642,
  [SMALL_STATE(98)] = 3669,
  [SMALL_STATE(99)] = 3696,
  [SMALL_STATE(100)] = 3723,
  [SMALL_STATE(101)] = 3750,
  [SMALL_STATE(102)] = 3777,
  [SMALL_STATE(103)] = 3804,
  [SMALL_STATE(104)] = 3831,
  [SMALL_STATE(105)] = 3858,
  [SMALL_STATE(106)] = 3885,
  [SMALL_STATE(107)] = 3912,
  [SMALL_STATE(108)] = 3939,
  [SMALL_STATE(109)] = 3966,
  [SMALL_STATE(110)] = 3997,
  [SMALL_STATE(111)] = 4024,
  [SMALL_STATE(112)] = 4051,
  [SMALL_STATE(113)] = 4078,
  [SMALL_STATE(114)] = 4105,
  [SMALL_STATE(115)] = 4136,
  [SMALL_STATE(116)] = 4167,
  [SMALL_STATE(117)] = 4194,
  [SMALL_STATE(118)] = 4225,
  [SMALL_STATE(119)] = 4252,
  [SMALL_STATE(120)] = 4279,
  [SMALL_STATE(121)] = 4306,
  [SMALL_STATE(122)] = 4333,
  [SMALL_STATE(123)] = 4360,
  [SMALL_STATE(124)] = 4402,
  [SMALL_STATE(125)] = 4430,
  [SMALL_STATE(126)] = 4456,
  [SMALL_STATE(127)] = 4498,
  [SMALL_STATE(128)] = 4526,
  [SMALL_STATE(129)] = 4552,
  [SMALL_STATE(130)] = 4578,
  [SMALL_STATE(131)] = 4604,
  [SMALL_STATE(132)] = 4630,
  [SMALL_STATE(133)] = 4658,
  [SMALL_STATE(134)] = 4684,
  [SMALL_STATE(135)] = 4710,
  [SMALL_STATE(136)] = 4736,
  [SMALL_STATE(137)] = 4778,
  [SMALL_STATE(138)] = 4820,
  [SMALL_STATE(139)] = 4845,
  [SMALL_STATE(140)] = 4870,
  [SMALL_STATE(141)] = 4895,
  [SMALL_STATE(142)] = 4920,
  [SMALL_STATE(143)] = 4945,
  [SMALL_STATE(144)] = 4970,
  [SMALL_STATE(145)] = 4995,
  [SMALL_STATE(146)] = 5032,
  [SMALL_STATE(147)] = 5057,
  [SMALL_STATE(148)] = 5082,
  [SMALL_STATE(149)] = 5107,
  [SMALL_STATE(150)] = 5132,
  [SMALL_STATE(151)] = 5157,
  [SMALL_STATE(152)] = 5182,
  [SMALL_STATE(153)] = 5207,
  [SMALL_STATE(154)] = 5232,
  [SMALL_STATE(155)] = 5257,
  [SMALL_STATE(156)] = 5282,
  [SMALL_STATE(157)] = 5307,
  [SMALL_STATE(158)] = 5332,
  [SMALL_STATE(159)] = 5357,
  [SMALL_STATE(160)] = 5382,
  [SMALL_STATE(161)] = 5407,
  [SMALL_STATE(162)] = 5432,
  [SMALL_STATE(163)] = 5457,
  [SMALL_STATE(164)] = 5494,
  [SMALL_STATE(165)] = 5519,
  [SMALL_STATE(166)] = 5544,
  [SMALL_STATE(167)] = 5569,
  [SMALL_STATE(168)] = 5594,
  [SMALL_STATE(169)] = 5619,
  [SMALL_STATE(170)] = 5644,
  [SMALL_STATE(171)] = 5669,
  [SMALL_STATE(172)] = 5694,
  [SMALL_STATE(173)] = 5719,
  [SMALL_STATE(174)] = 5744,
  [SMALL_STATE(175)] = 5781,
  [SMALL_STATE(176)] = 5806,
  [SMALL_STATE(177)] = 5831,
  [SMALL_STATE(178)] = 5870,
  [SMALL_STATE(179)] = 5895,
  [SMALL_STATE(180)] = 5920,
  [SMALL_STATE(181)] = 5944,
  [SMALL_STATE(182)] = 5968,
  [SMALL_STATE(183)] = 5992,
  [SMALL_STATE(184)] = 6026,
  [SMALL_STATE(185)] = 6050,
  [SMALL_STATE(186)] = 6074,
  [SMALL_STATE(187)] = 6108,
  [SMALL_STATE(188)] = 6143,
  [SMALL_STATE(189)] = 6175,
  [SMALL_STATE(190)] = 6201,
  [SMALL_STATE(191)] = 6233,
  [SMALL_STATE(192)] = 6265,
  [SMALL_STATE(193)] = 6297,
  [SMALL_STATE(194)] = 6329,
  [SMALL_STATE(195)] = 6361,
  [SMALL_STATE(196)] = 6393,
  [SMALL_STATE(197)] = 6414,
  [SMALL_STATE(198)] = 6439,
  [SMALL_STATE(199)] = 6468,
  [SMALL_STATE(200)] = 6493,
  [SMALL_STATE(201)] = 6518,
  [SMALL_STATE(202)] = 6547,
  [SMALL_STATE(203)] = 6572,
  [SMALL_STATE(204)] = 6597,
  [SMALL_STATE(205)] = 6619,
  [SMALL_STATE(206)] = 6639,
  [SMALL_STATE(207)] = 6659,
  [SMALL_STATE(208)] = 6679,
  [SMALL_STATE(209)] = 6699,
  [SMALL_STATE(210)] = 6718,
  [SMALL_STATE(211)] = 6735,
  [SMALL_STATE(212)] = 6762,
  [SMALL_STATE(213)] = 6789,
  [SMALL_STATE(214)] = 6810,
  [SMALL_STATE(215)] = 6829,
  [SMALL_STATE(216)] = 6850,
  [SMALL_STATE(217)] = 6875,
  [SMALL_STATE(218)] = 6900,
  [SMALL_STATE(219)] = 6927,
  [SMALL_STATE(220)] = 6946,
  [SMALL_STATE(221)] = 6965,
  [SMALL_STATE(222)] = 6986,
  [SMALL_STATE(223)] = 7007,
  [SMALL_STATE(224)] = 7032,
  [SMALL_STATE(225)] = 7057,
  [SMALL_STATE(226)] = 7084,
  [SMALL_STATE(227)] = 7101,
  [SMALL_STATE(228)] = 7118,
  [SMALL_STATE(229)] = 7143,
  [SMALL_STATE(230)] = 7164,
  [SMALL_STATE(231)] = 7189,
  [SMALL_STATE(232)] = 7206,
  [SMALL_STATE(233)] = 7225,
  [SMALL_STATE(234)] = 7246,
  [SMALL_STATE(235)] = 7263,
  [SMALL_STATE(236)] = 7290,
  [SMALL_STATE(237)] = 7307,
  [SMALL_STATE(238)] = 7324,
  [SMALL_STATE(239)] = 7341,
  [SMALL_STATE(240)] = 7362,
  [SMALL_STATE(241)] = 7381,
  [SMALL_STATE(242)] = 7402,
  [SMALL_STATE(243)] = 7419,
  [SMALL_STATE(244)] = 7446,
  [SMALL_STATE(245)] = 7465,
  [SMALL_STATE(246)] = 7492,
  [SMALL_STATE(247)] = 7511,
  [SMALL_STATE(248)] = 7538,
  [SMALL_STATE(249)] = 7555,
  [SMALL_STATE(250)] = 7573,
  [SMALL_STATE(251)] = 7591,
  [SMALL_STATE(252)] = 7609,
  [SMALL_STATE(253)] = 7627,
  [SMALL_STATE(254)] = 7645,
  [SMALL_STATE(255)] = 7667,
  [SMALL_STATE(256)] = 7689,
  [SMALL_STATE(257)] = 7707,
  [SMALL_STATE(258)] = 7729,
  [SMALL_STATE(259)] = 7747,
  [SMALL_STATE(260)] = 7765,
  [SMALL_STATE(261)] = 7787,
  [SMALL_STATE(262)] = 7805,
  [SMALL_STATE(263)] = 7827,
  [SMALL_STATE(264)] = 7849,
  [SMALL_STATE(265)] = 7871,
  [SMALL_STATE(266)] = 7893,
  [SMALL_STATE(267)] = 7915,
  [SMALL_STATE(268)] = 7933,
  [SMALL_STATE(269)] = 7955,
  [SMALL_STATE(270)] = 7973,
  [SMALL_STATE(271)] = 7995,
  [SMALL_STATE(272)] = 8017,
  [SMALL_STATE(273)] = 8039,
  [SMALL_STATE(274)] = 8057,
  [SMALL_STATE(275)] = 8073,
  [SMALL_STATE(276)] = 8089,
  [SMALL_STATE(277)] = 8111,
  [SMALL_STATE(278)] = 8127,
  [SMALL_STATE(279)] = 8149,
  [SMALL_STATE(280)] = 8171,
  [SMALL_STATE(281)] = 8193,
  [SMALL_STATE(282)] = 8215,
  [SMALL_STATE(283)] = 8233,
  [SMALL_STATE(284)] = 8255,
  [SMALL_STATE(285)] = 8271,
  [SMALL_STATE(286)] = 8287,
  [SMALL_STATE(287)] = 8309,
  [SMALL_STATE(288)] = 8331,
  [SMALL_STATE(289)] = 8355,
  [SMALL_STATE(290)] = 8376,
  [SMALL_STATE(291)] = 8397,
  [SMALL_STATE(292)] = 8414,
  [SMALL_STATE(293)] = 8437,
  [SMALL_STATE(294)] = 8454,
  [SMALL_STATE(295)] = 8477,
  [SMALL_STATE(296)] = 8494,
  [SMALL_STATE(297)] = 8517,
  [SMALL_STATE(298)] = 8534,
  [SMALL_STATE(299)] = 8551,
  [SMALL_STATE(300)] = 8568,
  [SMALL_STATE(301)] = 8585,
  [SMALL_STATE(302)] = 8602,
  [SMALL_STATE(303)] = 8619,
  [SMALL_STATE(304)] = 8636,
  [SMALL_STATE(305)] = 8653,
  [SMALL_STATE(306)] = 8674,
  [SMALL_STATE(307)] = 8691,
  [SMALL_STATE(308)] = 8712,
  [SMALL_STATE(309)] = 8729,
  [SMALL_STATE(310)] = 8752,
  [SMALL_STATE(311)] = 8775,
  [SMALL_STATE(312)] = 8789,
  [SMALL_STATE(313)] = 8803,
  [SMALL_STATE(314)] = 8817,
  [SMALL_STATE(315)] = 8831,
  [SMALL_STATE(316)] = 8851,
  [SMALL_STATE(317)] = 8865,
  [SMALL_STATE(318)] = 8879,
  [SMALL_STATE(319)] = 8897,
  [SMALL_STATE(320)] = 8915,
  [SMALL_STATE(321)] = 8929,
  [SMALL_STATE(322)] = 8947,
  [SMALL_STATE(323)] = 8961,
  [SMALL_STATE(324)] = 8975,
  [SMALL_STATE(325)] = 8995,
  [SMALL_STATE(326)] = 9015,
  [SMALL_STATE(327)] = 9029,
  [SMALL_STATE(328)] = 9047,
  [SMALL_STATE(329)] = 9065,
  [SMALL_STATE(330)] = 9079,
  [SMALL_STATE(331)] = 9093,
  [SMALL_STATE(332)] = 9111,
  [SMALL_STATE(333)] = 9129,
  [SMALL_STATE(334)] = 9143,
  [SMALL_STATE(335)] = 9157,
  [SMALL_STATE(336)] = 9177,
  [SMALL_STATE(337)] = 9191,
  [SMALL_STATE(338)] = 9205,
  [SMALL_STATE(339)] = 9219,
  [SMALL_STATE(340)] = 9233,
  [SMALL_STATE(341)] = 9247,
  [SMALL_STATE(342)] = 9267,
  [SMALL_STATE(343)] = 9281,
  [SMALL_STATE(344)] = 9295,
  [SMALL_STATE(345)] = 9309,
  [SMALL_STATE(346)] = 9323,
  [SMALL_STATE(347)] = 9341,
  [SMALL_STATE(348)] = 9355,
  [SMALL_STATE(349)] = 9369,
  [SMALL_STATE(350)] = 9383,
  [SMALL_STATE(351)] = 9397,
  [SMALL_STATE(352)] = 9411,
  [SMALL_STATE(353)] = 9425,
  [SMALL_STATE(354)] = 9439,
  [SMALL_STATE(355)] = 9453,
  [SMALL_STATE(356)] = 9467,
  [SMALL_STATE(357)] = 9481,
  [SMALL_STATE(358)] = 9495,
  [SMALL_STATE(359)] = 9509,
  [SMALL_STATE(360)] = 9523,
  [SMALL_STATE(361)] = 9537,
  [SMALL_STATE(362)] = 9551,
  [SMALL_STATE(363)] = 9565,
  [SMALL_STATE(364)] = 9579,
  [SMALL_STATE(365)] = 9593,
  [SMALL_STATE(366)] = 9607,
  [SMALL_STATE(367)] = 9621,
  [SMALL_STATE(368)] = 9635,
  [SMALL_STATE(369)] = 9649,
  [SMALL_STATE(370)] = 9663,
  [SMALL_STATE(371)] = 9677,
  [SMALL_STATE(372)] = 9695,
  [SMALL_STATE(373)] = 9709,
  [SMALL_STATE(374)] = 9727,
  [SMALL_STATE(375)] = 9741,
  [SMALL_STATE(376)] = 9755,
  [SMALL_STATE(377)] = 9769,
  [SMALL_STATE(378)] = 9786,
  [SMALL_STATE(379)] = 9803,
  [SMALL_STATE(380)] = 9818,
  [SMALL_STATE(381)] = 9831,
  [SMALL_STATE(382)] = 9846,
  [SMALL_STATE(383)] = 9861,
  [SMALL_STATE(384)] = 9872,
  [SMALL_STATE(385)] = 9883,
  [SMALL_STATE(386)] = 9900,
  [SMALL_STATE(387)] = 9915,
  [SMALL_STATE(388)] = 9930,
  [SMALL_STATE(389)] = 9947,
  [SMALL_STATE(390)] = 9962,
  [SMALL_STATE(391)] = 9977,
  [SMALL_STATE(392)] = 9992,
  [SMALL_STATE(393)] = 10007,
  [SMALL_STATE(394)] = 10021,
  [SMALL_STATE(395)] = 10035,
  [SMALL_STATE(396)] = 10049,
  [SMALL_STATE(397)] = 10063,
  [SMALL_STATE(398)] = 10074,
  [SMALL_STATE(399)] = 10085,
  [SMALL_STATE(400)] = 10096,
  [SMALL_STATE(401)] = 10107,
  [SMALL_STATE(402)] = 10118,
  [SMALL_STATE(403)] = 10129,
  [SMALL_STATE(404)] = 10140,
  [SMALL_STATE(405)] = 10151,
  [SMALL_STATE(406)] = 10160,
  [SMALL_STATE(407)] = 10169,
  [SMALL_STATE(408)] = 10180,
  [SMALL_STATE(409)] = 10191,
  [SMALL_STATE(410)] = 10202,
  [SMALL_STATE(411)] = 10213,
  [SMALL_STATE(412)] = 10224,
  [SMALL_STATE(413)] = 10235,
  [SMALL_STATE(414)] = 10246,
  [SMALL_STATE(415)] = 10257,
  [SMALL_STATE(416)] = 10268,
  [SMALL_STATE(417)] = 10279,
  [SMALL_STATE(418)] = 10290,
  [SMALL_STATE(419)] = 10301,
  [SMALL_STATE(420)] = 10312,
  [SMALL_STATE(421)] = 10323,
  [SMALL_STATE(422)] = 10334,
  [SMALL_STATE(423)] = 10345,
  [SMALL_STATE(424)] = 10356,
  [SMALL_STATE(425)] = 10367,
  [SMALL_STATE(426)] = 10378,
  [SMALL_STATE(427)] = 10389,
  [SMALL_STATE(428)] = 10400,
  [SMALL_STATE(429)] = 10411,
  [SMALL_STATE(430)] = 10420,
  [SMALL_STATE(431)] = 10429,
  [SMALL_STATE(432)] = 10438,
  [SMALL_STATE(433)] = 10449,
  [SMALL_STATE(434)] = 10458,
  [SMALL_STATE(435)] = 10469,
  [SMALL_STATE(436)] = 10480,
  [SMALL_STATE(437)] = 10491,
  [SMALL_STATE(438)] = 10502,
  [SMALL_STATE(439)] = 10513,
  [SMALL_STATE(440)] = 10524,
  [SMALL_STATE(441)] = 10535,
  [SMALL_STATE(442)] = 10546,
  [SMALL_STATE(443)] = 10557,
  [SMALL_STATE(444)] = 10566,
  [SMALL_STATE(445)] = 10575,
  [SMALL_STATE(446)] = 10584,
  [SMALL_STATE(447)] = 10595,
  [SMALL_STATE(448)] = 10606,
  [SMALL_STATE(449)] = 10617,
  [SMALL_STATE(450)] = 10628,
  [SMALL_STATE(451)] = 10639,
  [SMALL_STATE(452)] = 10650,
  [SMALL_STATE(453)] = 10661,
  [SMALL_STATE(454)] = 10672,
  [SMALL_STATE(455)] = 10683,
  [SMALL_STATE(456)] = 10694,
  [SMALL_STATE(457)] = 10703,
  [SMALL_STATE(458)] = 10714,
  [SMALL_STATE(459)] = 10725,
  [SMALL_STATE(460)] = 10736,
  [SMALL_STATE(461)] = 10747,
  [SMALL_STATE(462)] = 10758,
  [SMALL_STATE(463)] = 10769,
  [SMALL_STATE(464)] = 10780,
  [SMALL_STATE(465)] = 10791,
  [SMALL_STATE(466)] = 10802,
  [SMALL_STATE(467)] = 10813,
  [SMALL_STATE(468)] = 10824,
  [SMALL_STATE(469)] = 10835,
  [SMALL_STATE(470)] = 10846,
  [SMALL_STATE(471)] = 10857,
  [SMALL_STATE(472)] = 10868,
  [SMALL_STATE(473)] = 10879,
  [SMALL_STATE(474)] = 10890,
  [SMALL_STATE(475)] = 10899,
  [SMALL_STATE(476)] = 10908,
  [SMALL_STATE(477)] = 10917,
  [SMALL_STATE(478)] = 10926,
  [SMALL_STATE(479)] = 10935,
  [SMALL_STATE(480)] = 10944,
  [SMALL_STATE(481)] = 10955,
  [SMALL_STATE(482)] = 10964,
  [SMALL_STATE(483)] = 10973,
  [SMALL_STATE(484)] = 10982,
  [SMALL_STATE(485)] = 10993,
  [SMALL_STATE(486)] = 11004,
  [SMALL_STATE(487)] = 11015,
  [SMALL_STATE(488)] = 11024,
  [SMALL_STATE(489)] = 11035,
  [SMALL_STATE(490)] = 11046,
  [SMALL_STATE(491)] = 11057,
  [SMALL_STATE(492)] = 11068,
  [SMALL_STATE(493)] = 11079,
  [SMALL_STATE(494)] = 11090,
  [SMALL_STATE(495)] = 11101,
  [SMALL_STATE(496)] = 11112,
  [SMALL_STATE(497)] = 11123,
  [SMALL_STATE(498)] = 11134,
  [SMALL_STATE(499)] = 11145,
  [SMALL_STATE(500)] = 11156,
  [SMALL_STATE(501)] = 11165,
  [SMALL_STATE(502)] = 11174,
  [SMALL_STATE(503)] = 11183,
  [SMALL_STATE(504)] = 11192,
  [SMALL_STATE(505)] = 11201,
  [SMALL_STATE(506)] = 11210,
  [SMALL_STATE(507)] = 11219,
  [SMALL_STATE(508)] = 11228,
  [SMALL_STATE(509)] = 11237,
  [SMALL_STATE(510)] = 11246,
  [SMALL_STATE(511)] = 11255,
  [SMALL_STATE(512)] = 11264,
  [SMALL_STATE(513)] = 11273,
  [SMALL_STATE(514)] = 11282,
  [SMALL_STATE(515)] = 11291,
  [SMALL_STATE(516)] = 11300,
  [SMALL_STATE(517)] = 11309,
  [SMALL_STATE(518)] = 11318,
  [SMALL_STATE(519)] = 11327,
  [SMALL_STATE(520)] = 11336,
  [SMALL_STATE(521)] = 11345,
  [SMALL_STATE(522)] = 11354,
  [SMALL_STATE(523)] = 11365,
  [SMALL_STATE(524)] = 11374,
  [SMALL_STATE(525)] = 11383,
  [SMALL_STATE(526)] = 11394,
  [SMALL_STATE(527)] = 11405,
  [SMALL_STATE(528)] = 11416,
  [SMALL_STATE(529)] = 11427,
  [SMALL_STATE(530)] = 11438,
  [SMALL_STATE(531)] = 11447,
  [SMALL_STATE(532)] = 11458,
  [SMALL_STATE(533)] = 11469,
  [SMALL_STATE(534)] = 11480,
  [SMALL_STATE(535)] = 11491,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 4, .production_id = 34),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 4, .production_id = 34),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 3, .production_id = 34),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 3, .production_id = 34),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 2, .production_id = 24),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 2, .production_id = 24),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 3, .production_id = 24),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 3, .production_id = 24),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(321),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(163),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(22),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(191),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(533),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(194),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_block, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__target_block, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(534),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(50),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(222),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(17),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(535),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(137),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(215),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(21),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 1),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(327),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(174),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(20),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(190),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(399),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(188),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(466),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(52),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(233),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(26),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(480),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(136),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2, .production_id = 5),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2, .production_id = 5),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 5, .production_id = 17),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 5, .production_id = 17),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(487),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(39),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(433),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(62),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 3, .production_id = 5),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3, .production_id = 5),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(42),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(439),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(503),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(61),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(148),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(523),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(524),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(479),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 27),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 27),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 2, .production_id = 20),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 2, .production_id = 20),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(417),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(73),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 4, .production_id = 18),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 4, .production_id = 18),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 38),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 38),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(69),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 26),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 26),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 5, .production_id = 39),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_command, 5, .production_id = 39),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_dockerfile_command, 3, .production_id = 23),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_dockerfile_command, 3, .production_id = 23),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 3, .production_id = 25),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 3, .production_id = 25),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 7, .production_id = 50),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 7, .production_id = 50),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(181),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(482),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(483),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 6, .production_id = 48),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 6, .production_id = 48),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 6, .production_id = 47),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 6, .production_id = 47),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 6, .production_id = 46),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_git_clone_command, 6, .production_id = 46),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_docker_command, 5, .production_id = 5),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_docker_command, 5, .production_id = 5),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_command, 5, .production_id = 18),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_command, 5, .production_id = 18),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 44),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 5, .production_id = 44),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2, .production_id = 21),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2, .production_id = 21),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 43),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 5, .production_id = 43),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 5, .production_id = 42),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 5, .production_id = 42),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_command, 5, .production_id = 18),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_command, 5, .production_id = 18),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 5, .production_id = 41),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 5, .production_id = 41),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 5, .production_id = 40),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_git_clone_command, 5, .production_id = 40),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_docker_command, 4),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_docker_command, 4),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 4, .production_id = 28),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_command, 4, .production_id = 28),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_dockerfile_command, 4, .production_id = 29),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_dockerfile_command, 4, .production_id = 29),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 37),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 37),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 36),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 4, .production_id = 36),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 35),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 4, .production_id = 35),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 4, .production_id = 32),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 4, .production_id = 32),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_platform, 3, .production_id = 10),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_platform, 3, .production_id = 10),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(210),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(443),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(444),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(500),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(474),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(481),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chown, 3, .production_id = 10),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chown, 3, .production_id = 10),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount, 3, .production_id = 10),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount, 3, .production_id = 10),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_secret, 3, .production_id = 10),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_secret, 3, .production_id = 10),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [659] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(332),
  [662] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(145),
  [665] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(532),
  [668] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(378),
  [671] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(529),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(408),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(478),
  [706] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(456),
  [709] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(429),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(475),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(430),
  [724] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(277),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(431),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 19),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 1, .production_id = 1),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 2),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 3, .production_id = 2),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compose, 3, .production_id = 10),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pull, 3, .production_id = 10),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 3, .production_id = 10),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 5, .production_id = 49),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(269),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 8, .production_id = 51),
  [825] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 22), SHIFT_REPEAT(382),
  [828] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 22), SHIFT_REPEAT(486),
  [831] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 22), SHIFT_REPEAT(394),
  [834] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(244),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 2),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 5, .production_id = 2),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6, .production_id = 2),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 6, .production_id = 2),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 1, .production_id = 1),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [949] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4),
  [959] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(326),
  [962] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(479),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [975] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4),
  [977] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(530),
  [980] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(387),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [989] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 1, .production_id = 1),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 1, .production_id = 1),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [1001] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_target, 3, .production_id = 10),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_target, 3, .production_id = 10),
  [1005] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_build_arg, 5, .production_id = 45),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_build_arg, 5, .production_id = 45),
  [1009] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_file, 3, .production_id = 10),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_file, 3, .production_id = 10),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 1, .production_id = 1),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [1097] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 33), SHIFT_REPEAT(187),
  [1100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 33),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 33),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [1110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [1128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [1132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [1134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [1136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [1140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [1148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [1150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [1156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4),
  [1168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(380),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2),
  [1179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2), SHIFT_REPEAT(377),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 3, .production_id = 10),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3, .production_id = 10),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 1, .production_id = 1),
  [1192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact, 3),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact, 3),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 19),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_block, 1, .production_id = 30),
  [1204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_block, 1, .production_id = 30),
  [1206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 6),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 6),
  [1218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 5),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 5),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 31),
  [1224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 31),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [1244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [1246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [1286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [1290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [1292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [1294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [1296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [1298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [1324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [1326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [1350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [1386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [1388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [1390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [1392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [1394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [1400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [1402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [1436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [1438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [1442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [1444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [1446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [1448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [1450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [1452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [1458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [1462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [1468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [1470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [1472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [1478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [1484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1486] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
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
