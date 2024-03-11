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
#define STATE_COUNT 693
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 162
#define ALIAS_COUNT 0
#define TOKEN_COUNT 94
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 23
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 60

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
  anon_sym_FOR = 10,
  anon_sym_IN = 11,
  anon_sym_END = 12,
  anon_sym_FROMDOCKERFILE = 13,
  anon_sym_GIT = 14,
  anon_sym_CLONE = 15,
  anon_sym_IF = 16,
  anon_sym_ELSEIF = 17,
  anon_sym_ELSE = 18,
  anon_sym_LET = 19,
  anon_sym_RUN = 20,
  anon_sym_DASH_DASH = 21,
  anon_sym_SAVEARTIFACT = 22,
  anon_sym_ASLOCAL = 23,
  anon_sym_SAVEIMAGE = 24,
  anon_sym_SET = 25,
  anon_sym_TRY = 26,
  anon_sym_FINALLY = 27,
  anon_sym_WAIT = 28,
  anon_sym_WITHDOCKER = 29,
  sym_expr = 30,
  sym_identifier = 31,
  anon_sym_COLON2 = 32,
  anon_sym_AT = 33,
  sym_image_name = 34,
  sym_image_tag = 35,
  sym_image_digest = 36,
  sym_immediate_identifier = 37,
  sym_path = 38,
  aux_sym_shell_fragment_token1 = 39,
  aux_sym_shell_fragment_token2 = 40,
  aux_sym_shell_fragment_token3 = 41,
  anon_sym_PLUS = 42,
  anon_sym_LPAREN = 43,
  anon_sym_RPAREN = 44,
  sym_version_major_minor = 45,
  sym_allow_privileged = 46,
  anon_sym_DASH_DASHbranch = 47,
  aux_sym_branch_token1 = 48,
  anon_sym_DASH_DASH2 = 49,
  anon_sym_DASH_DASHcache_DASHfrom = 50,
  sym_cache_hint = 51,
  anon_sym_DASH_DASHchmod = 52,
  anon_sym_DASH_DASHchown = 53,
  anon_sym_DASH_DASHcompose = 54,
  sym_dir = 55,
  anon_sym_DASH_DASHbuild_DASHarg = 56,
  anon_sym_DASHf = 57,
  anon_sym_DASH_DASHtarget = 58,
  sym_entrypoint = 59,
  sym_feature_flag = 60,
  sym_force = 61,
  sym_global = 62,
  sym_if_exists = 63,
  sym_keep_own = 64,
  sym_keep_ts = 65,
  anon_sym_DASH_DASHload = 66,
  anon_sym_DASH_DASHmount = 67,
  sym_network_none = 68,
  sym_no_cache = 69,
  sym_pass_args = 70,
  anon_sym_DASH_DASHplatform = 71,
  sym_privileged = 72,
  anon_sym_DASH_DASHpull = 73,
  sym_push = 74,
  sym_required = 75,
  anon_sym_DASH_DASHsecret = 76,
  anon_sym_DASH_DASHsep = 77,
  anon_sym_DASH_DASHservice = 78,
  sym_ssh = 79,
  sym_symlink_no_follow = 80,
  anon_sym_DQUOTE = 81,
  aux_sym_double_quoted_string_token1 = 82,
  anon_sym_SQUOTE = 83,
  aux_sym_single_quoted_string_token1 = 84,
  sym_unquoted_string = 85,
  sym_line_continuation = 86,
  sym_comment = 87,
  sym_line_continuation_comment = 88,
  anon_sym_LF = 89,
  anon_sym_CRn = 90,
  anon_sym_FF = 91,
  sym__indent = 92,
  sym__dedent = 93,
  sym_source_file = 94,
  sym_arg_command = 95,
  sym_from_command = 96,
  sym_project_command = 97,
  sym_target = 98,
  sym_version_command = 99,
  sym_copy_command = 100,
  sym_for_command = 101,
  sym_from_dockerfile_command = 102,
  sym_git_clone_command = 103,
  sym_if_command = 104,
  sym_let_command = 105,
  sym_run_command = 106,
  sym_save_artifact_command = 107,
  sym_save_image_command = 108,
  sym_set_command = 109,
  sym_try_command = 110,
  sym_wait_command = 111,
  sym_with_docker_command = 112,
  aux_sym__target_block = 113,
  sym__conditional_block = 114,
  sym_else_if_block = 115,
  sym_else_block = 116,
  sym_image_spec = 117,
  sym_shell_fragment = 118,
  sym_target_ref = 119,
  sym_target_artifact = 120,
  sym_target_artifact_build_args = 121,
  sym_branch = 122,
  sym_build_arg = 123,
  sym_cache_from = 124,
  sym_chmod = 125,
  sym_chown = 126,
  sym_compose = 127,
  sym_docker_build_arg = 128,
  sym_docker_file = 129,
  sym_docker_target = 130,
  sym_load = 131,
  sym_mount = 132,
  sym_platform = 133,
  sym_pull = 134,
  sym_secret = 135,
  sym_sep = 136,
  sym_service = 137,
  sym__string = 138,
  sym_double_quoted_string = 139,
  sym_single_quoted_string = 140,
  sym__eol = 141,
  aux_sym_source_file_repeat1 = 142,
  aux_sym_arg_command_repeat1 = 143,
  aux_sym_build_command_repeat2 = 144,
  aux_sym_from_command_repeat1 = 145,
  aux_sym_version_command_repeat1 = 146,
  aux_sym_copy_command_repeat1 = 147,
  aux_sym_copy_command_repeat2 = 148,
  aux_sym_for_command_repeat1 = 149,
  aux_sym_for_command_repeat2 = 150,
  aux_sym_from_dockerfile_command_repeat1 = 151,
  aux_sym_git_clone_command_repeat1 = 152,
  aux_sym_if_command_repeat1 = 153,
  aux_sym_run_command_repeat1 = 154,
  aux_sym_save_artifact_command_repeat1 = 155,
  aux_sym_save_image_command_repeat1 = 156,
  aux_sym_save_image_command_repeat2 = 157,
  aux_sym_try_command_repeat1 = 158,
  aux_sym_with_docker_command_repeat1 = 159,
  aux_sym__conditional_block_repeat1 = 160,
  aux_sym_shell_fragment_repeat1 = 161,
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
  [anon_sym_FOR] = "FOR",
  [anon_sym_IN] = "IN",
  [anon_sym_END] = "END",
  [anon_sym_FROMDOCKERFILE] = "FROM DOCKERFILE",
  [anon_sym_GIT] = "GIT",
  [anon_sym_CLONE] = "CLONE",
  [anon_sym_IF] = "IF",
  [anon_sym_ELSEIF] = "ELSE IF",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_LET] = "LET",
  [anon_sym_RUN] = "RUN",
  [anon_sym_DASH_DASH] = " -- ",
  [anon_sym_SAVEARTIFACT] = "SAVE ARTIFACT",
  [anon_sym_ASLOCAL] = "AS LOCAL",
  [anon_sym_SAVEIMAGE] = "SAVE IMAGE",
  [anon_sym_SET] = "SET",
  [anon_sym_TRY] = "TRY",
  [anon_sym_FINALLY] = "FINALLY",
  [anon_sym_WAIT] = "WAIT",
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
  [anon_sym_DASH_DASHsep] = "--sep",
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
  [sym_for_command] = "for_command",
  [sym_from_dockerfile_command] = "from_dockerfile_command",
  [sym_git_clone_command] = "git_clone_command",
  [sym_if_command] = "if_command",
  [sym_let_command] = "let_command",
  [sym_run_command] = "run_command",
  [sym_save_artifact_command] = "save_artifact_command",
  [sym_save_image_command] = "save_image_command",
  [sym_set_command] = "set_command",
  [sym_try_command] = "try_command",
  [sym_wait_command] = "wait_command",
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
  [sym_sep] = "sep",
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
  [aux_sym_for_command_repeat1] = "for_command_repeat1",
  [aux_sym_for_command_repeat2] = "for_command_repeat2",
  [aux_sym_from_dockerfile_command_repeat1] = "from_dockerfile_command_repeat1",
  [aux_sym_git_clone_command_repeat1] = "git_clone_command_repeat1",
  [aux_sym_if_command_repeat1] = "if_command_repeat1",
  [aux_sym_run_command_repeat1] = "run_command_repeat1",
  [aux_sym_save_artifact_command_repeat1] = "save_artifact_command_repeat1",
  [aux_sym_save_image_command_repeat1] = "save_image_command_repeat1",
  [aux_sym_save_image_command_repeat2] = "save_image_command_repeat2",
  [aux_sym_try_command_repeat1] = "try_command_repeat1",
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
  [anon_sym_FOR] = anon_sym_FOR,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_FROMDOCKERFILE] = anon_sym_FROMDOCKERFILE,
  [anon_sym_GIT] = anon_sym_GIT,
  [anon_sym_CLONE] = anon_sym_CLONE,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_ELSEIF] = anon_sym_ELSEIF,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_LET] = anon_sym_LET,
  [anon_sym_RUN] = anon_sym_RUN,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_SAVEARTIFACT] = anon_sym_SAVEARTIFACT,
  [anon_sym_ASLOCAL] = anon_sym_ASLOCAL,
  [anon_sym_SAVEIMAGE] = anon_sym_SAVEIMAGE,
  [anon_sym_SET] = anon_sym_SET,
  [anon_sym_TRY] = anon_sym_TRY,
  [anon_sym_FINALLY] = anon_sym_FINALLY,
  [anon_sym_WAIT] = anon_sym_WAIT,
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
  [anon_sym_DASH_DASHsep] = anon_sym_DASH_DASHsep,
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
  [sym_for_command] = sym_for_command,
  [sym_from_dockerfile_command] = sym_from_dockerfile_command,
  [sym_git_clone_command] = sym_git_clone_command,
  [sym_if_command] = sym_if_command,
  [sym_let_command] = sym_let_command,
  [sym_run_command] = sym_run_command,
  [sym_save_artifact_command] = sym_save_artifact_command,
  [sym_save_image_command] = sym_save_image_command,
  [sym_set_command] = sym_set_command,
  [sym_try_command] = sym_try_command,
  [sym_wait_command] = sym_wait_command,
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
  [sym_sep] = sym_sep,
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
  [aux_sym_for_command_repeat1] = aux_sym_for_command_repeat1,
  [aux_sym_for_command_repeat2] = aux_sym_for_command_repeat2,
  [aux_sym_from_dockerfile_command_repeat1] = aux_sym_from_dockerfile_command_repeat1,
  [aux_sym_git_clone_command_repeat1] = aux_sym_git_clone_command_repeat1,
  [aux_sym_if_command_repeat1] = aux_sym_if_command_repeat1,
  [aux_sym_run_command_repeat1] = aux_sym_run_command_repeat1,
  [aux_sym_save_artifact_command_repeat1] = aux_sym_save_artifact_command_repeat1,
  [aux_sym_save_image_command_repeat1] = aux_sym_save_image_command_repeat1,
  [aux_sym_save_image_command_repeat2] = aux_sym_save_image_command_repeat2,
  [aux_sym_try_command_repeat1] = aux_sym_try_command_repeat1,
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
  [anon_sym_FOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
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
  [anon_sym_TRY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FINALLY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WAIT] = {
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
  [anon_sym_DASH_DASHsep] = {
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
  [sym_for_command] = {
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
  [sym_try_command] = {
    .visible = true,
    .named = true,
  },
  [sym_wait_command] = {
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
  [sym_sep] = {
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
  [aux_sym_for_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_command_repeat2] = {
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
  [aux_sym_try_command_repeat1] = {
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
  field_finally = 10,
  field_image = 11,
  field_key = 12,
  field_local_dest = 13,
  field_name = 14,
  field_option = 15,
  field_org_name = 16,
  field_project_name = 17,
  field_src = 18,
  field_tag = 19,
  field_target = 20,
  field_url = 21,
  field_value = 22,
  field_version = 23,
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
  [field_finally] = "finally",
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
  [29] = {.index = 51, .length = 1},
  [30] = {.index = 52, .length = 2},
  [31] = {.index = 54, .length = 2},
  [32] = {.index = 56, .length = 2},
  [33] = {.index = 58, .length = 2},
  [34] = {.index = 60, .length = 2},
  [35] = {.index = 62, .length = 2},
  [36] = {.index = 64, .length = 1},
  [37] = {.index = 65, .length = 2},
  [38] = {.index = 67, .length = 2},
  [39] = {.index = 69, .length = 3},
  [40] = {.index = 72, .length = 3},
  [41] = {.index = 75, .length = 2},
  [42] = {.index = 77, .length = 2},
  [43] = {.index = 79, .length = 3},
  [44] = {.index = 82, .length = 2},
  [45] = {.index = 84, .length = 3},
  [46] = {.index = 87, .length = 3},
  [47] = {.index = 90, .length = 1},
  [48] = {.index = 91, .length = 2},
  [49] = {.index = 93, .length = 3},
  [50] = {.index = 96, .length = 4},
  [51] = {.index = 100, .length = 4},
  [52] = {.index = 104, .length = 2},
  [53] = {.index = 106, .length = 2},
  [54] = {.index = 108, .length = 2},
  [55] = {.index = 110, .length = 5},
  [56] = {.index = 115, .length = 1},
  [57] = {.index = 116, .length = 3},
  [58] = {.index = 119, .length = 1},
  [59] = {.index = 120, .length = 5},
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
    {field_value, 0},
  [52] =
    {field_context, 2},
    {field_option, 1, .inherited = true},
  [54] =
    {field_condition, 1, .inherited = true},
    {field_option, 1, .inherited = true},
  [56] =
    {field_condition, 0, .inherited = true},
    {field_option, 0, .inherited = true},
  [58] =
    {field_else_if, 0},
    {field_else_if, 1},
  [60] =
    {field_else_if, 0, .inherited = true},
    {field_else_if, 1, .inherited = true},
  [62] =
    {field_condition, 1},
    {field_option, 0, .inherited = true},
  [64] =
    {field_command, 2},
  [65] =
    {field_command, 2},
    {field_option, 1, .inherited = true},
  [67] =
    {field_local_dest, 3},
    {field_src, 1},
  [69] =
    {field_dest, 3},
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [72] =
    {field_dest, 3},
    {field_option, 1, .inherited = true},
    {field_src, 2, .inherited = true},
  [75] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [77] =
    {field_dest, 3},
    {field_url, 2},
  [79] =
    {field_condition, 1, .inherited = true},
    {field_else_if, 2, .inherited = true},
    {field_option, 1, .inherited = true},
  [82] =
    {field_command, 3},
    {field_option, 1, .inherited = true},
  [84] =
    {field_dest, 2},
    {field_local_dest, 4},
    {field_src, 1},
  [87] =
    {field_local_dest, 4},
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [90] =
    {field_finally, 0},
  [91] =
    {field_key, 2},
    {field_value, 4},
  [93] =
    {field_dest, 4},
    {field_option, 2, .inherited = true},
    {field_url, 3},
  [96] =
    {field_condition, 1, .inherited = true},
    {field_else, 2},
    {field_else, 3},
    {field_option, 1, .inherited = true},
  [100] =
    {field_dest, 3},
    {field_local_dest, 5},
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [104] =
    {field_finally, 0, .inherited = true},
    {field_finally, 1, .inherited = true},
  [106] =
    {field_image, 2},
    {field_target, 4},
  [108] =
    {field_name, 1},
    {field_value, 3, .inherited = true},
  [110] =
    {field_condition, 1, .inherited = true},
    {field_else, 3},
    {field_else, 4},
    {field_else_if, 2, .inherited = true},
    {field_option, 1, .inherited = true},
  [115] =
    {field_finally, 4, .inherited = true},
  [116] =
    {field_name, 2},
    {field_option, 1, .inherited = true},
    {field_value, 4, .inherited = true},
  [119] =
    {field_finally, 5, .inherited = true},
  [120] =
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
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 5,
  [14] = 14,
  [15] = 5,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 10,
  [21] = 17,
  [22] = 22,
  [23] = 23,
  [24] = 5,
  [25] = 25,
  [26] = 22,
  [27] = 25,
  [28] = 8,
  [29] = 29,
  [30] = 18,
  [31] = 31,
  [32] = 32,
  [33] = 7,
  [34] = 31,
  [35] = 29,
  [36] = 9,
  [37] = 32,
  [38] = 11,
  [39] = 23,
  [40] = 12,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 42,
  [48] = 42,
  [49] = 42,
  [50] = 50,
  [51] = 44,
  [52] = 44,
  [53] = 44,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 50,
  [62] = 62,
  [63] = 50,
  [64] = 64,
  [65] = 60,
  [66] = 59,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 41,
  [74] = 50,
  [75] = 75,
  [76] = 43,
  [77] = 69,
  [78] = 68,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 41,
  [86] = 72,
  [87] = 58,
  [88] = 72,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 41,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 70,
  [99] = 57,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 55,
  [104] = 104,
  [105] = 105,
  [106] = 54,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 62,
  [114] = 114,
  [115] = 115,
  [116] = 62,
  [117] = 117,
  [118] = 118,
  [119] = 64,
  [120] = 64,
  [121] = 121,
  [122] = 62,
  [123] = 123,
  [124] = 64,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 67,
  [129] = 67,
  [130] = 70,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 68,
  [136] = 136,
  [137] = 69,
  [138] = 138,
  [139] = 139,
  [140] = 68,
  [141] = 69,
  [142] = 45,
  [143] = 68,
  [144] = 69,
  [145] = 46,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 72,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 41,
  [154] = 56,
  [155] = 155,
  [156] = 67,
  [157] = 70,
  [158] = 158,
  [159] = 79,
  [160] = 79,
  [161] = 41,
  [162] = 43,
  [163] = 43,
  [164] = 71,
  [165] = 80,
  [166] = 43,
  [167] = 80,
  [168] = 80,
  [169] = 79,
  [170] = 45,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 45,
  [175] = 172,
  [176] = 68,
  [177] = 69,
  [178] = 45,
  [179] = 81,
  [180] = 46,
  [181] = 173,
  [182] = 43,
  [183] = 46,
  [184] = 82,
  [185] = 46,
  [186] = 75,
  [187] = 83,
  [188] = 117,
  [189] = 102,
  [190] = 45,
  [191] = 108,
  [192] = 107,
  [193] = 105,
  [194] = 104,
  [195] = 126,
  [196] = 150,
  [197] = 46,
  [198] = 84,
  [199] = 125,
  [200] = 94,
  [201] = 132,
  [202] = 93,
  [203] = 91,
  [204] = 90,
  [205] = 89,
  [206] = 96,
  [207] = 95,
  [208] = 97,
  [209] = 100,
  [210] = 101,
  [211] = 123,
  [212] = 133,
  [213] = 151,
  [214] = 109,
  [215] = 131,
  [216] = 110,
  [217] = 121,
  [218] = 134,
  [219] = 111,
  [220] = 112,
  [221] = 115,
  [222] = 118,
  [223] = 139,
  [224] = 138,
  [225] = 152,
  [226] = 127,
  [227] = 155,
  [228] = 146,
  [229] = 136,
  [230] = 147,
  [231] = 148,
  [232] = 114,
  [233] = 158,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 236,
  [238] = 235,
  [239] = 239,
  [240] = 240,
  [241] = 239,
  [242] = 242,
  [243] = 69,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 68,
  [248] = 239,
  [249] = 249,
  [250] = 250,
  [251] = 68,
  [252] = 69,
  [253] = 253,
  [254] = 249,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 255,
  [261] = 261,
  [262] = 256,
  [263] = 261,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 266,
  [269] = 269,
  [270] = 264,
  [271] = 55,
  [272] = 272,
  [273] = 273,
  [274] = 273,
  [275] = 272,
  [276] = 276,
  [277] = 277,
  [278] = 277,
  [279] = 279,
  [280] = 54,
  [281] = 71,
  [282] = 282,
  [283] = 57,
  [284] = 56,
  [285] = 58,
  [286] = 41,
  [287] = 69,
  [288] = 68,
  [289] = 43,
  [290] = 83,
  [291] = 81,
  [292] = 258,
  [293] = 293,
  [294] = 68,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 83,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 68,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 45,
  [308] = 295,
  [309] = 309,
  [310] = 69,
  [311] = 259,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 295,
  [317] = 317,
  [318] = 304,
  [319] = 299,
  [320] = 305,
  [321] = 69,
  [322] = 322,
  [323] = 323,
  [324] = 304,
  [325] = 304,
  [326] = 293,
  [327] = 69,
  [328] = 296,
  [329] = 305,
  [330] = 246,
  [331] = 331,
  [332] = 332,
  [333] = 68,
  [334] = 306,
  [335] = 305,
  [336] = 304,
  [337] = 337,
  [338] = 301,
  [339] = 297,
  [340] = 299,
  [341] = 296,
  [342] = 46,
  [343] = 343,
  [344] = 305,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 105,
  [349] = 349,
  [350] = 346,
  [351] = 351,
  [352] = 352,
  [353] = 104,
  [354] = 84,
  [355] = 355,
  [356] = 347,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 347,
  [365] = 365,
  [366] = 94,
  [367] = 363,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 369,
  [372] = 369,
  [373] = 93,
  [374] = 365,
  [375] = 107,
  [376] = 108,
  [377] = 357,
  [378] = 378,
  [379] = 358,
  [380] = 346,
  [381] = 381,
  [382] = 369,
  [383] = 383,
  [384] = 384,
  [385] = 246,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 389,
  [391] = 383,
  [392] = 392,
  [393] = 386,
  [394] = 389,
  [395] = 392,
  [396] = 396,
  [397] = 397,
  [398] = 387,
  [399] = 388,
  [400] = 386,
  [401] = 69,
  [402] = 402,
  [403] = 403,
  [404] = 68,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 405,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 420,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 411,
  [446] = 422,
  [447] = 423,
  [448] = 448,
  [449] = 449,
  [450] = 435,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 405,
  [456] = 451,
  [457] = 80,
  [458] = 79,
  [459] = 459,
  [460] = 460,
  [461] = 424,
  [462] = 438,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 453,
  [467] = 467,
  [468] = 468,
  [469] = 443,
  [470] = 409,
  [471] = 471,
  [472] = 443,
  [473] = 473,
  [474] = 406,
  [475] = 421,
  [476] = 476,
  [477] = 468,
  [478] = 438,
  [479] = 468,
  [480] = 451,
  [481] = 476,
  [482] = 436,
  [483] = 483,
  [484] = 432,
  [485] = 421,
  [486] = 430,
  [487] = 428,
  [488] = 488,
  [489] = 452,
  [490] = 427,
  [491] = 425,
  [492] = 418,
  [493] = 417,
  [494] = 416,
  [495] = 415,
  [496] = 459,
  [497] = 497,
  [498] = 498,
  [499] = 488,
  [500] = 483,
  [501] = 414,
  [502] = 412,
  [503] = 471,
  [504] = 467,
  [505] = 464,
  [506] = 463,
  [507] = 408,
  [508] = 407,
  [509] = 460,
  [510] = 454,
  [511] = 498,
  [512] = 449,
  [513] = 442,
  [514] = 440,
  [515] = 439,
  [516] = 516,
  [517] = 68,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 69,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 553,
  [558] = 537,
  [559] = 559,
  [560] = 560,
  [561] = 548,
  [562] = 562,
  [563] = 563,
  [564] = 556,
  [565] = 553,
  [566] = 537,
  [567] = 567,
  [568] = 562,
  [569] = 563,
  [570] = 556,
  [571] = 553,
  [572] = 537,
  [573] = 573,
  [574] = 574,
  [575] = 562,
  [576] = 563,
  [577] = 556,
  [578] = 553,
  [579] = 537,
  [580] = 562,
  [581] = 563,
  [582] = 556,
  [583] = 553,
  [584] = 537,
  [585] = 556,
  [586] = 553,
  [587] = 556,
  [588] = 588,
  [589] = 556,
  [590] = 553,
  [591] = 556,
  [592] = 553,
  [593] = 556,
  [594] = 553,
  [595] = 556,
  [596] = 553,
  [597] = 556,
  [598] = 553,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 550,
  [608] = 549,
  [609] = 553,
  [610] = 610,
  [611] = 611,
  [612] = 556,
  [613] = 613,
  [614] = 614,
  [615] = 602,
  [616] = 616,
  [617] = 599,
  [618] = 610,
  [619] = 602,
  [620] = 620,
  [621] = 601,
  [622] = 620,
  [623] = 623,
  [624] = 563,
  [625] = 625,
  [626] = 626,
  [627] = 562,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 538,
  [633] = 554,
  [634] = 563,
  [635] = 562,
  [636] = 636,
  [637] = 637,
  [638] = 537,
  [639] = 600,
  [640] = 601,
  [641] = 602,
  [642] = 628,
  [643] = 601,
  [644] = 544,
  [645] = 628,
  [646] = 601,
  [647] = 602,
  [648] = 601,
  [649] = 602,
  [650] = 601,
  [651] = 602,
  [652] = 601,
  [653] = 602,
  [654] = 601,
  [655] = 602,
  [656] = 601,
  [657] = 602,
  [658] = 601,
  [659] = 602,
  [660] = 601,
  [661] = 602,
  [662] = 601,
  [663] = 602,
  [664] = 601,
  [665] = 602,
  [666] = 625,
  [667] = 614,
  [668] = 553,
  [669] = 539,
  [670] = 670,
  [671] = 671,
  [672] = 606,
  [673] = 673,
  [674] = 600,
  [675] = 556,
  [676] = 630,
  [677] = 540,
  [678] = 548,
  [679] = 671,
  [680] = 554,
  [681] = 563,
  [682] = 562,
  [683] = 603,
  [684] = 574,
  [685] = 573,
  [686] = 588,
  [687] = 687,
  [688] = 551,
  [689] = 689,
  [690] = 628,
  [691] = 548,
  [692] = 692,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(289);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(676);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(680);
      if (lookahead == '(') ADVANCE(636);
      if (lookahead == ')') ADVANCE(637);
      if (lookahead == '+') ADVANCE(635);
      if (lookahead == ',') ADVANCE(628);
      if (lookahead == '-') ADVANCE(629);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == ':') ADVANCE(370);
      if (lookahead == '=') ADVANCE(294);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == 'A') ADVANCE(150);
      if (lookahead == 'B') ADVANCE(168);
      if (lookahead == 'C') ADVANCE(126);
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == 'F') ADVANCE(115);
      if (lookahead == 'G') ADVANCE(116);
      if (lookahead == 'I') ADVANCE(108);
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead == 'P') ADVANCE(155);
      if (lookahead == 'R') ADVANCE(169);
      if (lookahead == 'S') ADVANCE(80);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == 'V') ADVANCE(104);
      if (lookahead == 'W') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(285)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(687);
      if (lookahead == '\f') ADVANCE(688);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(686);
      if (lookahead == '#') ADVANCE(633);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(632);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(686);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(691);
      if (lookahead == '\f') ADVANCE(692);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(693);
      if (lookahead == '\f') ADVANCE(703);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(635);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(699);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(693);
      if (lookahead == '\f') ADVANCE(703);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(635);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(694);
      if (lookahead == '\f') ADVANCE(704);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(676);
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(680);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(700);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(685);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(694);
      if (lookahead == '\f') ADVANCE(704);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(676);
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(680);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(685);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(695);
      if (lookahead == '\f') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '(') ADVANCE(636);
      if (lookahead == '+') ADVANCE(635);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(701);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(627);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(695);
      if (lookahead == '\f') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '(') ADVANCE(636);
      if (lookahead == '+') ADVANCE(635);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(627);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '#') ADVANCE(677);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(678);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(679);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '#') ADVANCE(681);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(683);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '\f') ADVANCE(706);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(702);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(14)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(631);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '\f') ADVANCE(706);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(14)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(631);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(697);
      if (lookahead == '\f') ADVANCE(707);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(294);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(697);
      if (lookahead == '\f') ADVANCE(707);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(698);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(697);
      if (lookahead == '\f') ADVANCE(707);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(676);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(680);
      if (lookahead == '(') ADVANCE(636);
      if (lookahead == ')') ADVANCE(637);
      if (lookahead == '+') ADVANCE(635);
      if (lookahead == '-') ADVANCE(629);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == 'A') ADVANCE(150);
      if (lookahead == 'B') ADVANCE(168);
      if (lookahead == 'C') ADVANCE(126);
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == 'F') ADVANCE(115);
      if (lookahead == 'G') ADVANCE(116);
      if (lookahead == 'I') ADVANCE(108);
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead == 'P') ADVANCE(155);
      if (lookahead == 'R') ADVANCE(169);
      if (lookahead == 'S') ADVANCE(80);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == 'V') ADVANCE(104);
      if (lookahead == 'W') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(698);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(628);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 19:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(676);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(680);
      if (lookahead == '(') ADVANCE(636);
      if (lookahead == ')') ADVANCE(637);
      if (lookahead == '+') ADVANCE(635);
      if (lookahead == '-') ADVANCE(629);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == 'A') ADVANCE(150);
      if (lookahead == 'B') ADVANCE(168);
      if (lookahead == 'C') ADVANCE(126);
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == 'F') ADVANCE(115);
      if (lookahead == 'G') ADVANCE(116);
      if (lookahead == 'I') ADVANCE(108);
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead == 'P') ADVANCE(155);
      if (lookahead == 'R') ADVANCE(169);
      if (lookahead == 'S') ADVANCE(80);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == 'V') ADVANCE(104);
      if (lookahead == 'W') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(628);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 20:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(676);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(680);
      if (lookahead == '(') ADVANCE(636);
      if (lookahead == ')') ADVANCE(637);
      if (lookahead == '+') ADVANCE(635);
      if (lookahead == '-') ADVANCE(630);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == 'A') ADVANCE(150);
      if (lookahead == 'B') ADVANCE(168);
      if (lookahead == 'C') ADVANCE(126);
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == 'F') ADVANCE(115);
      if (lookahead == 'G') ADVANCE(116);
      if (lookahead == 'I') ADVANCE(108);
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead == 'P') ADVANCE(155);
      if (lookahead == 'R') ADVANCE(169);
      if (lookahead == 'S') ADVANCE(80);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == 'V') ADVANCE(104);
      if (lookahead == 'W') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(628);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(334);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'm') ADVANCE(238);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 'p') ADVANCE(254);
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(642);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '=') ADVANCE(641);
      if (lookahead == 'A') ADVANCE(149);
      if (lookahead == 'C') ADVANCE(140);
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == 'F') ADVANCE(115);
      if (lookahead == 'G') ADVANCE(116);
      if (lookahead == 'I') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead == 'R') ADVANCE(169);
      if (lookahead == 'S') ADVANCE(80);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == 'W') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(36)
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(643);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(641);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(54)
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(629);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(628);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(26)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(631);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(630);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(628);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(26)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(631);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(676);
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(680);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(685);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(635);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == ':') ADVANCE(370);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == 'A') ADVANCE(149);
      if (lookahead == 'C') ADVANCE(140);
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == 'F') ADVANCE(115);
      if (lookahead == 'G') ADVANCE(116);
      if (lookahead == 'I') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead == 'R') ADVANCE(169);
      if (lookahead == 'S') ADVANCE(80);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == 'W') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(635);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == 'A') ADVANCE(149);
      if (lookahead == 'C') ADVANCE(140);
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == 'F') ADVANCE(115);
      if (lookahead == 'G') ADVANCE(116);
      if (lookahead == 'I') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead == 'R') ADVANCE(169);
      if (lookahead == 'S') ADVANCE(80);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == 'W') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == 'A') ADVANCE(405);
      if (lookahead == 'C') ADVANCE(401);
      if (lookahead == 'E') ADVANCE(394);
      if (lookahead == 'F') ADVANCE(403);
      if (lookahead == 'G') ADVANCE(391);
      if (lookahead == 'I') ADVANCE(388);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == 'R') ADVANCE(414);
      if (lookahead == 'S') ADVANCE(381);
      if (lookahead == 'T') ADVANCE(406);
      if (lookahead == 'W') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == 'A') ADVANCE(405);
      if (lookahead == 'C') ADVANCE(401);
      if (lookahead == 'E') ADVANCE(398);
      if (lookahead == 'F') ADVANCE(403);
      if (lookahead == 'G') ADVANCE(391);
      if (lookahead == 'I') ADVANCE(388);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == 'R') ADVANCE(414);
      if (lookahead == 'S') ADVANCE(381);
      if (lookahead == 'T') ADVANCE(406);
      if (lookahead == 'W') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == 'A') ADVANCE(405);
      if (lookahead == 'C') ADVANCE(401);
      if (lookahead == 'F') ADVANCE(403);
      if (lookahead == 'G') ADVANCE(391);
      if (lookahead == 'I') ADVANCE(388);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == 'R') ADVANCE(414);
      if (lookahead == 'S') ADVANCE(381);
      if (lookahead == 'T') ADVANCE(406);
      if (lookahead == 'W') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == 'A') ADVANCE(405);
      if (lookahead == 'C') ADVANCE(401);
      if (lookahead == 'F') ADVANCE(392);
      if (lookahead == 'G') ADVANCE(391);
      if (lookahead == 'I') ADVANCE(388);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == 'R') ADVANCE(414);
      if (lookahead == 'S') ADVANCE(381);
      if (lookahead == 'T') ADVANCE(406);
      if (lookahead == 'W') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == 'A') ADVANCE(149);
      if (lookahead == 'C') ADVANCE(140);
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == 'F') ADVANCE(115);
      if (lookahead == 'G') ADVANCE(116);
      if (lookahead == 'I') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead == 'R') ADVANCE(169);
      if (lookahead == 'S') ADVANCE(80);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == 'W') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36)
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(474);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(380);
      if (lookahead == 'A') ADVANCE(405);
      if (lookahead == 'C') ADVANCE(401);
      if (lookahead == 'E') ADVANCE(394);
      if (lookahead == 'F') ADVANCE(403);
      if (lookahead == 'G') ADVANCE(391);
      if (lookahead == 'I') ADVANCE(388);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == 'R') ADVANCE(414);
      if (lookahead == 'S') ADVANCE(381);
      if (lookahead == 'T') ADVANCE(406);
      if (lookahead == 'W') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(380);
      if (lookahead == 'A') ADVANCE(405);
      if (lookahead == 'C') ADVANCE(401);
      if (lookahead == 'E') ADVANCE(398);
      if (lookahead == 'F') ADVANCE(403);
      if (lookahead == 'G') ADVANCE(391);
      if (lookahead == 'I') ADVANCE(388);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == 'R') ADVANCE(414);
      if (lookahead == 'S') ADVANCE(381);
      if (lookahead == 'T') ADVANCE(406);
      if (lookahead == 'W') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(380);
      if (lookahead == 'A') ADVANCE(405);
      if (lookahead == 'C') ADVANCE(401);
      if (lookahead == 'F') ADVANCE(403);
      if (lookahead == 'G') ADVANCE(391);
      if (lookahead == 'I') ADVANCE(388);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == 'R') ADVANCE(414);
      if (lookahead == 'S') ADVANCE(381);
      if (lookahead == 'T') ADVANCE(406);
      if (lookahead == 'W') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(380);
      if (lookahead == 'A') ADVANCE(405);
      if (lookahead == 'C') ADVANCE(401);
      if (lookahead == 'F') ADVANCE(392);
      if (lookahead == 'G') ADVANCE(391);
      if (lookahead == 'I') ADVANCE(388);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == 'R') ADVANCE(414);
      if (lookahead == 'S') ADVANCE(381);
      if (lookahead == 'T') ADVANCE(406);
      if (lookahead == 'W') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(370);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == 'A') ADVANCE(405);
      if (lookahead == 'C') ADVANCE(401);
      if (lookahead == 'E') ADVANCE(394);
      if (lookahead == 'F') ADVANCE(403);
      if (lookahead == 'G') ADVANCE(391);
      if (lookahead == 'I') ADVANCE(388);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == 'R') ADVANCE(414);
      if (lookahead == 'S') ADVANCE(381);
      if (lookahead == 'T') ADVANCE(406);
      if (lookahead == 'W') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(370);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == 'A') ADVANCE(405);
      if (lookahead == 'C') ADVANCE(401);
      if (lookahead == 'E') ADVANCE(398);
      if (lookahead == 'F') ADVANCE(403);
      if (lookahead == 'G') ADVANCE(391);
      if (lookahead == 'I') ADVANCE(388);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == 'R') ADVANCE(414);
      if (lookahead == 'S') ADVANCE(381);
      if (lookahead == 'T') ADVANCE(406);
      if (lookahead == 'W') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(370);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == 'A') ADVANCE(405);
      if (lookahead == 'C') ADVANCE(401);
      if (lookahead == 'F') ADVANCE(403);
      if (lookahead == 'G') ADVANCE(391);
      if (lookahead == 'I') ADVANCE(388);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == 'R') ADVANCE(414);
      if (lookahead == 'S') ADVANCE(381);
      if (lookahead == 'T') ADVANCE(406);
      if (lookahead == 'W') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(370);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == 'A') ADVANCE(405);
      if (lookahead == 'C') ADVANCE(401);
      if (lookahead == 'F') ADVANCE(392);
      if (lookahead == 'G') ADVANCE(391);
      if (lookahead == 'I') ADVANCE(388);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == 'R') ADVANCE(414);
      if (lookahead == 'S') ADVANCE(381);
      if (lookahead == 'T') ADVANCE(406);
      if (lookahead == 'W') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(405);
      if (lookahead == 'C') ADVANCE(401);
      if (lookahead == 'E') ADVANCE(394);
      if (lookahead == 'F') ADVANCE(403);
      if (lookahead == 'G') ADVANCE(391);
      if (lookahead == 'I') ADVANCE(388);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == 'R') ADVANCE(414);
      if (lookahead == 'S') ADVANCE(381);
      if (lookahead == 'T') ADVANCE(406);
      if (lookahead == 'W') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(405);
      if (lookahead == 'C') ADVANCE(401);
      if (lookahead == 'E') ADVANCE(398);
      if (lookahead == 'F') ADVANCE(403);
      if (lookahead == 'G') ADVANCE(391);
      if (lookahead == 'I') ADVANCE(388);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == 'R') ADVANCE(414);
      if (lookahead == 'S') ADVANCE(381);
      if (lookahead == 'T') ADVANCE(406);
      if (lookahead == 'W') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(405);
      if (lookahead == 'C') ADVANCE(401);
      if (lookahead == 'F') ADVANCE(403);
      if (lookahead == 'G') ADVANCE(391);
      if (lookahead == 'I') ADVANCE(388);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == 'R') ADVANCE(414);
      if (lookahead == 'S') ADVANCE(381);
      if (lookahead == 'T') ADVANCE(406);
      if (lookahead == 'W') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(405);
      if (lookahead == 'C') ADVANCE(401);
      if (lookahead == 'F') ADVANCE(392);
      if (lookahead == 'G') ADVANCE(391);
      if (lookahead == 'I') ADVANCE(388);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == 'R') ADVANCE(414);
      if (lookahead == 'S') ADVANCE(381);
      if (lookahead == 'T') ADVANCE(406);
      if (lookahead == 'W') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(628);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(631);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '(') ADVANCE(636);
      if (lookahead == '+') ADVANCE(635);
      if (lookahead == '-') ADVANCE(480);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(627);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '(') ADVANCE(636);
      if (lookahead == '+') ADVANCE(635);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(627);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(627);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '-') ADVANCE(483);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(627);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '-') ADVANCE(484);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(60)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(627);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == 'A') ADVANCE(518);
      if (lookahead == 'C') ADVANCE(514);
      if (lookahead == 'E') ADVANCE(507);
      if (lookahead == 'F') ADVANCE(516);
      if (lookahead == 'G') ADVANCE(504);
      if (lookahead == 'I') ADVANCE(501);
      if (lookahead == 'L') ADVANCE(499);
      if (lookahead == 'R') ADVANCE(528);
      if (lookahead == 'S') ADVANCE(492);
      if (lookahead == 'T') ADVANCE(519);
      if (lookahead == 'W') ADVANCE(494);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(627);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == 'A') ADVANCE(518);
      if (lookahead == 'C') ADVANCE(514);
      if (lookahead == 'E') ADVANCE(511);
      if (lookahead == 'F') ADVANCE(516);
      if (lookahead == 'G') ADVANCE(504);
      if (lookahead == 'I') ADVANCE(501);
      if (lookahead == 'L') ADVANCE(499);
      if (lookahead == 'R') ADVANCE(528);
      if (lookahead == 'S') ADVANCE(492);
      if (lookahead == 'T') ADVANCE(519);
      if (lookahead == 'W') ADVANCE(494);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(627);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == 'A') ADVANCE(518);
      if (lookahead == 'C') ADVANCE(514);
      if (lookahead == 'F') ADVANCE(516);
      if (lookahead == 'G') ADVANCE(504);
      if (lookahead == 'I') ADVANCE(501);
      if (lookahead == 'L') ADVANCE(499);
      if (lookahead == 'R') ADVANCE(528);
      if (lookahead == 'S') ADVANCE(492);
      if (lookahead == 'T') ADVANCE(519);
      if (lookahead == 'W') ADVANCE(494);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(63)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(627);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == 'A') ADVANCE(518);
      if (lookahead == 'C') ADVANCE(514);
      if (lookahead == 'F') ADVANCE(505);
      if (lookahead == 'G') ADVANCE(504);
      if (lookahead == 'I') ADVANCE(501);
      if (lookahead == 'L') ADVANCE(499);
      if (lookahead == 'R') ADVANCE(528);
      if (lookahead == 'S') ADVANCE(492);
      if (lookahead == 'T') ADVANCE(519);
      if (lookahead == 'W') ADVANCE(494);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(627);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == 'A') ADVANCE(521);
      if (lookahead == 'E') ADVANCE(511);
      if (lookahead == 'S') ADVANCE(495);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(627);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(66)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(627);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(469);
      if (lookahead == '\\') ADVANCE(470);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(472);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 69:
      if (lookahead == '(') ADVANCE(284);
      END_STATE();
    case 70:
      if (lookahead == ')') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(644);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(175);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(211);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(283);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(182);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(250);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(178);
      END_STATE();
    case 78:
      if (lookahead == '.') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      if (lookahead == '=') ADVANCE(235);
      END_STATE();
    case 80:
      if (lookahead == 'A') ADVANCE(170);
      if (lookahead == 'E') ADVANCE(162);
      END_STATE();
    case 81:
      if (lookahead == 'A') ADVANCE(113);
      END_STATE();
    case 82:
      if (lookahead == 'A') ADVANCE(132);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(157);
      END_STATE();
    case 84:
      if (lookahead == 'A') ADVANCE(157);
      if (lookahead == 'I') ADVANCE(135);
      END_STATE();
    case 85:
      if (lookahead == 'A') ADVANCE(128);
      END_STATE();
    case 86:
      if (lookahead == 'A') ADVANCE(120);
      if (lookahead == 'I') ADVANCE(163);
      END_STATE();
    case 87:
      if (lookahead == 'A') ADVANCE(90);
      END_STATE();
    case 88:
      if (lookahead == 'C') ADVANCE(124);
      END_STATE();
    case 89:
      if (lookahead == 'C') ADVANCE(165);
      END_STATE();
    case 90:
      if (lookahead == 'C') ADVANCE(166);
      END_STATE();
    case 91:
      if (lookahead == 'C') ADVANCE(85);
      END_STATE();
    case 92:
      if (lookahead == 'C') ADVANCE(125);
      END_STATE();
    case 93:
      if (lookahead == 'D') ADVANCE(313);
      END_STATE();
    case 94:
      if (lookahead == 'D') ADVANCE(295);
      END_STATE();
    case 95:
      if (lookahead == 'D') ADVANCE(145);
      END_STATE();
    case 96:
      if (lookahead == 'D') ADVANCE(147);
      END_STATE();
    case 97:
      if (lookahead == 'E') ADVANCE(325);
      END_STATE();
    case 98:
      if (lookahead == 'E') ADVANCE(320);
      END_STATE();
    case 99:
      if (lookahead == 'E') ADVANCE(337);
      END_STATE();
    case 100:
      if (lookahead == 'E') ADVANCE(316);
      END_STATE();
    case 101:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 102:
      if (lookahead == 'E') ADVANCE(161);
      END_STATE();
    case 103:
      if (lookahead == 'E') ADVANCE(89);
      END_STATE();
    case 104:
      if (lookahead == 'E') ADVANCE(154);
      END_STATE();
    case 105:
      if (lookahead == 'E') ADVANCE(156);
      END_STATE();
    case 106:
      if (lookahead == 'E') ADVANCE(153);
      END_STATE();
    case 107:
      if (lookahead == 'F') ADVANCE(321);
      END_STATE();
    case 108:
      if (lookahead == 'F') ADVANCE(321);
      if (lookahead == 'N') ADVANCE(312);
      END_STATE();
    case 109:
      if (lookahead == 'F') ADVANCE(324);
      END_STATE();
    case 110:
      if (lookahead == 'F') ADVANCE(87);
      END_STATE();
    case 111:
      if (lookahead == 'F') ADVANCE(121);
      END_STATE();
    case 112:
      if (lookahead == 'G') ADVANCE(290);
      END_STATE();
    case 113:
      if (lookahead == 'G') ADVANCE(99);
      END_STATE();
    case 114:
      if (lookahead == 'H') ADVANCE(28);
      END_STATE();
    case 115:
      if (lookahead == 'I') ADVANCE(136);
      if (lookahead == 'O') ADVANCE(152);
      if (lookahead == 'R') ADVANCE(141);
      END_STATE();
    case 116:
      if (lookahead == 'I') ADVANCE(160);
      END_STATE();
    case 117:
      if (lookahead == 'I') ADVANCE(109);
      END_STATE();
    case 118:
      if (lookahead == 'I') ADVANCE(129);
      END_STATE();
    case 119:
      if (lookahead == 'I') ADVANCE(110);
      END_STATE();
    case 120:
      if (lookahead == 'I') ADVANCE(164);
      END_STATE();
    case 121:
      if (lookahead == 'I') ADVANCE(133);
      END_STATE();
    case 122:
      if (lookahead == 'I') ADVANCE(146);
      END_STATE();
    case 123:
      if (lookahead == 'J') ADVANCE(103);
      END_STATE();
    case 124:
      if (lookahead == 'K') ADVANCE(105);
      END_STATE();
    case 125:
      if (lookahead == 'K') ADVANCE(106);
      END_STATE();
    case 126:
      if (lookahead == 'L') ADVANCE(144);
      if (lookahead == 'O') ADVANCE(148);
      END_STATE();
    case 127:
      if (lookahead == 'L') ADVANCE(159);
      if (lookahead == 'N') ADVANCE(93);
      END_STATE();
    case 128:
      if (lookahead == 'L') ADVANCE(336);
      END_STATE();
    case 129:
      if (lookahead == 'L') ADVANCE(94);
      END_STATE();
    case 130:
      if (lookahead == 'L') ADVANCE(173);
      END_STATE();
    case 131:
      if (lookahead == 'L') ADVANCE(143);
      END_STATE();
    case 132:
      if (lookahead == 'L') ADVANCE(130);
      END_STATE();
    case 133:
      if (lookahead == 'L') ADVANCE(100);
      END_STATE();
    case 134:
      if (lookahead == 'M') ADVANCE(296);
      END_STATE();
    case 135:
      if (lookahead == 'M') ADVANCE(81);
      END_STATE();
    case 136:
      if (lookahead == 'N') ADVANCE(82);
      END_STATE();
    case 137:
      if (lookahead == 'N') ADVANCE(331);
      END_STATE();
    case 138:
      if (lookahead == 'N') ADVANCE(304);
      END_STATE();
    case 139:
      if (lookahead == 'N') ADVANCE(98);
      END_STATE();
    case 140:
      if (lookahead == 'O') ADVANCE(148);
      END_STATE();
    case 141:
      if (lookahead == 'O') ADVANCE(134);
      END_STATE();
    case 142:
      if (lookahead == 'O') ADVANCE(123);
      END_STATE();
    case 143:
      if (lookahead == 'O') ADVANCE(91);
      END_STATE();
    case 144:
      if (lookahead == 'O') ADVANCE(139);
      END_STATE();
    case 145:
      if (lookahead == 'O') ADVANCE(88);
      END_STATE();
    case 146:
      if (lookahead == 'O') ADVANCE(138);
      END_STATE();
    case 147:
      if (lookahead == 'O') ADVANCE(92);
      END_STATE();
    case 148:
      if (lookahead == 'P') ADVANCE(172);
      END_STATE();
    case 149:
      if (lookahead == 'R') ADVANCE(112);
      END_STATE();
    case 150:
      if (lookahead == 'R') ADVANCE(112);
      if (lookahead == 'S') ADVANCE(21);
      END_STATE();
    case 151:
      if (lookahead == 'R') ADVANCE(171);
      END_STATE();
    case 152:
      if (lookahead == 'R') ADVANCE(309);
      END_STATE();
    case 153:
      if (lookahead == 'R') ADVANCE(350);
      END_STATE();
    case 154:
      if (lookahead == 'R') ADVANCE(158);
      END_STATE();
    case 155:
      if (lookahead == 'R') ADVANCE(142);
      END_STATE();
    case 156:
      if (lookahead == 'R') ADVANCE(111);
      END_STATE();
    case 157:
      if (lookahead == 'R') ADVANCE(167);
      END_STATE();
    case 158:
      if (lookahead == 'S') ADVANCE(122);
      END_STATE();
    case 159:
      if (lookahead == 'S') ADVANCE(97);
      END_STATE();
    case 160:
      if (lookahead == 'T') ADVANCE(317);
      END_STATE();
    case 161:
      if (lookahead == 'T') ADVANCE(328);
      END_STATE();
    case 162:
      if (lookahead == 'T') ADVANCE(338);
      END_STATE();
    case 163:
      if (lookahead == 'T') ADVANCE(114);
      END_STATE();
    case 164:
      if (lookahead == 'T') ADVANCE(347);
      END_STATE();
    case 165:
      if (lookahead == 'T') ADVANCE(300);
      END_STATE();
    case 166:
      if (lookahead == 'T') ADVANCE(335);
      END_STATE();
    case 167:
      if (lookahead == 'T') ADVANCE(119);
      END_STATE();
    case 168:
      if (lookahead == 'U') ADVANCE(118);
      END_STATE();
    case 169:
      if (lookahead == 'U') ADVANCE(137);
      END_STATE();
    case 170:
      if (lookahead == 'V') ADVANCE(101);
      END_STATE();
    case 171:
      if (lookahead == 'Y') ADVANCE(341);
      END_STATE();
    case 172:
      if (lookahead == 'Y') ADVANCE(306);
      END_STATE();
    case 173:
      if (lookahead == 'Y') ADVANCE(344);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(265);
      if (lookahead == 'l') ADVANCE(180);
      if (lookahead == 'u') ADVANCE(227);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'c') ADVANCE(240);
      if (lookahead == 'l') ADVANCE(243);
      if (lookahead == 'p') ADVANCE(174);
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 181:
      if (lookahead == 'b') ADVANCE(179);
      END_STATE();
    case 182:
      if (lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 183:
      if (lookahead == 'c') ADVANCE(256);
      END_STATE();
    case 184:
      if (lookahead == 'c') ADVANCE(256);
      if (lookahead == 'p') ADVANCE(672);
      END_STATE();
    case 185:
      if (lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 186:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(667);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(661);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(639);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(670);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'm') ADVANCE(238);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 'p') ADVANCE(254);
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(649);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 207:
      if (lookahead == 'f') ADVANCE(248);
      END_STATE();
    case 208:
      if (lookahead == 'g') ADVANCE(195);
      END_STATE();
    case 209:
      if (lookahead == 'g') ADVANCE(263);
      END_STATE();
    case 210:
      if (lookahead == 'g') ADVANCE(202);
      END_STATE();
    case 211:
      if (lookahead == 'g') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(238);
      if (lookahead == 'n') ADVANCE(239);
      if (lookahead == 'p') ADVANCE(253);
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 212:
      if (lookahead == 'h') ADVANCE(674);
      END_STATE();
    case 213:
      if (lookahead == 'h') ADVANCE(669);
      END_STATE();
    case 214:
      if (lookahead == 'h') ADVANCE(194);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 220:
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 222:
      if (lookahead == 'k') ADVANCE(79);
      END_STATE();
    case 223:
      if (lookahead == 'l') ADVANCE(668);
      END_STATE();
    case 224:
      if (lookahead == 'l') ADVANCE(657);
      END_STATE();
    case 225:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 226:
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 227:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 228:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 229:
      if (lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 230:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 231:
      if (lookahead == 'm') ADVANCE(666);
      END_STATE();
    case 232:
      if (lookahead == 'm') ADVANCE(251);
      END_STATE();
    case 233:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 234:
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 235:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 236:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 237:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 244:
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 245:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 246:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 248:
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 249:
      if (lookahead == 'p') ADVANCE(245);
      END_STATE();
    case 250:
      if (lookahead == 'p') ADVANCE(262);
      END_STATE();
    case 251:
      if (lookahead == 'p') ADVANCE(247);
      END_STATE();
    case 252:
      if (lookahead == 'q') ADVANCE(274);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(264);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(665);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(266);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(662);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(671);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(654);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 274:
      if (lookahead == 'u') ADVANCE(218);
      END_STATE();
    case 275:
      if (lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 276:
      if (lookahead == 'v') ADVANCE(216);
      END_STATE();
    case 277:
      if (lookahead == 'v') ADVANCE(217);
      END_STATE();
    case 278:
      if (lookahead == 'v') ADVANCE(220);
      END_STATE();
    case 279:
      if (lookahead == 'w') ADVANCE(246);
      END_STATE();
    case 280:
      if (lookahead == 'w') ADVANCE(76);
      END_STATE();
    case 281:
      if (lookahead == 'y') ADVANCE(249);
      END_STATE();
    case 282:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(638);
      END_STATE();
    case 283:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 284:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 285:
      if (eof) ADVANCE(289);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(676);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(680);
      if (lookahead == '(') ADVANCE(636);
      if (lookahead == ')') ADVANCE(637);
      if (lookahead == '+') ADVANCE(635);
      if (lookahead == '-') ADVANCE(629);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == 'A') ADVANCE(150);
      if (lookahead == 'B') ADVANCE(168);
      if (lookahead == 'C') ADVANCE(126);
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == 'F') ADVANCE(115);
      if (lookahead == 'G') ADVANCE(116);
      if (lookahead == 'I') ADVANCE(108);
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead == 'P') ADVANCE(155);
      if (lookahead == 'R') ADVANCE(169);
      if (lookahead == 'S') ADVANCE(80);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == 'V') ADVANCE(104);
      if (lookahead == 'W') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(628);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(285)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 286:
      if (eof) ADVANCE(289);
      if (lookahead == ' ') ADVANCE(642);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(637);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '=') ADVANCE(641);
      if (lookahead == 'A') ADVANCE(363);
      if (lookahead == 'F') ADVANCE(364);
      if (lookahead == 'P') ADVANCE(366);
      if (lookahead == 'V') ADVANCE(354);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(288)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 287:
      if (eof) ADVANCE(289);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(637);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == ':') ADVANCE(370);
      if (lookahead == '=') ADVANCE(294);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == 'A') ADVANCE(363);
      if (lookahead == 'F') ADVANCE(364);
      if (lookahead == 'P') ADVANCE(366);
      if (lookahead == 'V') ADVANCE(354);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(288)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 288:
      if (eof) ADVANCE(289);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(637);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == 'A') ADVANCE(363);
      if (lookahead == 'F') ADVANCE(364);
      if (lookahead == 'P') ADVANCE(366);
      if (lookahead == 'V') ADVANCE(354);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(288)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_BUILD);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(95);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_END);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_FROMDOCKERFILE);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_GIT);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_CLONE);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_IF);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(117);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_LET);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_LET);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_RUN);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_SAVEARTIFACT);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_ASLOCAL);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_SAVEIMAGE);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_SET);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_TRY);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_WAIT);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_WAIT);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_WAIT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_WITHDOCKER);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'J') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == ' ') ADVANCE(84);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == ' ') ADVANCE(96);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(425);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(434);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(435);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(420);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(454);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(422);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(428);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(415);
      if (lookahead == 'E') ADVANCE(411);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(395);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(393);
      if (lookahead == 'I') ADVANCE(412);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'D') ADVANCE(314);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(326);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(372);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(410);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'F') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'G') ADVANCE(292);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'H') ADVANCE(373);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(409);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(400);
      if (lookahead == 'O') ADVANCE(407);
      if (lookahead == 'R') ADVANCE(402);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(413);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(408);
      if (lookahead == 'N') ADVANCE(384);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(396);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(418);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'M') ADVANCE(297);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(384);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(332);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(382);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(404);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(397);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(407);
      if (lookahead == 'R') ADVANCE(402);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'P') ADVANCE(417);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(389);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(416);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(310);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'S') ADVANCE(385);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(318);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(329);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(339);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(390);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(348);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'U') ADVANCE(399);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'V') ADVANCE(386);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(342);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(307);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(345);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(426);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'p') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(461);
      if (lookahead == 'l') ADVANCE(423);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(456);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(464);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(427);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(419);
      if (lookahead == 'p') ADVANCE(465);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(441);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(424);
      if (lookahead == 'p') ADVANCE(465);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'd') ADVANCE(639);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(429);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(375);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(437);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(376);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(455);
      if (lookahead == 'h') ADVANCE(442);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(455);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(453);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'g') ADVANCE(430);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'g') ADVANCE(459);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(431);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(450);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(466);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(445);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(432);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(452);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(446);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'm') ADVANCE(666);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'm') ADVANCE(645);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'n') ADVANCE(463);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(449);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(467);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(458);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'p') ADVANCE(457);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(451);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(438);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(443);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(448);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(665);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(439);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(462);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(379);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 't') ADVANCE(646);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 't') ADVANCE(436);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'u') ADVANCE(460);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'v') ADVANCE(444);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'w') ADVANCE(378);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_image_name);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(687);
      if (lookahead == '\f') ADVANCE(688);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(686);
      if (lookahead == '#') ADVANCE(471);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(472);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(691);
      if (lookahead == '\f') ADVANCE(692);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(472);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_image_digest);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_immediate_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(474);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(687);
      if (lookahead == '\f') ADVANCE(688);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(475);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(534);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(596);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == 'f') ADVANCE(652);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(560);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(542);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(537);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(599);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(549);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(589);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(559);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(617);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(540);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(529);
      if (lookahead == 'E') ADVANCE(525);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(508);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(506);
      if (lookahead == 'I') ADVANCE(526);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(530);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D') ADVANCE(315);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(327);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(477);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(524);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(478);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'F') ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G') ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H') ADVANCE(479);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(523);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(513);
      if (lookahead == 'O') ADVANCE(520);
      if (lookahead == 'R') ADVANCE(515);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(527);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(522);
      if (lookahead == 'N') ADVANCE(496);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(509);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(533);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M') ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(496);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(493);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(517);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(510);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(520);
      if (lookahead == 'R') ADVANCE(515);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P') ADVANCE(532);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(502);
      if (lookahead == 'S') ADVANCE(476);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(531);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(311);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S') ADVANCE(476);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S') ADVANCE(497);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(330);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(340);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(503);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(349);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U') ADVANCE(512);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'V') ADVANCE(498);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'V') ADVANCE(500);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(308);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(346);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(576);
      if (lookahead == 'c') ADVANCE(565);
      if (lookahead == 'd') ADVANCE(567);
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead == 'k') ADVANCE(551);
      if (lookahead == 'p') ADVANCE(535);
      if (lookahead == 's') ADVANCE(626);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(612);
      if (lookahead == 'l') ADVANCE(536);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(616);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(602);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(608);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(588);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(605);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'b') ADVANCE(619);
      if (lookahead == 'p') ADVANCE(574);
      if (lookahead == 't') ADVANCE(538);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'b') ADVANCE(607);
      if (lookahead == 'k') ADVANCE(556);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(566);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(550);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(639);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(647);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(491);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(598);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(625);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(656);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(545);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(562);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(615);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(600);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(555);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(487);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(592);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(597);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(595);
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead == 'k') ADVANCE(551);
      if (lookahead == 's') ADVANCE(626);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(651);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(552);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(554);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(583);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(640);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(620);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(586);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(613);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(579);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(578);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'k') ADVANCE(488);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(536);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(591);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(575);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(569);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(547);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(553);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(593);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(580);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(666);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(590);
      if (lookahead == 'o') ADVANCE(621);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(577);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(648);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(573);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(659);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(594);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(546);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(624);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(604);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(622);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(603);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(623);
      if (lookahead == 't') ADVANCE(610);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(581);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(481);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(606);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(490);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(650);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(564);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(544);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(582);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(561);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(568);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(539);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(563);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(665);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(660);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(658);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(614);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(618);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(485);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(653);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(558);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(610);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(611);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'u') ADVANCE(572);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'v') ADVANCE(571);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(585);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(675);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(587);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(486);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'x') ADVANCE(570);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'y') ADVANCE(584);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(191);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(631);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n') ADVANCE(691);
      if (lookahead == '\f') ADVANCE(692);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_version_major_minor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(638);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_allow_privileged);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_DASH_DASHbranch);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcache_DASHfrom);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_cache_hint);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchmod);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcompose);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_dir);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_DASH_DASHbuild_DASHarg);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_DASHf);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtarget);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_entrypoint);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_feature_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_force);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_if_exists);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_keep_own);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_keep_ts);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_DASH_DASHload);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_DASH_DASHmount);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_network_none);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_no_cache);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_pass_args);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_privileged);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_DASH_DASHpull);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_push);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsecret);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsep);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_DASH_DASHservice);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_ssh);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_symlink_no_follow);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(687);
      if (lookahead == '\f') ADVANCE(689);
      if (lookahead == '\r') ADVANCE(677);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(677);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(677);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(679);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(679);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(687);
      if (lookahead == '\f') ADVANCE(690);
      if (lookahead == '\r') ADVANCE(681);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(681);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(681);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(683);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(683);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\n') ADVANCE(687);
      if (lookahead == '\f') ADVANCE(688);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(684);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(685);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(687);
      if (lookahead == '\f') ADVANCE(688);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(687);
      if (lookahead == '\f') ADVANCE(689);
      if (lookahead == '\r') ADVANCE(677);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(677);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(687);
      if (lookahead == '\f') ADVANCE(690);
      if (lookahead == '\r') ADVANCE(681);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(681);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      if (lookahead == '\n') ADVANCE(691);
      if (lookahead == '\f') ADVANCE(692);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(693);
      if (lookahead == '\f') ADVANCE(703);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(635);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(694);
      if (lookahead == '\f') ADVANCE(704);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(695);
      if (lookahead == '\f') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '+') ADVANCE(635);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '\f') ADVANCE(706);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(697);
      if (lookahead == '\f') ADVANCE(707);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_CRn);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(685);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(627);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(631);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(693);
      if (lookahead == '\f') ADVANCE(703);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(635);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(694);
      if (lookahead == '\f') ADVANCE(704);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(695);
      if (lookahead == '\f') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '+') ADVANCE(635);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '\f') ADVANCE(706);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(697);
      if (lookahead == '\f') ADVANCE(707);
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
  [1] = {.lex_state = 287},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 30},
  [42] = {.lex_state = 32},
  [43] = {.lex_state = 30},
  [44] = {.lex_state = 40},
  [45] = {.lex_state = 30},
  [46] = {.lex_state = 30},
  [47] = {.lex_state = 33},
  [48] = {.lex_state = 34, .external_lex_state = 2},
  [49] = {.lex_state = 35},
  [50] = {.lex_state = 40},
  [51] = {.lex_state = 42, .external_lex_state = 2},
  [52] = {.lex_state = 43},
  [53] = {.lex_state = 41},
  [54] = {.lex_state = 36},
  [55] = {.lex_state = 36},
  [56] = {.lex_state = 36},
  [57] = {.lex_state = 36},
  [58] = {.lex_state = 36},
  [59] = {.lex_state = 56},
  [60] = {.lex_state = 56},
  [61] = {.lex_state = 43},
  [62] = {.lex_state = 40},
  [63] = {.lex_state = 41},
  [64] = {.lex_state = 44},
  [65] = {.lex_state = 56},
  [66] = {.lex_state = 56},
  [67] = {.lex_state = 44},
  [68] = {.lex_state = 40},
  [69] = {.lex_state = 40},
  [70] = {.lex_state = 44},
  [71] = {.lex_state = 23},
  [72] = {.lex_state = 40},
  [73] = {.lex_state = 44},
  [74] = {.lex_state = 42, .external_lex_state = 2},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 44},
  [77] = {.lex_state = 36},
  [78] = {.lex_state = 36},
  [79] = {.lex_state = 61},
  [80] = {.lex_state = 61},
  [81] = {.lex_state = 36},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 36},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 47},
  [86] = {.lex_state = 42, .external_lex_state = 2},
  [87] = {.lex_state = 36, .external_lex_state = 2},
  [88] = {.lex_state = 43},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 46, .external_lex_state = 2},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 47},
  [99] = {.lex_state = 36, .external_lex_state = 2},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 36, .external_lex_state = 2},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 36, .external_lex_state = 2},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 43},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 41},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 45},
  [120] = {.lex_state = 47},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 42, .external_lex_state = 2},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 46, .external_lex_state = 2},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 45},
  [129] = {.lex_state = 47},
  [130] = {.lex_state = 45},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 43},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 43},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 41},
  [141] = {.lex_state = 41},
  [142] = {.lex_state = 44},
  [143] = {.lex_state = 42, .external_lex_state = 2},
  [144] = {.lex_state = 42, .external_lex_state = 2},
  [145] = {.lex_state = 44},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 41},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 45},
  [154] = {.lex_state = 36, .external_lex_state = 2},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 46, .external_lex_state = 2},
  [157] = {.lex_state = 46, .external_lex_state = 2},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 62},
  [160] = {.lex_state = 63, .external_lex_state = 2},
  [161] = {.lex_state = 30, .external_lex_state = 2},
  [162] = {.lex_state = 46, .external_lex_state = 2},
  [163] = {.lex_state = 45},
  [164] = {.lex_state = 23, .external_lex_state = 2},
  [165] = {.lex_state = 62},
  [166] = {.lex_state = 47},
  [167] = {.lex_state = 64},
  [168] = {.lex_state = 63, .external_lex_state = 2},
  [169] = {.lex_state = 64},
  [170] = {.lex_state = 47},
  [171] = {.lex_state = 56},
  [172] = {.lex_state = 26},
  [173] = {.lex_state = 26},
  [174] = {.lex_state = 45},
  [175] = {.lex_state = 26},
  [176] = {.lex_state = 36, .external_lex_state = 2},
  [177] = {.lex_state = 36, .external_lex_state = 2},
  [178] = {.lex_state = 46, .external_lex_state = 2},
  [179] = {.lex_state = 36, .external_lex_state = 2},
  [180] = {.lex_state = 47},
  [181] = {.lex_state = 26},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 46, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 45},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 36, .external_lex_state = 2},
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
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 0, .external_lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 2},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 0, .external_lex_state = 2},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 0, .external_lex_state = 2},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 0, .external_lex_state = 2},
  [228] = {.lex_state = 0, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 2},
  [234] = {.lex_state = 26},
  [235] = {.lex_state = 30},
  [236] = {.lex_state = 30},
  [237] = {.lex_state = 30},
  [238] = {.lex_state = 30},
  [239] = {.lex_state = 6},
  [240] = {.lex_state = 56},
  [241] = {.lex_state = 6},
  [242] = {.lex_state = 30},
  [243] = {.lex_state = 56},
  [244] = {.lex_state = 56},
  [245] = {.lex_state = 56},
  [246] = {.lex_state = 56},
  [247] = {.lex_state = 56},
  [248] = {.lex_state = 6},
  [249] = {.lex_state = 8},
  [250] = {.lex_state = 26},
  [251] = {.lex_state = 26},
  [252] = {.lex_state = 26},
  [253] = {.lex_state = 287},
  [254] = {.lex_state = 8},
  [255] = {.lex_state = 8},
  [256] = {.lex_state = 8},
  [257] = {.lex_state = 287},
  [258] = {.lex_state = 26},
  [259] = {.lex_state = 26},
  [260] = {.lex_state = 8},
  [261] = {.lex_state = 8},
  [262] = {.lex_state = 8},
  [263] = {.lex_state = 8},
  [264] = {.lex_state = 37},
  [265] = {.lex_state = 8},
  [266] = {.lex_state = 37},
  [267] = {.lex_state = 37},
  [268] = {.lex_state = 37},
  [269] = {.lex_state = 37},
  [270] = {.lex_state = 37},
  [271] = {.lex_state = 287},
  [272] = {.lex_state = 58},
  [273] = {.lex_state = 58},
  [274] = {.lex_state = 58},
  [275] = {.lex_state = 58},
  [276] = {.lex_state = 58},
  [277] = {.lex_state = 37},
  [278] = {.lex_state = 37},
  [279] = {.lex_state = 37},
  [280] = {.lex_state = 287},
  [281] = {.lex_state = 286},
  [282] = {.lex_state = 37},
  [283] = {.lex_state = 287},
  [284] = {.lex_state = 287},
  [285] = {.lex_state = 287},
  [286] = {.lex_state = 287},
  [287] = {.lex_state = 287},
  [288] = {.lex_state = 287},
  [289] = {.lex_state = 287},
  [290] = {.lex_state = 287},
  [291] = {.lex_state = 287},
  [292] = {.lex_state = 37},
  [293] = {.lex_state = 10},
  [294] = {.lex_state = 8},
  [295] = {.lex_state = 30},
  [296] = {.lex_state = 29},
  [297] = {.lex_state = 57},
  [298] = {.lex_state = 30},
  [299] = {.lex_state = 29},
  [300] = {.lex_state = 30},
  [301] = {.lex_state = 57},
  [302] = {.lex_state = 37},
  [303] = {.lex_state = 14},
  [304] = {.lex_state = 59},
  [305] = {.lex_state = 59},
  [306] = {.lex_state = 10},
  [307] = {.lex_state = 287},
  [308] = {.lex_state = 30},
  [309] = {.lex_state = 37},
  [310] = {.lex_state = 8},
  [311] = {.lex_state = 37},
  [312] = {.lex_state = 59},
  [313] = {.lex_state = 30},
  [314] = {.lex_state = 30},
  [315] = {.lex_state = 37},
  [316] = {.lex_state = 30},
  [317] = {.lex_state = 8},
  [318] = {.lex_state = 59},
  [319] = {.lex_state = 29},
  [320] = {.lex_state = 59},
  [321] = {.lex_state = 37},
  [322] = {.lex_state = 30},
  [323] = {.lex_state = 57},
  [324] = {.lex_state = 59},
  [325] = {.lex_state = 59},
  [326] = {.lex_state = 10},
  [327] = {.lex_state = 30},
  [328] = {.lex_state = 29},
  [329] = {.lex_state = 59},
  [330] = {.lex_state = 30},
  [331] = {.lex_state = 30},
  [332] = {.lex_state = 30},
  [333] = {.lex_state = 30},
  [334] = {.lex_state = 10},
  [335] = {.lex_state = 59},
  [336] = {.lex_state = 59},
  [337] = {.lex_state = 287, .external_lex_state = 3},
  [338] = {.lex_state = 57},
  [339] = {.lex_state = 57},
  [340] = {.lex_state = 29},
  [341] = {.lex_state = 29},
  [342] = {.lex_state = 287},
  [343] = {.lex_state = 14},
  [344] = {.lex_state = 59},
  [345] = {.lex_state = 287},
  [346] = {.lex_state = 29},
  [347] = {.lex_state = 29},
  [348] = {.lex_state = 287},
  [349] = {.lex_state = 29},
  [350] = {.lex_state = 29},
  [351] = {.lex_state = 37},
  [352] = {.lex_state = 59},
  [353] = {.lex_state = 287},
  [354] = {.lex_state = 287},
  [355] = {.lex_state = 287},
  [356] = {.lex_state = 29},
  [357] = {.lex_state = 29},
  [358] = {.lex_state = 29},
  [359] = {.lex_state = 287},
  [360] = {.lex_state = 287},
  [361] = {.lex_state = 30},
  [362] = {.lex_state = 29},
  [363] = {.lex_state = 29},
  [364] = {.lex_state = 29},
  [365] = {.lex_state = 29},
  [366] = {.lex_state = 287},
  [367] = {.lex_state = 29},
  [368] = {.lex_state = 29},
  [369] = {.lex_state = 29},
  [370] = {.lex_state = 29},
  [371] = {.lex_state = 29},
  [372] = {.lex_state = 29},
  [373] = {.lex_state = 287},
  [374] = {.lex_state = 29},
  [375] = {.lex_state = 287},
  [376] = {.lex_state = 287},
  [377] = {.lex_state = 29},
  [378] = {.lex_state = 287},
  [379] = {.lex_state = 29},
  [380] = {.lex_state = 29},
  [381] = {.lex_state = 29},
  [382] = {.lex_state = 29},
  [383] = {.lex_state = 52},
  [384] = {.lex_state = 58},
  [385] = {.lex_state = 58},
  [386] = {.lex_state = 15},
  [387] = {.lex_state = 60},
  [388] = {.lex_state = 60},
  [389] = {.lex_state = 15},
  [390] = {.lex_state = 15},
  [391] = {.lex_state = 52},
  [392] = {.lex_state = 52},
  [393] = {.lex_state = 15},
  [394] = {.lex_state = 15},
  [395] = {.lex_state = 52},
  [396] = {.lex_state = 58},
  [397] = {.lex_state = 60},
  [398] = {.lex_state = 60},
  [399] = {.lex_state = 60},
  [400] = {.lex_state = 15},
  [401] = {.lex_state = 58},
  [402] = {.lex_state = 58},
  [403] = {.lex_state = 58},
  [404] = {.lex_state = 58},
  [405] = {.lex_state = 15},
  [406] = {.lex_state = 15},
  [407] = {.lex_state = 15},
  [408] = {.lex_state = 15},
  [409] = {.lex_state = 15},
  [410] = {.lex_state = 15},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 15},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 15},
  [415] = {.lex_state = 15},
  [416] = {.lex_state = 15},
  [417] = {.lex_state = 15},
  [418] = {.lex_state = 15},
  [419] = {.lex_state = 287},
  [420] = {.lex_state = 15},
  [421] = {.lex_state = 37},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 15},
  [425] = {.lex_state = 15},
  [426] = {.lex_state = 30},
  [427] = {.lex_state = 15},
  [428] = {.lex_state = 15},
  [429] = {.lex_state = 287},
  [430] = {.lex_state = 15},
  [431] = {.lex_state = 287},
  [432] = {.lex_state = 15},
  [433] = {.lex_state = 15},
  [434] = {.lex_state = 15},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 15},
  [437] = {.lex_state = 15},
  [438] = {.lex_state = 15},
  [439] = {.lex_state = 15},
  [440] = {.lex_state = 15},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 15},
  [443] = {.lex_state = 37},
  [444] = {.lex_state = 37},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 15},
  [449] = {.lex_state = 15},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 15},
  [452] = {.lex_state = 15},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 15},
  [455] = {.lex_state = 15},
  [456] = {.lex_state = 15},
  [457] = {.lex_state = 65},
  [458] = {.lex_state = 65},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 15},
  [461] = {.lex_state = 15},
  [462] = {.lex_state = 15},
  [463] = {.lex_state = 15},
  [464] = {.lex_state = 15},
  [465] = {.lex_state = 15},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 15},
  [468] = {.lex_state = 15},
  [469] = {.lex_state = 37},
  [470] = {.lex_state = 15},
  [471] = {.lex_state = 15},
  [472] = {.lex_state = 37},
  [473] = {.lex_state = 15},
  [474] = {.lex_state = 15},
  [475] = {.lex_state = 37},
  [476] = {.lex_state = 15},
  [477] = {.lex_state = 15},
  [478] = {.lex_state = 15},
  [479] = {.lex_state = 15},
  [480] = {.lex_state = 15},
  [481] = {.lex_state = 15},
  [482] = {.lex_state = 15},
  [483] = {.lex_state = 15},
  [484] = {.lex_state = 15},
  [485] = {.lex_state = 37},
  [486] = {.lex_state = 15},
  [487] = {.lex_state = 15},
  [488] = {.lex_state = 15},
  [489] = {.lex_state = 15},
  [490] = {.lex_state = 15},
  [491] = {.lex_state = 15},
  [492] = {.lex_state = 15},
  [493] = {.lex_state = 15},
  [494] = {.lex_state = 15},
  [495] = {.lex_state = 15},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 15},
  [498] = {.lex_state = 15},
  [499] = {.lex_state = 15},
  [500] = {.lex_state = 15},
  [501] = {.lex_state = 15},
  [502] = {.lex_state = 15},
  [503] = {.lex_state = 15},
  [504] = {.lex_state = 15},
  [505] = {.lex_state = 15},
  [506] = {.lex_state = 15},
  [507] = {.lex_state = 15},
  [508] = {.lex_state = 15},
  [509] = {.lex_state = 15},
  [510] = {.lex_state = 15},
  [511] = {.lex_state = 15},
  [512] = {.lex_state = 15},
  [513] = {.lex_state = 15},
  [514] = {.lex_state = 15},
  [515] = {.lex_state = 15},
  [516] = {.lex_state = 39},
  [517] = {.lex_state = 15},
  [518] = {.lex_state = 39},
  [519] = {.lex_state = 57},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 37},
  [522] = {.lex_state = 60},
  [523] = {.lex_state = 39},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 57},
  [527] = {.lex_state = 60},
  [528] = {.lex_state = 57},
  [529] = {.lex_state = 57},
  [530] = {.lex_state = 15},
  [531] = {.lex_state = 287},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 53},
  [536] = {.lex_state = 53},
  [537] = {.lex_state = 55},
  [538] = {.lex_state = 66},
  [539] = {.lex_state = 66},
  [540] = {.lex_state = 66},
  [541] = {.lex_state = 66},
  [542] = {.lex_state = 24},
  [543] = {.lex_state = 24},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 24},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 66},
  [548] = {.lex_state = 39},
  [549] = {.lex_state = 24},
  [550] = {.lex_state = 24},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 37},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 39},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 55},
  [559] = {.lex_state = 24},
  [560] = {.lex_state = 24},
  [561] = {.lex_state = 39},
  [562] = {.lex_state = 67},
  [563] = {.lex_state = 55},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 55},
  [567] = {.lex_state = 37},
  [568] = {.lex_state = 67},
  [569] = {.lex_state = 55},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 55},
  [573] = {.lex_state = 37},
  [574] = {.lex_state = 37},
  [575] = {.lex_state = 67},
  [576] = {.lex_state = 55},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 55},
  [580] = {.lex_state = 67},
  [581] = {.lex_state = 55},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 55},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 66},
  [600] = {.lex_state = 24},
  [601] = {.lex_state = 11},
  [602] = {.lex_state = 12},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 24},
  [605] = {.lex_state = 24},
  [606] = {.lex_state = 287},
  [607] = {.lex_state = 24},
  [608] = {.lex_state = 24},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 66},
  [611] = {.lex_state = 66},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 24},
  [614] = {.lex_state = 66},
  [615] = {.lex_state = 12},
  [616] = {.lex_state = 24},
  [617] = {.lex_state = 66},
  [618] = {.lex_state = 66},
  [619] = {.lex_state = 12},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 11},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 66},
  [624] = {.lex_state = 55},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 24},
  [627] = {.lex_state = 67},
  [628] = {.lex_state = 24},
  [629] = {.lex_state = 37},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 66},
  [632] = {.lex_state = 66},
  [633] = {.lex_state = 39},
  [634] = {.lex_state = 55},
  [635] = {.lex_state = 67},
  [636] = {.lex_state = 24},
  [637] = {.lex_state = 24},
  [638] = {.lex_state = 55},
  [639] = {.lex_state = 24},
  [640] = {.lex_state = 11},
  [641] = {.lex_state = 12},
  [642] = {.lex_state = 24},
  [643] = {.lex_state = 11},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 24},
  [646] = {.lex_state = 11},
  [647] = {.lex_state = 12},
  [648] = {.lex_state = 11},
  [649] = {.lex_state = 12},
  [650] = {.lex_state = 11},
  [651] = {.lex_state = 12},
  [652] = {.lex_state = 11},
  [653] = {.lex_state = 12},
  [654] = {.lex_state = 11},
  [655] = {.lex_state = 12},
  [656] = {.lex_state = 11},
  [657] = {.lex_state = 12},
  [658] = {.lex_state = 11},
  [659] = {.lex_state = 12},
  [660] = {.lex_state = 11},
  [661] = {.lex_state = 12},
  [662] = {.lex_state = 11},
  [663] = {.lex_state = 12},
  [664] = {.lex_state = 11},
  [665] = {.lex_state = 12},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 66},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 66},
  [670] = {.lex_state = 287},
  [671] = {.lex_state = 287},
  [672] = {.lex_state = 287},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 24},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 66},
  [678] = {.lex_state = 39},
  [679] = {.lex_state = 287},
  [680] = {.lex_state = 39},
  [681] = {.lex_state = 55},
  [682] = {.lex_state = 67},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 37},
  [685] = {.lex_state = 37},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 32},
  [690] = {.lex_state = 24},
  [691] = {.lex_state = 39},
  [692] = {.lex_state = 37},
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
    [anon_sym_FOR] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_FROMDOCKERFILE] = ACTIONS(1),
    [anon_sym_GIT] = ACTIONS(1),
    [anon_sym_CLONE] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_ELSEIF] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_LET] = ACTIONS(1),
    [anon_sym_RUN] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_SAVEARTIFACT] = ACTIONS(1),
    [anon_sym_ASLOCAL] = ACTIONS(1),
    [anon_sym_SAVEIMAGE] = ACTIONS(1),
    [anon_sym_SET] = ACTIONS(1),
    [anon_sym_TRY] = ACTIONS(1),
    [anon_sym_FINALLY] = ACTIONS(1),
    [anon_sym_WAIT] = ACTIONS(1),
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
    [sym_source_file] = STATE(687),
    [sym_arg_command] = STATE(257),
    [sym_from_command] = STATE(257),
    [sym_project_command] = STATE(257),
    [sym_target] = STATE(257),
    [sym_version_command] = STATE(257),
    [aux_sym_source_file_repeat1] = STATE(257),
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
  [0] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(35), 1,
      anon_sym_ELSE,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(41), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(43), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(27), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(3), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [78] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(41), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(43), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(55), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(53), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(5), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [156] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(41), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(43), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(59), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(57), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(6), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [234] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(64), 1,
      anon_sym_FROM,
    ACTIONS(67), 1,
      anon_sym_COPY,
    ACTIONS(70), 1,
      anon_sym_FOR,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(78), 1,
      anon_sym_GIT,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(84), 1,
      anon_sym_ELSE,
    ACTIONS(86), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_RUN,
    ACTIONS(92), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(95), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(98), 1,
      anon_sym_SET,
    ACTIONS(101), 1,
      anon_sym_TRY,
    ACTIONS(104), 1,
      anon_sym_WAIT,
    ACTIONS(107), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(73), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(5), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [312] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(41), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(43), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(112), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(110), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(5), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [390] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(114), 1,
      anon_sym_END,
    ACTIONS(116), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(118), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(13), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [464] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(116), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(118), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(120), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(7), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [538] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(116), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(118), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(122), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(35), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [612] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(116), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(118), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(124), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(30), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [686] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(116), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(118), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(126), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(13), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [760] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(116), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(118), 1,
      anon_sym_SAVEIMAGE,
    STATE(676), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(14), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [834] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(64), 1,
      anon_sym_FROM,
    ACTIONS(67), 1,
      anon_sym_COPY,
    ACTIONS(70), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_END,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(78), 1,
      anon_sym_GIT,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(86), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_RUN,
    ACTIONS(98), 1,
      anon_sym_SET,
    ACTIONS(101), 1,
      anon_sym_TRY,
    ACTIONS(104), 1,
      anon_sym_WAIT,
    ACTIONS(107), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(128), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(13), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [908] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(116), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(118), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(134), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(13), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [982] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(64), 1,
      anon_sym_FROM,
    ACTIONS(67), 1,
      anon_sym_COPY,
    ACTIONS(70), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FINALLY,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(78), 1,
      anon_sym_GIT,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(86), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_RUN,
    ACTIONS(98), 1,
      anon_sym_SET,
    ACTIONS(101), 1,
      anon_sym_TRY,
    ACTIONS(104), 1,
      anon_sym_WAIT,
    ACTIONS(107), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(139), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(15), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1056] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(142), 1,
      anon_sym_ARG,
    ACTIONS(144), 1,
      anon_sym_FROM,
    ACTIONS(146), 1,
      anon_sym_COPY,
    ACTIONS(148), 1,
      anon_sym_FOR,
    ACTIONS(150), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(152), 1,
      anon_sym_GIT,
    ACTIONS(154), 1,
      anon_sym_IF,
    ACTIONS(156), 1,
      anon_sym_LET,
    ACTIONS(158), 1,
      anon_sym_RUN,
    ACTIONS(160), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(162), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(164), 1,
      anon_sym_SET,
    ACTIONS(166), 1,
      anon_sym_TRY,
    ACTIONS(168), 1,
      anon_sym_WAIT,
    ACTIONS(170), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(172), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(19), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1130] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(174), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(176), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(178), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1204] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(116), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(118), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(180), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(13), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1278] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(142), 1,
      anon_sym_ARG,
    ACTIONS(144), 1,
      anon_sym_FROM,
    ACTIONS(146), 1,
      anon_sym_COPY,
    ACTIONS(148), 1,
      anon_sym_FOR,
    ACTIONS(150), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(152), 1,
      anon_sym_GIT,
    ACTIONS(154), 1,
      anon_sym_IF,
    ACTIONS(156), 1,
      anon_sym_LET,
    ACTIONS(158), 1,
      anon_sym_RUN,
    ACTIONS(160), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(162), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(164), 1,
      anon_sym_SET,
    ACTIONS(166), 1,
      anon_sym_TRY,
    ACTIONS(168), 1,
      anon_sym_WAIT,
    ACTIONS(170), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(182), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(24), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1352] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(116), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(118), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(184), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(18), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1426] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(174), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(176), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(186), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(34), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1500] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(116), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(118), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(188), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(13), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1574] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(116), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(118), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(190), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(11), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1648] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(73), 1,
      sym__dedent,
    ACTIONS(192), 1,
      anon_sym_ARG,
    ACTIONS(195), 1,
      anon_sym_FROM,
    ACTIONS(198), 1,
      anon_sym_COPY,
    ACTIONS(201), 1,
      anon_sym_FOR,
    ACTIONS(204), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(207), 1,
      anon_sym_GIT,
    ACTIONS(210), 1,
      anon_sym_IF,
    ACTIONS(213), 1,
      anon_sym_LET,
    ACTIONS(216), 1,
      anon_sym_RUN,
    ACTIONS(219), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(222), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(225), 1,
      anon_sym_SET,
    ACTIONS(228), 1,
      anon_sym_TRY,
    ACTIONS(231), 1,
      anon_sym_WAIT,
    ACTIONS(234), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(24), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1722] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(116), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(118), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(237), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(22), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1796] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(116), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(118), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(239), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(13), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1870] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(116), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(118), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(241), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(26), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1944] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(116), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(118), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(243), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(33), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2018] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(116), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(118), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(245), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(13), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2092] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(116), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(118), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(247), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(13), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2166] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(174), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(176), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(249), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(15), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2240] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(116), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(118), 1,
      anon_sym_SAVEIMAGE,
    STATE(625), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(14), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2314] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(116), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(118), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(251), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(13), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2388] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(174), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(176), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(253), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(15), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2462] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(116), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(118), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(255), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(13), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2536] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(116), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(118), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(257), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(29), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2610] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(116), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(118), 1,
      anon_sym_SAVEIMAGE,
    STATE(666), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(14), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2684] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(116), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(118), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(259), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(13), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2758] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(116), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(118), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(261), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(38), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2832] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(116), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(118), 1,
      anon_sym_SAVEIMAGE,
    STATE(630), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(14), 16,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2906] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(267), 1,
      anon_sym_COLON2,
    ACTIONS(269), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(265), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(263), 23,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [2949] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(275), 1,
      sym_image_name,
    ACTIONS(277), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(279), 1,
      sym_cache_hint,
    ACTIONS(281), 1,
      sym_push,
    STATE(44), 1,
      aux_sym_save_image_command_repeat1,
    STATE(62), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(64), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(273), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(271), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [3001] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(287), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(285), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(283), 23,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [3041] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(275), 1,
      sym_image_name,
    ACTIONS(277), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(281), 1,
      sym_push,
    STATE(50), 1,
      aux_sym_save_image_command_repeat1,
    STATE(62), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(67), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(291), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(289), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [3090] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(295), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(293), 23,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [3127] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(299), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(297), 23,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [3164] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(279), 1,
      sym_cache_hint,
    ACTIONS(301), 1,
      sym_image_name,
    ACTIONS(303), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(305), 1,
      sym_push,
    STATE(53), 1,
      aux_sym_save_image_command_repeat1,
    STATE(116), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(119), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(273), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(271), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [3214] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(307), 1,
      sym_image_name,
    ACTIONS(309), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(311), 1,
      sym_cache_hint,
    ACTIONS(313), 1,
      sym_push,
    STATE(51), 1,
      aux_sym_save_image_command_repeat1,
    STATE(122), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(124), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(273), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(271), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [3264] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(279), 1,
      sym_cache_hint,
    ACTIONS(315), 1,
      sym_image_name,
    ACTIONS(317), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(319), 1,
      sym_push,
    STATE(52), 1,
      aux_sym_save_image_command_repeat1,
    STATE(113), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(120), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(273), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(271), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [3314] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(325), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(328), 1,
      sym_push,
    STATE(50), 1,
      aux_sym_save_image_command_repeat1,
    STATE(62), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(323), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(321), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [3357] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(307), 1,
      sym_image_name,
    ACTIONS(309), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(313), 1,
      sym_push,
    STATE(74), 1,
      aux_sym_save_image_command_repeat1,
    STATE(122), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(156), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(291), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(289), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [3404] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(315), 1,
      sym_image_name,
    ACTIONS(317), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(319), 1,
      sym_push,
    STATE(61), 1,
      aux_sym_save_image_command_repeat1,
    STATE(113), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(129), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(291), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(289), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [3451] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(301), 1,
      sym_image_name,
    ACTIONS(303), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(305), 1,
      sym_push,
    STATE(63), 1,
      aux_sym_save_image_command_repeat1,
    STATE(116), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(128), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(291), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(289), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [3498] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(335), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(333), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(55), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(331), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [3536] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(341), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(339), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(55), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(337), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [3574] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(335), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(346), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(55), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(344), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [3612] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(335), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(350), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(54), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(348), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [3650] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(335), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(354), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(56), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(352), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [3688] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(356), 1,
      sym_path,
    ACTIONS(358), 1,
      anon_sym_PLUS,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(366), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(368), 1,
      anon_sym_DASH_DASHplatform,
    STATE(65), 1,
      aux_sym_copy_command_repeat1,
    STATE(339), 1,
      aux_sym_copy_command_repeat2,
    STATE(555), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(528), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(244), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(362), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [3741] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(356), 1,
      sym_path,
    ACTIONS(358), 1,
      anon_sym_PLUS,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(366), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(368), 1,
      anon_sym_DASH_DASHplatform,
    STATE(171), 1,
      aux_sym_copy_command_repeat1,
    STATE(301), 1,
      aux_sym_copy_command_repeat2,
    STATE(555), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(528), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(244), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(362), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [3794] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(370), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(373), 1,
      sym_push,
    STATE(61), 1,
      aux_sym_save_image_command_repeat1,
    STATE(113), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(323), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(321), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [3835] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(378), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(376), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [3868] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(380), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(383), 1,
      sym_push,
    STATE(63), 1,
      aux_sym_save_image_command_repeat1,
    STATE(116), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(323), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(321), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [3909] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(275), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(70), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(388), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(386), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [3946] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(356), 1,
      sym_path,
    ACTIONS(358), 1,
      anon_sym_PLUS,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(366), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(368), 1,
      anon_sym_DASH_DASHplatform,
    STATE(171), 1,
      aux_sym_copy_command_repeat1,
    STATE(338), 1,
      aux_sym_copy_command_repeat2,
    STATE(555), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(528), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(244), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(362), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [3999] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(356), 1,
      sym_path,
    ACTIONS(358), 1,
      anon_sym_PLUS,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(366), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(368), 1,
      anon_sym_DASH_DASHplatform,
    STATE(60), 1,
      aux_sym_copy_command_repeat1,
    STATE(297), 1,
      aux_sym_copy_command_repeat2,
    STATE(555), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(528), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(244), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(362), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [4052] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(275), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(70), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(392), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(390), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [4089] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(396), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(394), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4122] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(400), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(398), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4155] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(406), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(70), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(404), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(402), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [4192] = 3,
    ACTIONS(411), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(409), 20,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [4223] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(415), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(413), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4256] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(417), 1,
      anon_sym_COLON2,
    ACTIONS(419), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(263), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(265), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4293] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(421), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(424), 1,
      sym_push,
    STATE(74), 1,
      aux_sym_save_image_command_repeat1,
    STATE(122), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(323), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(321), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4334] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(431), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(429), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(427), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4368] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(433), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(283), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(285), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4402] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(398), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(400), 18,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [4434] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(394), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(396), 18,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [4466] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(439), 1,
      anon_sym_ASLOCAL,
    ACTIONS(441), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(437), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(435), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [4502] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(447), 1,
      anon_sym_ASLOCAL,
    ACTIONS(449), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(445), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(443), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [4538] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(453), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(451), 18,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [4570] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(459), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(457), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(455), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4604] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(463), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(461), 18,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [4636] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(467), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(465), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4667] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(469), 1,
      anon_sym_COLON2,
    ACTIONS(471), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(263), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(265), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [4702] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(415), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(413), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4733] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(354), 1,
      anon_sym_FROM,
    ACTIONS(473), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(154), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(352), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4768] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(415), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(413), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [4799] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(477), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(475), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4830] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(481), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(479), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4861] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(485), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(483), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4892] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(487), 1,
      anon_sym_COLON2,
    ACTIONS(489), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(263), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(265), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4927] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(354), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(352), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4958] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(493), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(491), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4989] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(497), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(495), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5020] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(501), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(499), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5051] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(505), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(503), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5082] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(507), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(98), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(404), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(402), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [5117] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(350), 1,
      anon_sym_FROM,
    ACTIONS(473), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(106), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(348), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5152] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(512), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(510), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5183] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(516), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(514), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5214] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(520), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(518), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5245] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(339), 1,
      anon_sym_FROM,
    ACTIONS(522), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(103), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(337), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5280] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(527), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(525), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5311] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(531), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(529), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5342] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(333), 1,
      anon_sym_FROM,
    ACTIONS(473), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(103), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(331), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5377] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(535), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(533), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5408] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(539), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(537), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5439] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(543), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(541), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5470] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(547), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(545), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5501] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(551), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(549), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5532] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(555), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(553), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5563] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(378), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(376), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [5594] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(559), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(557), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5625] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(563), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(561), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5656] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(378), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(376), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [5687] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(567), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(565), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5718] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(571), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(569), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5749] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(301), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(130), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(388), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(386), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [5784] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(315), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(98), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(388), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(386), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [5819] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(575), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(573), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5850] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(378), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(376), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [5881] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(579), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(577), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5912] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(307), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(157), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(388), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(386), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [5947] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(583), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(581), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5978] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(587), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(585), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6009] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(591), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(589), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6040] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(301), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(130), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(392), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(390), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [6075] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(315), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(98), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(392), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(390), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [6110] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(593), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(130), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(404), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(402), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [6145] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(598), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(596), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6176] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(602), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(600), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6207] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(606), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(604), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6238] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(610), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(608), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6269] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(396), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(394), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [6300] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(614), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(612), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6331] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(400), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(398), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [6362] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(618), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(616), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6393] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(622), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(620), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6424] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(396), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(394), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [6455] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(400), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(398), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [6486] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(293), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(295), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [6517] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(396), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(394), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [6548] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(400), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(398), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [6579] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(297), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(299), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [6610] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(626), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(624), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6641] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(630), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(628), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6672] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(634), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(632), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6703] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(415), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(413), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [6734] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(638), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(636), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6765] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(642), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(640), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6796] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(646), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(644), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6827] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(648), 1,
      anon_sym_COLON2,
    ACTIONS(650), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(263), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(265), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [6862] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(346), 1,
      anon_sym_FROM,
    ACTIONS(473), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(103), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(344), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6897] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(654), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(652), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6928] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(307), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(157), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(392), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(390), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [6963] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(656), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(157), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(404), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(402), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [6998] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(661), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(659), 17,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7029] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(439), 1,
      anon_sym_ASLOCAL,
    ACTIONS(441), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(437), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(435), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [7063] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(663), 1,
      anon_sym_ASLOCAL,
    ACTIONS(665), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(437), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(435), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [7097] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(265), 1,
      anon_sym_FROM,
    ACTIONS(667), 1,
      anon_sym_COLON2,
    ACTIONS(669), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(263), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7131] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(671), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(283), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(285), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7163] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(673), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(283), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(285), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7195] = 4,
    ACTIONS(675), 1,
      aux_sym_branch_token1,
    ACTIONS(677), 1,
      sym__dedent,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(409), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [7225] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(447), 1,
      anon_sym_ASLOCAL,
    ACTIONS(449), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(445), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(443), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [7259] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(679), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(283), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(285), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [7291] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(447), 1,
      anon_sym_ASLOCAL,
    ACTIONS(449), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(445), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(443), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [7325] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(681), 1,
      anon_sym_ASLOCAL,
    ACTIONS(683), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(445), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(443), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [7359] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(439), 1,
      anon_sym_ASLOCAL,
    ACTIONS(441), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(437), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(435), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [7393] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(293), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(295), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [7422] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(685), 1,
      sym_path,
    ACTIONS(692), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(695), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(698), 1,
      anon_sym_DASH_DASHplatform,
    STATE(171), 1,
      aux_sym_copy_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    STATE(244), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(689), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [7463] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(701), 1,
      anon_sym_DASH_DASH,
    ACTIONS(705), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(709), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(711), 1,
      anon_sym_DASH_DASHsecret,
    STATE(234), 1,
      aux_sym_run_command_repeat1,
    STATE(343), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(506), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(703), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(250), 2,
      sym_mount,
      sym_secret,
    ACTIONS(707), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [7508] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(705), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(709), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(711), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(713), 1,
      anon_sym_DASH_DASH,
    STATE(172), 1,
      aux_sym_run_command_repeat1,
    STATE(343), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(499), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(703), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(250), 2,
      sym_mount,
      sym_secret,
    ACTIONS(707), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [7553] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(293), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(295), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7582] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(705), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(709), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(711), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(715), 1,
      anon_sym_DASH_DASH,
    STATE(234), 1,
      aux_sym_run_command_repeat1,
    STATE(343), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(463), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(703), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(250), 2,
      sym_mount,
      sym_secret,
    ACTIONS(707), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [7627] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(394), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(396), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [7656] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(398), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(400), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [7685] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(293), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(295), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7714] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(453), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(451), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [7743] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(297), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(299), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [7772] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(705), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(709), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(711), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(717), 1,
      anon_sym_DASH_DASH,
    STATE(175), 1,
      aux_sym_run_command_repeat1,
    STATE(343), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(488), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(703), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(250), 2,
      sym_mount,
      sym_secret,
    ACTIONS(707), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [7817] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(285), 1,
      anon_sym_FROM,
    ACTIONS(719), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(283), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7848] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(297), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(299), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7877] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(457), 1,
      anon_sym_FROM,
    ACTIONS(721), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(455), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7908] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(297), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(299), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7937] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(429), 1,
      anon_sym_FROM,
    ACTIONS(723), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(427), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7968] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(463), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(461), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [7997] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(567), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(565), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8025] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(520), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(518), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8053] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(295), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(293), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8081] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(539), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(537), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8109] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(535), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(533), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8137] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(531), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(529), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8165] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(527), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(525), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8193] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(587), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(585), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8221] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(638), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(636), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8249] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(299), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(297), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8277] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(467), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(465), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8305] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(583), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(581), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8333] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(493), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(491), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8361] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(602), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(600), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8389] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(354), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(352), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8417] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(485), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(483), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8445] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(481), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(479), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8473] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(477), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(475), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8501] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(501), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(499), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8529] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(497), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(495), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8557] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(505), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(503), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8585] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(512), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(510), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8613] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(516), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(514), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8641] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(579), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(577), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8669] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(606), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(604), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8697] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(642), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(640), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8725] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(543), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(541), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8753] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(598), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(596), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8781] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(547), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(545), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8809] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(575), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(573), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8837] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(610), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(608), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8865] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(551), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(549), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8893] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(555), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(553), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8921] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(563), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(561), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8949] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(571), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(569), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8977] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(622), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(620), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9005] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(618), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(616), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9033] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(646), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(644), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9061] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(591), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(589), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9089] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(654), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(652), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9117] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(626), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(624), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9145] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(614), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(612), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9173] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(630), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(628), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9201] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(634), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(632), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9229] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(559), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(557), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9257] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(661), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(659), 15,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9285] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(732), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(735), 1,
      anon_sym_DASH_DASHsecret,
    STATE(234), 1,
      aux_sym_run_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(725), 2,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
    ACTIONS(727), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(250), 2,
      sym_mount,
      sym_secret,
    ACTIONS(729), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [9322] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(738), 1,
      sym_allow_privileged,
    ACTIONS(740), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(742), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(744), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(746), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(748), 1,
      anon_sym_DASH_DASHservice,
    STATE(242), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(620), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(314), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [9364] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(738), 1,
      sym_allow_privileged,
    ACTIONS(740), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(742), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(744), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(746), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(748), 1,
      anon_sym_DASH_DASHservice,
    STATE(235), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(544), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(314), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [9406] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(738), 1,
      sym_allow_privileged,
    ACTIONS(740), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(742), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(744), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(746), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(748), 1,
      anon_sym_DASH_DASHservice,
    STATE(238), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(644), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(314), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [9448] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(738), 1,
      sym_allow_privileged,
    ACTIONS(740), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(742), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(744), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(746), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(748), 1,
      anon_sym_DASH_DASHservice,
    STATE(242), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(622), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(314), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [9490] = 10,
    ACTIONS(750), 1,
      sym_image_name,
    ACTIONS(752), 1,
      anon_sym_PLUS,
    ACTIONS(756), 1,
      anon_sym_DASH_DASHplatform,
    STATE(58), 1,
      sym_target_ref,
    STATE(295), 1,
      aux_sym_from_command_repeat1,
    STATE(426), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(754), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(93), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(758), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9527] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(760), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(762), 12,
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
  [9552] = 10,
    ACTIONS(756), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(764), 1,
      sym_image_name,
    ACTIONS(766), 1,
      anon_sym_PLUS,
    STATE(285), 1,
      sym_target_ref,
    STATE(316), 1,
      aux_sym_from_command_repeat1,
    STATE(426), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(754), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(373), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(768), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9589] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(770), 1,
      anon_sym_RUN,
    ACTIONS(772), 1,
      sym_allow_privileged,
    ACTIONS(775), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(778), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(781), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(784), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(787), 1,
      anon_sym_DASH_DASHservice,
    STATE(242), 1,
      aux_sym_with_docker_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(314), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [9628] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(398), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(400), 12,
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
  [9653] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(790), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(792), 12,
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
  [9678] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(794), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(796), 12,
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
  [9703] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(798), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(800), 12,
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
  [9728] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(394), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(396), 12,
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
  [9753] = 10,
    ACTIONS(756), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(802), 1,
      sym_image_name,
    ACTIONS(804), 1,
      anon_sym_PLUS,
    STATE(87), 1,
      sym_target_ref,
    STATE(308), 1,
      aux_sym_from_command_repeat1,
    STATE(426), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(754), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(202), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(806), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9790] = 8,
    ACTIONS(810), 1,
      anon_sym_DQUOTE,
    ACTIONS(812), 1,
      anon_sym_SQUOTE,
    STATE(36), 1,
      sym__eol,
    STATE(265), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(808), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(317), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(814), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9822] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(818), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(816), 10,
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
  [9846] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(394), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(396), 10,
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
  [9870] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(398), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(400), 10,
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
  [9894] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(820), 1,
      ts_builtin_sym_end,
    ACTIONS(822), 1,
      anon_sym_ARG,
    ACTIONS(825), 1,
      anon_sym_FROM,
    ACTIONS(828), 1,
      anon_sym_PROJECT,
    ACTIONS(831), 1,
      anon_sym_VERSION,
    ACTIONS(834), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(253), 6,
      sym_arg_command,
      sym_from_command,
      sym_project_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [9928] = 8,
    ACTIONS(810), 1,
      anon_sym_DQUOTE,
    ACTIONS(812), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      sym__eol,
    STATE(265), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(808), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(317), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(837), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9960] = 8,
    ACTIONS(810), 1,
      anon_sym_DQUOTE,
    ACTIONS(812), 1,
      anon_sym_SQUOTE,
    STATE(23), 1,
      sym__eol,
    STATE(254), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(808), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(317), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(839), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9992] = 8,
    ACTIONS(810), 1,
      anon_sym_DQUOTE,
    ACTIONS(812), 1,
      anon_sym_SQUOTE,
    STATE(27), 1,
      sym__eol,
    STATE(265), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(808), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(317), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(841), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10024] = 9,
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
    ACTIONS(843), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(253), 6,
      sym_arg_command,
      sym_from_command,
      sym_project_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [10058] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(847), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(845), 10,
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
  [10082] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(851), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(849), 10,
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
  [10106] = 8,
    ACTIONS(810), 1,
      anon_sym_DQUOTE,
    ACTIONS(812), 1,
      anon_sym_SQUOTE,
    STATE(39), 1,
      sym__eol,
    STATE(249), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(808), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(317), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(853), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10138] = 8,
    ACTIONS(810), 1,
      anon_sym_DQUOTE,
    ACTIONS(812), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym__eol,
    STATE(262), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(808), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(317), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(855), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10170] = 8,
    ACTIONS(810), 1,
      anon_sym_DQUOTE,
    ACTIONS(812), 1,
      anon_sym_SQUOTE,
    STATE(25), 1,
      sym__eol,
    STATE(265), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(808), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(317), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(857), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10202] = 8,
    ACTIONS(810), 1,
      anon_sym_DQUOTE,
    ACTIONS(812), 1,
      anon_sym_SQUOTE,
    STATE(8), 1,
      sym__eol,
    STATE(256), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(808), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(317), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(859), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10234] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(861), 1,
      sym_identifier,
    ACTIONS(863), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(867), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(869), 1,
      anon_sym_DASH_DASHsep,
    STATE(267), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(865), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(315), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [10267] = 7,
    ACTIONS(874), 1,
      anon_sym_DQUOTE,
    ACTIONS(877), 1,
      anon_sym_SQUOTE,
    STATE(265), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(871), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(317), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(880), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10296] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(863), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(867), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(869), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(882), 1,
      sym_identifier,
    STATE(264), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(865), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(315), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [10329] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(884), 1,
      sym_identifier,
    ACTIONS(886), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(892), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(895), 1,
      anon_sym_DASH_DASHsep,
    STATE(267), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(889), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(315), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [10362] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(863), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(867), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(869), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(898), 1,
      sym_identifier,
    STATE(270), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(865), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(315), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [10395] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(863), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(867), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(900), 1,
      sym_identifier,
    STATE(279), 1,
      aux_sym__conditional_block_repeat1,
    STATE(524), 1,
      sym_else_if_block,
    STATE(525), 1,
      sym__conditional_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(351), 2,
      sym_mount,
      sym_secret,
    ACTIONS(902), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [10430] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(863), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(867), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(869), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(904), 1,
      sym_identifier,
    STATE(267), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(865), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(315), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [10463] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(906), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(337), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(271), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(339), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10489] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(909), 1,
      sym_path,
    ACTIONS(911), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(913), 1,
      anon_sym_DASHf,
    ACTIONS(915), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(917), 1,
      anon_sym_DASH_DASHplatform,
    STATE(273), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(396), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [10521] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(911), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(913), 1,
      anon_sym_DASHf,
    ACTIONS(915), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(917), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(919), 1,
      sym_path,
    STATE(276), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(396), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [10553] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(911), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(913), 1,
      anon_sym_DASHf,
    ACTIONS(915), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(917), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(921), 1,
      sym_path,
    STATE(276), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(396), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [10585] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(911), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(913), 1,
      anon_sym_DASHf,
    ACTIONS(915), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(917), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(923), 1,
      sym_path,
    STATE(274), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(396), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [10617] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(925), 1,
      sym_path,
    ACTIONS(927), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(930), 1,
      anon_sym_DASHf,
    ACTIONS(933), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(936), 1,
      anon_sym_DASH_DASHplatform,
    STATE(276), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(396), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [10649] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(863), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(867), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(900), 1,
      sym_identifier,
    STATE(279), 1,
      aux_sym__conditional_block_repeat1,
    STATE(496), 1,
      sym__conditional_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(351), 2,
      sym_mount,
      sym_secret,
    ACTIONS(902), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [10681] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(863), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(867), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(900), 1,
      sym_identifier,
    STATE(279), 1,
      aux_sym__conditional_block_repeat1,
    STATE(459), 1,
      sym__conditional_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(351), 2,
      sym_mount,
      sym_secret,
    ACTIONS(902), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [10713] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(863), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(867), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(939), 1,
      sym_identifier,
    STATE(282), 1,
      aux_sym__conditional_block_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(351), 2,
      sym_mount,
      sym_secret,
    ACTIONS(902), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [10742] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    ACTIONS(941), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(271), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(333), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10767] = 4,
    ACTIONS(677), 1,
      ts_builtin_sym_end,
    ACTIONS(943), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(409), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
  [10788] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(945), 1,
      sym_identifier,
    ACTIONS(947), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(953), 1,
      anon_sym_DASH_DASHsecret,
    STATE(282), 1,
      aux_sym__conditional_block_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(351), 2,
      sym_mount,
      sym_secret,
    ACTIONS(950), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [10817] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
    ACTIONS(941), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(280), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(350), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10842] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    ACTIONS(941), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(271), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(346), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10867] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    ACTIONS(941), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(284), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(354), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10892] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(956), 1,
      anon_sym_COLON2,
    ACTIONS(958), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(263), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(265), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10917] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(400), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(398), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10937] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(396), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(394), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10957] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(960), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(285), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10979] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(461), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_DASH_DASH2,
    ACTIONS(463), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10999] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(451), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(453), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [11019] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(845), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [11036] = 4,
    STATE(233), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(962), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(964), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11055] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(394), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11070] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(368), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(966), 1,
      anon_sym_PLUS,
    STATE(57), 1,
      sym_target_ref,
    STATE(361), 1,
      aux_sym_from_command_repeat1,
    STATE(426), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(968), 2,
      sym_allow_privileged,
      sym_pass_args,
  [11097] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(970), 1,
      sym_expr,
    ACTIONS(972), 1,
      anon_sym_DQUOTE,
    ACTIONS(974), 1,
      anon_sym_SQUOTE,
    ACTIONS(976), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(405), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [11122] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(358), 1,
      anon_sym_PLUS,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    ACTIONS(978), 1,
      sym_path,
    STATE(323), 1,
      aux_sym_copy_command_repeat2,
    STATE(555), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(528), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [11149] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(461), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [11166] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(972), 1,
      anon_sym_DQUOTE,
    ACTIONS(974), 1,
      anon_sym_SQUOTE,
    ACTIONS(980), 1,
      sym_expr,
    ACTIONS(982), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(477), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [11191] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(984), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [11208] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(358), 1,
      anon_sym_PLUS,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    ACTIONS(986), 1,
      sym_path,
    STATE(323), 1,
      aux_sym_copy_command_repeat2,
    STATE(555), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(528), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [11235] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(396), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [11252] = 4,
    STATE(303), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(988), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(991), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11271] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(993), 1,
      sym_path,
    STATE(305), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(995), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [11292] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(997), 1,
      sym_path,
    STATE(312), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(995), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [11313] = 4,
    STATE(201), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(962), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(999), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11332] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(293), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(295), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [11351] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(368), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1001), 1,
      anon_sym_PLUS,
    STATE(99), 1,
      sym_target_ref,
    STATE(361), 1,
      aux_sym_from_command_repeat1,
    STATE(426), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(968), 2,
      sym_allow_privileged,
      sym_pass_args,
  [11378] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1003), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [11395] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(398), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11410] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(849), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [11427] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1005), 1,
      sym_path,
    STATE(312), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1007), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [11448] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1010), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [11465] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1012), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [11482] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1014), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [11499] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(358), 1,
      anon_sym_PLUS,
    ACTIONS(368), 1,
      anon_sym_DASH_DASHplatform,
    STATE(283), 1,
      sym_target_ref,
    STATE(361), 1,
      aux_sym_from_command_repeat1,
    STATE(426), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(968), 2,
      sym_allow_privileged,
      sym_pass_args,
  [11526] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1016), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11541] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1018), 1,
      sym_path,
    STATE(320), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(995), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [11562] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(972), 1,
      anon_sym_DQUOTE,
    ACTIONS(974), 1,
      anon_sym_SQUOTE,
    ACTIONS(1020), 1,
      sym_expr,
    ACTIONS(1022), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(468), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [11587] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1024), 1,
      sym_path,
    STATE(312), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(995), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [11608] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(400), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [11625] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1026), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [11642] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1028), 1,
      sym_path,
    ACTIONS(1031), 1,
      anon_sym_PLUS,
    ACTIONS(1034), 1,
      anon_sym_LPAREN,
    STATE(323), 1,
      aux_sym_copy_command_repeat2,
    STATE(555), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(528), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [11669] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1037), 1,
      sym_path,
    STATE(344), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(995), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [11690] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1039), 1,
      sym_path,
    STATE(329), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(995), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [11711] = 4,
    STATE(158), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(962), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(1041), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11730] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(400), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [11747] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(972), 1,
      anon_sym_DQUOTE,
    ACTIONS(974), 1,
      anon_sym_SQUOTE,
    ACTIONS(1043), 1,
      sym_expr,
    ACTIONS(1045), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(455), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [11772] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1047), 1,
      sym_path,
    STATE(312), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(995), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [11793] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(800), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [11810] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1049), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [11827] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1051), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [11844] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(396), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [11861] = 4,
    STATE(132), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(962), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(1053), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11880] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1055), 1,
      sym_path,
    STATE(312), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(995), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [11901] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1057), 1,
      sym_path,
    STATE(335), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(995), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [11922] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1059), 1,
      ts_builtin_sym_end,
    ACTIONS(1063), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1061), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [11943] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(358), 1,
      anon_sym_PLUS,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    ACTIONS(1065), 1,
      sym_path,
    STATE(323), 1,
      aux_sym_copy_command_repeat2,
    STATE(555), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(528), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [11970] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(358), 1,
      anon_sym_PLUS,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    ACTIONS(1067), 1,
      sym_path,
    STATE(323), 1,
      aux_sym_copy_command_repeat2,
    STATE(555), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(528), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [11997] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(972), 1,
      anon_sym_DQUOTE,
    ACTIONS(974), 1,
      anon_sym_SQUOTE,
    ACTIONS(1069), 1,
      sym_expr,
    ACTIONS(1071), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(479), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12022] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(972), 1,
      anon_sym_DQUOTE,
    ACTIONS(974), 1,
      anon_sym_SQUOTE,
    ACTIONS(1073), 1,
      sym_expr,
    ACTIONS(1075), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(410), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12047] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(299), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12066] = 4,
    STATE(303), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1077), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(1079), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12085] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1081), 1,
      sym_path,
    STATE(312), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(995), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [12106] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1083), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1085), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12124] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1087), 1,
      anon_sym_DQUOTE,
    ACTIONS(1089), 1,
      anon_sym_SQUOTE,
    ACTIONS(1091), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(179), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12146] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1093), 1,
      anon_sym_DQUOTE,
    ACTIONS(1095), 1,
      anon_sym_SQUOTE,
    ACTIONS(1097), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(385), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12168] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(529), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(531), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12186] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1093), 1,
      anon_sym_DQUOTE,
    ACTIONS(1095), 1,
      anon_sym_SQUOTE,
    ACTIONS(1099), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(384), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12208] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1101), 1,
      anon_sym_DQUOTE,
    ACTIONS(1103), 1,
      anon_sym_SQUOTE,
    ACTIONS(1105), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(291), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12230] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1107), 6,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      sym_ssh,
  [12246] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1109), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1111), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [12264] = 4,
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
  [12282] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(465), 1,
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
  [12300] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1113), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1115), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12318] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1117), 1,
      anon_sym_DQUOTE,
    ACTIONS(1119), 1,
      anon_sym_SQUOTE,
    ACTIONS(1121), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(330), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12340] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(972), 1,
      anon_sym_DQUOTE,
    ACTIONS(974), 1,
      anon_sym_SQUOTE,
    ACTIONS(1123), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(514), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12362] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(972), 1,
      anon_sym_DQUOTE,
    ACTIONS(974), 1,
      anon_sym_SQUOTE,
    ACTIONS(1125), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(482), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12384] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1127), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1129), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12402] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1131), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1133), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12420] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1135), 1,
      anon_sym_PLUS,
    ACTIONS(1140), 1,
      anon_sym_DASH_DASHplatform,
    STATE(361), 1,
      aux_sym_from_command_repeat1,
    STATE(426), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1137), 2,
      sym_allow_privileged,
      sym_pass_args,
  [12444] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1143), 1,
      anon_sym_DQUOTE,
    ACTIONS(1145), 1,
      anon_sym_SQUOTE,
    ACTIONS(1147), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(245), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12466] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1149), 1,
      anon_sym_DQUOTE,
    ACTIONS(1151), 1,
      anon_sym_SQUOTE,
    ACTIONS(1153), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(292), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12488] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1143), 1,
      anon_sym_DQUOTE,
    ACTIONS(1145), 1,
      anon_sym_SQUOTE,
    ACTIONS(1155), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(246), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12510] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1157), 1,
      anon_sym_DQUOTE,
    ACTIONS(1159), 1,
      anon_sym_SQUOTE,
    ACTIONS(1161), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(259), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12532] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(491), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(493), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12550] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1157), 1,
      anon_sym_DQUOTE,
    ACTIONS(1159), 1,
      anon_sym_SQUOTE,
    ACTIONS(1163), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(258), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12572] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1149), 1,
      anon_sym_DQUOTE,
    ACTIONS(1151), 1,
      anon_sym_SQUOTE,
    ACTIONS(1165), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(309), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12594] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1167), 1,
      anon_sym_DQUOTE,
    ACTIONS(1169), 1,
      anon_sym_SQUOTE,
    ACTIONS(1171), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(149), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12616] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1117), 1,
      anon_sym_DQUOTE,
    ACTIONS(1119), 1,
      anon_sym_SQUOTE,
    ACTIONS(1173), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(332), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12638] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1175), 1,
      anon_sym_DQUOTE,
    ACTIONS(1177), 1,
      anon_sym_SQUOTE,
    ACTIONS(1179), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(72), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12660] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1181), 1,
      anon_sym_DQUOTE,
    ACTIONS(1183), 1,
      anon_sym_SQUOTE,
    ACTIONS(1185), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(88), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12682] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(354), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12700] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1149), 1,
      anon_sym_DQUOTE,
    ACTIONS(1151), 1,
      anon_sym_SQUOTE,
    ACTIONS(1187), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(311), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12722] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(533), 1,
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
  [12740] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(537), 1,
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
  [12758] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(972), 1,
      anon_sym_DQUOTE,
    ACTIONS(974), 1,
      anon_sym_SQUOTE,
    ACTIONS(1189), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(440), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12780] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1191), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1193), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12798] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(972), 1,
      anon_sym_DQUOTE,
    ACTIONS(974), 1,
      anon_sym_SQUOTE,
    ACTIONS(1195), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(436), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12820] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1197), 1,
      anon_sym_DQUOTE,
    ACTIONS(1199), 1,
      anon_sym_SQUOTE,
    ACTIONS(1201), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(81), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12842] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1143), 1,
      anon_sym_DQUOTE,
    ACTIONS(1145), 1,
      anon_sym_SQUOTE,
    ACTIONS(1203), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(240), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12864] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1205), 1,
      anon_sym_DQUOTE,
    ACTIONS(1207), 1,
      anon_sym_SQUOTE,
    ACTIONS(1209), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(86), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12886] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(703), 1,
      aux_sym_shell_fragment_token3,
    STATE(343), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(439), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(705), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [12907] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1211), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1213), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [12924] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(798), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(800), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [12941] = 4,
    ACTIONS(1215), 1,
      anon_sym_EQ,
    STATE(366), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1217), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12958] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1219), 1,
      sym_path,
    ACTIONS(1221), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1223), 1,
      sym_keep_ts,
    STATE(397), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(527), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12981] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1221), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1223), 1,
      sym_keep_ts,
    ACTIONS(1225), 1,
      sym_path,
    STATE(387), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(527), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13004] = 4,
    ACTIONS(1227), 1,
      anon_sym_EQ,
    STATE(354), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1229), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13021] = 4,
    ACTIONS(1231), 1,
      anon_sym_EQ,
    STATE(198), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1233), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13038] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(703), 1,
      aux_sym_shell_fragment_token3,
    STATE(343), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(515), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(705), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [13059] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(703), 1,
      aux_sym_shell_fragment_token3,
    STATE(343), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(505), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(705), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [13080] = 4,
    ACTIONS(1235), 1,
      anon_sym_EQ,
    STATE(94), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1237), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13097] = 4,
    ACTIONS(1239), 1,
      anon_sym_EQ,
    STATE(84), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1241), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13114] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(703), 1,
      aux_sym_shell_fragment_token3,
    STATE(343), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(464), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(705), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [13135] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1243), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1245), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [13152] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1247), 1,
      sym_path,
    ACTIONS(1249), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1252), 1,
      sym_keep_ts,
    STATE(397), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(527), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13175] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1221), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1223), 1,
      sym_keep_ts,
    ACTIONS(1255), 1,
      sym_path,
    STATE(397), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(527), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13198] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1221), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1223), 1,
      sym_keep_ts,
    ACTIONS(1257), 1,
      sym_path,
    STATE(398), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(527), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13221] = 4,
    ACTIONS(1259), 1,
      anon_sym_EQ,
    STATE(200), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1261), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13238] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(398), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(400), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [13255] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1263), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1265), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [13272] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1267), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1269), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [13289] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(394), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(396), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [13306] = 3,
    STATE(105), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1271), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13320] = 3,
    STATE(89), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1273), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13334] = 3,
    STATE(206), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1275), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13348] = 3,
    STATE(207), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1277), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13362] = 3,
    STATE(21), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1279), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13376] = 3,
    STATE(193), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1281), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13390] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1283), 1,
      anon_sym_END,
    ACTIONS(1285), 1,
      anon_sym_SAVEARTIFACT,
    STATE(413), 1,
      aux_sym_try_command_repeat1,
    STATE(534), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13410] = 3,
    STATE(208), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1287), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13424] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1289), 1,
      anon_sym_END,
    ACTIONS(1291), 1,
      anon_sym_SAVEARTIFACT,
    STATE(413), 1,
      aux_sym_try_command_repeat1,
    STATE(534), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13444] = 3,
    STATE(209), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1294), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13458] = 3,
    STATE(210), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1296), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13472] = 3,
    STATE(189), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1298), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13486] = 3,
    STATE(214), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1300), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13500] = 3,
    STATE(216), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1302), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13514] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(941), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1304), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(271), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [13532] = 3,
    STATE(446), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1306), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13546] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1308), 1,
      sym_identifier,
    STATE(444), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1310), 2,
      sym_global,
      sym_required,
  [13564] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1285), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1312), 1,
      anon_sym_END,
    STATE(411), 1,
      aux_sym_try_command_repeat1,
    STATE(534), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13584] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1285), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1314), 1,
      anon_sym_END,
    STATE(413), 1,
      aux_sym_try_command_repeat1,
    STATE(534), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13604] = 3,
    STATE(450), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1316), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13618] = 3,
    STATE(219), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1318), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13632] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1320), 4,
      anon_sym_PLUS,
      sym_allow_privileged,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
  [13646] = 3,
    STATE(203), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1322), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13660] = 3,
    STATE(188), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1324), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13674] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(941), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1326), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(271), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [13692] = 3,
    STATE(222), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1328), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13706] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(941), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1330), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(419), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [13724] = 3,
    STATE(199), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1332), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13738] = 3,
    STATE(360), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1334), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13752] = 3,
    STATE(422), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1336), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13766] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1285), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1338), 1,
      anon_sym_END,
    STATE(423), 1,
      aux_sym_try_command_repeat1,
    STATE(534), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13786] = 3,
    STATE(195), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1340), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13800] = 3,
    STATE(337), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1342), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13814] = 3,
    STATE(192), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1344), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13828] = 3,
    STATE(224), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1346), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13842] = 3,
    STATE(223), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1348), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13856] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1350), 1,
      anon_sym_END,
    ACTIONS(1352), 1,
      anon_sym_ELSEIF,
    ACTIONS(1355), 1,
      anon_sym_ELSE,
    STATE(441), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13876] = 3,
    STATE(196), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1357), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13890] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1359), 1,
      sym_identifier,
    STATE(475), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1310), 2,
      sym_global,
      sym_required,
  [13908] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1361), 1,
      sym_identifier,
    STATE(444), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1363), 2,
      sym_global,
      sym_required,
  [13926] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1285), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1366), 1,
      anon_sym_END,
    STATE(413), 1,
      aux_sym_try_command_repeat1,
    STATE(534), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13946] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1285), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1368), 1,
      anon_sym_END,
    STATE(445), 1,
      aux_sym_try_command_repeat1,
    STATE(534), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13966] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1285), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1370), 1,
      anon_sym_END,
    STATE(413), 1,
      aux_sym_try_command_repeat1,
    STATE(534), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13986] = 3,
    STATE(355), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1372), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14000] = 3,
    STATE(225), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1374), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14014] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1285), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1376), 1,
      anon_sym_END,
    STATE(447), 1,
      aux_sym_try_command_repeat1,
    STATE(534), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14034] = 3,
    STATE(353), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1378), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14048] = 3,
    STATE(221), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1380), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14062] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1382), 1,
      anon_sym_END,
    ACTIONS(1384), 1,
      anon_sym_ELSEIF,
    ACTIONS(1386), 1,
      anon_sym_ELSE,
    STATE(441), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14082] = 3,
    STATE(227), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1388), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14096] = 3,
    STATE(348), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1390), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14110] = 3,
    STATE(194), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1392), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14124] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(443), 1,
      anon_sym_END,
    ACTIONS(445), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(447), 1,
      anon_sym_ASLOCAL,
    ACTIONS(449), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14144] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(435), 1,
      anon_sym_END,
    ACTIONS(437), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(439), 1,
      anon_sym_ASLOCAL,
    ACTIONS(441), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14164] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1384), 1,
      anon_sym_ELSEIF,
    ACTIONS(1394), 1,
      anon_sym_END,
    ACTIONS(1396), 1,
      anon_sym_ELSE,
    STATE(453), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14184] = 3,
    STATE(213), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1398), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14198] = 3,
    STATE(435), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1400), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14212] = 3,
    STATE(375), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1402), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14226] = 3,
    STATE(230), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1404), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14240] = 3,
    STATE(228), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1406), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14254] = 3,
    STATE(2), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1408), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14268] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1384), 1,
      anon_sym_ELSEIF,
    ACTIONS(1410), 1,
      anon_sym_END,
    ACTIONS(1412), 1,
      anon_sym_ELSE,
    STATE(441), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14288] = 3,
    STATE(218), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1414), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14302] = 3,
    STATE(376), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1416), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14316] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1418), 1,
      sym_identifier,
    STATE(485), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1310), 2,
      sym_global,
      sym_required,
  [14334] = 3,
    STATE(17), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1420), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14348] = 3,
    STATE(212), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1422), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14362] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1424), 1,
      sym_identifier,
    STATE(421), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1310), 2,
      sym_global,
      sym_required,
  [14380] = 3,
    STATE(359), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1426), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14394] = 3,
    STATE(205), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1428), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14408] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1430), 1,
      sym_identifier,
    STATE(444), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1310), 2,
      sym_global,
      sym_required,
  [14426] = 3,
    STATE(204), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1432), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14440] = 3,
    STATE(108), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1434), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14454] = 3,
    STATE(107), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1436), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14468] = 3,
    STATE(191), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1438), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14482] = 3,
    STATE(104), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1440), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14496] = 3,
    STATE(90), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1442), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14510] = 3,
    STATE(126), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1444), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14524] = 3,
    STATE(215), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1446), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14538] = 3,
    STATE(125), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1448), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14552] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1450), 1,
      sym_identifier,
    STATE(444), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1310), 2,
      sym_global,
      sym_required,
  [14570] = 3,
    STATE(118), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1452), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14584] = 3,
    STATE(117), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1454), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14598] = 3,
    STATE(211), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1456), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14612] = 3,
    STATE(115), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1458), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14626] = 3,
    STATE(91), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1460), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14640] = 3,
    STATE(111), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1462), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14654] = 3,
    STATE(110), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1464), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14668] = 3,
    STATE(109), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1466), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14682] = 3,
    STATE(102), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1468), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14696] = 3,
    STATE(101), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1470), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14710] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1384), 1,
      anon_sym_ELSEIF,
    ACTIONS(1472), 1,
      anon_sym_END,
    ACTIONS(1474), 1,
      anon_sym_ELSE,
    STATE(466), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14730] = 3,
    STATE(4), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1476), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14744] = 3,
    STATE(121), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1478), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14758] = 3,
    STATE(123), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1480), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14772] = 3,
    STATE(131), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1482), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14786] = 3,
    STATE(100), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1484), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14800] = 3,
    STATE(97), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1486), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14814] = 3,
    STATE(133), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1488), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14828] = 3,
    STATE(134), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1490), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14842] = 3,
    STATE(146), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1492), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14856] = 3,
    STATE(147), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1494), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14870] = 3,
    STATE(95), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1496), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14884] = 3,
    STATE(96), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1498), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14898] = 3,
    STATE(151), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1500), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14912] = 3,
    STATE(155), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1502), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14926] = 3,
    STATE(217), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1504), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14940] = 3,
    STATE(152), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1506), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14954] = 3,
    STATE(150), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1508), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14968] = 3,
    STATE(139), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1510), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14982] = 3,
    STATE(138), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1512), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14996] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1514), 1,
      sym_version_major_minor,
    ACTIONS(1516), 1,
      sym_feature_flag,
    STATE(516), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15013] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(394), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15024] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1519), 1,
      sym_version_major_minor,
    ACTIONS(1521), 1,
      sym_feature_flag,
    STATE(523), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15041] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1523), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1525), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [15056] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1527), 1,
      anon_sym_PLUS,
    ACTIONS(1529), 1,
      anon_sym_LPAREN,
    STATE(300), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15073] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1531), 3,
      sym_identifier,
      sym_global,
      sym_required,
  [15086] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1533), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1535), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [15101] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1537), 1,
      sym_version_major_minor,
    ACTIONS(1539), 1,
      sym_feature_flag,
    STATE(516), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15118] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1543), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1541), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
  [15133] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1547), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1545), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
  [15148] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1549), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1551), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [15163] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1553), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1555), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [15178] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(962), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1557), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [15193] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1559), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1561), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [15208] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(398), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15219] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(941), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(429), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [15234] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(358), 1,
      anon_sym_PLUS,
    STATE(546), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15248] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(358), 1,
      anon_sym_PLUS,
    STATE(531), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15262] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1563), 2,
      anon_sym_END,
      anon_sym_SAVEARTIFACT,
  [15274] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1565), 1,
      sym_image_name,
    STATE(331), 1,
      sym_image_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15288] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1567), 1,
      sym_image_name,
    STATE(670), 1,
      sym_image_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15302] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1569), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15313] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1571), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15324] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1573), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15335] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1575), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15346] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1577), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15357] = 2,
    ACTIONS(1579), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [15366] = 2,
    ACTIONS(1581), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [15375] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1583), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15386] = 2,
    ACTIONS(1585), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [15395] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1587), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15406] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1589), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15417] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1591), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15428] = 2,
    ACTIONS(1593), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [15437] = 2,
    ACTIONS(1595), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [15446] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1597), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15457] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1599), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15468] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1601), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15479] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1603), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15490] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1605), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15501] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1607), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15512] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1609), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15523] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1611), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15534] = 2,
    ACTIONS(1613), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [15543] = 2,
    ACTIONS(1615), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [15552] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1617), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15563] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1619), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15574] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1621), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15585] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1623), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15596] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1625), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15607] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1627), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15618] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1629), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15629] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1631), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15640] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1633), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15651] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1635), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15662] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1637), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15673] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1639), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15684] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1641), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15695] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1643), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15706] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1645), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15717] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1647), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15728] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1649), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15739] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1651), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15750] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1653), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15761] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1655), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15772] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1657), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15783] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1659), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15794] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1661), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15805] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1663), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15816] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1665), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15827] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1667), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15838] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1669), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15849] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1671), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15860] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1673), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15871] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1675), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15882] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1677), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15893] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1679), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15904] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1681), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15915] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1683), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15926] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1685), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15937] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1687), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15948] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1689), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15959] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1691), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15970] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1693), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15981] = 2,
    ACTIONS(1695), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [15990] = 2,
    ACTIONS(1697), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [15999] = 2,
    ACTIONS(1699), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16008] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1701), 1,
      anon_sym_CLONE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16019] = 2,
    ACTIONS(1703), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16028] = 2,
    ACTIONS(1705), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16037] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1707), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16048] = 2,
    ACTIONS(1709), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16057] = 2,
    ACTIONS(1711), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16066] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1713), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16077] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1715), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16088] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1717), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16099] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1719), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16110] = 2,
    ACTIONS(1721), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16119] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1723), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16130] = 2,
    ACTIONS(1725), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16139] = 2,
    ACTIONS(1727), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16148] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1729), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16159] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1731), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16170] = 2,
    ACTIONS(1733), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16179] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1735), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16190] = 2,
    ACTIONS(1737), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16199] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1739), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16210] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1741), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16221] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1743), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16232] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1745), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16243] = 2,
    ACTIONS(1747), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16252] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1749), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16263] = 2,
    ACTIONS(1751), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16272] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1753), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16283] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1755), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16294] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1757), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16305] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1759), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16316] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1761), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16327] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1763), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16338] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1765), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16349] = 2,
    ACTIONS(1767), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16358] = 2,
    ACTIONS(1769), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16367] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1771), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16378] = 2,
    ACTIONS(1773), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16387] = 2,
    ACTIONS(1775), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16396] = 2,
    ACTIONS(1777), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16405] = 2,
    ACTIONS(1779), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16414] = 2,
    ACTIONS(1781), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16423] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1783), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16434] = 2,
    ACTIONS(1785), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16443] = 2,
    ACTIONS(1787), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16452] = 2,
    ACTIONS(1789), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16461] = 2,
    ACTIONS(1791), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16470] = 2,
    ACTIONS(1793), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16479] = 2,
    ACTIONS(1795), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16488] = 2,
    ACTIONS(1797), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16497] = 2,
    ACTIONS(1799), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16506] = 2,
    ACTIONS(1801), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16515] = 2,
    ACTIONS(1803), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16524] = 2,
    ACTIONS(1805), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16533] = 2,
    ACTIONS(1807), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16542] = 2,
    ACTIONS(1809), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16551] = 2,
    ACTIONS(1811), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16560] = 2,
    ACTIONS(1813), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16569] = 2,
    ACTIONS(1815), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16578] = 2,
    ACTIONS(1817), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16587] = 2,
    ACTIONS(1819), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16596] = 2,
    ACTIONS(1821), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16605] = 2,
    ACTIONS(1823), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16614] = 2,
    ACTIONS(1825), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16623] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1827), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16634] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1829), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16645] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1831), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16656] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1833), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16667] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1835), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16678] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1837), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16689] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1839), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16700] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1841), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16711] = 2,
    ACTIONS(1843), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16720] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1845), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16731] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1847), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16742] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1849), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16753] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1851), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16764] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1853), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16775] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1855), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16786] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1857), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16797] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1859), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16808] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1861), 1,
      anon_sym_CLONE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16819] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1863), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16830] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1865), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16841] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1867), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16852] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1869), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16863] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1871), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16874] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1873), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16885] = 2,
    ACTIONS(1875), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16894] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1877), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16905] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1879), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 78,
  [SMALL_STATE(4)] = 156,
  [SMALL_STATE(5)] = 234,
  [SMALL_STATE(6)] = 312,
  [SMALL_STATE(7)] = 390,
  [SMALL_STATE(8)] = 464,
  [SMALL_STATE(9)] = 538,
  [SMALL_STATE(10)] = 612,
  [SMALL_STATE(11)] = 686,
  [SMALL_STATE(12)] = 760,
  [SMALL_STATE(13)] = 834,
  [SMALL_STATE(14)] = 908,
  [SMALL_STATE(15)] = 982,
  [SMALL_STATE(16)] = 1056,
  [SMALL_STATE(17)] = 1130,
  [SMALL_STATE(18)] = 1204,
  [SMALL_STATE(19)] = 1278,
  [SMALL_STATE(20)] = 1352,
  [SMALL_STATE(21)] = 1426,
  [SMALL_STATE(22)] = 1500,
  [SMALL_STATE(23)] = 1574,
  [SMALL_STATE(24)] = 1648,
  [SMALL_STATE(25)] = 1722,
  [SMALL_STATE(26)] = 1796,
  [SMALL_STATE(27)] = 1870,
  [SMALL_STATE(28)] = 1944,
  [SMALL_STATE(29)] = 2018,
  [SMALL_STATE(30)] = 2092,
  [SMALL_STATE(31)] = 2166,
  [SMALL_STATE(32)] = 2240,
  [SMALL_STATE(33)] = 2314,
  [SMALL_STATE(34)] = 2388,
  [SMALL_STATE(35)] = 2462,
  [SMALL_STATE(36)] = 2536,
  [SMALL_STATE(37)] = 2610,
  [SMALL_STATE(38)] = 2684,
  [SMALL_STATE(39)] = 2758,
  [SMALL_STATE(40)] = 2832,
  [SMALL_STATE(41)] = 2906,
  [SMALL_STATE(42)] = 2949,
  [SMALL_STATE(43)] = 3001,
  [SMALL_STATE(44)] = 3041,
  [SMALL_STATE(45)] = 3090,
  [SMALL_STATE(46)] = 3127,
  [SMALL_STATE(47)] = 3164,
  [SMALL_STATE(48)] = 3214,
  [SMALL_STATE(49)] = 3264,
  [SMALL_STATE(50)] = 3314,
  [SMALL_STATE(51)] = 3357,
  [SMALL_STATE(52)] = 3404,
  [SMALL_STATE(53)] = 3451,
  [SMALL_STATE(54)] = 3498,
  [SMALL_STATE(55)] = 3536,
  [SMALL_STATE(56)] = 3574,
  [SMALL_STATE(57)] = 3612,
  [SMALL_STATE(58)] = 3650,
  [SMALL_STATE(59)] = 3688,
  [SMALL_STATE(60)] = 3741,
  [SMALL_STATE(61)] = 3794,
  [SMALL_STATE(62)] = 3835,
  [SMALL_STATE(63)] = 3868,
  [SMALL_STATE(64)] = 3909,
  [SMALL_STATE(65)] = 3946,
  [SMALL_STATE(66)] = 3999,
  [SMALL_STATE(67)] = 4052,
  [SMALL_STATE(68)] = 4089,
  [SMALL_STATE(69)] = 4122,
  [SMALL_STATE(70)] = 4155,
  [SMALL_STATE(71)] = 4192,
  [SMALL_STATE(72)] = 4223,
  [SMALL_STATE(73)] = 4256,
  [SMALL_STATE(74)] = 4293,
  [SMALL_STATE(75)] = 4334,
  [SMALL_STATE(76)] = 4368,
  [SMALL_STATE(77)] = 4402,
  [SMALL_STATE(78)] = 4434,
  [SMALL_STATE(79)] = 4466,
  [SMALL_STATE(80)] = 4502,
  [SMALL_STATE(81)] = 4538,
  [SMALL_STATE(82)] = 4570,
  [SMALL_STATE(83)] = 4604,
  [SMALL_STATE(84)] = 4636,
  [SMALL_STATE(85)] = 4667,
  [SMALL_STATE(86)] = 4702,
  [SMALL_STATE(87)] = 4733,
  [SMALL_STATE(88)] = 4768,
  [SMALL_STATE(89)] = 4799,
  [SMALL_STATE(90)] = 4830,
  [SMALL_STATE(91)] = 4861,
  [SMALL_STATE(92)] = 4892,
  [SMALL_STATE(93)] = 4927,
  [SMALL_STATE(94)] = 4958,
  [SMALL_STATE(95)] = 4989,
  [SMALL_STATE(96)] = 5020,
  [SMALL_STATE(97)] = 5051,
  [SMALL_STATE(98)] = 5082,
  [SMALL_STATE(99)] = 5117,
  [SMALL_STATE(100)] = 5152,
  [SMALL_STATE(101)] = 5183,
  [SMALL_STATE(102)] = 5214,
  [SMALL_STATE(103)] = 5245,
  [SMALL_STATE(104)] = 5280,
  [SMALL_STATE(105)] = 5311,
  [SMALL_STATE(106)] = 5342,
  [SMALL_STATE(107)] = 5377,
  [SMALL_STATE(108)] = 5408,
  [SMALL_STATE(109)] = 5439,
  [SMALL_STATE(110)] = 5470,
  [SMALL_STATE(111)] = 5501,
  [SMALL_STATE(112)] = 5532,
  [SMALL_STATE(113)] = 5563,
  [SMALL_STATE(114)] = 5594,
  [SMALL_STATE(115)] = 5625,
  [SMALL_STATE(116)] = 5656,
  [SMALL_STATE(117)] = 5687,
  [SMALL_STATE(118)] = 5718,
  [SMALL_STATE(119)] = 5749,
  [SMALL_STATE(120)] = 5784,
  [SMALL_STATE(121)] = 5819,
  [SMALL_STATE(122)] = 5850,
  [SMALL_STATE(123)] = 5881,
  [SMALL_STATE(124)] = 5912,
  [SMALL_STATE(125)] = 5947,
  [SMALL_STATE(126)] = 5978,
  [SMALL_STATE(127)] = 6009,
  [SMALL_STATE(128)] = 6040,
  [SMALL_STATE(129)] = 6075,
  [SMALL_STATE(130)] = 6110,
  [SMALL_STATE(131)] = 6145,
  [SMALL_STATE(132)] = 6176,
  [SMALL_STATE(133)] = 6207,
  [SMALL_STATE(134)] = 6238,
  [SMALL_STATE(135)] = 6269,
  [SMALL_STATE(136)] = 6300,
  [SMALL_STATE(137)] = 6331,
  [SMALL_STATE(138)] = 6362,
  [SMALL_STATE(139)] = 6393,
  [SMALL_STATE(140)] = 6424,
  [SMALL_STATE(141)] = 6455,
  [SMALL_STATE(142)] = 6486,
  [SMALL_STATE(143)] = 6517,
  [SMALL_STATE(144)] = 6548,
  [SMALL_STATE(145)] = 6579,
  [SMALL_STATE(146)] = 6610,
  [SMALL_STATE(147)] = 6641,
  [SMALL_STATE(148)] = 6672,
  [SMALL_STATE(149)] = 6703,
  [SMALL_STATE(150)] = 6734,
  [SMALL_STATE(151)] = 6765,
  [SMALL_STATE(152)] = 6796,
  [SMALL_STATE(153)] = 6827,
  [SMALL_STATE(154)] = 6862,
  [SMALL_STATE(155)] = 6897,
  [SMALL_STATE(156)] = 6928,
  [SMALL_STATE(157)] = 6963,
  [SMALL_STATE(158)] = 6998,
  [SMALL_STATE(159)] = 7029,
  [SMALL_STATE(160)] = 7063,
  [SMALL_STATE(161)] = 7097,
  [SMALL_STATE(162)] = 7131,
  [SMALL_STATE(163)] = 7163,
  [SMALL_STATE(164)] = 7195,
  [SMALL_STATE(165)] = 7225,
  [SMALL_STATE(166)] = 7259,
  [SMALL_STATE(167)] = 7291,
  [SMALL_STATE(168)] = 7325,
  [SMALL_STATE(169)] = 7359,
  [SMALL_STATE(170)] = 7393,
  [SMALL_STATE(171)] = 7422,
  [SMALL_STATE(172)] = 7463,
  [SMALL_STATE(173)] = 7508,
  [SMALL_STATE(174)] = 7553,
  [SMALL_STATE(175)] = 7582,
  [SMALL_STATE(176)] = 7627,
  [SMALL_STATE(177)] = 7656,
  [SMALL_STATE(178)] = 7685,
  [SMALL_STATE(179)] = 7714,
  [SMALL_STATE(180)] = 7743,
  [SMALL_STATE(181)] = 7772,
  [SMALL_STATE(182)] = 7817,
  [SMALL_STATE(183)] = 7848,
  [SMALL_STATE(184)] = 7877,
  [SMALL_STATE(185)] = 7908,
  [SMALL_STATE(186)] = 7937,
  [SMALL_STATE(187)] = 7968,
  [SMALL_STATE(188)] = 7997,
  [SMALL_STATE(189)] = 8025,
  [SMALL_STATE(190)] = 8053,
  [SMALL_STATE(191)] = 8081,
  [SMALL_STATE(192)] = 8109,
  [SMALL_STATE(193)] = 8137,
  [SMALL_STATE(194)] = 8165,
  [SMALL_STATE(195)] = 8193,
  [SMALL_STATE(196)] = 8221,
  [SMALL_STATE(197)] = 8249,
  [SMALL_STATE(198)] = 8277,
  [SMALL_STATE(199)] = 8305,
  [SMALL_STATE(200)] = 8333,
  [SMALL_STATE(201)] = 8361,
  [SMALL_STATE(202)] = 8389,
  [SMALL_STATE(203)] = 8417,
  [SMALL_STATE(204)] = 8445,
  [SMALL_STATE(205)] = 8473,
  [SMALL_STATE(206)] = 8501,
  [SMALL_STATE(207)] = 8529,
  [SMALL_STATE(208)] = 8557,
  [SMALL_STATE(209)] = 8585,
  [SMALL_STATE(210)] = 8613,
  [SMALL_STATE(211)] = 8641,
  [SMALL_STATE(212)] = 8669,
  [SMALL_STATE(213)] = 8697,
  [SMALL_STATE(214)] = 8725,
  [SMALL_STATE(215)] = 8753,
  [SMALL_STATE(216)] = 8781,
  [SMALL_STATE(217)] = 8809,
  [SMALL_STATE(218)] = 8837,
  [SMALL_STATE(219)] = 8865,
  [SMALL_STATE(220)] = 8893,
  [SMALL_STATE(221)] = 8921,
  [SMALL_STATE(222)] = 8949,
  [SMALL_STATE(223)] = 8977,
  [SMALL_STATE(224)] = 9005,
  [SMALL_STATE(225)] = 9033,
  [SMALL_STATE(226)] = 9061,
  [SMALL_STATE(227)] = 9089,
  [SMALL_STATE(228)] = 9117,
  [SMALL_STATE(229)] = 9145,
  [SMALL_STATE(230)] = 9173,
  [SMALL_STATE(231)] = 9201,
  [SMALL_STATE(232)] = 9229,
  [SMALL_STATE(233)] = 9257,
  [SMALL_STATE(234)] = 9285,
  [SMALL_STATE(235)] = 9322,
  [SMALL_STATE(236)] = 9364,
  [SMALL_STATE(237)] = 9406,
  [SMALL_STATE(238)] = 9448,
  [SMALL_STATE(239)] = 9490,
  [SMALL_STATE(240)] = 9527,
  [SMALL_STATE(241)] = 9552,
  [SMALL_STATE(242)] = 9589,
  [SMALL_STATE(243)] = 9628,
  [SMALL_STATE(244)] = 9653,
  [SMALL_STATE(245)] = 9678,
  [SMALL_STATE(246)] = 9703,
  [SMALL_STATE(247)] = 9728,
  [SMALL_STATE(248)] = 9753,
  [SMALL_STATE(249)] = 9790,
  [SMALL_STATE(250)] = 9822,
  [SMALL_STATE(251)] = 9846,
  [SMALL_STATE(252)] = 9870,
  [SMALL_STATE(253)] = 9894,
  [SMALL_STATE(254)] = 9928,
  [SMALL_STATE(255)] = 9960,
  [SMALL_STATE(256)] = 9992,
  [SMALL_STATE(257)] = 10024,
  [SMALL_STATE(258)] = 10058,
  [SMALL_STATE(259)] = 10082,
  [SMALL_STATE(260)] = 10106,
  [SMALL_STATE(261)] = 10138,
  [SMALL_STATE(262)] = 10170,
  [SMALL_STATE(263)] = 10202,
  [SMALL_STATE(264)] = 10234,
  [SMALL_STATE(265)] = 10267,
  [SMALL_STATE(266)] = 10296,
  [SMALL_STATE(267)] = 10329,
  [SMALL_STATE(268)] = 10362,
  [SMALL_STATE(269)] = 10395,
  [SMALL_STATE(270)] = 10430,
  [SMALL_STATE(271)] = 10463,
  [SMALL_STATE(272)] = 10489,
  [SMALL_STATE(273)] = 10521,
  [SMALL_STATE(274)] = 10553,
  [SMALL_STATE(275)] = 10585,
  [SMALL_STATE(276)] = 10617,
  [SMALL_STATE(277)] = 10649,
  [SMALL_STATE(278)] = 10681,
  [SMALL_STATE(279)] = 10713,
  [SMALL_STATE(280)] = 10742,
  [SMALL_STATE(281)] = 10767,
  [SMALL_STATE(282)] = 10788,
  [SMALL_STATE(283)] = 10817,
  [SMALL_STATE(284)] = 10842,
  [SMALL_STATE(285)] = 10867,
  [SMALL_STATE(286)] = 10892,
  [SMALL_STATE(287)] = 10917,
  [SMALL_STATE(288)] = 10937,
  [SMALL_STATE(289)] = 10957,
  [SMALL_STATE(290)] = 10979,
  [SMALL_STATE(291)] = 10999,
  [SMALL_STATE(292)] = 11019,
  [SMALL_STATE(293)] = 11036,
  [SMALL_STATE(294)] = 11055,
  [SMALL_STATE(295)] = 11070,
  [SMALL_STATE(296)] = 11097,
  [SMALL_STATE(297)] = 11122,
  [SMALL_STATE(298)] = 11149,
  [SMALL_STATE(299)] = 11166,
  [SMALL_STATE(300)] = 11191,
  [SMALL_STATE(301)] = 11208,
  [SMALL_STATE(302)] = 11235,
  [SMALL_STATE(303)] = 11252,
  [SMALL_STATE(304)] = 11271,
  [SMALL_STATE(305)] = 11292,
  [SMALL_STATE(306)] = 11313,
  [SMALL_STATE(307)] = 11332,
  [SMALL_STATE(308)] = 11351,
  [SMALL_STATE(309)] = 11378,
  [SMALL_STATE(310)] = 11395,
  [SMALL_STATE(311)] = 11410,
  [SMALL_STATE(312)] = 11427,
  [SMALL_STATE(313)] = 11448,
  [SMALL_STATE(314)] = 11465,
  [SMALL_STATE(315)] = 11482,
  [SMALL_STATE(316)] = 11499,
  [SMALL_STATE(317)] = 11526,
  [SMALL_STATE(318)] = 11541,
  [SMALL_STATE(319)] = 11562,
  [SMALL_STATE(320)] = 11587,
  [SMALL_STATE(321)] = 11608,
  [SMALL_STATE(322)] = 11625,
  [SMALL_STATE(323)] = 11642,
  [SMALL_STATE(324)] = 11669,
  [SMALL_STATE(325)] = 11690,
  [SMALL_STATE(326)] = 11711,
  [SMALL_STATE(327)] = 11730,
  [SMALL_STATE(328)] = 11747,
  [SMALL_STATE(329)] = 11772,
  [SMALL_STATE(330)] = 11793,
  [SMALL_STATE(331)] = 11810,
  [SMALL_STATE(332)] = 11827,
  [SMALL_STATE(333)] = 11844,
  [SMALL_STATE(334)] = 11861,
  [SMALL_STATE(335)] = 11880,
  [SMALL_STATE(336)] = 11901,
  [SMALL_STATE(337)] = 11922,
  [SMALL_STATE(338)] = 11943,
  [SMALL_STATE(339)] = 11970,
  [SMALL_STATE(340)] = 11997,
  [SMALL_STATE(341)] = 12022,
  [SMALL_STATE(342)] = 12047,
  [SMALL_STATE(343)] = 12066,
  [SMALL_STATE(344)] = 12085,
  [SMALL_STATE(345)] = 12106,
  [SMALL_STATE(346)] = 12124,
  [SMALL_STATE(347)] = 12146,
  [SMALL_STATE(348)] = 12168,
  [SMALL_STATE(349)] = 12186,
  [SMALL_STATE(350)] = 12208,
  [SMALL_STATE(351)] = 12230,
  [SMALL_STATE(352)] = 12246,
  [SMALL_STATE(353)] = 12264,
  [SMALL_STATE(354)] = 12282,
  [SMALL_STATE(355)] = 12300,
  [SMALL_STATE(356)] = 12318,
  [SMALL_STATE(357)] = 12340,
  [SMALL_STATE(358)] = 12362,
  [SMALL_STATE(359)] = 12384,
  [SMALL_STATE(360)] = 12402,
  [SMALL_STATE(361)] = 12420,
  [SMALL_STATE(362)] = 12444,
  [SMALL_STATE(363)] = 12466,
  [SMALL_STATE(364)] = 12488,
  [SMALL_STATE(365)] = 12510,
  [SMALL_STATE(366)] = 12532,
  [SMALL_STATE(367)] = 12550,
  [SMALL_STATE(368)] = 12572,
  [SMALL_STATE(369)] = 12594,
  [SMALL_STATE(370)] = 12616,
  [SMALL_STATE(371)] = 12638,
  [SMALL_STATE(372)] = 12660,
  [SMALL_STATE(373)] = 12682,
  [SMALL_STATE(374)] = 12700,
  [SMALL_STATE(375)] = 12722,
  [SMALL_STATE(376)] = 12740,
  [SMALL_STATE(377)] = 12758,
  [SMALL_STATE(378)] = 12780,
  [SMALL_STATE(379)] = 12798,
  [SMALL_STATE(380)] = 12820,
  [SMALL_STATE(381)] = 12842,
  [SMALL_STATE(382)] = 12864,
  [SMALL_STATE(383)] = 12886,
  [SMALL_STATE(384)] = 12907,
  [SMALL_STATE(385)] = 12924,
  [SMALL_STATE(386)] = 12941,
  [SMALL_STATE(387)] = 12958,
  [SMALL_STATE(388)] = 12981,
  [SMALL_STATE(389)] = 13004,
  [SMALL_STATE(390)] = 13021,
  [SMALL_STATE(391)] = 13038,
  [SMALL_STATE(392)] = 13059,
  [SMALL_STATE(393)] = 13080,
  [SMALL_STATE(394)] = 13097,
  [SMALL_STATE(395)] = 13114,
  [SMALL_STATE(396)] = 13135,
  [SMALL_STATE(397)] = 13152,
  [SMALL_STATE(398)] = 13175,
  [SMALL_STATE(399)] = 13198,
  [SMALL_STATE(400)] = 13221,
  [SMALL_STATE(401)] = 13238,
  [SMALL_STATE(402)] = 13255,
  [SMALL_STATE(403)] = 13272,
  [SMALL_STATE(404)] = 13289,
  [SMALL_STATE(405)] = 13306,
  [SMALL_STATE(406)] = 13320,
  [SMALL_STATE(407)] = 13334,
  [SMALL_STATE(408)] = 13348,
  [SMALL_STATE(409)] = 13362,
  [SMALL_STATE(410)] = 13376,
  [SMALL_STATE(411)] = 13390,
  [SMALL_STATE(412)] = 13410,
  [SMALL_STATE(413)] = 13424,
  [SMALL_STATE(414)] = 13444,
  [SMALL_STATE(415)] = 13458,
  [SMALL_STATE(416)] = 13472,
  [SMALL_STATE(417)] = 13486,
  [SMALL_STATE(418)] = 13500,
  [SMALL_STATE(419)] = 13514,
  [SMALL_STATE(420)] = 13532,
  [SMALL_STATE(421)] = 13546,
  [SMALL_STATE(422)] = 13564,
  [SMALL_STATE(423)] = 13584,
  [SMALL_STATE(424)] = 13604,
  [SMALL_STATE(425)] = 13618,
  [SMALL_STATE(426)] = 13632,
  [SMALL_STATE(427)] = 13646,
  [SMALL_STATE(428)] = 13660,
  [SMALL_STATE(429)] = 13674,
  [SMALL_STATE(430)] = 13692,
  [SMALL_STATE(431)] = 13706,
  [SMALL_STATE(432)] = 13724,
  [SMALL_STATE(433)] = 13738,
  [SMALL_STATE(434)] = 13752,
  [SMALL_STATE(435)] = 13766,
  [SMALL_STATE(436)] = 13786,
  [SMALL_STATE(437)] = 13800,
  [SMALL_STATE(438)] = 13814,
  [SMALL_STATE(439)] = 13828,
  [SMALL_STATE(440)] = 13842,
  [SMALL_STATE(441)] = 13856,
  [SMALL_STATE(442)] = 13876,
  [SMALL_STATE(443)] = 13890,
  [SMALL_STATE(444)] = 13908,
  [SMALL_STATE(445)] = 13926,
  [SMALL_STATE(446)] = 13946,
  [SMALL_STATE(447)] = 13966,
  [SMALL_STATE(448)] = 13986,
  [SMALL_STATE(449)] = 14000,
  [SMALL_STATE(450)] = 14014,
  [SMALL_STATE(451)] = 14034,
  [SMALL_STATE(452)] = 14048,
  [SMALL_STATE(453)] = 14062,
  [SMALL_STATE(454)] = 14082,
  [SMALL_STATE(455)] = 14096,
  [SMALL_STATE(456)] = 14110,
  [SMALL_STATE(457)] = 14124,
  [SMALL_STATE(458)] = 14144,
  [SMALL_STATE(459)] = 14164,
  [SMALL_STATE(460)] = 14184,
  [SMALL_STATE(461)] = 14198,
  [SMALL_STATE(462)] = 14212,
  [SMALL_STATE(463)] = 14226,
  [SMALL_STATE(464)] = 14240,
  [SMALL_STATE(465)] = 14254,
  [SMALL_STATE(466)] = 14268,
  [SMALL_STATE(467)] = 14288,
  [SMALL_STATE(468)] = 14302,
  [SMALL_STATE(469)] = 14316,
  [SMALL_STATE(470)] = 14334,
  [SMALL_STATE(471)] = 14348,
  [SMALL_STATE(472)] = 14362,
  [SMALL_STATE(473)] = 14380,
  [SMALL_STATE(474)] = 14394,
  [SMALL_STATE(475)] = 14408,
  [SMALL_STATE(476)] = 14426,
  [SMALL_STATE(477)] = 14440,
  [SMALL_STATE(478)] = 14454,
  [SMALL_STATE(479)] = 14468,
  [SMALL_STATE(480)] = 14482,
  [SMALL_STATE(481)] = 14496,
  [SMALL_STATE(482)] = 14510,
  [SMALL_STATE(483)] = 14524,
  [SMALL_STATE(484)] = 14538,
  [SMALL_STATE(485)] = 14552,
  [SMALL_STATE(486)] = 14570,
  [SMALL_STATE(487)] = 14584,
  [SMALL_STATE(488)] = 14598,
  [SMALL_STATE(489)] = 14612,
  [SMALL_STATE(490)] = 14626,
  [SMALL_STATE(491)] = 14640,
  [SMALL_STATE(492)] = 14654,
  [SMALL_STATE(493)] = 14668,
  [SMALL_STATE(494)] = 14682,
  [SMALL_STATE(495)] = 14696,
  [SMALL_STATE(496)] = 14710,
  [SMALL_STATE(497)] = 14730,
  [SMALL_STATE(498)] = 14744,
  [SMALL_STATE(499)] = 14758,
  [SMALL_STATE(500)] = 14772,
  [SMALL_STATE(501)] = 14786,
  [SMALL_STATE(502)] = 14800,
  [SMALL_STATE(503)] = 14814,
  [SMALL_STATE(504)] = 14828,
  [SMALL_STATE(505)] = 14842,
  [SMALL_STATE(506)] = 14856,
  [SMALL_STATE(507)] = 14870,
  [SMALL_STATE(508)] = 14884,
  [SMALL_STATE(509)] = 14898,
  [SMALL_STATE(510)] = 14912,
  [SMALL_STATE(511)] = 14926,
  [SMALL_STATE(512)] = 14940,
  [SMALL_STATE(513)] = 14954,
  [SMALL_STATE(514)] = 14968,
  [SMALL_STATE(515)] = 14982,
  [SMALL_STATE(516)] = 14996,
  [SMALL_STATE(517)] = 15013,
  [SMALL_STATE(518)] = 15024,
  [SMALL_STATE(519)] = 15041,
  [SMALL_STATE(520)] = 15056,
  [SMALL_STATE(521)] = 15073,
  [SMALL_STATE(522)] = 15086,
  [SMALL_STATE(523)] = 15101,
  [SMALL_STATE(524)] = 15118,
  [SMALL_STATE(525)] = 15133,
  [SMALL_STATE(526)] = 15148,
  [SMALL_STATE(527)] = 15163,
  [SMALL_STATE(528)] = 15178,
  [SMALL_STATE(529)] = 15193,
  [SMALL_STATE(530)] = 15208,
  [SMALL_STATE(531)] = 15219,
  [SMALL_STATE(532)] = 15234,
  [SMALL_STATE(533)] = 15248,
  [SMALL_STATE(534)] = 15262,
  [SMALL_STATE(535)] = 15274,
  [SMALL_STATE(536)] = 15288,
  [SMALL_STATE(537)] = 15302,
  [SMALL_STATE(538)] = 15313,
  [SMALL_STATE(539)] = 15324,
  [SMALL_STATE(540)] = 15335,
  [SMALL_STATE(541)] = 15346,
  [SMALL_STATE(542)] = 15357,
  [SMALL_STATE(543)] = 15366,
  [SMALL_STATE(544)] = 15375,
  [SMALL_STATE(545)] = 15386,
  [SMALL_STATE(546)] = 15395,
  [SMALL_STATE(547)] = 15406,
  [SMALL_STATE(548)] = 15417,
  [SMALL_STATE(549)] = 15428,
  [SMALL_STATE(550)] = 15437,
  [SMALL_STATE(551)] = 15446,
  [SMALL_STATE(552)] = 15457,
  [SMALL_STATE(553)] = 15468,
  [SMALL_STATE(554)] = 15479,
  [SMALL_STATE(555)] = 15490,
  [SMALL_STATE(556)] = 15501,
  [SMALL_STATE(557)] = 15512,
  [SMALL_STATE(558)] = 15523,
  [SMALL_STATE(559)] = 15534,
  [SMALL_STATE(560)] = 15543,
  [SMALL_STATE(561)] = 15552,
  [SMALL_STATE(562)] = 15563,
  [SMALL_STATE(563)] = 15574,
  [SMALL_STATE(564)] = 15585,
  [SMALL_STATE(565)] = 15596,
  [SMALL_STATE(566)] = 15607,
  [SMALL_STATE(567)] = 15618,
  [SMALL_STATE(568)] = 15629,
  [SMALL_STATE(569)] = 15640,
  [SMALL_STATE(570)] = 15651,
  [SMALL_STATE(571)] = 15662,
  [SMALL_STATE(572)] = 15673,
  [SMALL_STATE(573)] = 15684,
  [SMALL_STATE(574)] = 15695,
  [SMALL_STATE(575)] = 15706,
  [SMALL_STATE(576)] = 15717,
  [SMALL_STATE(577)] = 15728,
  [SMALL_STATE(578)] = 15739,
  [SMALL_STATE(579)] = 15750,
  [SMALL_STATE(580)] = 15761,
  [SMALL_STATE(581)] = 15772,
  [SMALL_STATE(582)] = 15783,
  [SMALL_STATE(583)] = 15794,
  [SMALL_STATE(584)] = 15805,
  [SMALL_STATE(585)] = 15816,
  [SMALL_STATE(586)] = 15827,
  [SMALL_STATE(587)] = 15838,
  [SMALL_STATE(588)] = 15849,
  [SMALL_STATE(589)] = 15860,
  [SMALL_STATE(590)] = 15871,
  [SMALL_STATE(591)] = 15882,
  [SMALL_STATE(592)] = 15893,
  [SMALL_STATE(593)] = 15904,
  [SMALL_STATE(594)] = 15915,
  [SMALL_STATE(595)] = 15926,
  [SMALL_STATE(596)] = 15937,
  [SMALL_STATE(597)] = 15948,
  [SMALL_STATE(598)] = 15959,
  [SMALL_STATE(599)] = 15970,
  [SMALL_STATE(600)] = 15981,
  [SMALL_STATE(601)] = 15990,
  [SMALL_STATE(602)] = 15999,
  [SMALL_STATE(603)] = 16008,
  [SMALL_STATE(604)] = 16019,
  [SMALL_STATE(605)] = 16028,
  [SMALL_STATE(606)] = 16037,
  [SMALL_STATE(607)] = 16048,
  [SMALL_STATE(608)] = 16057,
  [SMALL_STATE(609)] = 16066,
  [SMALL_STATE(610)] = 16077,
  [SMALL_STATE(611)] = 16088,
  [SMALL_STATE(612)] = 16099,
  [SMALL_STATE(613)] = 16110,
  [SMALL_STATE(614)] = 16119,
  [SMALL_STATE(615)] = 16130,
  [SMALL_STATE(616)] = 16139,
  [SMALL_STATE(617)] = 16148,
  [SMALL_STATE(618)] = 16159,
  [SMALL_STATE(619)] = 16170,
  [SMALL_STATE(620)] = 16179,
  [SMALL_STATE(621)] = 16190,
  [SMALL_STATE(622)] = 16199,
  [SMALL_STATE(623)] = 16210,
  [SMALL_STATE(624)] = 16221,
  [SMALL_STATE(625)] = 16232,
  [SMALL_STATE(626)] = 16243,
  [SMALL_STATE(627)] = 16252,
  [SMALL_STATE(628)] = 16263,
  [SMALL_STATE(629)] = 16272,
  [SMALL_STATE(630)] = 16283,
  [SMALL_STATE(631)] = 16294,
  [SMALL_STATE(632)] = 16305,
  [SMALL_STATE(633)] = 16316,
  [SMALL_STATE(634)] = 16327,
  [SMALL_STATE(635)] = 16338,
  [SMALL_STATE(636)] = 16349,
  [SMALL_STATE(637)] = 16358,
  [SMALL_STATE(638)] = 16367,
  [SMALL_STATE(639)] = 16378,
  [SMALL_STATE(640)] = 16387,
  [SMALL_STATE(641)] = 16396,
  [SMALL_STATE(642)] = 16405,
  [SMALL_STATE(643)] = 16414,
  [SMALL_STATE(644)] = 16423,
  [SMALL_STATE(645)] = 16434,
  [SMALL_STATE(646)] = 16443,
  [SMALL_STATE(647)] = 16452,
  [SMALL_STATE(648)] = 16461,
  [SMALL_STATE(649)] = 16470,
  [SMALL_STATE(650)] = 16479,
  [SMALL_STATE(651)] = 16488,
  [SMALL_STATE(652)] = 16497,
  [SMALL_STATE(653)] = 16506,
  [SMALL_STATE(654)] = 16515,
  [SMALL_STATE(655)] = 16524,
  [SMALL_STATE(656)] = 16533,
  [SMALL_STATE(657)] = 16542,
  [SMALL_STATE(658)] = 16551,
  [SMALL_STATE(659)] = 16560,
  [SMALL_STATE(660)] = 16569,
  [SMALL_STATE(661)] = 16578,
  [SMALL_STATE(662)] = 16587,
  [SMALL_STATE(663)] = 16596,
  [SMALL_STATE(664)] = 16605,
  [SMALL_STATE(665)] = 16614,
  [SMALL_STATE(666)] = 16623,
  [SMALL_STATE(667)] = 16634,
  [SMALL_STATE(668)] = 16645,
  [SMALL_STATE(669)] = 16656,
  [SMALL_STATE(670)] = 16667,
  [SMALL_STATE(671)] = 16678,
  [SMALL_STATE(672)] = 16689,
  [SMALL_STATE(673)] = 16700,
  [SMALL_STATE(674)] = 16711,
  [SMALL_STATE(675)] = 16720,
  [SMALL_STATE(676)] = 16731,
  [SMALL_STATE(677)] = 16742,
  [SMALL_STATE(678)] = 16753,
  [SMALL_STATE(679)] = 16764,
  [SMALL_STATE(680)] = 16775,
  [SMALL_STATE(681)] = 16786,
  [SMALL_STATE(682)] = 16797,
  [SMALL_STATE(683)] = 16808,
  [SMALL_STATE(684)] = 16819,
  [SMALL_STATE(685)] = 16830,
  [SMALL_STATE(686)] = 16841,
  [SMALL_STATE(687)] = 16852,
  [SMALL_STATE(688)] = 16863,
  [SMALL_STATE(689)] = 16874,
  [SMALL_STATE(690)] = 16885,
  [SMALL_STATE(691)] = 16894,
  [SMALL_STATE(692)] = 16905,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(692),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 3, .production_id = 35),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 3, .production_id = 35),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 4, .production_id = 35),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 4, .production_id = 35),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 2, .production_id = 24),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 2, .production_id = 24),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(443),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(239),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(59),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(266),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_block, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(275),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(683),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(278),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__target_block, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(684),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(173),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(318),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(42),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(685),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(409),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(10),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(237),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 3, .production_id = 24),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 3, .production_id = 24),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(336),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(47),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 1),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(304),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(49),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(469),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(248),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(66),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(268),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(272),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(603),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(277),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(574),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(181),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(324),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(48),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(573),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(470),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(20),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(236),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2, .production_id = 5),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2, .production_id = 5),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 5, .production_id = 17),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 5, .production_id = 17),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(645),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(62),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(554),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 2),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 2),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(642),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(113),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(628),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(116),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 3, .production_id = 5),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3, .production_id = 5),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(73),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(690),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(122),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 39),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 39),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 27),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 27),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 2, .production_id = 20),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 2, .production_id = 20),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 4, .production_id = 18),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 4, .production_id = 18),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 26),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 26),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 57),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 57),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 8, .production_id = 58),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 8, .production_id = 58),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 9, .production_id = 57),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 9, .production_id = 57),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 54),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 54),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 7),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 7),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 7),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 7),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(85),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 7, .production_id = 56),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 7, .production_id = 56),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 7, .production_id = 55),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 7, .production_id = 55),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 7),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 7),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(680),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 54),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 54),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 3),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 6),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 6),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 6, .production_id = 51),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 6, .production_id = 51),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2, .production_id = 21),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2, .production_id = 21),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 6, .production_id = 50),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 6, .production_id = 50),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 6, .production_id = 49),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_git_clone_command, 6, .production_id = 49),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 6, .production_id = 3),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 6, .production_id = 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_dockerfile_command, 3, .production_id = 23),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_dockerfile_command, 3, .production_id = 23),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 3, .production_id = 25),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 3, .production_id = 25),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_docker_command, 5, .production_id = 5),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_docker_command, 5, .production_id = 5),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_command, 5, .production_id = 18),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_command, 5, .production_id = 18),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 46),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 5, .production_id = 46),
  [593] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(153),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait_command, 3),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wait_command, 3),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 4, .production_id = 28),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_command, 4, .production_id = 28),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_dockerfile_command, 4, .production_id = 30),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_dockerfile_command, 4, .production_id = 30),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 4, .production_id = 31),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 4, .production_id = 31),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 45),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 5, .production_id = 45),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 5, .production_id = 44),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 5, .production_id = 44),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_command, 5, .production_id = 18),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_command, 5, .production_id = 18),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 36),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 4, .production_id = 36),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 37),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 4, .production_id = 37),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 38),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 38),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 5, .production_id = 43),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 5, .production_id = 43),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait_command, 4),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wait_command, 4),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 5, .production_id = 42),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_git_clone_command, 5, .production_id = 42),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_docker_command, 4),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_docker_command, 4),
  [656] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(92),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 5, .production_id = 40),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_command, 5, .production_id = 40),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(244),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(560),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(559),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(674),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(250),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(607),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(608),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chown, 3, .production_id = 10),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chown, 3, .production_id = 10),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4),
  [772] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(314),
  [775] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(636),
  [778] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(604),
  [781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(639),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(542),
  [787] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(543),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_platform, 3, .production_id = 10),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_platform, 3, .production_id = 10),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [822] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(472),
  [825] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(241),
  [828] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(692),
  [831] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(518),
  [834] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(689),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_secret, 3, .production_id = 10),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_secret, 3, .production_id = 10),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount, 3, .production_id = 10),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount, 3, .production_id = 10),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [871] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 41), SHIFT_REPEAT(317),
  [874] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 41), SHIFT_REPEAT(643),
  [877] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 41), SHIFT_REPEAT(615),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 41),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4),
  [886] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(550),
  [889] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(315),
  [892] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(549),
  [895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(545),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [906] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(633),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4),
  [927] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(616),
  [930] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(626),
  [933] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(637),
  [936] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(600),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4),
  [947] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(550),
  [950] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(351),
  [953] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(549),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [962] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 19),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 5, .production_id = 53),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [988] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(303),
  [991] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sep, 3, .production_id = 10),
  [1005] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4),
  [1007] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(352),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 8, .production_id = 59),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 1, .production_id = 1),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 1, .production_id = 1),
  [1016] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 1, .production_id = 29),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compose, 3, .production_id = 10),
  [1028] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 22), SHIFT_REPEAT(528),
  [1031] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 22), SHIFT_REPEAT(678),
  [1034] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 22), SHIFT_REPEAT(532),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pull, 3, .production_id = 10),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 3, .production_id = 10),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 2),
  [1061] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 3, .production_id = 2),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [1079] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 2),
  [1085] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 5, .production_id = 2),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [1099] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 1, .production_id = 1),
  [1109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [1115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [1125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [1129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [1133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4),
  [1137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(426),
  [1140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(674),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6, .production_id = 2),
  [1193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 6, .production_id = 2),
  [1195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_build_arg, 5, .production_id = 48),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_build_arg, 5, .production_id = 48),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [1219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [1243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 1, .production_id = 1),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 1, .production_id = 1),
  [1247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4),
  [1249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(605),
  [1252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(527),
  [1255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [1257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_target, 3, .production_id = 10),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_target, 3, .production_id = 10),
  [1267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_file, 3, .production_id = 10),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_file, 3, .production_id = 10),
  [1271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [1273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [1275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [1277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [1279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_try_command_repeat1, 2, .production_id = 52),
  [1291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_try_command_repeat1, 2, .production_id = 52), SHIFT_REPEAT(325),
  [1294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [1296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [1298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [1300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [1302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [1318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 1, .production_id = 1),
  [1322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [1324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [1334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [1336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [1342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [1346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [1348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 34),
  [1352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 34), SHIFT_REPEAT(269),
  [1355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 34),
  [1357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4),
  [1363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(521),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [1374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [1380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [1388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [1392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [1398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [1402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [1404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [1408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [1414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [1416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [1422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [1428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [1436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [1438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [1440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [1442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [1444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [1446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [1448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [1454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [1456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [1458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [1460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [1462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [1464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [1466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [1468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [1470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [1476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [1478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [1480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [1482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [1484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [1486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [1488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [1490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [1492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [1494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [1496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [1498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [1500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [1502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [1504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [1506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [1508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [1510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [1512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2),
  [1516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2), SHIFT_REPEAT(516),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 5),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 5),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 1, .production_id = 1),
  [1533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 3, .production_id = 10),
  [1535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3, .production_id = 10),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 33),
  [1543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 33),
  [1545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_block, 1, .production_id = 32),
  [1547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_block, 1, .production_id = 32),
  [1549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact, 3),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact, 3),
  [1553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [1555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [1557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 19),
  [1559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 6),
  [1561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 6),
  [1563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_try_command_repeat1, 1, .production_id = 47),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [1573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [1575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [1577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [1579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [1581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [1595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [1615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [1695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [1697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(675),
  [1699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(668),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [1705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [1711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [1723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [1725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [1727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [1729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [1731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [1733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [1749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [1751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [1759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [1769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [1777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [1779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [1781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [1789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [1791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [1793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [1795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [1797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [1799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [1801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [1803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [1805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [1807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(589),
  [1809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [1811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [1813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [1815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [1817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [1819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [1821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [1823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [1825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(598),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1869] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
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
