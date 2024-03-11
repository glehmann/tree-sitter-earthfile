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
#define STATE_COUNT 722
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 170
#define ALIAS_COUNT 0
#define TOKEN_COUNT 98
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 24
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 62

enum ts_symbol_identifiers {
  anon_sym_ARG = 1,
  anon_sym_EQ = 2,
  anon_sym_BUILD = 3,
  anon_sym_FROM = 4,
  anon_sym_PROJECT = 5,
  anon_sym_SLASH = 6,
  anon_sym_COLON = 7,
  anon_sym_VERSION = 8,
  anon_sym_CACHE = 9,
  anon_sym_COPY = 10,
  anon_sym_FOR = 11,
  anon_sym_IN = 12,
  anon_sym_END = 13,
  anon_sym_FROMDOCKERFILE = 14,
  anon_sym_GIT = 15,
  anon_sym_CLONE = 16,
  anon_sym_IF = 17,
  anon_sym_ELSEIF = 18,
  anon_sym_ELSE = 19,
  anon_sym_LET = 20,
  anon_sym_RUN = 21,
  anon_sym_DASH_DASH = 22,
  anon_sym_SAVEARTIFACT = 23,
  anon_sym_ASLOCAL = 24,
  anon_sym_SAVEIMAGE = 25,
  anon_sym_SET = 26,
  anon_sym_TRY = 27,
  anon_sym_FINALLY = 28,
  anon_sym_WAIT = 29,
  anon_sym_WITHDOCKER = 30,
  sym_expr = 31,
  sym_identifier = 32,
  anon_sym_COLON2 = 33,
  anon_sym_AT = 34,
  sym_image_name = 35,
  sym_image_tag = 36,
  sym_image_digest = 37,
  sym_immediate_identifier = 38,
  sym_path = 39,
  aux_sym_shell_fragment_token1 = 40,
  aux_sym_shell_fragment_token2 = 41,
  aux_sym_shell_fragment_token3 = 42,
  anon_sym_PLUS = 43,
  anon_sym_LPAREN = 44,
  anon_sym_RPAREN = 45,
  sym_version_major_minor = 46,
  sym_allow_privileged = 47,
  anon_sym_DASH_DASHbranch = 48,
  aux_sym_branch_token1 = 49,
  anon_sym_DASH_DASH2 = 50,
  anon_sym_DASH_DASHcache_DASHfrom = 51,
  sym_cache_hint = 52,
  anon_sym_DASH_DASHchmod = 53,
  anon_sym_DASH_DASHchown = 54,
  anon_sym_DASH_DASHcompose = 55,
  sym_dir = 56,
  anon_sym_DASH_DASHbuild_DASHarg = 57,
  anon_sym_DASHf = 58,
  anon_sym_DASH_DASHtarget = 59,
  sym_entrypoint = 60,
  sym_feature_flag = 61,
  sym_force = 62,
  sym_global = 63,
  anon_sym_DASH_DASHid = 64,
  sym_if_exists = 65,
  sym_keep_own = 66,
  sym_keep_ts = 67,
  anon_sym_DASH_DASHload = 68,
  anon_sym_DASH_DASHmount = 69,
  sym_network_none = 70,
  sym_no_cache = 71,
  sym_pass_args = 72,
  sym_persist = 73,
  anon_sym_DASH_DASHplatform = 74,
  sym_privileged = 75,
  anon_sym_DASH_DASHpull = 76,
  sym_push = 77,
  sym_required = 78,
  anon_sym_DASH_DASHsecret = 79,
  anon_sym_DASH_DASHsep = 80,
  anon_sym_DASH_DASHservice = 81,
  anon_sym_DASH_DASHsharing = 82,
  sym_ssh = 83,
  sym_symlink_no_follow = 84,
  anon_sym_DQUOTE = 85,
  aux_sym_double_quoted_string_token1 = 86,
  anon_sym_SQUOTE = 87,
  aux_sym_single_quoted_string_token1 = 88,
  sym_unquoted_string = 89,
  sym_line_continuation = 90,
  sym_comment = 91,
  sym_line_continuation_comment = 92,
  anon_sym_LF = 93,
  anon_sym_CRn = 94,
  anon_sym_FF = 95,
  sym__indent = 96,
  sym__dedent = 97,
  sym_source_file = 98,
  sym_arg_command = 99,
  sym_from_command = 100,
  sym_project_command = 101,
  sym_target = 102,
  sym_version_command = 103,
  sym_cache_command = 104,
  sym_copy_command = 105,
  sym_for_command = 106,
  sym_from_dockerfile_command = 107,
  sym_git_clone_command = 108,
  sym_if_command = 109,
  sym_let_command = 110,
  sym_run_command = 111,
  sym_save_artifact_command = 112,
  sym_save_image_command = 113,
  sym_set_command = 114,
  sym_try_command = 115,
  sym_wait_command = 116,
  sym_with_docker_command = 117,
  aux_sym__target_block = 118,
  sym__conditional_block = 119,
  sym_else_if_block = 120,
  sym_else_block = 121,
  sym_image_spec = 122,
  sym_shell_fragment = 123,
  sym_target_ref = 124,
  sym_target_artifact = 125,
  sym_target_artifact_build_args = 126,
  sym_branch = 127,
  sym_build_arg = 128,
  sym_cache_from = 129,
  sym_chmod = 130,
  sym_chown = 131,
  sym_compose = 132,
  sym_docker_build_arg = 133,
  sym_docker_file = 134,
  sym_docker_target = 135,
  sym_id = 136,
  sym_load = 137,
  sym_mount = 138,
  sym_platform = 139,
  sym_pull = 140,
  sym_secret = 141,
  sym_sep = 142,
  sym_service = 143,
  sym_sharing = 144,
  sym__string = 145,
  sym_double_quoted_string = 146,
  sym_single_quoted_string = 147,
  sym__eol = 148,
  aux_sym_source_file_repeat1 = 149,
  aux_sym_arg_command_repeat1 = 150,
  aux_sym_build_command_repeat2 = 151,
  aux_sym_from_command_repeat1 = 152,
  aux_sym_version_command_repeat1 = 153,
  aux_sym_cache_command_repeat1 = 154,
  aux_sym_copy_command_repeat1 = 155,
  aux_sym_copy_command_repeat2 = 156,
  aux_sym_for_command_repeat1 = 157,
  aux_sym_for_command_repeat2 = 158,
  aux_sym_from_dockerfile_command_repeat1 = 159,
  aux_sym_git_clone_command_repeat1 = 160,
  aux_sym_if_command_repeat1 = 161,
  aux_sym_run_command_repeat1 = 162,
  aux_sym_save_artifact_command_repeat1 = 163,
  aux_sym_save_image_command_repeat1 = 164,
  aux_sym_save_image_command_repeat2 = 165,
  aux_sym_try_command_repeat1 = 166,
  aux_sym_with_docker_command_repeat1 = 167,
  aux_sym__conditional_block_repeat1 = 168,
  aux_sym_shell_fragment_repeat1 = 169,
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
  [anon_sym_CACHE] = "CACHE",
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
  [anon_sym_DASH_DASHid] = "--id",
  [sym_if_exists] = "if_exists",
  [sym_keep_own] = "keep_own",
  [sym_keep_ts] = "keep_ts",
  [anon_sym_DASH_DASHload] = "--load",
  [anon_sym_DASH_DASHmount] = "--mount",
  [sym_network_none] = "network_none",
  [sym_no_cache] = "no_cache",
  [sym_pass_args] = "pass_args",
  [sym_persist] = "persist",
  [anon_sym_DASH_DASHplatform] = "--platform",
  [sym_privileged] = "privileged",
  [anon_sym_DASH_DASHpull] = "--pull",
  [sym_push] = "push",
  [sym_required] = "required",
  [anon_sym_DASH_DASHsecret] = "--secret",
  [anon_sym_DASH_DASHsep] = "--sep",
  [anon_sym_DASH_DASHservice] = "--service",
  [anon_sym_DASH_DASHsharing] = "--sharing",
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
  [sym_cache_command] = "cache_command",
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
  [sym_id] = "id",
  [sym_load] = "load",
  [sym_mount] = "mount",
  [sym_platform] = "platform",
  [sym_pull] = "pull",
  [sym_secret] = "secret",
  [sym_sep] = "sep",
  [sym_service] = "service",
  [sym_sharing] = "sharing",
  [sym__string] = "_string",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym__eol] = "_eol",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_arg_command_repeat1] = "arg_command_repeat1",
  [aux_sym_build_command_repeat2] = "build_command_repeat2",
  [aux_sym_from_command_repeat1] = "from_command_repeat1",
  [aux_sym_version_command_repeat1] = "version_command_repeat1",
  [aux_sym_cache_command_repeat1] = "cache_command_repeat1",
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
  [anon_sym_CACHE] = anon_sym_CACHE,
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
  [anon_sym_DASH_DASHid] = anon_sym_DASH_DASHid,
  [sym_if_exists] = sym_if_exists,
  [sym_keep_own] = sym_keep_own,
  [sym_keep_ts] = sym_keep_ts,
  [anon_sym_DASH_DASHload] = anon_sym_DASH_DASHload,
  [anon_sym_DASH_DASHmount] = anon_sym_DASH_DASHmount,
  [sym_network_none] = sym_network_none,
  [sym_no_cache] = sym_no_cache,
  [sym_pass_args] = sym_pass_args,
  [sym_persist] = sym_persist,
  [anon_sym_DASH_DASHplatform] = anon_sym_DASH_DASHplatform,
  [sym_privileged] = sym_privileged,
  [anon_sym_DASH_DASHpull] = anon_sym_DASH_DASHpull,
  [sym_push] = sym_push,
  [sym_required] = sym_required,
  [anon_sym_DASH_DASHsecret] = anon_sym_DASH_DASHsecret,
  [anon_sym_DASH_DASHsep] = anon_sym_DASH_DASHsep,
  [anon_sym_DASH_DASHservice] = anon_sym_DASH_DASHservice,
  [anon_sym_DASH_DASHsharing] = anon_sym_DASH_DASHsharing,
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
  [sym_cache_command] = sym_cache_command,
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
  [sym_id] = sym_id,
  [sym_load] = sym_load,
  [sym_mount] = sym_mount,
  [sym_platform] = sym_platform,
  [sym_pull] = sym_pull,
  [sym_secret] = sym_secret,
  [sym_sep] = sym_sep,
  [sym_service] = sym_service,
  [sym_sharing] = sym_sharing,
  [sym__string] = sym__string,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym__eol] = sym__eol,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_arg_command_repeat1] = aux_sym_arg_command_repeat1,
  [aux_sym_build_command_repeat2] = aux_sym_build_command_repeat2,
  [aux_sym_from_command_repeat1] = aux_sym_from_command_repeat1,
  [aux_sym_version_command_repeat1] = aux_sym_version_command_repeat1,
  [aux_sym_cache_command_repeat1] = aux_sym_cache_command_repeat1,
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
  [anon_sym_CACHE] = {
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
  [anon_sym_DASH_DASHid] = {
    .visible = true,
    .named = false,
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
  [sym_persist] = {
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
  [anon_sym_DASH_DASHsharing] = {
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
  [sym_cache_command] = {
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
  [sym_id] = {
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
  [sym_sharing] = {
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
  [aux_sym_cache_command_repeat1] = {
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
  field_mount_point = 14,
  field_name = 15,
  field_option = 16,
  field_org_name = 17,
  field_project_name = 18,
  field_src = 19,
  field_tag = 20,
  field_target = 21,
  field_url = 22,
  field_value = 23,
  field_version = 24,
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
  [field_mount_point] = "mount_point",
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
  [22] = {.index = 40, .length = 1},
  [23] = {.index = 41, .length = 2},
  [24] = {.index = 43, .length = 1},
  [25] = {.index = 44, .length = 1},
  [26] = {.index = 45, .length = 1},
  [27] = {.index = 46, .length = 2},
  [28] = {.index = 48, .length = 2},
  [29] = {.index = 50, .length = 2},
  [30] = {.index = 52, .length = 2},
  [31] = {.index = 54, .length = 1},
  [32] = {.index = 55, .length = 2},
  [33] = {.index = 57, .length = 2},
  [34] = {.index = 59, .length = 2},
  [35] = {.index = 61, .length = 2},
  [36] = {.index = 63, .length = 2},
  [37] = {.index = 65, .length = 2},
  [38] = {.index = 67, .length = 1},
  [39] = {.index = 68, .length = 2},
  [40] = {.index = 70, .length = 2},
  [41] = {.index = 72, .length = 3},
  [42] = {.index = 75, .length = 3},
  [43] = {.index = 78, .length = 2},
  [44] = {.index = 80, .length = 2},
  [45] = {.index = 82, .length = 3},
  [46] = {.index = 85, .length = 2},
  [47] = {.index = 87, .length = 3},
  [48] = {.index = 90, .length = 3},
  [49] = {.index = 93, .length = 1},
  [50] = {.index = 94, .length = 2},
  [51] = {.index = 96, .length = 3},
  [52] = {.index = 99, .length = 4},
  [53] = {.index = 103, .length = 4},
  [54] = {.index = 107, .length = 2},
  [55] = {.index = 109, .length = 2},
  [56] = {.index = 111, .length = 2},
  [57] = {.index = 113, .length = 5},
  [58] = {.index = 118, .length = 1},
  [59] = {.index = 119, .length = 3},
  [60] = {.index = 122, .length = 1},
  [61] = {.index = 123, .length = 5},
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
    {field_mount_point, 1},
  [41] =
    {field_src, 0, .inherited = true},
    {field_src, 1, .inherited = true},
  [43] =
    {field_context, 1},
  [44] =
    {field_condition, 0},
  [45] =
    {field_command, 1},
  [46] =
    {field_dest, 2},
    {field_src, 1},
  [48] =
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [50] =
    {field_mount_point, 2},
    {field_option, 1, .inherited = true},
  [52] =
    {field_dest, 2},
    {field_src, 1, .inherited = true},
  [54] =
    {field_value, 0},
  [55] =
    {field_context, 2},
    {field_option, 1, .inherited = true},
  [57] =
    {field_condition, 1, .inherited = true},
    {field_option, 1, .inherited = true},
  [59] =
    {field_condition, 0, .inherited = true},
    {field_option, 0, .inherited = true},
  [61] =
    {field_else_if, 0},
    {field_else_if, 1},
  [63] =
    {field_else_if, 0, .inherited = true},
    {field_else_if, 1, .inherited = true},
  [65] =
    {field_condition, 1},
    {field_option, 0, .inherited = true},
  [67] =
    {field_command, 2},
  [68] =
    {field_command, 2},
    {field_option, 1, .inherited = true},
  [70] =
    {field_local_dest, 3},
    {field_src, 1},
  [72] =
    {field_dest, 3},
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [75] =
    {field_dest, 3},
    {field_option, 1, .inherited = true},
    {field_src, 2, .inherited = true},
  [78] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [80] =
    {field_dest, 3},
    {field_url, 2},
  [82] =
    {field_condition, 1, .inherited = true},
    {field_else_if, 2, .inherited = true},
    {field_option, 1, .inherited = true},
  [85] =
    {field_command, 3},
    {field_option, 1, .inherited = true},
  [87] =
    {field_dest, 2},
    {field_local_dest, 4},
    {field_src, 1},
  [90] =
    {field_local_dest, 4},
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [93] =
    {field_finally, 0},
  [94] =
    {field_key, 2},
    {field_value, 4},
  [96] =
    {field_dest, 4},
    {field_option, 2, .inherited = true},
    {field_url, 3},
  [99] =
    {field_condition, 1, .inherited = true},
    {field_else, 2},
    {field_else, 3},
    {field_option, 1, .inherited = true},
  [103] =
    {field_dest, 3},
    {field_local_dest, 5},
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [107] =
    {field_finally, 0, .inherited = true},
    {field_finally, 1, .inherited = true},
  [109] =
    {field_image, 2},
    {field_target, 4},
  [111] =
    {field_name, 1},
    {field_value, 3, .inherited = true},
  [113] =
    {field_condition, 1, .inherited = true},
    {field_else, 3},
    {field_else, 4},
    {field_else_if, 2, .inherited = true},
    {field_option, 1, .inherited = true},
  [118] =
    {field_finally, 4, .inherited = true},
  [119] =
    {field_name, 2},
    {field_option, 1, .inherited = true},
    {field_value, 4, .inherited = true},
  [122] =
    {field_finally, 5, .inherited = true},
  [123] =
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
  [10] = 6,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 6,
  [18] = 6,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 19,
  [23] = 16,
  [24] = 24,
  [25] = 25,
  [26] = 21,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 15,
  [31] = 13,
  [32] = 24,
  [33] = 14,
  [34] = 34,
  [35] = 28,
  [36] = 20,
  [37] = 29,
  [38] = 25,
  [39] = 8,
  [40] = 27,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 42,
  [48] = 42,
  [49] = 42,
  [50] = 44,
  [51] = 44,
  [52] = 44,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 53,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 41,
  [68] = 53,
  [69] = 53,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 43,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 72,
  [79] = 61,
  [80] = 80,
  [81] = 81,
  [82] = 81,
  [83] = 66,
  [84] = 61,
  [85] = 63,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 64,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 66,
  [97] = 41,
  [98] = 61,
  [99] = 99,
  [100] = 63,
  [101] = 66,
  [102] = 102,
  [103] = 103,
  [104] = 66,
  [105] = 105,
  [106] = 61,
  [107] = 45,
  [108] = 108,
  [109] = 109,
  [110] = 46,
  [111] = 111,
  [112] = 112,
  [113] = 65,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 41,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 64,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 60,
  [129] = 129,
  [130] = 62,
  [131] = 131,
  [132] = 132,
  [133] = 41,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 65,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 62,
  [146] = 146,
  [147] = 54,
  [148] = 60,
  [149] = 55,
  [150] = 65,
  [151] = 64,
  [152] = 63,
  [153] = 153,
  [154] = 56,
  [155] = 62,
  [156] = 156,
  [157] = 58,
  [158] = 60,
  [159] = 57,
  [160] = 160,
  [161] = 74,
  [162] = 71,
  [163] = 71,
  [164] = 74,
  [165] = 43,
  [166] = 70,
  [167] = 41,
  [168] = 43,
  [169] = 71,
  [170] = 74,
  [171] = 43,
  [172] = 45,
  [173] = 45,
  [174] = 77,
  [175] = 80,
  [176] = 46,
  [177] = 46,
  [178] = 75,
  [179] = 76,
  [180] = 61,
  [181] = 45,
  [182] = 66,
  [183] = 46,
  [184] = 43,
  [185] = 138,
  [186] = 109,
  [187] = 187,
  [188] = 126,
  [189] = 114,
  [190] = 125,
  [191] = 115,
  [192] = 192,
  [193] = 132,
  [194] = 160,
  [195] = 116,
  [196] = 119,
  [197] = 120,
  [198] = 117,
  [199] = 121,
  [200] = 124,
  [201] = 46,
  [202] = 187,
  [203] = 103,
  [204] = 127,
  [205] = 111,
  [206] = 129,
  [207] = 131,
  [208] = 134,
  [209] = 135,
  [210] = 105,
  [211] = 136,
  [212] = 45,
  [213] = 137,
  [214] = 140,
  [215] = 156,
  [216] = 139,
  [217] = 108,
  [218] = 112,
  [219] = 102,
  [220] = 99,
  [221] = 123,
  [222] = 86,
  [223] = 142,
  [224] = 95,
  [225] = 225,
  [226] = 153,
  [227] = 143,
  [228] = 192,
  [229] = 94,
  [230] = 144,
  [231] = 93,
  [232] = 146,
  [233] = 92,
  [234] = 90,
  [235] = 89,
  [236] = 87,
  [237] = 88,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 240,
  [242] = 239,
  [243] = 243,
  [244] = 244,
  [245] = 66,
  [246] = 61,
  [247] = 247,
  [248] = 244,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 244,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 256,
  [258] = 253,
  [259] = 255,
  [260] = 260,
  [261] = 66,
  [262] = 262,
  [263] = 263,
  [264] = 61,
  [265] = 265,
  [266] = 263,
  [267] = 267,
  [268] = 268,
  [269] = 268,
  [270] = 270,
  [271] = 271,
  [272] = 270,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 58,
  [277] = 277,
  [278] = 275,
  [279] = 277,
  [280] = 280,
  [281] = 280,
  [282] = 282,
  [283] = 55,
  [284] = 56,
  [285] = 57,
  [286] = 286,
  [287] = 70,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 41,
  [292] = 286,
  [293] = 54,
  [294] = 294,
  [295] = 294,
  [296] = 43,
  [297] = 66,
  [298] = 61,
  [299] = 75,
  [300] = 76,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 303,
  [306] = 306,
  [307] = 307,
  [308] = 306,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 301,
  [315] = 304,
  [316] = 303,
  [317] = 303,
  [318] = 318,
  [319] = 319,
  [320] = 319,
  [321] = 46,
  [322] = 66,
  [323] = 61,
  [324] = 45,
  [325] = 325,
  [326] = 66,
  [327] = 61,
  [328] = 318,
  [329] = 329,
  [330] = 325,
  [331] = 331,
  [332] = 304,
  [333] = 262,
  [334] = 260,
  [335] = 335,
  [336] = 336,
  [337] = 307,
  [338] = 249,
  [339] = 301,
  [340] = 340,
  [341] = 66,
  [342] = 304,
  [343] = 303,
  [344] = 344,
  [345] = 304,
  [346] = 346,
  [347] = 61,
  [348] = 318,
  [349] = 319,
  [350] = 76,
  [351] = 351,
  [352] = 352,
  [353] = 312,
  [354] = 354,
  [355] = 355,
  [356] = 117,
  [357] = 357,
  [358] = 358,
  [359] = 99,
  [360] = 360,
  [361] = 361,
  [362] = 102,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 363,
  [367] = 367,
  [368] = 354,
  [369] = 369,
  [370] = 370,
  [371] = 111,
  [372] = 372,
  [373] = 361,
  [374] = 361,
  [375] = 120,
  [376] = 376,
  [377] = 377,
  [378] = 364,
  [379] = 377,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 361,
  [385] = 367,
  [386] = 360,
  [387] = 355,
  [388] = 377,
  [389] = 364,
  [390] = 126,
  [391] = 125,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 393,
  [397] = 397,
  [398] = 66,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 395,
  [403] = 395,
  [404] = 399,
  [405] = 61,
  [406] = 401,
  [407] = 66,
  [408] = 408,
  [409] = 409,
  [410] = 393,
  [411] = 400,
  [412] = 408,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 249,
  [417] = 61,
  [418] = 418,
  [419] = 419,
  [420] = 251,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 424,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
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
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 434,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 425,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 453,
  [463] = 463,
  [464] = 445,
  [465] = 465,
  [466] = 466,
  [467] = 427,
  [468] = 468,
  [469] = 469,
  [470] = 422,
  [471] = 442,
  [472] = 472,
  [473] = 473,
  [474] = 442,
  [475] = 74,
  [476] = 71,
  [477] = 477,
  [478] = 468,
  [479] = 466,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 436,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 433,
  [489] = 422,
  [490] = 436,
  [491] = 468,
  [492] = 427,
  [493] = 449,
  [494] = 494,
  [495] = 444,
  [496] = 456,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 459,
  [501] = 433,
  [502] = 460,
  [503] = 461,
  [504] = 469,
  [505] = 494,
  [506] = 481,
  [507] = 507,
  [508] = 482,
  [509] = 423,
  [510] = 485,
  [511] = 486,
  [512] = 512,
  [513] = 513,
  [514] = 513,
  [515] = 497,
  [516] = 484,
  [517] = 477,
  [518] = 507,
  [519] = 473,
  [520] = 499,
  [521] = 465,
  [522] = 437,
  [523] = 426,
  [524] = 512,
  [525] = 458,
  [526] = 454,
  [527] = 451,
  [528] = 450,
  [529] = 429,
  [530] = 430,
  [531] = 447,
  [532] = 443,
  [533] = 455,
  [534] = 438,
  [535] = 432,
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
  [548] = 61,
  [549] = 66,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 558,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 566,
  [582] = 569,
  [583] = 570,
  [584] = 574,
  [585] = 575,
  [586] = 558,
  [587] = 575,
  [588] = 574,
  [589] = 589,
  [590] = 569,
  [591] = 570,
  [592] = 574,
  [593] = 575,
  [594] = 558,
  [595] = 576,
  [596] = 596,
  [597] = 569,
  [598] = 570,
  [599] = 574,
  [600] = 575,
  [601] = 558,
  [602] = 569,
  [603] = 570,
  [604] = 574,
  [605] = 575,
  [606] = 558,
  [607] = 574,
  [608] = 575,
  [609] = 574,
  [610] = 575,
  [611] = 574,
  [612] = 575,
  [613] = 574,
  [614] = 575,
  [615] = 574,
  [616] = 575,
  [617] = 574,
  [618] = 575,
  [619] = 574,
  [620] = 575,
  [621] = 574,
  [622] = 575,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 626,
  [631] = 560,
  [632] = 625,
  [633] = 633,
  [634] = 567,
  [635] = 571,
  [636] = 570,
  [637] = 637,
  [638] = 638,
  [639] = 566,
  [640] = 569,
  [641] = 641,
  [642] = 629,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 574,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 644,
  [654] = 572,
  [655] = 655,
  [656] = 570,
  [657] = 657,
  [658] = 575,
  [659] = 628,
  [660] = 569,
  [661] = 661,
  [662] = 558,
  [663] = 663,
  [664] = 664,
  [665] = 649,
  [666] = 624,
  [667] = 625,
  [668] = 626,
  [669] = 576,
  [670] = 625,
  [671] = 626,
  [672] = 576,
  [673] = 625,
  [674] = 626,
  [675] = 625,
  [676] = 626,
  [677] = 625,
  [678] = 626,
  [679] = 625,
  [680] = 626,
  [681] = 625,
  [682] = 626,
  [683] = 625,
  [684] = 626,
  [685] = 625,
  [686] = 626,
  [687] = 625,
  [688] = 626,
  [689] = 625,
  [690] = 626,
  [691] = 625,
  [692] = 626,
  [693] = 625,
  [694] = 626,
  [695] = 695,
  [696] = 696,
  [697] = 657,
  [698] = 698,
  [699] = 572,
  [700] = 589,
  [701] = 573,
  [702] = 702,
  [703] = 624,
  [704] = 651,
  [705] = 705,
  [706] = 663,
  [707] = 566,
  [708] = 652,
  [709] = 709,
  [710] = 710,
  [711] = 709,
  [712] = 705,
  [713] = 696,
  [714] = 664,
  [715] = 565,
  [716] = 716,
  [717] = 645,
  [718] = 718,
  [719] = 710,
  [720] = 720,
  [721] = 721,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(293);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(713);
      if (lookahead == '(') ADVANCE(666);
      if (lookahead == ')') ADVANCE(667);
      if (lookahead == '+') ADVANCE(665);
      if (lookahead == ',') ADVANCE(658);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '/') ADVANCE(306);
      if (lookahead == ':') ADVANCE(377);
      if (lookahead == '=') ADVANCE(298);
      if (lookahead == '@') ADVANCE(378);
      if (lookahead == 'A') ADVANCE(154);
      if (lookahead == 'B') ADVANCE(172);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'E') ADVANCE(132);
      if (lookahead == 'F') ADVANCE(121);
      if (lookahead == 'G') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(107);
      if (lookahead == 'P') ADVANCE(159);
      if (lookahead == 'R') ADVANCE(173);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead == 'V') ADVANCE(109);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(289)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '\f') ADVANCE(721);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(719);
      if (lookahead == '#') ADVANCE(663);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(662);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(719);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '\f') ADVANCE(725);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(726);
      if (lookahead == '\f') ADVANCE(736);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(665);
      if (lookahead == '-') ADVANCE(384);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(732);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(726);
      if (lookahead == '\f') ADVANCE(736);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(665);
      if (lookahead == '-') ADVANCE(384);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '\f') ADVANCE(737);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(717);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(713);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(733);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(718);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '\f') ADVANCE(737);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(717);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(713);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(718);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(728);
      if (lookahead == '\f') ADVANCE(738);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == '(') ADVANCE(666);
      if (lookahead == '+') ADVANCE(665);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(734);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(657);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(728);
      if (lookahead == '\f') ADVANCE(738);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == '(') ADVANCE(666);
      if (lookahead == '+') ADVANCE(665);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(657);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '#') ADVANCE(710);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(711);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(712);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '#') ADVANCE(714);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(716);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(729);
      if (lookahead == '\f') ADVANCE(739);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(735);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(14)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(661);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(729);
      if (lookahead == '\f') ADVANCE(739);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(14)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(661);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(730);
      if (lookahead == '\f') ADVANCE(740);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(298);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(730);
      if (lookahead == '\f') ADVANCE(740);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(731);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(730);
      if (lookahead == '\f') ADVANCE(740);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(713);
      if (lookahead == '(') ADVANCE(666);
      if (lookahead == ')') ADVANCE(667);
      if (lookahead == '+') ADVANCE(665);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == ':') ADVANCE(307);
      if (lookahead == 'A') ADVANCE(154);
      if (lookahead == 'B') ADVANCE(172);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'E') ADVANCE(132);
      if (lookahead == 'F') ADVANCE(121);
      if (lookahead == 'G') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(107);
      if (lookahead == 'P') ADVANCE(159);
      if (lookahead == 'R') ADVANCE(173);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead == 'V') ADVANCE(109);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(731);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(658);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 19:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(713);
      if (lookahead == '(') ADVANCE(666);
      if (lookahead == ')') ADVANCE(667);
      if (lookahead == '+') ADVANCE(665);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == ':') ADVANCE(307);
      if (lookahead == 'A') ADVANCE(154);
      if (lookahead == 'B') ADVANCE(172);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'E') ADVANCE(132);
      if (lookahead == 'F') ADVANCE(121);
      if (lookahead == 'G') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(107);
      if (lookahead == 'P') ADVANCE(159);
      if (lookahead == 'R') ADVANCE(173);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead == 'V') ADVANCE(109);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(658);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 20:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(713);
      if (lookahead == '(') ADVANCE(666);
      if (lookahead == ')') ADVANCE(667);
      if (lookahead == '+') ADVANCE(665);
      if (lookahead == '-') ADVANCE(660);
      if (lookahead == ':') ADVANCE(307);
      if (lookahead == 'A') ADVANCE(154);
      if (lookahead == 'B') ADVANCE(172);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'E') ADVANCE(132);
      if (lookahead == 'F') ADVANCE(121);
      if (lookahead == 'G') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(107);
      if (lookahead == 'P') ADVANCE(159);
      if (lookahead == 'R') ADVANCE(173);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead == 'V') ADVANCE(109);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(658);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == 'm') ADVANCE(242);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'p') ADVANCE(258);
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(672);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '=') ADVANCE(671);
      if (lookahead == 'A') ADVANCE(153);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'E') ADVANCE(132);
      if (lookahead == 'F') ADVANCE(121);
      if (lookahead == 'G') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'L') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(173);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(36)
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(673);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(671);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(54)
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(658);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(26)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(661);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(660);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(658);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(26)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(661);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(100);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(717);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(713);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(718);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(665);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == ':') ADVANCE(377);
      if (lookahead == '@') ADVANCE(378);
      if (lookahead == 'A') ADVANCE(153);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'E') ADVANCE(132);
      if (lookahead == 'F') ADVANCE(121);
      if (lookahead == 'G') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'L') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(173);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(665);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == 'A') ADVANCE(153);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'E') ADVANCE(132);
      if (lookahead == 'F') ADVANCE(121);
      if (lookahead == 'G') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'L') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(173);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(381);
      if (lookahead == ':') ADVANCE(307);
      if (lookahead == 'A') ADVANCE(415);
      if (lookahead == 'C') ADVANCE(388);
      if (lookahead == 'E') ADVANCE(405);
      if (lookahead == 'F') ADVANCE(413);
      if (lookahead == 'G') ADVANCE(402);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'L') ADVANCE(397);
      if (lookahead == 'R') ADVANCE(424);
      if (lookahead == 'S') ADVANCE(389);
      if (lookahead == 'T') ADVANCE(416);
      if (lookahead == 'W') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(381);
      if (lookahead == 'A') ADVANCE(415);
      if (lookahead == 'C') ADVANCE(388);
      if (lookahead == 'E') ADVANCE(409);
      if (lookahead == 'F') ADVANCE(413);
      if (lookahead == 'G') ADVANCE(402);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'L') ADVANCE(397);
      if (lookahead == 'R') ADVANCE(424);
      if (lookahead == 'S') ADVANCE(389);
      if (lookahead == 'T') ADVANCE(416);
      if (lookahead == 'W') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(381);
      if (lookahead == 'A') ADVANCE(415);
      if (lookahead == 'C') ADVANCE(388);
      if (lookahead == 'F') ADVANCE(413);
      if (lookahead == 'G') ADVANCE(402);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'L') ADVANCE(397);
      if (lookahead == 'R') ADVANCE(424);
      if (lookahead == 'S') ADVANCE(389);
      if (lookahead == 'T') ADVANCE(416);
      if (lookahead == 'W') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(381);
      if (lookahead == 'A') ADVANCE(415);
      if (lookahead == 'C') ADVANCE(388);
      if (lookahead == 'F') ADVANCE(403);
      if (lookahead == 'G') ADVANCE(402);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'L') ADVANCE(397);
      if (lookahead == 'R') ADVANCE(424);
      if (lookahead == 'S') ADVANCE(389);
      if (lookahead == 'T') ADVANCE(416);
      if (lookahead == 'W') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == 'A') ADVANCE(153);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'E') ADVANCE(132);
      if (lookahead == 'F') ADVANCE(121);
      if (lookahead == 'G') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'L') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(173);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36)
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(415);
      if (lookahead == 'C') ADVANCE(388);
      if (lookahead == 'E') ADVANCE(405);
      if (lookahead == 'F') ADVANCE(413);
      if (lookahead == 'G') ADVANCE(402);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'L') ADVANCE(397);
      if (lookahead == 'R') ADVANCE(424);
      if (lookahead == 'S') ADVANCE(389);
      if (lookahead == 'T') ADVANCE(416);
      if (lookahead == 'W') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(415);
      if (lookahead == 'C') ADVANCE(388);
      if (lookahead == 'E') ADVANCE(409);
      if (lookahead == 'F') ADVANCE(413);
      if (lookahead == 'G') ADVANCE(402);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'L') ADVANCE(397);
      if (lookahead == 'R') ADVANCE(424);
      if (lookahead == 'S') ADVANCE(389);
      if (lookahead == 'T') ADVANCE(416);
      if (lookahead == 'W') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(415);
      if (lookahead == 'C') ADVANCE(388);
      if (lookahead == 'F') ADVANCE(413);
      if (lookahead == 'G') ADVANCE(402);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'L') ADVANCE(397);
      if (lookahead == 'R') ADVANCE(424);
      if (lookahead == 'S') ADVANCE(389);
      if (lookahead == 'T') ADVANCE(416);
      if (lookahead == 'W') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(415);
      if (lookahead == 'C') ADVANCE(388);
      if (lookahead == 'F') ADVANCE(403);
      if (lookahead == 'G') ADVANCE(402);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'L') ADVANCE(397);
      if (lookahead == 'R') ADVANCE(424);
      if (lookahead == 'S') ADVANCE(389);
      if (lookahead == 'T') ADVANCE(416);
      if (lookahead == 'W') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(377);
      if (lookahead == '@') ADVANCE(378);
      if (lookahead == 'A') ADVANCE(415);
      if (lookahead == 'C') ADVANCE(388);
      if (lookahead == 'E') ADVANCE(405);
      if (lookahead == 'F') ADVANCE(413);
      if (lookahead == 'G') ADVANCE(402);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'L') ADVANCE(397);
      if (lookahead == 'R') ADVANCE(424);
      if (lookahead == 'S') ADVANCE(389);
      if (lookahead == 'T') ADVANCE(416);
      if (lookahead == 'W') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(377);
      if (lookahead == '@') ADVANCE(378);
      if (lookahead == 'A') ADVANCE(415);
      if (lookahead == 'C') ADVANCE(388);
      if (lookahead == 'E') ADVANCE(409);
      if (lookahead == 'F') ADVANCE(413);
      if (lookahead == 'G') ADVANCE(402);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'L') ADVANCE(397);
      if (lookahead == 'R') ADVANCE(424);
      if (lookahead == 'S') ADVANCE(389);
      if (lookahead == 'T') ADVANCE(416);
      if (lookahead == 'W') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(377);
      if (lookahead == '@') ADVANCE(378);
      if (lookahead == 'A') ADVANCE(415);
      if (lookahead == 'C') ADVANCE(388);
      if (lookahead == 'F') ADVANCE(413);
      if (lookahead == 'G') ADVANCE(402);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'L') ADVANCE(397);
      if (lookahead == 'R') ADVANCE(424);
      if (lookahead == 'S') ADVANCE(389);
      if (lookahead == 'T') ADVANCE(416);
      if (lookahead == 'W') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(377);
      if (lookahead == '@') ADVANCE(378);
      if (lookahead == 'A') ADVANCE(415);
      if (lookahead == 'C') ADVANCE(388);
      if (lookahead == 'F') ADVANCE(403);
      if (lookahead == 'G') ADVANCE(402);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'L') ADVANCE(397);
      if (lookahead == 'R') ADVANCE(424);
      if (lookahead == 'S') ADVANCE(389);
      if (lookahead == 'T') ADVANCE(416);
      if (lookahead == 'W') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(415);
      if (lookahead == 'C') ADVANCE(388);
      if (lookahead == 'E') ADVANCE(405);
      if (lookahead == 'F') ADVANCE(413);
      if (lookahead == 'G') ADVANCE(402);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'L') ADVANCE(397);
      if (lookahead == 'R') ADVANCE(424);
      if (lookahead == 'S') ADVANCE(389);
      if (lookahead == 'T') ADVANCE(416);
      if (lookahead == 'W') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(415);
      if (lookahead == 'C') ADVANCE(388);
      if (lookahead == 'E') ADVANCE(409);
      if (lookahead == 'F') ADVANCE(413);
      if (lookahead == 'G') ADVANCE(402);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'L') ADVANCE(397);
      if (lookahead == 'R') ADVANCE(424);
      if (lookahead == 'S') ADVANCE(389);
      if (lookahead == 'T') ADVANCE(416);
      if (lookahead == 'W') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(415);
      if (lookahead == 'C') ADVANCE(388);
      if (lookahead == 'F') ADVANCE(413);
      if (lookahead == 'G') ADVANCE(402);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'L') ADVANCE(397);
      if (lookahead == 'R') ADVANCE(424);
      if (lookahead == 'S') ADVANCE(389);
      if (lookahead == 'T') ADVANCE(416);
      if (lookahead == 'W') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(415);
      if (lookahead == 'C') ADVANCE(388);
      if (lookahead == 'F') ADVANCE(403);
      if (lookahead == 'G') ADVANCE(402);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'L') ADVANCE(397);
      if (lookahead == 'R') ADVANCE(424);
      if (lookahead == 'S') ADVANCE(389);
      if (lookahead == 'T') ADVANCE(416);
      if (lookahead == 'W') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(658);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(661);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(483);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == '(') ADVANCE(666);
      if (lookahead == '+') ADVANCE(665);
      if (lookahead == '-') ADVANCE(490);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(657);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == '(') ADVANCE(666);
      if (lookahead == '+') ADVANCE(665);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(657);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == '-') ADVANCE(492);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(657);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(657);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == '-') ADVANCE(494);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(60)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(657);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == '-') ADVANCE(495);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(657);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == 'A') ADVANCE(532);
      if (lookahead == 'C') ADVANCE(503);
      if (lookahead == 'E') ADVANCE(522);
      if (lookahead == 'F') ADVANCE(530);
      if (lookahead == 'G') ADVANCE(519);
      if (lookahead == 'I') ADVANCE(515);
      if (lookahead == 'L') ADVANCE(513);
      if (lookahead == 'R') ADVANCE(542);
      if (lookahead == 'S') ADVANCE(504);
      if (lookahead == 'T') ADVANCE(533);
      if (lookahead == 'W') ADVANCE(506);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(657);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == 'A') ADVANCE(532);
      if (lookahead == 'C') ADVANCE(503);
      if (lookahead == 'E') ADVANCE(526);
      if (lookahead == 'F') ADVANCE(530);
      if (lookahead == 'G') ADVANCE(519);
      if (lookahead == 'I') ADVANCE(515);
      if (lookahead == 'L') ADVANCE(513);
      if (lookahead == 'R') ADVANCE(542);
      if (lookahead == 'S') ADVANCE(504);
      if (lookahead == 'T') ADVANCE(533);
      if (lookahead == 'W') ADVANCE(506);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(63)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(657);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == 'A') ADVANCE(532);
      if (lookahead == 'C') ADVANCE(503);
      if (lookahead == 'F') ADVANCE(530);
      if (lookahead == 'G') ADVANCE(519);
      if (lookahead == 'I') ADVANCE(515);
      if (lookahead == 'L') ADVANCE(513);
      if (lookahead == 'R') ADVANCE(542);
      if (lookahead == 'S') ADVANCE(504);
      if (lookahead == 'T') ADVANCE(533);
      if (lookahead == 'W') ADVANCE(506);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(657);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == 'A') ADVANCE(532);
      if (lookahead == 'C') ADVANCE(503);
      if (lookahead == 'F') ADVANCE(520);
      if (lookahead == 'G') ADVANCE(519);
      if (lookahead == 'I') ADVANCE(515);
      if (lookahead == 'L') ADVANCE(513);
      if (lookahead == 'R') ADVANCE(542);
      if (lookahead == 'S') ADVANCE(504);
      if (lookahead == 'T') ADVANCE(533);
      if (lookahead == 'W') ADVANCE(506);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(657);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == 'A') ADVANCE(535);
      if (lookahead == 'E') ADVANCE(526);
      if (lookahead == 'S') ADVANCE(507);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(66)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(657);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(657);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(479);
      if (lookahead == '\\') ADVANCE(480);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(482);
      END_STATE();
    case 69:
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == '(') ADVANCE(288);
      END_STATE();
    case 71:
      if (lookahead == ')') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(674);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(179);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(215);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(287);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(186);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(254);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(182);
      END_STATE();
    case 79:
      if (lookahead == '.') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      if (lookahead == '=') ADVANCE(239);
      END_STATE();
    case 81:
      if (lookahead == 'A') ADVANCE(91);
      if (lookahead == 'L') ADVANCE(148);
      if (lookahead == 'O') ADVANCE(152);
      END_STATE();
    case 82:
      if (lookahead == 'A') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(152);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(174);
      if (lookahead == 'E') ADVANCE(166);
      END_STATE();
    case 84:
      if (lookahead == 'A') ADVANCE(118);
      END_STATE();
    case 85:
      if (lookahead == 'A') ADVANCE(137);
      END_STATE();
    case 86:
      if (lookahead == 'A') ADVANCE(161);
      END_STATE();
    case 87:
      if (lookahead == 'A') ADVANCE(161);
      if (lookahead == 'I') ADVANCE(140);
      END_STATE();
    case 88:
      if (lookahead == 'A') ADVANCE(133);
      END_STATE();
    case 89:
      if (lookahead == 'A') ADVANCE(126);
      if (lookahead == 'I') ADVANCE(170);
      END_STATE();
    case 90:
      if (lookahead == 'A') ADVANCE(94);
      END_STATE();
    case 91:
      if (lookahead == 'C') ADVANCE(120);
      END_STATE();
    case 92:
      if (lookahead == 'C') ADVANCE(130);
      END_STATE();
    case 93:
      if (lookahead == 'C') ADVANCE(168);
      END_STATE();
    case 94:
      if (lookahead == 'C') ADVANCE(169);
      END_STATE();
    case 95:
      if (lookahead == 'C') ADVANCE(88);
      END_STATE();
    case 96:
      if (lookahead == 'C') ADVANCE(131);
      END_STATE();
    case 97:
      if (lookahead == 'D') ADVANCE(320);
      END_STATE();
    case 98:
      if (lookahead == 'D') ADVANCE(299);
      END_STATE();
    case 99:
      if (lookahead == 'D') ADVANCE(149);
      END_STATE();
    case 100:
      if (lookahead == 'D') ADVANCE(151);
      END_STATE();
    case 101:
      if (lookahead == 'E') ADVANCE(332);
      END_STATE();
    case 102:
      if (lookahead == 'E') ADVANCE(310);
      END_STATE();
    case 103:
      if (lookahead == 'E') ADVANCE(327);
      END_STATE();
    case 104:
      if (lookahead == 'E') ADVANCE(344);
      END_STATE();
    case 105:
      if (lookahead == 'E') ADVANCE(323);
      END_STATE();
    case 106:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 107:
      if (lookahead == 'E') ADVANCE(165);
      END_STATE();
    case 108:
      if (lookahead == 'E') ADVANCE(93);
      END_STATE();
    case 109:
      if (lookahead == 'E') ADVANCE(158);
      END_STATE();
    case 110:
      if (lookahead == 'E') ADVANCE(160);
      END_STATE();
    case 111:
      if (lookahead == 'E') ADVANCE(157);
      END_STATE();
    case 112:
      if (lookahead == 'F') ADVANCE(328);
      END_STATE();
    case 113:
      if (lookahead == 'F') ADVANCE(328);
      if (lookahead == 'N') ADVANCE(319);
      END_STATE();
    case 114:
      if (lookahead == 'F') ADVANCE(331);
      END_STATE();
    case 115:
      if (lookahead == 'F') ADVANCE(90);
      END_STATE();
    case 116:
      if (lookahead == 'F') ADVANCE(127);
      END_STATE();
    case 117:
      if (lookahead == 'G') ADVANCE(294);
      END_STATE();
    case 118:
      if (lookahead == 'G') ADVANCE(104);
      END_STATE();
    case 119:
      if (lookahead == 'H') ADVANCE(28);
      END_STATE();
    case 120:
      if (lookahead == 'H') ADVANCE(102);
      END_STATE();
    case 121:
      if (lookahead == 'I') ADVANCE(141);
      if (lookahead == 'O') ADVANCE(156);
      if (lookahead == 'R') ADVANCE(145);
      END_STATE();
    case 122:
      if (lookahead == 'I') ADVANCE(164);
      END_STATE();
    case 123:
      if (lookahead == 'I') ADVANCE(114);
      END_STATE();
    case 124:
      if (lookahead == 'I') ADVANCE(134);
      END_STATE();
    case 125:
      if (lookahead == 'I') ADVANCE(115);
      END_STATE();
    case 126:
      if (lookahead == 'I') ADVANCE(167);
      END_STATE();
    case 127:
      if (lookahead == 'I') ADVANCE(138);
      END_STATE();
    case 128:
      if (lookahead == 'I') ADVANCE(150);
      END_STATE();
    case 129:
      if (lookahead == 'J') ADVANCE(108);
      END_STATE();
    case 130:
      if (lookahead == 'K') ADVANCE(110);
      END_STATE();
    case 131:
      if (lookahead == 'K') ADVANCE(111);
      END_STATE();
    case 132:
      if (lookahead == 'L') ADVANCE(163);
      if (lookahead == 'N') ADVANCE(97);
      END_STATE();
    case 133:
      if (lookahead == 'L') ADVANCE(343);
      END_STATE();
    case 134:
      if (lookahead == 'L') ADVANCE(98);
      END_STATE();
    case 135:
      if (lookahead == 'L') ADVANCE(177);
      END_STATE();
    case 136:
      if (lookahead == 'L') ADVANCE(147);
      END_STATE();
    case 137:
      if (lookahead == 'L') ADVANCE(135);
      END_STATE();
    case 138:
      if (lookahead == 'L') ADVANCE(105);
      END_STATE();
    case 139:
      if (lookahead == 'M') ADVANCE(300);
      END_STATE();
    case 140:
      if (lookahead == 'M') ADVANCE(84);
      END_STATE();
    case 141:
      if (lookahead == 'N') ADVANCE(85);
      END_STATE();
    case 142:
      if (lookahead == 'N') ADVANCE(338);
      END_STATE();
    case 143:
      if (lookahead == 'N') ADVANCE(308);
      END_STATE();
    case 144:
      if (lookahead == 'N') ADVANCE(103);
      END_STATE();
    case 145:
      if (lookahead == 'O') ADVANCE(139);
      END_STATE();
    case 146:
      if (lookahead == 'O') ADVANCE(129);
      END_STATE();
    case 147:
      if (lookahead == 'O') ADVANCE(95);
      END_STATE();
    case 148:
      if (lookahead == 'O') ADVANCE(144);
      END_STATE();
    case 149:
      if (lookahead == 'O') ADVANCE(92);
      END_STATE();
    case 150:
      if (lookahead == 'O') ADVANCE(143);
      END_STATE();
    case 151:
      if (lookahead == 'O') ADVANCE(96);
      END_STATE();
    case 152:
      if (lookahead == 'P') ADVANCE(176);
      END_STATE();
    case 153:
      if (lookahead == 'R') ADVANCE(117);
      END_STATE();
    case 154:
      if (lookahead == 'R') ADVANCE(117);
      if (lookahead == 'S') ADVANCE(21);
      END_STATE();
    case 155:
      if (lookahead == 'R') ADVANCE(175);
      END_STATE();
    case 156:
      if (lookahead == 'R') ADVANCE(316);
      END_STATE();
    case 157:
      if (lookahead == 'R') ADVANCE(357);
      END_STATE();
    case 158:
      if (lookahead == 'R') ADVANCE(162);
      END_STATE();
    case 159:
      if (lookahead == 'R') ADVANCE(146);
      END_STATE();
    case 160:
      if (lookahead == 'R') ADVANCE(116);
      END_STATE();
    case 161:
      if (lookahead == 'R') ADVANCE(171);
      END_STATE();
    case 162:
      if (lookahead == 'S') ADVANCE(128);
      END_STATE();
    case 163:
      if (lookahead == 'S') ADVANCE(101);
      END_STATE();
    case 164:
      if (lookahead == 'T') ADVANCE(324);
      END_STATE();
    case 165:
      if (lookahead == 'T') ADVANCE(335);
      END_STATE();
    case 166:
      if (lookahead == 'T') ADVANCE(345);
      END_STATE();
    case 167:
      if (lookahead == 'T') ADVANCE(354);
      END_STATE();
    case 168:
      if (lookahead == 'T') ADVANCE(304);
      END_STATE();
    case 169:
      if (lookahead == 'T') ADVANCE(342);
      END_STATE();
    case 170:
      if (lookahead == 'T') ADVANCE(119);
      END_STATE();
    case 171:
      if (lookahead == 'T') ADVANCE(125);
      END_STATE();
    case 172:
      if (lookahead == 'U') ADVANCE(124);
      END_STATE();
    case 173:
      if (lookahead == 'U') ADVANCE(142);
      END_STATE();
    case 174:
      if (lookahead == 'V') ADVANCE(106);
      END_STATE();
    case 175:
      if (lookahead == 'Y') ADVANCE(348);
      END_STATE();
    case 176:
      if (lookahead == 'Y') ADVANCE(313);
      END_STATE();
    case 177:
      if (lookahead == 'Y') ADVANCE(351);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == 'c') ADVANCE(244);
      if (lookahead == 'l') ADVANCE(247);
      if (lookahead == 'p') ADVANCE(178);
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 185:
      if (lookahead == 'b') ADVANCE(183);
      END_STATE();
    case 186:
      if (lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(260);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(260);
      if (lookahead == 'p') ADVANCE(704);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(218);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(202);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(699);
      END_STATE();
    case 192:
      if (lookahead == 'd') ADVANCE(692);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(669);
      END_STATE();
    case 194:
      if (lookahead == 'd') ADVANCE(702);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == 'm') ADVANCE(242);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'p') ADVANCE(258);
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(695);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 211:
      if (lookahead == 'f') ADVANCE(252);
      END_STATE();
    case 212:
      if (lookahead == 'g') ADVANCE(199);
      END_STATE();
    case 213:
      if (lookahead == 'g') ADVANCE(267);
      END_STATE();
    case 214:
      if (lookahead == 'g') ADVANCE(206);
      END_STATE();
    case 215:
      if (lookahead == 'g') ADVANCE(233);
      if (lookahead == 'm') ADVANCE(242);
      if (lookahead == 'n') ADVANCE(243);
      if (lookahead == 'p') ADVANCE(257);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 216:
      if (lookahead == 'h') ADVANCE(707);
      END_STATE();
    case 217:
      if (lookahead == 'h') ADVANCE(701);
      END_STATE();
    case 218:
      if (lookahead == 'h') ADVANCE(198);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 220:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 226:
      if (lookahead == 'k') ADVANCE(80);
      END_STATE();
    case 227:
      if (lookahead == 'l') ADVANCE(700);
      END_STATE();
    case 228:
      if (lookahead == 'l') ADVANCE(687);
      END_STATE();
    case 229:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 230:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 231:
      if (lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 232:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 233:
      if (lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 234:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 235:
      if (lookahead == 'm') ADVANCE(698);
      END_STATE();
    case 236:
      if (lookahead == 'm') ADVANCE(255);
      END_STATE();
    case 237:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 238:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 239:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 240:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 241:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 244:
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 245:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 246:
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 248:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 249:
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 250:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 251:
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 252:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 253:
      if (lookahead == 'p') ADVANCE(249);
      END_STATE();
    case 254:
      if (lookahead == 'p') ADVANCE(266);
      END_STATE();
    case 255:
      if (lookahead == 'p') ADVANCE(251);
      END_STATE();
    case 256:
      if (lookahead == 'q') ADVANCE(278);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(696);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(693);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(703);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(684);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 279:
      if (lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 280:
      if (lookahead == 'v') ADVANCE(220);
      END_STATE();
    case 281:
      if (lookahead == 'v') ADVANCE(221);
      END_STATE();
    case 282:
      if (lookahead == 'v') ADVANCE(224);
      END_STATE();
    case 283:
      if (lookahead == 'w') ADVANCE(250);
      END_STATE();
    case 284:
      if (lookahead == 'w') ADVANCE(77);
      END_STATE();
    case 285:
      if (lookahead == 'y') ADVANCE(253);
      END_STATE();
    case 286:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(668);
      END_STATE();
    case 287:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 288:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 289:
      if (eof) ADVANCE(293);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(713);
      if (lookahead == '(') ADVANCE(666);
      if (lookahead == ')') ADVANCE(667);
      if (lookahead == '+') ADVANCE(665);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == ':') ADVANCE(307);
      if (lookahead == 'A') ADVANCE(154);
      if (lookahead == 'B') ADVANCE(172);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'E') ADVANCE(132);
      if (lookahead == 'F') ADVANCE(121);
      if (lookahead == 'G') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(107);
      if (lookahead == 'P') ADVANCE(159);
      if (lookahead == 'R') ADVANCE(173);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead == 'V') ADVANCE(109);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(658);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(289)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 290:
      if (eof) ADVANCE(293);
      if (lookahead == ' ') ADVANCE(672);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(667);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '=') ADVANCE(671);
      if (lookahead == 'A') ADVANCE(370);
      if (lookahead == 'F') ADVANCE(371);
      if (lookahead == 'P') ADVANCE(373);
      if (lookahead == 'V') ADVANCE(361);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(292)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 291:
      if (eof) ADVANCE(293);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(667);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(306);
      if (lookahead == ':') ADVANCE(377);
      if (lookahead == '=') ADVANCE(298);
      if (lookahead == '@') ADVANCE(378);
      if (lookahead == 'A') ADVANCE(370);
      if (lookahead == 'F') ADVANCE(371);
      if (lookahead == 'P') ADVANCE(373);
      if (lookahead == 'V') ADVANCE(361);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(292)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 292:
      if (eof) ADVANCE(293);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(667);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == 'A') ADVANCE(370);
      if (lookahead == 'F') ADVANCE(371);
      if (lookahead == 'P') ADVANCE(373);
      if (lookahead == 'V') ADVANCE(361);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(292)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_BUILD);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(99);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_CACHE);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_CACHE);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_CACHE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_END);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_FROMDOCKERFILE);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_GIT);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_CLONE);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_IF);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(123);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_LET);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_LET);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_RUN);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_SAVEARTIFACT);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_ASLOCAL);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_SAVEIMAGE);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_SET);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_TRY);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_WAIT);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_WAIT);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_WAIT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_WITHDOCKER);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == ')') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'J') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == ' ') ADVANCE(87);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == ' ') ADVANCE(100);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(435);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(444);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(445);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(430);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(464);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(432);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(438);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(392);
      if (lookahead == 'O') ADVANCE(414);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(425);
      if (lookahead == 'E') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(406);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'I') ADVANCE(423);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'C') ADVANCE(401);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'D') ADVANCE(321);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(333);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(379);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(311);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(420);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'F') ADVANCE(329);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'G') ADVANCE(296);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'H') ADVANCE(380);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'H') ADVANCE(396);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(419);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(411);
      if (lookahead == 'O') ADVANCE(417);
      if (lookahead == 'R') ADVANCE(412);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'N') ADVANCE(393);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(407);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(428);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'M') ADVANCE(301);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(393);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(339);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(390);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(408);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(417);
      if (lookahead == 'R') ADVANCE(412);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'P') ADVANCE(427);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(399);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(426);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(317);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'S') ADVANCE(394);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(325);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(336);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(346);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(355);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(400);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'U') ADVANCE(410);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'V') ADVANCE(395);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(349);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(314);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(352);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(436);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(457);
      if (lookahead == 'p') ADVANCE(431);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(471);
      if (lookahead == 'l') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(466);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(474);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(437);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(429);
      if (lookahead == 'p') ADVANCE(475);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(450);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(451);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(434);
      if (lookahead == 'p') ADVANCE(475);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'd') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(439);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(382);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(447);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(383);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(465);
      if (lookahead == 'h') ADVANCE(452);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(465);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(463);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'g') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'g') ADVANCE(469);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(701);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(441);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(443);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(460);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(476);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(455);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(442);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(462);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(456);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'm') ADVANCE(698);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'm') ADVANCE(675);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'n') ADVANCE(473);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(459);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(477);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(468);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'p') ADVANCE(467);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(461);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(448);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(453);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(458);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(696);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(449);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(472);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(386);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 't') ADVANCE(676);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 't') ADVANCE(446);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'u') ADVANCE(470);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'v') ADVANCE(454);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'w') ADVANCE(385);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_image_name);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '\f') ADVANCE(721);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(719);
      if (lookahead == '#') ADVANCE(481);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(482);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '\f') ADVANCE(725);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(482);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_image_digest);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(483);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_immediate_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '\f') ADVANCE(721);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(621);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == 'f') ADVANCE(682);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(558);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(578);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(557);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(551);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(624);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(566);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(613);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(577);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(647);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(553);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(508);
      if (lookahead == 'O') ADVANCE(531);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(543);
      if (lookahead == 'E') ADVANCE(539);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(523);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(521);
      if (lookahead == 'I') ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(544);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'C') ADVANCE(518);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D') ADVANCE(322);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(334);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(312);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(487);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(538);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(488);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'F') ADVANCE(330);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G') ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H') ADVANCE(489);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H') ADVANCE(511);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(537);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(528);
      if (lookahead == 'O') ADVANCE(534);
      if (lookahead == 'R') ADVANCE(529);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(540);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(536);
      if (lookahead == 'N') ADVANCE(509);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(524);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(547);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M') ADVANCE(302);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(509);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(340);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(505);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(525);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(534);
      if (lookahead == 'R') ADVANCE(529);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P') ADVANCE(546);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(516);
      if (lookahead == 'S') ADVANCE(486);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(318);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S') ADVANCE(486);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S') ADVANCE(510);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(326);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(337);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(347);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(356);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(517);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U') ADVANCE(527);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'V') ADVANCE(512);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'V') ADVANCE(514);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(350);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(315);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(353);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(599);
      if (lookahead == 'c') ADVANCE(584);
      if (lookahead == 'd') ADVANCE(588);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'k') ADVANCE(568);
      if (lookahead == 'p') ADVANCE(549);
      if (lookahead == 's') ADVANCE(656);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(639);
      if (lookahead == 'l') ADVANCE(550);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(646);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(627);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(635);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(630);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(612);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'b') ADVANCE(649);
      if (lookahead == 'p') ADVANCE(597);
      if (lookahead == 't') ADVANCE(552);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'b') ADVANCE(632);
      if (lookahead == 'k') ADVANCE(574);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(586);
      if (lookahead == 'i') ADVANCE(563);
      if (lookahead == 'p') ADVANCE(572);
      if (lookahead == 's') ADVANCE(587);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(585);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(567);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(669);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(677);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(688);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(502);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(623);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(655);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(686);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(565);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(561);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(644);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(633);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(625);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(573);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(498);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(617);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(622);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(620);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'k') ADVANCE(568);
      if (lookahead == 's') ADVANCE(656);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(681);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(706);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(569);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(571);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(636);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(606);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(670);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(607);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(555);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(650);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(610);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(640);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(602);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(614);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(642);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'k') ADVANCE(499);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(550);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(616);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(598);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(590);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(564);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(570);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(603);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(698);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(615);
      if (lookahead == 'o') ADVANCE(651);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(615);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(600);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(678);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(596);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(690);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(559);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(619);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(580);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(562);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(654);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(629);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(652);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(500);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(628);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(653);
      if (lookahead == 't') ADVANCE(637);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(604);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(491);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(501);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(680);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(583);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(560);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(605);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(579);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(589);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(554);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(643);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(593);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(582);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(696);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(691);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(689);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(641);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(648);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(496);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(645);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(595);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(683);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(697);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(576);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(637);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(638);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'u') ADVANCE(594);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'v') ADVANCE(592);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(708);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(611);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(497);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'x') ADVANCE(591);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'y') ADVANCE(608);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(195);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(661);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '\f') ADVANCE(725);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_version_major_minor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(668);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_allow_privileged);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_DASH_DASHbranch);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcache_DASHfrom);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_cache_hint);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchmod);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcompose);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_dir);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_DASH_DASHbuild_DASHarg);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_DASHf);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtarget);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_entrypoint);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_feature_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_force);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_DASH_DASHid);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_if_exists);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_keep_own);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_keep_ts);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_DASH_DASHload);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_DASH_DASHmount);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_network_none);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_no_cache);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_pass_args);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_persist);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_privileged);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_DASH_DASHpull);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_push);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsecret);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsep);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_DASH_DASHservice);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsharing);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_ssh);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_symlink_no_follow);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '\f') ADVANCE(722);
      if (lookahead == '\r') ADVANCE(710);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(710);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(710);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(712);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(712);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '\f') ADVANCE(723);
      if (lookahead == '\r') ADVANCE(714);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(714);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(714);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(716);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(716);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '\f') ADVANCE(721);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(717);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(718);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '\f') ADVANCE(721);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '\f') ADVANCE(722);
      if (lookahead == '\r') ADVANCE(710);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(710);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '\f') ADVANCE(723);
      if (lookahead == '\r') ADVANCE(714);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(714);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '\f') ADVANCE(725);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(726);
      if (lookahead == '\f') ADVANCE(736);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(665);
      if (lookahead == '-') ADVANCE(384);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '\f') ADVANCE(737);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(717);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(728);
      if (lookahead == '\f') ADVANCE(738);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == '+') ADVANCE(665);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(729);
      if (lookahead == '\f') ADVANCE(739);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(730);
      if (lookahead == '\f') ADVANCE(740);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_CRn);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(718);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(661);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(726);
      if (lookahead == '\f') ADVANCE(736);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(665);
      if (lookahead == '-') ADVANCE(384);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '\f') ADVANCE(737);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(717);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(728);
      if (lookahead == '\f') ADVANCE(738);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == '+') ADVANCE(665);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(729);
      if (lookahead == '\f') ADVANCE(739);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(730);
      if (lookahead == '\f') ADVANCE(740);
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
  [1] = {.lex_state = 291},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0, .external_lex_state = 2},
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
  [47] = {.lex_state = 35},
  [48] = {.lex_state = 33},
  [49] = {.lex_state = 34, .external_lex_state = 2},
  [50] = {.lex_state = 42, .external_lex_state = 2},
  [51] = {.lex_state = 41},
  [52] = {.lex_state = 43},
  [53] = {.lex_state = 40},
  [54] = {.lex_state = 36},
  [55] = {.lex_state = 36},
  [56] = {.lex_state = 36},
  [57] = {.lex_state = 36},
  [58] = {.lex_state = 36},
  [59] = {.lex_state = 43},
  [60] = {.lex_state = 40},
  [61] = {.lex_state = 40},
  [62] = {.lex_state = 44},
  [63] = {.lex_state = 44},
  [64] = {.lex_state = 44},
  [65] = {.lex_state = 40},
  [66] = {.lex_state = 40},
  [67] = {.lex_state = 44},
  [68] = {.lex_state = 42, .external_lex_state = 2},
  [69] = {.lex_state = 41},
  [70] = {.lex_state = 23},
  [71] = {.lex_state = 62},
  [72] = {.lex_state = 56},
  [73] = {.lex_state = 44},
  [74] = {.lex_state = 62},
  [75] = {.lex_state = 36},
  [76] = {.lex_state = 36},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 56},
  [79] = {.lex_state = 36},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 56},
  [82] = {.lex_state = 56},
  [83] = {.lex_state = 36},
  [84] = {.lex_state = 41},
  [85] = {.lex_state = 46, .external_lex_state = 2},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 45},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 43},
  [97] = {.lex_state = 46, .external_lex_state = 2},
  [98] = {.lex_state = 43},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 45},
  [101] = {.lex_state = 41},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 42, .external_lex_state = 2},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 42, .external_lex_state = 2},
  [107] = {.lex_state = 44},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 44},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 42, .external_lex_state = 2},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 47},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 46, .external_lex_state = 2},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 42, .external_lex_state = 2},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 46, .external_lex_state = 2},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 45},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 41},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 45},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 36, .external_lex_state = 2},
  [148] = {.lex_state = 41},
  [149] = {.lex_state = 36, .external_lex_state = 2},
  [150] = {.lex_state = 43},
  [151] = {.lex_state = 47},
  [152] = {.lex_state = 47},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 36, .external_lex_state = 2},
  [155] = {.lex_state = 47},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 36, .external_lex_state = 2},
  [158] = {.lex_state = 43},
  [159] = {.lex_state = 36, .external_lex_state = 2},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 65},
  [162] = {.lex_state = 64, .external_lex_state = 2},
  [163] = {.lex_state = 63},
  [164] = {.lex_state = 64, .external_lex_state = 2},
  [165] = {.lex_state = 46, .external_lex_state = 2},
  [166] = {.lex_state = 23, .external_lex_state = 2},
  [167] = {.lex_state = 30, .external_lex_state = 2},
  [168] = {.lex_state = 47},
  [169] = {.lex_state = 65},
  [170] = {.lex_state = 63},
  [171] = {.lex_state = 45},
  [172] = {.lex_state = 45},
  [173] = {.lex_state = 47},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 47},
  [177] = {.lex_state = 46, .external_lex_state = 2},
  [178] = {.lex_state = 36, .external_lex_state = 2},
  [179] = {.lex_state = 36, .external_lex_state = 2},
  [180] = {.lex_state = 36, .external_lex_state = 2},
  [181] = {.lex_state = 46, .external_lex_state = 2},
  [182] = {.lex_state = 36, .external_lex_state = 2},
  [183] = {.lex_state = 45},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 26},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 26},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 26},
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
  [225] = {.lex_state = 56},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 0, .external_lex_state = 2},
  [228] = {.lex_state = 26},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 2},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 0, .external_lex_state = 2},
  [236] = {.lex_state = 0, .external_lex_state = 2},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 26},
  [239] = {.lex_state = 30},
  [240] = {.lex_state = 30},
  [241] = {.lex_state = 30},
  [242] = {.lex_state = 30},
  [243] = {.lex_state = 56},
  [244] = {.lex_state = 6},
  [245] = {.lex_state = 56},
  [246] = {.lex_state = 56},
  [247] = {.lex_state = 56},
  [248] = {.lex_state = 6},
  [249] = {.lex_state = 56},
  [250] = {.lex_state = 30},
  [251] = {.lex_state = 56},
  [252] = {.lex_state = 6},
  [253] = {.lex_state = 8},
  [254] = {.lex_state = 26},
  [255] = {.lex_state = 8},
  [256] = {.lex_state = 8},
  [257] = {.lex_state = 8},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 8},
  [260] = {.lex_state = 26},
  [261] = {.lex_state = 26},
  [262] = {.lex_state = 26},
  [263] = {.lex_state = 8},
  [264] = {.lex_state = 26},
  [265] = {.lex_state = 291},
  [266] = {.lex_state = 8},
  [267] = {.lex_state = 291},
  [268] = {.lex_state = 37},
  [269] = {.lex_state = 37},
  [270] = {.lex_state = 37},
  [271] = {.lex_state = 8},
  [272] = {.lex_state = 37},
  [273] = {.lex_state = 37},
  [274] = {.lex_state = 37},
  [275] = {.lex_state = 37},
  [276] = {.lex_state = 291},
  [277] = {.lex_state = 58},
  [278] = {.lex_state = 37},
  [279] = {.lex_state = 58},
  [280] = {.lex_state = 58},
  [281] = {.lex_state = 58},
  [282] = {.lex_state = 58},
  [283] = {.lex_state = 291},
  [284] = {.lex_state = 291},
  [285] = {.lex_state = 291},
  [286] = {.lex_state = 59},
  [287] = {.lex_state = 290},
  [288] = {.lex_state = 59},
  [289] = {.lex_state = 37},
  [290] = {.lex_state = 37},
  [291] = {.lex_state = 291},
  [292] = {.lex_state = 59},
  [293] = {.lex_state = 291},
  [294] = {.lex_state = 59},
  [295] = {.lex_state = 59},
  [296] = {.lex_state = 291},
  [297] = {.lex_state = 291},
  [298] = {.lex_state = 291},
  [299] = {.lex_state = 291},
  [300] = {.lex_state = 291},
  [301] = {.lex_state = 29},
  [302] = {.lex_state = 291, .external_lex_state = 3},
  [303] = {.lex_state = 60},
  [304] = {.lex_state = 60},
  [305] = {.lex_state = 60},
  [306] = {.lex_state = 57},
  [307] = {.lex_state = 10},
  [308] = {.lex_state = 57},
  [309] = {.lex_state = 30},
  [310] = {.lex_state = 30},
  [311] = {.lex_state = 30},
  [312] = {.lex_state = 10},
  [313] = {.lex_state = 30},
  [314] = {.lex_state = 29},
  [315] = {.lex_state = 60},
  [316] = {.lex_state = 60},
  [317] = {.lex_state = 60},
  [318] = {.lex_state = 29},
  [319] = {.lex_state = 30},
  [320] = {.lex_state = 30},
  [321] = {.lex_state = 291},
  [322] = {.lex_state = 30},
  [323] = {.lex_state = 30},
  [324] = {.lex_state = 291},
  [325] = {.lex_state = 57},
  [326] = {.lex_state = 37},
  [327] = {.lex_state = 37},
  [328] = {.lex_state = 29},
  [329] = {.lex_state = 30},
  [330] = {.lex_state = 57},
  [331] = {.lex_state = 37},
  [332] = {.lex_state = 60},
  [333] = {.lex_state = 37},
  [334] = {.lex_state = 37},
  [335] = {.lex_state = 37},
  [336] = {.lex_state = 8},
  [337] = {.lex_state = 10},
  [338] = {.lex_state = 30},
  [339] = {.lex_state = 29},
  [340] = {.lex_state = 14},
  [341] = {.lex_state = 8},
  [342] = {.lex_state = 60},
  [343] = {.lex_state = 60},
  [344] = {.lex_state = 60},
  [345] = {.lex_state = 60},
  [346] = {.lex_state = 14},
  [347] = {.lex_state = 8},
  [348] = {.lex_state = 29},
  [349] = {.lex_state = 30},
  [350] = {.lex_state = 30},
  [351] = {.lex_state = 30},
  [352] = {.lex_state = 57},
  [353] = {.lex_state = 10},
  [354] = {.lex_state = 29},
  [355] = {.lex_state = 29},
  [356] = {.lex_state = 291},
  [357] = {.lex_state = 29},
  [358] = {.lex_state = 37},
  [359] = {.lex_state = 291},
  [360] = {.lex_state = 29},
  [361] = {.lex_state = 29},
  [362] = {.lex_state = 291},
  [363] = {.lex_state = 29},
  [364] = {.lex_state = 29},
  [365] = {.lex_state = 30},
  [366] = {.lex_state = 29},
  [367] = {.lex_state = 29},
  [368] = {.lex_state = 29},
  [369] = {.lex_state = 291},
  [370] = {.lex_state = 29},
  [371] = {.lex_state = 291},
  [372] = {.lex_state = 291},
  [373] = {.lex_state = 29},
  [374] = {.lex_state = 29},
  [375] = {.lex_state = 291},
  [376] = {.lex_state = 60},
  [377] = {.lex_state = 29},
  [378] = {.lex_state = 29},
  [379] = {.lex_state = 29},
  [380] = {.lex_state = 29},
  [381] = {.lex_state = 291},
  [382] = {.lex_state = 291},
  [383] = {.lex_state = 291},
  [384] = {.lex_state = 29},
  [385] = {.lex_state = 29},
  [386] = {.lex_state = 29},
  [387] = {.lex_state = 29},
  [388] = {.lex_state = 29},
  [389] = {.lex_state = 29},
  [390] = {.lex_state = 291},
  [391] = {.lex_state = 291},
  [392] = {.lex_state = 29},
  [393] = {.lex_state = 15},
  [394] = {.lex_state = 59},
  [395] = {.lex_state = 15},
  [396] = {.lex_state = 15},
  [397] = {.lex_state = 58},
  [398] = {.lex_state = 58},
  [399] = {.lex_state = 61},
  [400] = {.lex_state = 52},
  [401] = {.lex_state = 52},
  [402] = {.lex_state = 15},
  [403] = {.lex_state = 15},
  [404] = {.lex_state = 61},
  [405] = {.lex_state = 59},
  [406] = {.lex_state = 52},
  [407] = {.lex_state = 59},
  [408] = {.lex_state = 61},
  [409] = {.lex_state = 61},
  [410] = {.lex_state = 15},
  [411] = {.lex_state = 52},
  [412] = {.lex_state = 61},
  [413] = {.lex_state = 58},
  [414] = {.lex_state = 58},
  [415] = {.lex_state = 58},
  [416] = {.lex_state = 58},
  [417] = {.lex_state = 58},
  [418] = {.lex_state = 59},
  [419] = {.lex_state = 59},
  [420] = {.lex_state = 59},
  [421] = {.lex_state = 15},
  [422] = {.lex_state = 15},
  [423] = {.lex_state = 15},
  [424] = {.lex_state = 15},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 15},
  [427] = {.lex_state = 15},
  [428] = {.lex_state = 15},
  [429] = {.lex_state = 15},
  [430] = {.lex_state = 15},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 15},
  [433] = {.lex_state = 37},
  [434] = {.lex_state = 15},
  [435] = {.lex_state = 30},
  [436] = {.lex_state = 15},
  [437] = {.lex_state = 15},
  [438] = {.lex_state = 15},
  [439] = {.lex_state = 291},
  [440] = {.lex_state = 15},
  [441] = {.lex_state = 15},
  [442] = {.lex_state = 37},
  [443] = {.lex_state = 15},
  [444] = {.lex_state = 15},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 37},
  [447] = {.lex_state = 15},
  [448] = {.lex_state = 15},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 15},
  [451] = {.lex_state = 15},
  [452] = {.lex_state = 15},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 15},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 15},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 15},
  [459] = {.lex_state = 15},
  [460] = {.lex_state = 15},
  [461] = {.lex_state = 15},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 15},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 15},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 15},
  [468] = {.lex_state = 15},
  [469] = {.lex_state = 15},
  [470] = {.lex_state = 15},
  [471] = {.lex_state = 37},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 15},
  [474] = {.lex_state = 37},
  [475] = {.lex_state = 66},
  [476] = {.lex_state = 66},
  [477] = {.lex_state = 15},
  [478] = {.lex_state = 15},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 15},
  [481] = {.lex_state = 15},
  [482] = {.lex_state = 15},
  [483] = {.lex_state = 15},
  [484] = {.lex_state = 15},
  [485] = {.lex_state = 15},
  [486] = {.lex_state = 15},
  [487] = {.lex_state = 291},
  [488] = {.lex_state = 37},
  [489] = {.lex_state = 15},
  [490] = {.lex_state = 15},
  [491] = {.lex_state = 15},
  [492] = {.lex_state = 15},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 15},
  [495] = {.lex_state = 15},
  [496] = {.lex_state = 15},
  [497] = {.lex_state = 15},
  [498] = {.lex_state = 291},
  [499] = {.lex_state = 15},
  [500] = {.lex_state = 15},
  [501] = {.lex_state = 37},
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
  [516] = {.lex_state = 15},
  [517] = {.lex_state = 15},
  [518] = {.lex_state = 15},
  [519] = {.lex_state = 15},
  [520] = {.lex_state = 15},
  [521] = {.lex_state = 15},
  [522] = {.lex_state = 15},
  [523] = {.lex_state = 15},
  [524] = {.lex_state = 15},
  [525] = {.lex_state = 15},
  [526] = {.lex_state = 15},
  [527] = {.lex_state = 15},
  [528] = {.lex_state = 15},
  [529] = {.lex_state = 15},
  [530] = {.lex_state = 15},
  [531] = {.lex_state = 15},
  [532] = {.lex_state = 15},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 15},
  [535] = {.lex_state = 15},
  [536] = {.lex_state = 61},
  [537] = {.lex_state = 39},
  [538] = {.lex_state = 37},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 57},
  [542] = {.lex_state = 39},
  [543] = {.lex_state = 291},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 57},
  [546] = {.lex_state = 39},
  [547] = {.lex_state = 57},
  [548] = {.lex_state = 15},
  [549] = {.lex_state = 15},
  [550] = {.lex_state = 57},
  [551] = {.lex_state = 61},
  [552] = {.lex_state = 53},
  [553] = {.lex_state = 53},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 24},
  [558] = {.lex_state = 55},
  [559] = {.lex_state = 67},
  [560] = {.lex_state = 24},
  [561] = {.lex_state = 24},
  [562] = {.lex_state = 24},
  [563] = {.lex_state = 24},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 39},
  [567] = {.lex_state = 24},
  [568] = {.lex_state = 55},
  [569] = {.lex_state = 68},
  [570] = {.lex_state = 55},
  [571] = {.lex_state = 24},
  [572] = {.lex_state = 39},
  [573] = {.lex_state = 291},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 24},
  [577] = {.lex_state = 24},
  [578] = {.lex_state = 24},
  [579] = {.lex_state = 24},
  [580] = {.lex_state = 24},
  [581] = {.lex_state = 39},
  [582] = {.lex_state = 68},
  [583] = {.lex_state = 55},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 55},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 291},
  [590] = {.lex_state = 68},
  [591] = {.lex_state = 55},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 55},
  [595] = {.lex_state = 24},
  [596] = {.lex_state = 24},
  [597] = {.lex_state = 68},
  [598] = {.lex_state = 55},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 55},
  [602] = {.lex_state = 68},
  [603] = {.lex_state = 55},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 55},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 24},
  [624] = {.lex_state = 24},
  [625] = {.lex_state = 11},
  [626] = {.lex_state = 12},
  [627] = {.lex_state = 24},
  [628] = {.lex_state = 67},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 12},
  [631] = {.lex_state = 24},
  [632] = {.lex_state = 11},
  [633] = {.lex_state = 37},
  [634] = {.lex_state = 24},
  [635] = {.lex_state = 24},
  [636] = {.lex_state = 55},
  [637] = {.lex_state = 37},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 39},
  [640] = {.lex_state = 68},
  [641] = {.lex_state = 24},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 37},
  [644] = {.lex_state = 67},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 37},
  [648] = {.lex_state = 67},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 37},
  [651] = {.lex_state = 67},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 67},
  [654] = {.lex_state = 39},
  [655] = {.lex_state = 24},
  [656] = {.lex_state = 55},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 67},
  [660] = {.lex_state = 68},
  [661] = {.lex_state = 67},
  [662] = {.lex_state = 55},
  [663] = {.lex_state = 67},
  [664] = {.lex_state = 37},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 24},
  [667] = {.lex_state = 11},
  [668] = {.lex_state = 12},
  [669] = {.lex_state = 24},
  [670] = {.lex_state = 11},
  [671] = {.lex_state = 12},
  [672] = {.lex_state = 24},
  [673] = {.lex_state = 11},
  [674] = {.lex_state = 12},
  [675] = {.lex_state = 11},
  [676] = {.lex_state = 12},
  [677] = {.lex_state = 11},
  [678] = {.lex_state = 12},
  [679] = {.lex_state = 11},
  [680] = {.lex_state = 12},
  [681] = {.lex_state = 11},
  [682] = {.lex_state = 12},
  [683] = {.lex_state = 11},
  [684] = {.lex_state = 12},
  [685] = {.lex_state = 11},
  [686] = {.lex_state = 12},
  [687] = {.lex_state = 11},
  [688] = {.lex_state = 12},
  [689] = {.lex_state = 11},
  [690] = {.lex_state = 12},
  [691] = {.lex_state = 11},
  [692] = {.lex_state = 12},
  [693] = {.lex_state = 11},
  [694] = {.lex_state = 12},
  [695] = {.lex_state = 67},
  [696] = {.lex_state = 37},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 39},
  [700] = {.lex_state = 291},
  [701] = {.lex_state = 291},
  [702] = {.lex_state = 67},
  [703] = {.lex_state = 24},
  [704] = {.lex_state = 67},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 67},
  [707] = {.lex_state = 39},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 67},
  [710] = {.lex_state = 67},
  [711] = {.lex_state = 67},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 37},
  [714] = {.lex_state = 37},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 32},
  [719] = {.lex_state = 67},
  [720] = {.lex_state = 291},
  [721] = {.lex_state = 37},
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
    [anon_sym_CACHE] = ACTIONS(1),
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
    [sym_source_file] = STATE(716),
    [sym_arg_command] = STATE(267),
    [sym_from_command] = STATE(267),
    [sym_project_command] = STATE(267),
    [sym_target] = STATE(267),
    [sym_version_command] = STATE(267),
    [aux_sym_source_file_repeat1] = STATE(267),
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
  [0] = 21,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_ELSE,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(43), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(45), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(29), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(4), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [82] = 21,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(43), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(45), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(57), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(55), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(5), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [164] = 21,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(43), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(45), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(61), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(59), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(6), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [246] = 21,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(43), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(45), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(65), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(63), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(6), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [328] = 21,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(67), 1,
      anon_sym_ARG,
    ACTIONS(70), 1,
      anon_sym_FROM,
    ACTIONS(73), 1,
      anon_sym_CACHE,
    ACTIONS(76), 1,
      anon_sym_COPY,
    ACTIONS(79), 1,
      anon_sym_FOR,
    ACTIONS(84), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(87), 1,
      anon_sym_GIT,
    ACTIONS(90), 1,
      anon_sym_IF,
    ACTIONS(93), 1,
      anon_sym_ELSE,
    ACTIONS(95), 1,
      anon_sym_LET,
    ACTIONS(98), 1,
      anon_sym_RUN,
    ACTIONS(101), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(104), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(107), 1,
      anon_sym_SET,
    ACTIONS(110), 1,
      anon_sym_TRY,
    ACTIONS(113), 1,
      anon_sym_WAIT,
    ACTIONS(116), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(82), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(6), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [410] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(119), 1,
      anon_sym_END,
    ACTIONS(121), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(123), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [488] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(121), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(123), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(125), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [566] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(127), 1,
      anon_sym_ARG,
    ACTIONS(129), 1,
      anon_sym_FROM,
    ACTIONS(131), 1,
      anon_sym_CACHE,
    ACTIONS(133), 1,
      anon_sym_COPY,
    ACTIONS(135), 1,
      anon_sym_FOR,
    ACTIONS(137), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(139), 1,
      anon_sym_GIT,
    ACTIONS(141), 1,
      anon_sym_IF,
    ACTIONS(143), 1,
      anon_sym_LET,
    ACTIONS(145), 1,
      anon_sym_RUN,
    ACTIONS(147), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(149), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(151), 1,
      anon_sym_SET,
    ACTIONS(153), 1,
      anon_sym_TRY,
    ACTIONS(155), 1,
      anon_sym_WAIT,
    ACTIONS(157), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(159), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(34), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [644] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(67), 1,
      anon_sym_ARG,
    ACTIONS(70), 1,
      anon_sym_FROM,
    ACTIONS(73), 1,
      anon_sym_CACHE,
    ACTIONS(76), 1,
      anon_sym_COPY,
    ACTIONS(79), 1,
      anon_sym_FOR,
    ACTIONS(82), 1,
      anon_sym_FINALLY,
    ACTIONS(84), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(87), 1,
      anon_sym_GIT,
    ACTIONS(90), 1,
      anon_sym_IF,
    ACTIONS(95), 1,
      anon_sym_LET,
    ACTIONS(98), 1,
      anon_sym_RUN,
    ACTIONS(107), 1,
      anon_sym_SET,
    ACTIONS(110), 1,
      anon_sym_TRY,
    ACTIONS(113), 1,
      anon_sym_WAIT,
    ACTIONS(116), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(161), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(164), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(10), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [722] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(121), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(123), 1,
      anon_sym_SAVEIMAGE,
    STATE(657), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(7), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [800] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(121), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(123), 1,
      anon_sym_SAVEIMAGE,
    STATE(697), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(7), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [878] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(121), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(123), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(167), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [956] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(121), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(123), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(169), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(36), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [1034] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(121), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(123), 1,
      anon_sym_SAVEIMAGE,
    STATE(652), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(7), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [1112] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(171), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(173), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(175), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(10), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [1190] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(67), 1,
      anon_sym_ARG,
    ACTIONS(70), 1,
      anon_sym_FROM,
    ACTIONS(73), 1,
      anon_sym_CACHE,
    ACTIONS(76), 1,
      anon_sym_COPY,
    ACTIONS(79), 1,
      anon_sym_FOR,
    ACTIONS(82), 1,
      anon_sym_END,
    ACTIONS(84), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(87), 1,
      anon_sym_GIT,
    ACTIONS(90), 1,
      anon_sym_IF,
    ACTIONS(95), 1,
      anon_sym_LET,
    ACTIONS(98), 1,
      anon_sym_RUN,
    ACTIONS(107), 1,
      anon_sym_SET,
    ACTIONS(110), 1,
      anon_sym_TRY,
    ACTIONS(113), 1,
      anon_sym_WAIT,
    ACTIONS(116), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(177), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(180), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [1268] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(82), 1,
      sym__dedent,
    ACTIONS(183), 1,
      anon_sym_ARG,
    ACTIONS(186), 1,
      anon_sym_FROM,
    ACTIONS(189), 1,
      anon_sym_CACHE,
    ACTIONS(192), 1,
      anon_sym_COPY,
    ACTIONS(195), 1,
      anon_sym_FOR,
    ACTIONS(198), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(201), 1,
      anon_sym_GIT,
    ACTIONS(204), 1,
      anon_sym_IF,
    ACTIONS(207), 1,
      anon_sym_LET,
    ACTIONS(210), 1,
      anon_sym_RUN,
    ACTIONS(213), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(216), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(219), 1,
      anon_sym_SET,
    ACTIONS(222), 1,
      anon_sym_TRY,
    ACTIONS(225), 1,
      anon_sym_WAIT,
    ACTIONS(228), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(18), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [1346] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(121), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(123), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(231), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [1424] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(121), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(123), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(233), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [1502] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(171), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(173), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(235), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(23), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [1580] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(121), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(123), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(237), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [1658] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(171), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(173), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(239), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(10), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [1736] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(121), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(123), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(241), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(13), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [1814] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(121), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(123), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(243), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(22), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [1892] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(171), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(173), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(245), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(16), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [1970] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(121), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(123), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(247), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [2048] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(121), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(123), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(249), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(8), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [2126] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(121), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(123), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(251), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(27), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [2204] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(121), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(123), 1,
      anon_sym_SAVEIMAGE,
    STATE(708), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(7), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [2282] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(121), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(123), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(253), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [2360] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(121), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(123), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(255), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [2438] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(121), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(123), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(257), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(20), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [2516] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(127), 1,
      anon_sym_ARG,
    ACTIONS(129), 1,
      anon_sym_FROM,
    ACTIONS(131), 1,
      anon_sym_CACHE,
    ACTIONS(133), 1,
      anon_sym_COPY,
    ACTIONS(135), 1,
      anon_sym_FOR,
    ACTIONS(137), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(139), 1,
      anon_sym_GIT,
    ACTIONS(141), 1,
      anon_sym_IF,
    ACTIONS(143), 1,
      anon_sym_LET,
    ACTIONS(145), 1,
      anon_sym_RUN,
    ACTIONS(147), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(149), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(151), 1,
      anon_sym_SET,
    ACTIONS(153), 1,
      anon_sym_TRY,
    ACTIONS(155), 1,
      anon_sym_WAIT,
    ACTIONS(157), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(259), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(18), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [2594] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(121), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(123), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(261), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(39), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [2672] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(121), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(123), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(263), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [2750] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(121), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(123), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(265), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(40), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [2828] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(121), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(123), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(267), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(19), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [2906] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(121), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(123), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(269), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [2984] = 20,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_GIT,
    ACTIONS(35), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_LET,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SET,
    ACTIONS(49), 1,
      anon_sym_TRY,
    ACTIONS(51), 1,
      anon_sym_WAIT,
    ACTIONS(53), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(121), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(123), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(271), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 17,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
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
  [3062] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(277), 1,
      anon_sym_COLON2,
    ACTIONS(279), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(275), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(273), 24,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [3106] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(285), 1,
      sym_image_name,
    ACTIONS(287), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(289), 1,
      sym_cache_hint,
    ACTIONS(291), 1,
      sym_push,
    STATE(44), 1,
      aux_sym_save_image_command_repeat1,
    STATE(60), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(62), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(283), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(281), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [3159] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(297), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(295), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(293), 24,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [3200] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(285), 1,
      sym_image_name,
    ACTIONS(287), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(291), 1,
      sym_push,
    STATE(53), 1,
      aux_sym_save_image_command_repeat1,
    STATE(60), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(63), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(301), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(299), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [3250] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(305), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(303), 24,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [3288] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(309), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(307), 24,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [3326] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(289), 1,
      sym_cache_hint,
    ACTIONS(311), 1,
      sym_image_name,
    ACTIONS(313), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(315), 1,
      sym_push,
    STATE(52), 1,
      aux_sym_save_image_command_repeat1,
    STATE(158), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(155), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(283), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(281), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [3377] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(289), 1,
      sym_cache_hint,
    ACTIONS(317), 1,
      sym_image_name,
    ACTIONS(319), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(321), 1,
      sym_push,
    STATE(51), 1,
      aux_sym_save_image_command_repeat1,
    STATE(148), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(145), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(283), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(281), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [3428] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(323), 1,
      sym_image_name,
    ACTIONS(325), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(327), 1,
      sym_cache_hint,
    ACTIONS(329), 1,
      sym_push,
    STATE(50), 1,
      aux_sym_save_image_command_repeat1,
    STATE(128), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(130), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(283), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(281), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [3479] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(323), 1,
      sym_image_name,
    ACTIONS(325), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(329), 1,
      sym_push,
    STATE(68), 1,
      aux_sym_save_image_command_repeat1,
    STATE(128), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(85), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(301), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(299), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [3527] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(317), 1,
      sym_image_name,
    ACTIONS(319), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(321), 1,
      sym_push,
    STATE(69), 1,
      aux_sym_save_image_command_repeat1,
    STATE(148), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(100), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(301), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(299), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [3575] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(311), 1,
      sym_image_name,
    ACTIONS(313), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(315), 1,
      sym_push,
    STATE(59), 1,
      aux_sym_save_image_command_repeat1,
    STATE(158), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(152), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(301), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(299), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [3623] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(335), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(338), 1,
      sym_push,
    STATE(53), 1,
      aux_sym_save_image_command_repeat1,
    STATE(60), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(333), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(331), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [3667] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(345), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(343), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(55), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(341), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [3706] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(345), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(349), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(58), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(347), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [3745] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(345), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(353), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(57), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(351), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [3784] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(345), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(357), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(58), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(355), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [3823] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(363), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(361), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(58), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(359), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [3862] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(366), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(369), 1,
      sym_push,
    STATE(59), 1,
      aux_sym_save_image_command_repeat1,
    STATE(158), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(333), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(331), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [3904] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(374), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(372), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [3938] = 4,
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
    ACTIONS(376), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [3972] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(285), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(64), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(382), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(380), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [4010] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(285), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(64), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(386), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(384), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [4048] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(392), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(64), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(390), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(388), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [4086] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(397), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(395), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [4120] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(401), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(399), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [4154] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(403), 1,
      anon_sym_COLON2,
    ACTIONS(405), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(273), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(275), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [4192] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(407), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(410), 1,
      sym_push,
    STATE(68), 1,
      aux_sym_save_image_command_repeat1,
    STATE(128), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(333), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(331), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [4234] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(413), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(416), 1,
      sym_push,
    STATE(69), 1,
      aux_sym_save_image_command_repeat1,
    STATE(148), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(333), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(331), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [4276] = 3,
    ACTIONS(421), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(419), 21,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [4308] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(427), 1,
      anon_sym_ASLOCAL,
    ACTIONS(429), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(425), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(423), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [4345] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(431), 1,
      sym_path,
    ACTIONS(433), 1,
      anon_sym_PLUS,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(441), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(443), 1,
      anon_sym_DASH_DASHplatform,
    STATE(81), 1,
      aux_sym_copy_command_repeat1,
    STATE(330), 1,
      aux_sym_copy_command_repeat2,
    STATE(564), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(550), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(247), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(437), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [4398] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(445), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(293), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(295), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [4433] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(451), 1,
      anon_sym_ASLOCAL,
    ACTIONS(453), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(449), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(447), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [4470] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(457), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(455), 19,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [4503] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(461), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(459), 19,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [4536] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(467), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(465), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(463), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [4571] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(431), 1,
      sym_path,
    ACTIONS(433), 1,
      anon_sym_PLUS,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(441), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(443), 1,
      anon_sym_DASH_DASHplatform,
    STATE(82), 1,
      aux_sym_copy_command_repeat1,
    STATE(325), 1,
      aux_sym_copy_command_repeat2,
    STATE(564), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(550), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(247), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(437), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [4624] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(376), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(378), 19,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [4657] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(473), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(471), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(469), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [4692] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(431), 1,
      sym_path,
    ACTIONS(433), 1,
      anon_sym_PLUS,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(441), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(443), 1,
      anon_sym_DASH_DASHplatform,
    STATE(225), 1,
      aux_sym_copy_command_repeat1,
    STATE(306), 1,
      aux_sym_copy_command_repeat2,
    STATE(564), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(550), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(247), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(437), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [4745] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(431), 1,
      sym_path,
    ACTIONS(433), 1,
      anon_sym_PLUS,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(441), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(443), 1,
      anon_sym_DASH_DASHplatform,
    STATE(225), 1,
      aux_sym_copy_command_repeat1,
    STATE(308), 1,
      aux_sym_copy_command_repeat2,
    STATE(564), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(550), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(247), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(437), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [4798] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(399), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(401), 19,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [4831] = 4,
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
    ACTIONS(376), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [4863] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(323), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(122), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(386), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(384), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [4899] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(477), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(475), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [4931] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(481), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(479), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [4963] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(485), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(483), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [4995] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(489), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(487), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [5027] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(493), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(491), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [5059] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(495), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(91), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(390), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(388), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [5095] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(500), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(498), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [5127] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(504), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(502), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [5159] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(508), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(506), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [5191] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(512), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(510), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [5223] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(401), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(399), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [5255] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(514), 1,
      anon_sym_COLON2,
    ACTIONS(516), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(273), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(275), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [5291] = 4,
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
    ACTIONS(376), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [5323] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(343), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(341), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [5355] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(317), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(91), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(386), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(384), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [5391] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(401), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(399), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [5423] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(520), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(518), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [5455] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(524), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(522), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [5487] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(401), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(399), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [5519] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(528), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(526), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [5551] = 4,
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
    ACTIONS(376), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [5583] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(303), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(305), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [5615] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(532), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(530), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [5647] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(536), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(534), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [5679] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(307), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(309), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [5711] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(540), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(538), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [5743] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(544), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(542), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [5775] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(397), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(395), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [5807] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(548), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(546), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [5839] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(552), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(550), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [5871] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(556), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(554), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [5903] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(560), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(558), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [5935] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(562), 1,
      anon_sym_COLON2,
    ACTIONS(564), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(273), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(275), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [5971] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(568), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(566), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [6003] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(572), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(570), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [6035] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(576), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(574), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [6067] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(578), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(122), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(390), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(388), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [6103] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(583), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(581), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [6135] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(587), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(585), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [6167] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(591), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(589), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [6199] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(595), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(593), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [6231] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(599), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(597), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [6263] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(374), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(372), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [6295] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(603), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(601), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [6327] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(323), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(122), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(382), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(380), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [6363] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(607), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(605), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [6395] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(611), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(609), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [6427] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(613), 1,
      anon_sym_COLON2,
    ACTIONS(615), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(273), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(275), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [6463] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(619), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(617), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [6495] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(623), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(621), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [6527] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(627), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(625), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [6559] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(631), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(629), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [6591] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(635), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(633), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [6623] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(639), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(637), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [6655] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(643), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(641), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [6687] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(397), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(395), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [6719] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(647), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(645), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [6751] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(651), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(649), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [6783] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(655), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(653), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [6815] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(317), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(91), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(382), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(380), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [6851] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(659), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(657), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [6883] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(343), 1,
      anon_sym_FROM,
    ACTIONS(661), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(149), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(341), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [6919] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(374), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(372), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [6951] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(349), 1,
      anon_sym_FROM,
    ACTIONS(661), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(157), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(347), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [6987] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(397), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(395), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [7019] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(663), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(151), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(390), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(388), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [7055] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(311), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(151), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(386), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(384), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [7091] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(668), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(666), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [7123] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(353), 1,
      anon_sym_FROM,
    ACTIONS(661), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(159), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(351), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [7159] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(311), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(151), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(382), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(380), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [7195] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(672), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(670), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [7227] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(361), 1,
      anon_sym_FROM,
    ACTIONS(674), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(157), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(359), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [7263] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(374), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(372), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [7295] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(357), 1,
      anon_sym_FROM,
    ACTIONS(661), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(157), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(355), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [7331] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(679), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(677), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [7363] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(451), 1,
      anon_sym_ASLOCAL,
    ACTIONS(453), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(449), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(447), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [7398] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(681), 1,
      anon_sym_ASLOCAL,
    ACTIONS(683), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(425), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(423), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [7433] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(427), 1,
      anon_sym_ASLOCAL,
    ACTIONS(429), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(425), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(423), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [7468] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(685), 1,
      anon_sym_ASLOCAL,
    ACTIONS(687), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(449), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(447), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [7503] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(689), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(293), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(295), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [7536] = 4,
    ACTIONS(691), 1,
      aux_sym_branch_token1,
    ACTIONS(693), 1,
      sym__dedent,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(419), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [7567] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(275), 1,
      anon_sym_FROM,
    ACTIONS(695), 1,
      anon_sym_COLON2,
    ACTIONS(697), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(273), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [7602] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(699), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(293), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(295), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [7635] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(427), 1,
      anon_sym_ASLOCAL,
    ACTIONS(429), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(425), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(423), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [7670] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(451), 1,
      anon_sym_ASLOCAL,
    ACTIONS(453), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(449), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(447), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [7705] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(701), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(293), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(295), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [7738] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(303), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(305), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [7768] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(303), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(305), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [7798] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(465), 1,
      anon_sym_FROM,
    ACTIONS(703), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(463), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [7830] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(471), 1,
      anon_sym_FROM,
    ACTIONS(705), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(469), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [7862] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(307), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(309), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [7892] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(307), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(309), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [7922] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(457), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(455), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [7952] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(461), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(459), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [7982] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(376), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(378), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8012] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(303), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(305), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [8042] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(399), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(401), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8072] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(307), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(309), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
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
  [8102] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(295), 1,
      anon_sym_FROM,
    ACTIONS(707), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(293), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8134] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(635), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(633), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8163] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(536), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(534), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8192] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(709), 1,
      anon_sym_DASH_DASH,
    ACTIONS(713), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(717), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(719), 1,
      anon_sym_DASH_DASHsecret,
    STATE(238), 1,
      aux_sym_run_command_repeat1,
    STATE(340), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(528), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(711), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(254), 2,
      sym_mount,
      sym_secret,
    ACTIONS(715), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [8237] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(595), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(593), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8266] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(548), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(546), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8295] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(591), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(589), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8324] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(552), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(550), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8353] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(713), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(717), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(719), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(721), 1,
      anon_sym_DASH_DASH,
    STATE(187), 1,
      aux_sym_run_command_repeat1,
    STATE(340), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(517), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(711), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(254), 2,
      sym_mount,
      sym_secret,
    ACTIONS(715), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [8398] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(611), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(609), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8427] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(679), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(677), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8456] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(556), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(554), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8485] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(568), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(566), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8514] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(572), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(570), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8543] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(560), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(558), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8572] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(576), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(574), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8601] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(587), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(585), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8630] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(309), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(307), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8659] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(713), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(717), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(719), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(723), 1,
      anon_sym_DASH_DASH,
    STATE(238), 1,
      aux_sym_run_command_repeat1,
    STATE(340), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(450), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(711), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(254), 2,
      sym_mount,
      sym_secret,
    ACTIONS(715), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [8704] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(524), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(522), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8733] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(599), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(597), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8762] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(540), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(538), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8791] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(603), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(601), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8820] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(607), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(605), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8849] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(619), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(617), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8878] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(623), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(621), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8907] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(528), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(526), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8936] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(627), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(625), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8965] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(305), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(303), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [8994] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(631), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(629), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [9023] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(643), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(641), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [9052] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(672), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(670), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [9081] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(639), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(637), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [9110] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(532), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(530), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [9139] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(544), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(542), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [9168] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(520), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(518), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [9197] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(343), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(341), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [9226] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(583), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(581), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [9255] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(477), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(475), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [9284] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(647), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(645), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [9313] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(512), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(510), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [9342] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(725), 1,
      sym_path,
    ACTIONS(732), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(735), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(738), 1,
      anon_sym_DASH_DASHplatform,
    STATE(225), 1,
      aux_sym_copy_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(727), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    STATE(247), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(729), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [9383] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(668), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(666), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [9412] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(651), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(649), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [9441] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(713), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(717), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(719), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(741), 1,
      anon_sym_DASH_DASH,
    STATE(202), 1,
      aux_sym_run_command_repeat1,
    STATE(340), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(477), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(711), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(254), 2,
      sym_mount,
      sym_secret,
    ACTIONS(715), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [9486] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(508), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(506), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [9515] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(655), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(653), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [9544] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(504), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(502), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [9573] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(659), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(657), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [9602] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(500), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(498), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [9631] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(493), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(491), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [9660] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(489), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(487), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [9689] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(481), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(479), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [9718] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(485), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(483), 16,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
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
  [9747] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(750), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(753), 1,
      anon_sym_DASH_DASHsecret,
    STATE(238), 1,
      aux_sym_run_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(743), 2,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
    ACTIONS(745), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(254), 2,
      sym_mount,
      sym_secret,
    ACTIONS(747), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [9784] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(756), 1,
      sym_allow_privileged,
    ACTIONS(758), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(760), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(762), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(764), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(766), 1,
      anon_sym_DASH_DASHservice,
    STATE(240), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(642), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(351), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [9826] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(756), 1,
      sym_allow_privileged,
    ACTIONS(758), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(760), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(762), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(764), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(766), 1,
      anon_sym_DASH_DASHservice,
    STATE(250), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(649), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(351), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [9868] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(756), 1,
      sym_allow_privileged,
    ACTIONS(758), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(760), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(762), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(764), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(766), 1,
      anon_sym_DASH_DASHservice,
    STATE(250), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(665), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(351), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [9910] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(41), 1,
      anon_sym_RUN,
    ACTIONS(756), 1,
      sym_allow_privileged,
    ACTIONS(758), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(760), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(762), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(764), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(766), 1,
      anon_sym_DASH_DASHservice,
    STATE(241), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(629), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(351), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [9952] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(768), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(770), 12,
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
  [9977] = 10,
    ACTIONS(772), 1,
      sym_image_name,
    ACTIONS(774), 1,
      anon_sym_PLUS,
    ACTIONS(778), 1,
      anon_sym_DASH_DASHplatform,
    STATE(147), 1,
      sym_target_ref,
    STATE(319), 1,
      aux_sym_from_command_repeat1,
    STATE(435), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(776), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(220), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(780), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10014] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(399), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(401), 12,
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
  [10039] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(376), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(378), 12,
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
  [10064] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(782), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(784), 12,
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
  [10089] = 10,
    ACTIONS(778), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(786), 1,
      sym_image_name,
    ACTIONS(788), 1,
      anon_sym_PLUS,
    STATE(293), 1,
      sym_target_ref,
    STATE(320), 1,
      aux_sym_from_command_repeat1,
    STATE(435), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(776), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(359), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(790), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10126] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(792), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(794), 12,
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
  [10151] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(796), 1,
      anon_sym_RUN,
    ACTIONS(798), 1,
      sym_allow_privileged,
    ACTIONS(801), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(804), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(807), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(810), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(813), 1,
      anon_sym_DASH_DASHservice,
    STATE(250), 1,
      aux_sym_with_docker_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(351), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [10190] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(816), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(818), 12,
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
  [10215] = 10,
    ACTIONS(778), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(820), 1,
      sym_image_name,
    ACTIONS(822), 1,
      anon_sym_PLUS,
    STATE(54), 1,
      sym_target_ref,
    STATE(349), 1,
      aux_sym_from_command_repeat1,
    STATE(435), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(776), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(99), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(824), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10252] = 8,
    ACTIONS(828), 1,
      anon_sym_DQUOTE,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    STATE(35), 1,
      sym__eol,
    STATE(263), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(826), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(336), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(832), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10284] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(836), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(834), 10,
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
  [10308] = 8,
    ACTIONS(828), 1,
      anon_sym_DQUOTE,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    STATE(24), 1,
      sym__eol,
    STATE(256), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(826), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(336), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(838), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10340] = 8,
    ACTIONS(828), 1,
      anon_sym_DQUOTE,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    STATE(37), 1,
      sym__eol,
    STATE(271), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(826), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(336), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(840), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10372] = 8,
    ACTIONS(828), 1,
      anon_sym_DQUOTE,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      sym__eol,
    STATE(271), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(826), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(336), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(842), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10404] = 8,
    ACTIONS(828), 1,
      anon_sym_DQUOTE,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym__eol,
    STATE(266), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(826), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(336), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(844), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10436] = 8,
    ACTIONS(828), 1,
      anon_sym_DQUOTE,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    STATE(32), 1,
      sym__eol,
    STATE(257), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(826), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(336), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(846), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10468] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(850), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(848), 10,
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
  [10492] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(399), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(401), 10,
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
  [10516] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(854), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(852), 10,
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
  [10540] = 8,
    ACTIONS(828), 1,
      anon_sym_DQUOTE,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    STATE(38), 1,
      sym__eol,
    STATE(271), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(826), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(336), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(856), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10572] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(376), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(378), 10,
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
  [10596] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(858), 1,
      ts_builtin_sym_end,
    ACTIONS(860), 1,
      anon_sym_ARG,
    ACTIONS(863), 1,
      anon_sym_FROM,
    ACTIONS(866), 1,
      anon_sym_PROJECT,
    ACTIONS(869), 1,
      anon_sym_VERSION,
    ACTIONS(872), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(265), 6,
      sym_arg_command,
      sym_from_command,
      sym_project_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [10630] = 8,
    ACTIONS(828), 1,
      anon_sym_DQUOTE,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    STATE(25), 1,
      sym__eol,
    STATE(271), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(826), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(336), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(875), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10662] = 9,
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
    ACTIONS(877), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(265), 6,
      sym_arg_command,
      sym_from_command,
      sym_project_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [10696] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(879), 1,
      sym_identifier,
    ACTIONS(881), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(885), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(887), 1,
      anon_sym_DASH_DASHsep,
    STATE(272), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(883), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(335), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [10729] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(881), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(885), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(887), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(889), 1,
      sym_identifier,
    STATE(270), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(883), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(335), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [10762] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(881), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(885), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(887), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(891), 1,
      sym_identifier,
    STATE(273), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(883), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(335), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [10795] = 7,
    ACTIONS(896), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 1,
      anon_sym_SQUOTE,
    STATE(271), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(893), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(336), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(902), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10824] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(881), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(885), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(887), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(904), 1,
      sym_identifier,
    STATE(273), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(883), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(335), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [10857] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(906), 1,
      sym_identifier,
    ACTIONS(908), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(914), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(917), 1,
      anon_sym_DASH_DASHsep,
    STATE(273), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(911), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(335), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [10890] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(881), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(885), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(920), 1,
      sym_identifier,
    STATE(290), 1,
      aux_sym__conditional_block_repeat1,
    STATE(539), 1,
      sym_else_if_block,
    STATE(540), 1,
      sym__conditional_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(358), 2,
      sym_mount,
      sym_secret,
    ACTIONS(922), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [10925] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(881), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(885), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(920), 1,
      sym_identifier,
    STATE(290), 1,
      aux_sym__conditional_block_repeat1,
    STATE(466), 1,
      sym__conditional_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(358), 2,
      sym_mount,
      sym_secret,
    ACTIONS(922), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [10957] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(924), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(359), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(276), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(361), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10983] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(927), 1,
      sym_path,
    ACTIONS(929), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(931), 1,
      anon_sym_DASHf,
    ACTIONS(933), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(935), 1,
      anon_sym_DASH_DASHplatform,
    STATE(280), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(415), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [11015] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(881), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(885), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(920), 1,
      sym_identifier,
    STATE(290), 1,
      aux_sym__conditional_block_repeat1,
    STATE(479), 1,
      sym__conditional_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(358), 2,
      sym_mount,
      sym_secret,
    ACTIONS(922), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [11047] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(929), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(931), 1,
      anon_sym_DASHf,
    ACTIONS(933), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(935), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(937), 1,
      sym_path,
    STATE(281), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(415), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [11079] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(929), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(931), 1,
      anon_sym_DASHf,
    ACTIONS(933), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(935), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(939), 1,
      sym_path,
    STATE(282), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(415), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [11111] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(929), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(931), 1,
      anon_sym_DASHf,
    ACTIONS(933), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(935), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(941), 1,
      sym_path,
    STATE(282), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(415), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [11143] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(943), 1,
      sym_path,
    ACTIONS(945), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(948), 1,
      anon_sym_DASHf,
    ACTIONS(951), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(954), 1,
      anon_sym_DASH_DASHplatform,
    STATE(282), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(415), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [11175] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(347), 1,
      ts_builtin_sym_end,
    ACTIONS(957), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(276), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(349), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [11200] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
    ACTIONS(957), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(285), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(353), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [11225] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
    ACTIONS(957), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(276), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(357), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [11250] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(959), 1,
      sym_path,
    ACTIONS(961), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(963), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(965), 1,
      sym_persist,
    ACTIONS(967), 1,
      anon_sym_DASH_DASHsharing,
    STATE(288), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(394), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [11281] = 4,
    ACTIONS(693), 1,
      ts_builtin_sym_end,
    ACTIONS(969), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(419), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
  [11302] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(971), 1,
      sym_path,
    ACTIONS(973), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(976), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(979), 1,
      sym_persist,
    ACTIONS(982), 1,
      anon_sym_DASH_DASHsharing,
    STATE(288), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(394), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [11333] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(985), 1,
      sym_identifier,
    ACTIONS(987), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(993), 1,
      anon_sym_DASH_DASHsecret,
    STATE(289), 1,
      aux_sym__conditional_block_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(358), 2,
      sym_mount,
      sym_secret,
    ACTIONS(990), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [11362] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(881), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(885), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(996), 1,
      sym_identifier,
    STATE(289), 1,
      aux_sym__conditional_block_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(358), 2,
      sym_mount,
      sym_secret,
    ACTIONS(922), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [11391] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(998), 1,
      anon_sym_COLON2,
    ACTIONS(1000), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(273), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(275), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [11416] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(961), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(963), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(965), 1,
      sym_persist,
    ACTIONS(967), 1,
      anon_sym_DASH_DASHsharing,
    ACTIONS(1002), 1,
      sym_path,
    STATE(288), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(394), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [11447] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(957), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(283), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(343), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [11472] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(961), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(963), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(965), 1,
      sym_persist,
    ACTIONS(967), 1,
      anon_sym_DASH_DASHsharing,
    ACTIONS(1004), 1,
      sym_path,
    STATE(292), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(394), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [11503] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(961), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(963), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(965), 1,
      sym_persist,
    ACTIONS(967), 1,
      anon_sym_DASH_DASHsharing,
    ACTIONS(1006), 1,
      sym_path,
    STATE(286), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(394), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [11534] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1008), 1,
      anon_sym_AT,
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
  [11556] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(401), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(399), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [11576] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(378), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(376), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [11596] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(455), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(457), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [11616] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(459), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_DASH_DASH2,
    ACTIONS(461), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [11636] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1010), 1,
      sym_expr,
    ACTIONS(1012), 1,
      anon_sym_DQUOTE,
    ACTIONS(1014), 1,
      anon_sym_SQUOTE,
    ACTIONS(1016), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(478), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [11661] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1018), 1,
      ts_builtin_sym_end,
    ACTIONS(1022), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1020), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [11682] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1024), 1,
      sym_path,
    STATE(304), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1026), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [11703] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1028), 1,
      sym_path,
    STATE(344), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1026), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [11724] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1030), 1,
      sym_path,
    STATE(345), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1026), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [11745] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(433), 1,
      anon_sym_PLUS,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(1032), 1,
      sym_path,
    STATE(352), 1,
      aux_sym_copy_command_repeat2,
    STATE(564), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(550), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [11772] = 4,
    STATE(136), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1034), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(1036), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11791] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(433), 1,
      anon_sym_PLUS,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(1038), 1,
      sym_path,
    STATE(352), 1,
      aux_sym_copy_command_repeat2,
    STATE(564), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(550), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [11818] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1040), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [11835] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1042), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [11852] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1044), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [11869] = 4,
    STATE(156), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1034), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(1046), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11888] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1048), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [11905] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1012), 1,
      anon_sym_DQUOTE,
    ACTIONS(1014), 1,
      anon_sym_SQUOTE,
    ACTIONS(1050), 1,
      sym_expr,
    ACTIONS(1052), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(468), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [11930] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1054), 1,
      sym_path,
    STATE(344), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1026), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [11951] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1056), 1,
      sym_path,
    STATE(315), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1026), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [11972] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1058), 1,
      sym_path,
    STATE(342), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1026), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [11993] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1012), 1,
      anon_sym_DQUOTE,
    ACTIONS(1014), 1,
      anon_sym_SQUOTE,
    ACTIONS(1060), 1,
      sym_expr,
    ACTIONS(1062), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(470), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12018] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(443), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1064), 1,
      anon_sym_PLUS,
    STATE(154), 1,
      sym_target_ref,
    STATE(365), 1,
      aux_sym_from_command_repeat1,
    STATE(435), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1066), 2,
      sym_allow_privileged,
      sym_pass_args,
  [12045] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(433), 1,
      anon_sym_PLUS,
    ACTIONS(443), 1,
      anon_sym_DASH_DASHplatform,
    STATE(284), 1,
      sym_target_ref,
    STATE(365), 1,
      aux_sym_from_command_repeat1,
    STATE(435), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1066), 2,
      sym_allow_privileged,
      sym_pass_args,
  [12072] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(307), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(309), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12091] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(401), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [12108] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(378), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [12125] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(305), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12144] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(433), 1,
      anon_sym_PLUS,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(1068), 1,
      sym_path,
    STATE(352), 1,
      aux_sym_copy_command_repeat2,
    STATE(564), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(550), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [12171] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(401), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [12188] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(378), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [12205] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1012), 1,
      anon_sym_DQUOTE,
    ACTIONS(1014), 1,
      anon_sym_SQUOTE,
    ACTIONS(1070), 1,
      sym_expr,
    ACTIONS(1072), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(489), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12230] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1074), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [12247] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(433), 1,
      anon_sym_PLUS,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(1076), 1,
      sym_path,
    STATE(352), 1,
      aux_sym_copy_command_repeat2,
    STATE(564), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(550), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [12274] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1078), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [12291] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1080), 1,
      sym_path,
    STATE(344), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1026), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [12312] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(852), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [12329] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(848), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [12346] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1082), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [12363] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1084), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12378] = 4,
    STATE(211), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1034), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(1086), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12397] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(794), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [12414] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1012), 1,
      anon_sym_DQUOTE,
    ACTIONS(1014), 1,
      anon_sym_SQUOTE,
    ACTIONS(1088), 1,
      sym_expr,
    ACTIONS(1090), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(491), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12439] = 4,
    STATE(346), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1092), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(1094), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12458] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(399), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12473] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1096), 1,
      sym_path,
    STATE(344), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1026), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [12494] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1098), 1,
      sym_path,
    STATE(332), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1026), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [12515] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1100), 1,
      sym_path,
    STATE(344), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1102), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [12536] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1105), 1,
      sym_path,
    STATE(344), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1026), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [12557] = 4,
    STATE(346), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1107), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(1110), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12576] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(376), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12591] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1012), 1,
      anon_sym_DQUOTE,
    ACTIONS(1014), 1,
      anon_sym_SQUOTE,
    ACTIONS(1112), 1,
      sym_expr,
    ACTIONS(1114), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(422), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12616] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(443), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1116), 1,
      anon_sym_PLUS,
    STATE(56), 1,
      sym_target_ref,
    STATE(365), 1,
      aux_sym_from_command_repeat1,
    STATE(435), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1066), 2,
      sym_allow_privileged,
      sym_pass_args,
  [12643] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(459), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [12660] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1118), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [12677] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1120), 1,
      sym_path,
    ACTIONS(1123), 1,
      anon_sym_PLUS,
    ACTIONS(1126), 1,
      anon_sym_LPAREN,
    STATE(352), 1,
      aux_sym_copy_command_repeat2,
    STATE(564), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(550), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [12704] = 4,
    STATE(215), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1034), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(1129), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12723] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1012), 1,
      anon_sym_DQUOTE,
    ACTIONS(1014), 1,
      anon_sym_SQUOTE,
    ACTIONS(1131), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(430), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12745] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1133), 1,
      anon_sym_DQUOTE,
    ACTIONS(1135), 1,
      anon_sym_SQUOTE,
    ACTIONS(1137), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(251), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12767] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(558), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(560), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12785] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1133), 1,
      anon_sym_DQUOTE,
    ACTIONS(1135), 1,
      anon_sym_SQUOTE,
    ACTIONS(1139), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(243), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12807] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1141), 6,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      sym_ssh,
  [12823] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(343), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12841] = 6,
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
    STATE(334), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12863] = 6,
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
    STATE(113), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12885] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(518), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(520), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12903] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1012), 1,
      anon_sym_DQUOTE,
    ACTIONS(1014), 1,
      anon_sym_SQUOTE,
    ACTIONS(1155), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(426), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12925] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1133), 1,
      anon_sym_DQUOTE,
    ACTIONS(1135), 1,
      anon_sym_SQUOTE,
    ACTIONS(1157), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(249), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12947] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1159), 1,
      anon_sym_PLUS,
    ACTIONS(1164), 1,
      anon_sym_DASH_DASHplatform,
    STATE(365), 1,
      aux_sym_from_command_repeat1,
    STATE(435), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1161), 2,
      sym_allow_privileged,
      sym_pass_args,
  [12971] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1012), 1,
      anon_sym_DQUOTE,
    ACTIONS(1014), 1,
      anon_sym_SQUOTE,
    ACTIONS(1167), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(523), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12993] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1143), 1,
      anon_sym_DQUOTE,
    ACTIONS(1145), 1,
      anon_sym_SQUOTE,
    ACTIONS(1169), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(333), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13015] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1012), 1,
      anon_sym_DQUOTE,
    ACTIONS(1014), 1,
      anon_sym_SQUOTE,
    ACTIONS(1171), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(530), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13037] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1173), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1175), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13055] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1143), 1,
      anon_sym_DQUOTE,
    ACTIONS(1145), 1,
      anon_sym_SQUOTE,
    ACTIONS(1177), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(331), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13077] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(538), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(540), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13095] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1179), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1181), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13113] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1183), 1,
      anon_sym_DQUOTE,
    ACTIONS(1185), 1,
      anon_sym_SQUOTE,
    ACTIONS(1187), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(65), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13135] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1189), 1,
      anon_sym_DQUOTE,
    ACTIONS(1191), 1,
      anon_sym_SQUOTE,
    ACTIONS(1193), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(150), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13157] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(570), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(572), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13175] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1195), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1197), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [13193] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1199), 1,
      anon_sym_DQUOTE,
    ACTIONS(1201), 1,
      anon_sym_SQUOTE,
    ACTIONS(1203), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(75), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13215] = 6,
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
    STATE(338), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13237] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1211), 1,
      anon_sym_DQUOTE,
    ACTIONS(1213), 1,
      anon_sym_SQUOTE,
    ACTIONS(1215), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(299), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13259] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1205), 1,
      anon_sym_DQUOTE,
    ACTIONS(1207), 1,
      anon_sym_SQUOTE,
    ACTIONS(1217), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(309), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13281] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1219), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1221), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13299] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1223), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1225), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13317] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1227), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1229), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13335] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1231), 1,
      anon_sym_DQUOTE,
    ACTIONS(1233), 1,
      anon_sym_SQUOTE,
    ACTIONS(1235), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(141), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13357] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1237), 1,
      anon_sym_DQUOTE,
    ACTIONS(1239), 1,
      anon_sym_SQUOTE,
    ACTIONS(1241), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(262), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13379] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1237), 1,
      anon_sym_DQUOTE,
    ACTIONS(1239), 1,
      anon_sym_SQUOTE,
    ACTIONS(1243), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(260), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13401] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1245), 1,
      anon_sym_DQUOTE,
    ACTIONS(1247), 1,
      anon_sym_SQUOTE,
    ACTIONS(1249), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(420), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13423] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1251), 1,
      anon_sym_DQUOTE,
    ACTIONS(1253), 1,
      anon_sym_SQUOTE,
    ACTIONS(1255), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(178), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13445] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1257), 1,
      anon_sym_DQUOTE,
    ACTIONS(1259), 1,
      anon_sym_SQUOTE,
    ACTIONS(1261), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(416), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13467] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(593), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(595), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13485] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(589), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(591), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13503] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1257), 1,
      anon_sym_DQUOTE,
    ACTIONS(1259), 1,
      anon_sym_SQUOTE,
    ACTIONS(1263), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(397), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13525] = 4,
    ACTIONS(1265), 1,
      anon_sym_EQ,
    STATE(219), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1267), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13542] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1269), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1271), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [13559] = 4,
    ACTIONS(1273), 1,
      anon_sym_EQ,
    STATE(111), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1275), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13576] = 4,
    ACTIONS(1277), 1,
      anon_sym_EQ,
    STATE(102), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1279), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13593] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1281), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1283), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [13610] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(399), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(401), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [13627] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1285), 1,
      sym_path,
    ACTIONS(1287), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1289), 1,
      sym_keep_ts,
    STATE(412), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(536), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13650] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(711), 1,
      aux_sym_shell_fragment_token3,
    STATE(340), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(527), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(713), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [13671] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(711), 1,
      aux_sym_shell_fragment_token3,
    STATE(340), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(529), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(713), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [13692] = 4,
    ACTIONS(1291), 1,
      anon_sym_EQ,
    STATE(371), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1293), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13709] = 4,
    ACTIONS(1295), 1,
      anon_sym_EQ,
    STATE(205), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1297), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13726] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1287), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1289), 1,
      sym_keep_ts,
    ACTIONS(1299), 1,
      sym_path,
    STATE(408), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(536), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13749] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(376), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(378), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [13766] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(711), 1,
      aux_sym_shell_fragment_token3,
    STATE(340), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(429), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(713), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [13787] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(399), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(401), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [13804] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1287), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1289), 1,
      sym_keep_ts,
    ACTIONS(1301), 1,
      sym_path,
    STATE(409), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(536), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13827] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1303), 1,
      sym_path,
    ACTIONS(1305), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1308), 1,
      sym_keep_ts,
    STATE(409), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(536), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13850] = 4,
    ACTIONS(1311), 1,
      anon_sym_EQ,
    STATE(362), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1313), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13867] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(711), 1,
      aux_sym_shell_fragment_token3,
    STATE(340), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(451), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(713), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [13888] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1287), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1289), 1,
      sym_keep_ts,
    ACTIONS(1315), 1,
      sym_path,
    STATE(409), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(536), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13911] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1317), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1319), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [13928] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1321), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1323), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [13945] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1325), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1327), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [13962] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(792), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(794), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [13979] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(376), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(378), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [13996] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1329), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1331), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [14013] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1333), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1335), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [14030] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(816), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(818), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [14047] = 3,
    STATE(381), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1337), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14061] = 3,
    STATE(390), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1339), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14075] = 3,
    STATE(26), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1341), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14089] = 3,
    STATE(493), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1343), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14103] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1345), 1,
      anon_sym_END,
    ACTIONS(1347), 1,
      anon_sym_SAVEARTIFACT,
    STATE(533), 1,
      aux_sym_try_command_repeat1,
    STATE(555), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14123] = 3,
    STATE(199), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1349), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14137] = 3,
    STATE(198), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1351), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14151] = 3,
    STATE(449), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1353), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14165] = 3,
    STATE(206), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1355), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14179] = 3,
    STATE(207), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1357), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14193] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1359), 1,
      anon_sym_END,
    ACTIONS(1361), 1,
      anon_sym_ELSEIF,
    ACTIONS(1364), 1,
      anon_sym_ELSE,
    STATE(431), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14213] = 3,
    STATE(208), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1366), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14227] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1368), 1,
      sym_identifier,
    STATE(446), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1370), 2,
      sym_global,
      sym_required,
  [14245] = 3,
    STATE(457), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1372), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14259] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1374), 4,
      anon_sym_PLUS,
      sym_allow_privileged,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
  [14273] = 3,
    STATE(190), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1376), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14287] = 3,
    STATE(196), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1378), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14301] = 3,
    STATE(209), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1380), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14315] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(957), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1382), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(276), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [14333] = 3,
    STATE(369), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1384), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14347] = 3,
    STATE(302), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1386), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14361] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1388), 1,
      sym_identifier,
    STATE(488), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1370), 2,
      sym_global,
      sym_required,
  [14379] = 3,
    STATE(213), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1390), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14393] = 3,
    STATE(224), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1392), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14407] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1347), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1394), 1,
      anon_sym_END,
    STATE(472), 1,
      aux_sym_try_command_repeat1,
    STATE(555), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14427] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1396), 1,
      sym_identifier,
    STATE(446), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1398), 2,
      sym_global,
      sym_required,
  [14445] = 3,
    STATE(185), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1401), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14459] = 3,
    STATE(425), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1403), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14473] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1347), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1405), 1,
      anon_sym_END,
    STATE(445), 1,
      aux_sym_try_command_repeat1,
    STATE(555), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14493] = 3,
    STATE(227), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1407), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14507] = 3,
    STATE(230), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1409), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14521] = 3,
    STATE(2), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1411), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14535] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1413), 1,
      anon_sym_END,
    ACTIONS(1415), 1,
      anon_sym_ELSEIF,
    ACTIONS(1417), 1,
      anon_sym_ELSE,
    STATE(431), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14555] = 3,
    STATE(232), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1419), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14569] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1347), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1421), 1,
      anon_sym_END,
    STATE(472), 1,
      aux_sym_try_command_repeat1,
    STATE(555), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14589] = 3,
    STATE(229), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1423), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14603] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1347), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1425), 1,
      anon_sym_END,
    STATE(455), 1,
      aux_sym_try_command_repeat1,
    STATE(555), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14623] = 3,
    STATE(226), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1427), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14637] = 3,
    STATE(231), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1429), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14651] = 3,
    STATE(233), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1431), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14665] = 3,
    STATE(234), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1433), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14679] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1415), 1,
      anon_sym_ELSEIF,
    ACTIONS(1435), 1,
      anon_sym_END,
    ACTIONS(1437), 1,
      anon_sym_ELSE,
    STATE(431), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14699] = 3,
    STATE(372), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1439), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14713] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1347), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1441), 1,
      anon_sym_END,
    STATE(472), 1,
      aux_sym_try_command_repeat1,
    STATE(555), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14733] = 3,
    STATE(210), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1443), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14747] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1415), 1,
      anon_sym_ELSEIF,
    ACTIONS(1445), 1,
      anon_sym_END,
    ACTIONS(1447), 1,
      anon_sym_ELSE,
    STATE(462), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14767] = 3,
    STATE(356), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1449), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14781] = 3,
    STATE(375), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1451), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14795] = 3,
    STATE(235), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1453), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14809] = 3,
    STATE(188), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1455), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14823] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1457), 1,
      sym_identifier,
    STATE(501), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1370), 2,
      sym_global,
      sym_required,
  [14841] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1459), 1,
      anon_sym_END,
    ACTIONS(1461), 1,
      anon_sym_SAVEARTIFACT,
    STATE(472), 1,
      aux_sym_try_command_repeat1,
    STATE(555), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14861] = 3,
    STATE(203), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1464), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14875] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1466), 1,
      sym_identifier,
    STATE(433), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1370), 2,
      sym_global,
      sym_required,
  [14893] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(447), 1,
      anon_sym_END,
    ACTIONS(449), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(451), 1,
      anon_sym_ASLOCAL,
    ACTIONS(453), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14913] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(423), 1,
      anon_sym_END,
    ACTIONS(425), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(427), 1,
      anon_sym_ASLOCAL,
    ACTIONS(429), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14933] = 3,
    STATE(193), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1468), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14947] = 3,
    STATE(197), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1470), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14961] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1415), 1,
      anon_sym_ELSEIF,
    ACTIONS(1472), 1,
      anon_sym_END,
    ACTIONS(1474), 1,
      anon_sym_ELSE,
    STATE(453), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14981] = 3,
    STATE(3), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1476), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14995] = 3,
    STATE(236), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1478), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15009] = 3,
    STATE(222), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1480), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15023] = 3,
    STATE(391), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1482), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15037] = 3,
    STATE(216), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1484), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15051] = 3,
    STATE(221), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1486), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15065] = 3,
    STATE(217), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1488), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15079] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(957), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1490), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(276), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [15097] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1492), 1,
      sym_identifier,
    STATE(446), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1370), 2,
      sym_global,
      sym_required,
  [15115] = 3,
    STATE(126), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1494), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15129] = 3,
    STATE(125), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1496), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15143] = 3,
    STATE(120), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1498), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15157] = 3,
    STATE(117), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1500), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15171] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1347), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1502), 1,
      anon_sym_END,
    STATE(464), 1,
      aux_sym_try_command_repeat1,
    STATE(555), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15191] = 3,
    STATE(237), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1504), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15205] = 3,
    STATE(95), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1506), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15219] = 3,
    STATE(94), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1508), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15233] = 3,
    STATE(214), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1510), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15247] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(957), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1512), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(487), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [15265] = 3,
    STATE(195), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1514), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15279] = 3,
    STATE(93), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1516), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15293] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1518), 1,
      sym_identifier,
    STATE(446), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1370), 2,
      sym_global,
      sym_required,
  [15311] = 3,
    STATE(92), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1520), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15325] = 3,
    STATE(90), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1522), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15339] = 3,
    STATE(89), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1524), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15353] = 3,
    STATE(88), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1526), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15367] = 3,
    STATE(87), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1528), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15381] = 3,
    STATE(191), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1530), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15395] = 3,
    STATE(86), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1532), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15409] = 3,
    STATE(21), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1534), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15423] = 3,
    STATE(123), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1536), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15437] = 3,
    STATE(108), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1538), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15451] = 3,
    STATE(109), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1540), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15465] = 3,
    STATE(189), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1542), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15479] = 3,
    STATE(114), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1544), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15493] = 3,
    STATE(140), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1546), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15507] = 3,
    STATE(139), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1548), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15521] = 3,
    STATE(132), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1550), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15535] = 3,
    STATE(115), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1552), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15549] = 3,
    STATE(103), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1554), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15563] = 3,
    STATE(116), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1556), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15577] = 3,
    STATE(105), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1558), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15591] = 3,
    STATE(119), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1560), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15605] = 3,
    STATE(121), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1562), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15619] = 3,
    STATE(186), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1564), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15633] = 3,
    STATE(153), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1566), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15647] = 3,
    STATE(146), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1568), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15661] = 3,
    STATE(144), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1570), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15675] = 3,
    STATE(143), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1572), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15689] = 3,
    STATE(129), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1574), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15703] = 3,
    STATE(131), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1576), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15717] = 3,
    STATE(138), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1578), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15731] = 3,
    STATE(137), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1580), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15745] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1347), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1582), 1,
      anon_sym_END,
    STATE(472), 1,
      aux_sym_try_command_repeat1,
    STATE(555), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15765] = 3,
    STATE(135), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1584), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15779] = 3,
    STATE(134), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1586), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15793] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1588), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1590), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [15808] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1592), 1,
      sym_version_major_minor,
    ACTIONS(1594), 1,
      sym_feature_flag,
    STATE(542), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15825] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1596), 3,
      sym_identifier,
      sym_global,
      sym_required,
  [15838] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1600), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1598), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
  [15853] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1604), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1602), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
  [15868] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1606), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1608), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [15883] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1610), 1,
      sym_version_major_minor,
    ACTIONS(1612), 1,
      sym_feature_flag,
    STATE(546), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15900] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(957), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(439), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [15915] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1614), 1,
      anon_sym_PLUS,
    ACTIONS(1616), 1,
      anon_sym_LPAREN,
    STATE(310), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15932] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1618), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1620), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [15947] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1622), 1,
      sym_version_major_minor,
    ACTIONS(1624), 1,
      sym_feature_flag,
    STATE(546), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15964] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1627), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1629), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [15979] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(376), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15990] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(399), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16001] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1034), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1631), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [16016] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1633), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1635), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [16031] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1637), 1,
      sym_image_name,
    STATE(311), 1,
      sym_image_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16045] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1639), 1,
      sym_image_name,
    STATE(720), 1,
      sym_image_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16059] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(433), 1,
      anon_sym_PLUS,
    STATE(543), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16073] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1641), 2,
      anon_sym_END,
      anon_sym_SAVEARTIFACT,
  [16085] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(433), 1,
      anon_sym_PLUS,
    STATE(638), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16099] = 2,
    ACTIONS(1643), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16108] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1645), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16119] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1647), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16130] = 2,
    ACTIONS(1649), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16139] = 2,
    ACTIONS(1651), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16148] = 2,
    ACTIONS(1653), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16157] = 2,
    ACTIONS(1655), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16166] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1657), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16177] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1659), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16188] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1661), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16199] = 2,
    ACTIONS(1663), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16208] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1665), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16219] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1667), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16230] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1669), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16241] = 2,
    ACTIONS(1671), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16250] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1673), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16261] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1675), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16272] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1677), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16283] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1679), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16294] = 2,
    ACTIONS(1681), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16303] = 2,
    ACTIONS(1683), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16312] = 2,
    ACTIONS(1685), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16321] = 2,
    ACTIONS(1687), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16330] = 2,
    ACTIONS(1689), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16339] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1691), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16350] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1693), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16361] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1695), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16372] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1697), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16383] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1699), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16394] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1701), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16405] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1703), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16416] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1705), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16427] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1707), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16438] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1709), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16449] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1711), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16460] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1713), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16471] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1715), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16482] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1717), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16493] = 2,
    ACTIONS(1719), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16502] = 2,
    ACTIONS(1721), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16511] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1723), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16522] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1725), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16533] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1727), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16544] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1729), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16555] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1731), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16566] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1733), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16577] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1735), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16588] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1737), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16599] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1739), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16610] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1741), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16621] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1743), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16632] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1745), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16643] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1747), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16654] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1749), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16665] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1751), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16676] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1753), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16687] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1755), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16698] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1757), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16709] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1759), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16720] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1761), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16731] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1763), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16742] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1765), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16753] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1767), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16764] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1769), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16775] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1771), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16786] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1773), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16797] = 2,
    ACTIONS(1775), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16806] = 2,
    ACTIONS(1777), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16815] = 2,
    ACTIONS(1779), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16824] = 2,
    ACTIONS(1781), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16833] = 2,
    ACTIONS(1783), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16842] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1785), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16853] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1787), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16864] = 2,
    ACTIONS(1789), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16873] = 2,
    ACTIONS(1791), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16882] = 2,
    ACTIONS(1793), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16891] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1795), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16902] = 2,
    ACTIONS(1797), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16911] = 2,
    ACTIONS(1799), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16920] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1801), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16931] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1803), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16942] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1805), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16953] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1807), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16964] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1809), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16975] = 2,
    ACTIONS(1811), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16984] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1813), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16995] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1815), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17006] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1817), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17017] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1819), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17028] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1821), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17039] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1823), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17050] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1825), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17061] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1827), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17072] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1829), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17083] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1831), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17094] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1833), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17105] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1835), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17116] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1837), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17127] = 2,
    ACTIONS(1839), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17136] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1841), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17147] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1843), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17158] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1845), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17169] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1847), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17180] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1849), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17191] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1851), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17202] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1853), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17213] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1855), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17224] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1857), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17235] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1859), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17246] = 2,
    ACTIONS(1861), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17255] = 2,
    ACTIONS(1863), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17264] = 2,
    ACTIONS(1865), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17273] = 2,
    ACTIONS(1867), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17282] = 2,
    ACTIONS(1869), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17291] = 2,
    ACTIONS(1871), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17300] = 2,
    ACTIONS(1873), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17309] = 2,
    ACTIONS(1875), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17318] = 2,
    ACTIONS(1877), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17327] = 2,
    ACTIONS(1879), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17336] = 2,
    ACTIONS(1881), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17345] = 2,
    ACTIONS(1883), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17354] = 2,
    ACTIONS(1885), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17363] = 2,
    ACTIONS(1887), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17372] = 2,
    ACTIONS(1889), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17381] = 2,
    ACTIONS(1891), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17390] = 2,
    ACTIONS(1893), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17399] = 2,
    ACTIONS(1895), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17408] = 2,
    ACTIONS(1897), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17417] = 2,
    ACTIONS(1899), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17426] = 2,
    ACTIONS(1901), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17435] = 2,
    ACTIONS(1903), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17444] = 2,
    ACTIONS(1905), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17453] = 2,
    ACTIONS(1907), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17462] = 2,
    ACTIONS(1909), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17471] = 2,
    ACTIONS(1911), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17480] = 2,
    ACTIONS(1913), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17489] = 2,
    ACTIONS(1915), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17498] = 2,
    ACTIONS(1917), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17507] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1919), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17518] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1921), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17529] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1923), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17540] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1925), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17551] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1927), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17562] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1929), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17573] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1931), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17584] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1933), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17595] = 2,
    ACTIONS(1935), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17604] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1937), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17615] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1939), 1,
      anon_sym_CLONE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17626] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1941), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17637] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1943), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17648] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1945), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17659] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1947), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17670] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1949), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17681] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1951), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17692] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1953), 1,
      anon_sym_CLONE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17703] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1955), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17714] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1957), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17725] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1959), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17736] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1961), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17747] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1963), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17758] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1965), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17769] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1967), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17780] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1969), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17791] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1971), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 82,
  [SMALL_STATE(4)] = 164,
  [SMALL_STATE(5)] = 246,
  [SMALL_STATE(6)] = 328,
  [SMALL_STATE(7)] = 410,
  [SMALL_STATE(8)] = 488,
  [SMALL_STATE(9)] = 566,
  [SMALL_STATE(10)] = 644,
  [SMALL_STATE(11)] = 722,
  [SMALL_STATE(12)] = 800,
  [SMALL_STATE(13)] = 878,
  [SMALL_STATE(14)] = 956,
  [SMALL_STATE(15)] = 1034,
  [SMALL_STATE(16)] = 1112,
  [SMALL_STATE(17)] = 1190,
  [SMALL_STATE(18)] = 1268,
  [SMALL_STATE(19)] = 1346,
  [SMALL_STATE(20)] = 1424,
  [SMALL_STATE(21)] = 1502,
  [SMALL_STATE(22)] = 1580,
  [SMALL_STATE(23)] = 1658,
  [SMALL_STATE(24)] = 1736,
  [SMALL_STATE(25)] = 1814,
  [SMALL_STATE(26)] = 1892,
  [SMALL_STATE(27)] = 1970,
  [SMALL_STATE(28)] = 2048,
  [SMALL_STATE(29)] = 2126,
  [SMALL_STATE(30)] = 2204,
  [SMALL_STATE(31)] = 2282,
  [SMALL_STATE(32)] = 2360,
  [SMALL_STATE(33)] = 2438,
  [SMALL_STATE(34)] = 2516,
  [SMALL_STATE(35)] = 2594,
  [SMALL_STATE(36)] = 2672,
  [SMALL_STATE(37)] = 2750,
  [SMALL_STATE(38)] = 2828,
  [SMALL_STATE(39)] = 2906,
  [SMALL_STATE(40)] = 2984,
  [SMALL_STATE(41)] = 3062,
  [SMALL_STATE(42)] = 3106,
  [SMALL_STATE(43)] = 3159,
  [SMALL_STATE(44)] = 3200,
  [SMALL_STATE(45)] = 3250,
  [SMALL_STATE(46)] = 3288,
  [SMALL_STATE(47)] = 3326,
  [SMALL_STATE(48)] = 3377,
  [SMALL_STATE(49)] = 3428,
  [SMALL_STATE(50)] = 3479,
  [SMALL_STATE(51)] = 3527,
  [SMALL_STATE(52)] = 3575,
  [SMALL_STATE(53)] = 3623,
  [SMALL_STATE(54)] = 3667,
  [SMALL_STATE(55)] = 3706,
  [SMALL_STATE(56)] = 3745,
  [SMALL_STATE(57)] = 3784,
  [SMALL_STATE(58)] = 3823,
  [SMALL_STATE(59)] = 3862,
  [SMALL_STATE(60)] = 3904,
  [SMALL_STATE(61)] = 3938,
  [SMALL_STATE(62)] = 3972,
  [SMALL_STATE(63)] = 4010,
  [SMALL_STATE(64)] = 4048,
  [SMALL_STATE(65)] = 4086,
  [SMALL_STATE(66)] = 4120,
  [SMALL_STATE(67)] = 4154,
  [SMALL_STATE(68)] = 4192,
  [SMALL_STATE(69)] = 4234,
  [SMALL_STATE(70)] = 4276,
  [SMALL_STATE(71)] = 4308,
  [SMALL_STATE(72)] = 4345,
  [SMALL_STATE(73)] = 4398,
  [SMALL_STATE(74)] = 4433,
  [SMALL_STATE(75)] = 4470,
  [SMALL_STATE(76)] = 4503,
  [SMALL_STATE(77)] = 4536,
  [SMALL_STATE(78)] = 4571,
  [SMALL_STATE(79)] = 4624,
  [SMALL_STATE(80)] = 4657,
  [SMALL_STATE(81)] = 4692,
  [SMALL_STATE(82)] = 4745,
  [SMALL_STATE(83)] = 4798,
  [SMALL_STATE(84)] = 4831,
  [SMALL_STATE(85)] = 4863,
  [SMALL_STATE(86)] = 4899,
  [SMALL_STATE(87)] = 4931,
  [SMALL_STATE(88)] = 4963,
  [SMALL_STATE(89)] = 4995,
  [SMALL_STATE(90)] = 5027,
  [SMALL_STATE(91)] = 5059,
  [SMALL_STATE(92)] = 5095,
  [SMALL_STATE(93)] = 5127,
  [SMALL_STATE(94)] = 5159,
  [SMALL_STATE(95)] = 5191,
  [SMALL_STATE(96)] = 5223,
  [SMALL_STATE(97)] = 5255,
  [SMALL_STATE(98)] = 5291,
  [SMALL_STATE(99)] = 5323,
  [SMALL_STATE(100)] = 5355,
  [SMALL_STATE(101)] = 5391,
  [SMALL_STATE(102)] = 5423,
  [SMALL_STATE(103)] = 5455,
  [SMALL_STATE(104)] = 5487,
  [SMALL_STATE(105)] = 5519,
  [SMALL_STATE(106)] = 5551,
  [SMALL_STATE(107)] = 5583,
  [SMALL_STATE(108)] = 5615,
  [SMALL_STATE(109)] = 5647,
  [SMALL_STATE(110)] = 5679,
  [SMALL_STATE(111)] = 5711,
  [SMALL_STATE(112)] = 5743,
  [SMALL_STATE(113)] = 5775,
  [SMALL_STATE(114)] = 5807,
  [SMALL_STATE(115)] = 5839,
  [SMALL_STATE(116)] = 5871,
  [SMALL_STATE(117)] = 5903,
  [SMALL_STATE(118)] = 5935,
  [SMALL_STATE(119)] = 5971,
  [SMALL_STATE(120)] = 6003,
  [SMALL_STATE(121)] = 6035,
  [SMALL_STATE(122)] = 6067,
  [SMALL_STATE(123)] = 6103,
  [SMALL_STATE(124)] = 6135,
  [SMALL_STATE(125)] = 6167,
  [SMALL_STATE(126)] = 6199,
  [SMALL_STATE(127)] = 6231,
  [SMALL_STATE(128)] = 6263,
  [SMALL_STATE(129)] = 6295,
  [SMALL_STATE(130)] = 6327,
  [SMALL_STATE(131)] = 6363,
  [SMALL_STATE(132)] = 6395,
  [SMALL_STATE(133)] = 6427,
  [SMALL_STATE(134)] = 6463,
  [SMALL_STATE(135)] = 6495,
  [SMALL_STATE(136)] = 6527,
  [SMALL_STATE(137)] = 6559,
  [SMALL_STATE(138)] = 6591,
  [SMALL_STATE(139)] = 6623,
  [SMALL_STATE(140)] = 6655,
  [SMALL_STATE(141)] = 6687,
  [SMALL_STATE(142)] = 6719,
  [SMALL_STATE(143)] = 6751,
  [SMALL_STATE(144)] = 6783,
  [SMALL_STATE(145)] = 6815,
  [SMALL_STATE(146)] = 6851,
  [SMALL_STATE(147)] = 6883,
  [SMALL_STATE(148)] = 6919,
  [SMALL_STATE(149)] = 6951,
  [SMALL_STATE(150)] = 6987,
  [SMALL_STATE(151)] = 7019,
  [SMALL_STATE(152)] = 7055,
  [SMALL_STATE(153)] = 7091,
  [SMALL_STATE(154)] = 7123,
  [SMALL_STATE(155)] = 7159,
  [SMALL_STATE(156)] = 7195,
  [SMALL_STATE(157)] = 7227,
  [SMALL_STATE(158)] = 7263,
  [SMALL_STATE(159)] = 7295,
  [SMALL_STATE(160)] = 7331,
  [SMALL_STATE(161)] = 7363,
  [SMALL_STATE(162)] = 7398,
  [SMALL_STATE(163)] = 7433,
  [SMALL_STATE(164)] = 7468,
  [SMALL_STATE(165)] = 7503,
  [SMALL_STATE(166)] = 7536,
  [SMALL_STATE(167)] = 7567,
  [SMALL_STATE(168)] = 7602,
  [SMALL_STATE(169)] = 7635,
  [SMALL_STATE(170)] = 7670,
  [SMALL_STATE(171)] = 7705,
  [SMALL_STATE(172)] = 7738,
  [SMALL_STATE(173)] = 7768,
  [SMALL_STATE(174)] = 7798,
  [SMALL_STATE(175)] = 7830,
  [SMALL_STATE(176)] = 7862,
  [SMALL_STATE(177)] = 7892,
  [SMALL_STATE(178)] = 7922,
  [SMALL_STATE(179)] = 7952,
  [SMALL_STATE(180)] = 7982,
  [SMALL_STATE(181)] = 8012,
  [SMALL_STATE(182)] = 8042,
  [SMALL_STATE(183)] = 8072,
  [SMALL_STATE(184)] = 8102,
  [SMALL_STATE(185)] = 8134,
  [SMALL_STATE(186)] = 8163,
  [SMALL_STATE(187)] = 8192,
  [SMALL_STATE(188)] = 8237,
  [SMALL_STATE(189)] = 8266,
  [SMALL_STATE(190)] = 8295,
  [SMALL_STATE(191)] = 8324,
  [SMALL_STATE(192)] = 8353,
  [SMALL_STATE(193)] = 8398,
  [SMALL_STATE(194)] = 8427,
  [SMALL_STATE(195)] = 8456,
  [SMALL_STATE(196)] = 8485,
  [SMALL_STATE(197)] = 8514,
  [SMALL_STATE(198)] = 8543,
  [SMALL_STATE(199)] = 8572,
  [SMALL_STATE(200)] = 8601,
  [SMALL_STATE(201)] = 8630,
  [SMALL_STATE(202)] = 8659,
  [SMALL_STATE(203)] = 8704,
  [SMALL_STATE(204)] = 8733,
  [SMALL_STATE(205)] = 8762,
  [SMALL_STATE(206)] = 8791,
  [SMALL_STATE(207)] = 8820,
  [SMALL_STATE(208)] = 8849,
  [SMALL_STATE(209)] = 8878,
  [SMALL_STATE(210)] = 8907,
  [SMALL_STATE(211)] = 8936,
  [SMALL_STATE(212)] = 8965,
  [SMALL_STATE(213)] = 8994,
  [SMALL_STATE(214)] = 9023,
  [SMALL_STATE(215)] = 9052,
  [SMALL_STATE(216)] = 9081,
  [SMALL_STATE(217)] = 9110,
  [SMALL_STATE(218)] = 9139,
  [SMALL_STATE(219)] = 9168,
  [SMALL_STATE(220)] = 9197,
  [SMALL_STATE(221)] = 9226,
  [SMALL_STATE(222)] = 9255,
  [SMALL_STATE(223)] = 9284,
  [SMALL_STATE(224)] = 9313,
  [SMALL_STATE(225)] = 9342,
  [SMALL_STATE(226)] = 9383,
  [SMALL_STATE(227)] = 9412,
  [SMALL_STATE(228)] = 9441,
  [SMALL_STATE(229)] = 9486,
  [SMALL_STATE(230)] = 9515,
  [SMALL_STATE(231)] = 9544,
  [SMALL_STATE(232)] = 9573,
  [SMALL_STATE(233)] = 9602,
  [SMALL_STATE(234)] = 9631,
  [SMALL_STATE(235)] = 9660,
  [SMALL_STATE(236)] = 9689,
  [SMALL_STATE(237)] = 9718,
  [SMALL_STATE(238)] = 9747,
  [SMALL_STATE(239)] = 9784,
  [SMALL_STATE(240)] = 9826,
  [SMALL_STATE(241)] = 9868,
  [SMALL_STATE(242)] = 9910,
  [SMALL_STATE(243)] = 9952,
  [SMALL_STATE(244)] = 9977,
  [SMALL_STATE(245)] = 10014,
  [SMALL_STATE(246)] = 10039,
  [SMALL_STATE(247)] = 10064,
  [SMALL_STATE(248)] = 10089,
  [SMALL_STATE(249)] = 10126,
  [SMALL_STATE(250)] = 10151,
  [SMALL_STATE(251)] = 10190,
  [SMALL_STATE(252)] = 10215,
  [SMALL_STATE(253)] = 10252,
  [SMALL_STATE(254)] = 10284,
  [SMALL_STATE(255)] = 10308,
  [SMALL_STATE(256)] = 10340,
  [SMALL_STATE(257)] = 10372,
  [SMALL_STATE(258)] = 10404,
  [SMALL_STATE(259)] = 10436,
  [SMALL_STATE(260)] = 10468,
  [SMALL_STATE(261)] = 10492,
  [SMALL_STATE(262)] = 10516,
  [SMALL_STATE(263)] = 10540,
  [SMALL_STATE(264)] = 10572,
  [SMALL_STATE(265)] = 10596,
  [SMALL_STATE(266)] = 10630,
  [SMALL_STATE(267)] = 10662,
  [SMALL_STATE(268)] = 10696,
  [SMALL_STATE(269)] = 10729,
  [SMALL_STATE(270)] = 10762,
  [SMALL_STATE(271)] = 10795,
  [SMALL_STATE(272)] = 10824,
  [SMALL_STATE(273)] = 10857,
  [SMALL_STATE(274)] = 10890,
  [SMALL_STATE(275)] = 10925,
  [SMALL_STATE(276)] = 10957,
  [SMALL_STATE(277)] = 10983,
  [SMALL_STATE(278)] = 11015,
  [SMALL_STATE(279)] = 11047,
  [SMALL_STATE(280)] = 11079,
  [SMALL_STATE(281)] = 11111,
  [SMALL_STATE(282)] = 11143,
  [SMALL_STATE(283)] = 11175,
  [SMALL_STATE(284)] = 11200,
  [SMALL_STATE(285)] = 11225,
  [SMALL_STATE(286)] = 11250,
  [SMALL_STATE(287)] = 11281,
  [SMALL_STATE(288)] = 11302,
  [SMALL_STATE(289)] = 11333,
  [SMALL_STATE(290)] = 11362,
  [SMALL_STATE(291)] = 11391,
  [SMALL_STATE(292)] = 11416,
  [SMALL_STATE(293)] = 11447,
  [SMALL_STATE(294)] = 11472,
  [SMALL_STATE(295)] = 11503,
  [SMALL_STATE(296)] = 11534,
  [SMALL_STATE(297)] = 11556,
  [SMALL_STATE(298)] = 11576,
  [SMALL_STATE(299)] = 11596,
  [SMALL_STATE(300)] = 11616,
  [SMALL_STATE(301)] = 11636,
  [SMALL_STATE(302)] = 11661,
  [SMALL_STATE(303)] = 11682,
  [SMALL_STATE(304)] = 11703,
  [SMALL_STATE(305)] = 11724,
  [SMALL_STATE(306)] = 11745,
  [SMALL_STATE(307)] = 11772,
  [SMALL_STATE(308)] = 11791,
  [SMALL_STATE(309)] = 11818,
  [SMALL_STATE(310)] = 11835,
  [SMALL_STATE(311)] = 11852,
  [SMALL_STATE(312)] = 11869,
  [SMALL_STATE(313)] = 11888,
  [SMALL_STATE(314)] = 11905,
  [SMALL_STATE(315)] = 11930,
  [SMALL_STATE(316)] = 11951,
  [SMALL_STATE(317)] = 11972,
  [SMALL_STATE(318)] = 11993,
  [SMALL_STATE(319)] = 12018,
  [SMALL_STATE(320)] = 12045,
  [SMALL_STATE(321)] = 12072,
  [SMALL_STATE(322)] = 12091,
  [SMALL_STATE(323)] = 12108,
  [SMALL_STATE(324)] = 12125,
  [SMALL_STATE(325)] = 12144,
  [SMALL_STATE(326)] = 12171,
  [SMALL_STATE(327)] = 12188,
  [SMALL_STATE(328)] = 12205,
  [SMALL_STATE(329)] = 12230,
  [SMALL_STATE(330)] = 12247,
  [SMALL_STATE(331)] = 12274,
  [SMALL_STATE(332)] = 12291,
  [SMALL_STATE(333)] = 12312,
  [SMALL_STATE(334)] = 12329,
  [SMALL_STATE(335)] = 12346,
  [SMALL_STATE(336)] = 12363,
  [SMALL_STATE(337)] = 12378,
  [SMALL_STATE(338)] = 12397,
  [SMALL_STATE(339)] = 12414,
  [SMALL_STATE(340)] = 12439,
  [SMALL_STATE(341)] = 12458,
  [SMALL_STATE(342)] = 12473,
  [SMALL_STATE(343)] = 12494,
  [SMALL_STATE(344)] = 12515,
  [SMALL_STATE(345)] = 12536,
  [SMALL_STATE(346)] = 12557,
  [SMALL_STATE(347)] = 12576,
  [SMALL_STATE(348)] = 12591,
  [SMALL_STATE(349)] = 12616,
  [SMALL_STATE(350)] = 12643,
  [SMALL_STATE(351)] = 12660,
  [SMALL_STATE(352)] = 12677,
  [SMALL_STATE(353)] = 12704,
  [SMALL_STATE(354)] = 12723,
  [SMALL_STATE(355)] = 12745,
  [SMALL_STATE(356)] = 12767,
  [SMALL_STATE(357)] = 12785,
  [SMALL_STATE(358)] = 12807,
  [SMALL_STATE(359)] = 12823,
  [SMALL_STATE(360)] = 12841,
  [SMALL_STATE(361)] = 12863,
  [SMALL_STATE(362)] = 12885,
  [SMALL_STATE(363)] = 12903,
  [SMALL_STATE(364)] = 12925,
  [SMALL_STATE(365)] = 12947,
  [SMALL_STATE(366)] = 12971,
  [SMALL_STATE(367)] = 12993,
  [SMALL_STATE(368)] = 13015,
  [SMALL_STATE(369)] = 13037,
  [SMALL_STATE(370)] = 13055,
  [SMALL_STATE(371)] = 13077,
  [SMALL_STATE(372)] = 13095,
  [SMALL_STATE(373)] = 13113,
  [SMALL_STATE(374)] = 13135,
  [SMALL_STATE(375)] = 13157,
  [SMALL_STATE(376)] = 13175,
  [SMALL_STATE(377)] = 13193,
  [SMALL_STATE(378)] = 13215,
  [SMALL_STATE(379)] = 13237,
  [SMALL_STATE(380)] = 13259,
  [SMALL_STATE(381)] = 13281,
  [SMALL_STATE(382)] = 13299,
  [SMALL_STATE(383)] = 13317,
  [SMALL_STATE(384)] = 13335,
  [SMALL_STATE(385)] = 13357,
  [SMALL_STATE(386)] = 13379,
  [SMALL_STATE(387)] = 13401,
  [SMALL_STATE(388)] = 13423,
  [SMALL_STATE(389)] = 13445,
  [SMALL_STATE(390)] = 13467,
  [SMALL_STATE(391)] = 13485,
  [SMALL_STATE(392)] = 13503,
  [SMALL_STATE(393)] = 13525,
  [SMALL_STATE(394)] = 13542,
  [SMALL_STATE(395)] = 13559,
  [SMALL_STATE(396)] = 13576,
  [SMALL_STATE(397)] = 13593,
  [SMALL_STATE(398)] = 13610,
  [SMALL_STATE(399)] = 13627,
  [SMALL_STATE(400)] = 13650,
  [SMALL_STATE(401)] = 13671,
  [SMALL_STATE(402)] = 13692,
  [SMALL_STATE(403)] = 13709,
  [SMALL_STATE(404)] = 13726,
  [SMALL_STATE(405)] = 13749,
  [SMALL_STATE(406)] = 13766,
  [SMALL_STATE(407)] = 13787,
  [SMALL_STATE(408)] = 13804,
  [SMALL_STATE(409)] = 13827,
  [SMALL_STATE(410)] = 13850,
  [SMALL_STATE(411)] = 13867,
  [SMALL_STATE(412)] = 13888,
  [SMALL_STATE(413)] = 13911,
  [SMALL_STATE(414)] = 13928,
  [SMALL_STATE(415)] = 13945,
  [SMALL_STATE(416)] = 13962,
  [SMALL_STATE(417)] = 13979,
  [SMALL_STATE(418)] = 13996,
  [SMALL_STATE(419)] = 14013,
  [SMALL_STATE(420)] = 14030,
  [SMALL_STATE(421)] = 14047,
  [SMALL_STATE(422)] = 14061,
  [SMALL_STATE(423)] = 14075,
  [SMALL_STATE(424)] = 14089,
  [SMALL_STATE(425)] = 14103,
  [SMALL_STATE(426)] = 14123,
  [SMALL_STATE(427)] = 14137,
  [SMALL_STATE(428)] = 14151,
  [SMALL_STATE(429)] = 14165,
  [SMALL_STATE(430)] = 14179,
  [SMALL_STATE(431)] = 14193,
  [SMALL_STATE(432)] = 14213,
  [SMALL_STATE(433)] = 14227,
  [SMALL_STATE(434)] = 14245,
  [SMALL_STATE(435)] = 14259,
  [SMALL_STATE(436)] = 14273,
  [SMALL_STATE(437)] = 14287,
  [SMALL_STATE(438)] = 14301,
  [SMALL_STATE(439)] = 14315,
  [SMALL_STATE(440)] = 14333,
  [SMALL_STATE(441)] = 14347,
  [SMALL_STATE(442)] = 14361,
  [SMALL_STATE(443)] = 14379,
  [SMALL_STATE(444)] = 14393,
  [SMALL_STATE(445)] = 14407,
  [SMALL_STATE(446)] = 14427,
  [SMALL_STATE(447)] = 14445,
  [SMALL_STATE(448)] = 14459,
  [SMALL_STATE(449)] = 14473,
  [SMALL_STATE(450)] = 14493,
  [SMALL_STATE(451)] = 14507,
  [SMALL_STATE(452)] = 14521,
  [SMALL_STATE(453)] = 14535,
  [SMALL_STATE(454)] = 14555,
  [SMALL_STATE(455)] = 14569,
  [SMALL_STATE(456)] = 14589,
  [SMALL_STATE(457)] = 14603,
  [SMALL_STATE(458)] = 14623,
  [SMALL_STATE(459)] = 14637,
  [SMALL_STATE(460)] = 14651,
  [SMALL_STATE(461)] = 14665,
  [SMALL_STATE(462)] = 14679,
  [SMALL_STATE(463)] = 14699,
  [SMALL_STATE(464)] = 14713,
  [SMALL_STATE(465)] = 14733,
  [SMALL_STATE(466)] = 14747,
  [SMALL_STATE(467)] = 14767,
  [SMALL_STATE(468)] = 14781,
  [SMALL_STATE(469)] = 14795,
  [SMALL_STATE(470)] = 14809,
  [SMALL_STATE(471)] = 14823,
  [SMALL_STATE(472)] = 14841,
  [SMALL_STATE(473)] = 14861,
  [SMALL_STATE(474)] = 14875,
  [SMALL_STATE(475)] = 14893,
  [SMALL_STATE(476)] = 14913,
  [SMALL_STATE(477)] = 14933,
  [SMALL_STATE(478)] = 14947,
  [SMALL_STATE(479)] = 14961,
  [SMALL_STATE(480)] = 14981,
  [SMALL_STATE(481)] = 14995,
  [SMALL_STATE(482)] = 15009,
  [SMALL_STATE(483)] = 15023,
  [SMALL_STATE(484)] = 15037,
  [SMALL_STATE(485)] = 15051,
  [SMALL_STATE(486)] = 15065,
  [SMALL_STATE(487)] = 15079,
  [SMALL_STATE(488)] = 15097,
  [SMALL_STATE(489)] = 15115,
  [SMALL_STATE(490)] = 15129,
  [SMALL_STATE(491)] = 15143,
  [SMALL_STATE(492)] = 15157,
  [SMALL_STATE(493)] = 15171,
  [SMALL_STATE(494)] = 15191,
  [SMALL_STATE(495)] = 15205,
  [SMALL_STATE(496)] = 15219,
  [SMALL_STATE(497)] = 15233,
  [SMALL_STATE(498)] = 15247,
  [SMALL_STATE(499)] = 15265,
  [SMALL_STATE(500)] = 15279,
  [SMALL_STATE(501)] = 15293,
  [SMALL_STATE(502)] = 15311,
  [SMALL_STATE(503)] = 15325,
  [SMALL_STATE(504)] = 15339,
  [SMALL_STATE(505)] = 15353,
  [SMALL_STATE(506)] = 15367,
  [SMALL_STATE(507)] = 15381,
  [SMALL_STATE(508)] = 15395,
  [SMALL_STATE(509)] = 15409,
  [SMALL_STATE(510)] = 15423,
  [SMALL_STATE(511)] = 15437,
  [SMALL_STATE(512)] = 15451,
  [SMALL_STATE(513)] = 15465,
  [SMALL_STATE(514)] = 15479,
  [SMALL_STATE(515)] = 15493,
  [SMALL_STATE(516)] = 15507,
  [SMALL_STATE(517)] = 15521,
  [SMALL_STATE(518)] = 15535,
  [SMALL_STATE(519)] = 15549,
  [SMALL_STATE(520)] = 15563,
  [SMALL_STATE(521)] = 15577,
  [SMALL_STATE(522)] = 15591,
  [SMALL_STATE(523)] = 15605,
  [SMALL_STATE(524)] = 15619,
  [SMALL_STATE(525)] = 15633,
  [SMALL_STATE(526)] = 15647,
  [SMALL_STATE(527)] = 15661,
  [SMALL_STATE(528)] = 15675,
  [SMALL_STATE(529)] = 15689,
  [SMALL_STATE(530)] = 15703,
  [SMALL_STATE(531)] = 15717,
  [SMALL_STATE(532)] = 15731,
  [SMALL_STATE(533)] = 15745,
  [SMALL_STATE(534)] = 15765,
  [SMALL_STATE(535)] = 15779,
  [SMALL_STATE(536)] = 15793,
  [SMALL_STATE(537)] = 15808,
  [SMALL_STATE(538)] = 15825,
  [SMALL_STATE(539)] = 15838,
  [SMALL_STATE(540)] = 15853,
  [SMALL_STATE(541)] = 15868,
  [SMALL_STATE(542)] = 15883,
  [SMALL_STATE(543)] = 15900,
  [SMALL_STATE(544)] = 15915,
  [SMALL_STATE(545)] = 15932,
  [SMALL_STATE(546)] = 15947,
  [SMALL_STATE(547)] = 15964,
  [SMALL_STATE(548)] = 15979,
  [SMALL_STATE(549)] = 15990,
  [SMALL_STATE(550)] = 16001,
  [SMALL_STATE(551)] = 16016,
  [SMALL_STATE(552)] = 16031,
  [SMALL_STATE(553)] = 16045,
  [SMALL_STATE(554)] = 16059,
  [SMALL_STATE(555)] = 16073,
  [SMALL_STATE(556)] = 16085,
  [SMALL_STATE(557)] = 16099,
  [SMALL_STATE(558)] = 16108,
  [SMALL_STATE(559)] = 16119,
  [SMALL_STATE(560)] = 16130,
  [SMALL_STATE(561)] = 16139,
  [SMALL_STATE(562)] = 16148,
  [SMALL_STATE(563)] = 16157,
  [SMALL_STATE(564)] = 16166,
  [SMALL_STATE(565)] = 16177,
  [SMALL_STATE(566)] = 16188,
  [SMALL_STATE(567)] = 16199,
  [SMALL_STATE(568)] = 16208,
  [SMALL_STATE(569)] = 16219,
  [SMALL_STATE(570)] = 16230,
  [SMALL_STATE(571)] = 16241,
  [SMALL_STATE(572)] = 16250,
  [SMALL_STATE(573)] = 16261,
  [SMALL_STATE(574)] = 16272,
  [SMALL_STATE(575)] = 16283,
  [SMALL_STATE(576)] = 16294,
  [SMALL_STATE(577)] = 16303,
  [SMALL_STATE(578)] = 16312,
  [SMALL_STATE(579)] = 16321,
  [SMALL_STATE(580)] = 16330,
  [SMALL_STATE(581)] = 16339,
  [SMALL_STATE(582)] = 16350,
  [SMALL_STATE(583)] = 16361,
  [SMALL_STATE(584)] = 16372,
  [SMALL_STATE(585)] = 16383,
  [SMALL_STATE(586)] = 16394,
  [SMALL_STATE(587)] = 16405,
  [SMALL_STATE(588)] = 16416,
  [SMALL_STATE(589)] = 16427,
  [SMALL_STATE(590)] = 16438,
  [SMALL_STATE(591)] = 16449,
  [SMALL_STATE(592)] = 16460,
  [SMALL_STATE(593)] = 16471,
  [SMALL_STATE(594)] = 16482,
  [SMALL_STATE(595)] = 16493,
  [SMALL_STATE(596)] = 16502,
  [SMALL_STATE(597)] = 16511,
  [SMALL_STATE(598)] = 16522,
  [SMALL_STATE(599)] = 16533,
  [SMALL_STATE(600)] = 16544,
  [SMALL_STATE(601)] = 16555,
  [SMALL_STATE(602)] = 16566,
  [SMALL_STATE(603)] = 16577,
  [SMALL_STATE(604)] = 16588,
  [SMALL_STATE(605)] = 16599,
  [SMALL_STATE(606)] = 16610,
  [SMALL_STATE(607)] = 16621,
  [SMALL_STATE(608)] = 16632,
  [SMALL_STATE(609)] = 16643,
  [SMALL_STATE(610)] = 16654,
  [SMALL_STATE(611)] = 16665,
  [SMALL_STATE(612)] = 16676,
  [SMALL_STATE(613)] = 16687,
  [SMALL_STATE(614)] = 16698,
  [SMALL_STATE(615)] = 16709,
  [SMALL_STATE(616)] = 16720,
  [SMALL_STATE(617)] = 16731,
  [SMALL_STATE(618)] = 16742,
  [SMALL_STATE(619)] = 16753,
  [SMALL_STATE(620)] = 16764,
  [SMALL_STATE(621)] = 16775,
  [SMALL_STATE(622)] = 16786,
  [SMALL_STATE(623)] = 16797,
  [SMALL_STATE(624)] = 16806,
  [SMALL_STATE(625)] = 16815,
  [SMALL_STATE(626)] = 16824,
  [SMALL_STATE(627)] = 16833,
  [SMALL_STATE(628)] = 16842,
  [SMALL_STATE(629)] = 16853,
  [SMALL_STATE(630)] = 16864,
  [SMALL_STATE(631)] = 16873,
  [SMALL_STATE(632)] = 16882,
  [SMALL_STATE(633)] = 16891,
  [SMALL_STATE(634)] = 16902,
  [SMALL_STATE(635)] = 16911,
  [SMALL_STATE(636)] = 16920,
  [SMALL_STATE(637)] = 16931,
  [SMALL_STATE(638)] = 16942,
  [SMALL_STATE(639)] = 16953,
  [SMALL_STATE(640)] = 16964,
  [SMALL_STATE(641)] = 16975,
  [SMALL_STATE(642)] = 16984,
  [SMALL_STATE(643)] = 16995,
  [SMALL_STATE(644)] = 17006,
  [SMALL_STATE(645)] = 17017,
  [SMALL_STATE(646)] = 17028,
  [SMALL_STATE(647)] = 17039,
  [SMALL_STATE(648)] = 17050,
  [SMALL_STATE(649)] = 17061,
  [SMALL_STATE(650)] = 17072,
  [SMALL_STATE(651)] = 17083,
  [SMALL_STATE(652)] = 17094,
  [SMALL_STATE(653)] = 17105,
  [SMALL_STATE(654)] = 17116,
  [SMALL_STATE(655)] = 17127,
  [SMALL_STATE(656)] = 17136,
  [SMALL_STATE(657)] = 17147,
  [SMALL_STATE(658)] = 17158,
  [SMALL_STATE(659)] = 17169,
  [SMALL_STATE(660)] = 17180,
  [SMALL_STATE(661)] = 17191,
  [SMALL_STATE(662)] = 17202,
  [SMALL_STATE(663)] = 17213,
  [SMALL_STATE(664)] = 17224,
  [SMALL_STATE(665)] = 17235,
  [SMALL_STATE(666)] = 17246,
  [SMALL_STATE(667)] = 17255,
  [SMALL_STATE(668)] = 17264,
  [SMALL_STATE(669)] = 17273,
  [SMALL_STATE(670)] = 17282,
  [SMALL_STATE(671)] = 17291,
  [SMALL_STATE(672)] = 17300,
  [SMALL_STATE(673)] = 17309,
  [SMALL_STATE(674)] = 17318,
  [SMALL_STATE(675)] = 17327,
  [SMALL_STATE(676)] = 17336,
  [SMALL_STATE(677)] = 17345,
  [SMALL_STATE(678)] = 17354,
  [SMALL_STATE(679)] = 17363,
  [SMALL_STATE(680)] = 17372,
  [SMALL_STATE(681)] = 17381,
  [SMALL_STATE(682)] = 17390,
  [SMALL_STATE(683)] = 17399,
  [SMALL_STATE(684)] = 17408,
  [SMALL_STATE(685)] = 17417,
  [SMALL_STATE(686)] = 17426,
  [SMALL_STATE(687)] = 17435,
  [SMALL_STATE(688)] = 17444,
  [SMALL_STATE(689)] = 17453,
  [SMALL_STATE(690)] = 17462,
  [SMALL_STATE(691)] = 17471,
  [SMALL_STATE(692)] = 17480,
  [SMALL_STATE(693)] = 17489,
  [SMALL_STATE(694)] = 17498,
  [SMALL_STATE(695)] = 17507,
  [SMALL_STATE(696)] = 17518,
  [SMALL_STATE(697)] = 17529,
  [SMALL_STATE(698)] = 17540,
  [SMALL_STATE(699)] = 17551,
  [SMALL_STATE(700)] = 17562,
  [SMALL_STATE(701)] = 17573,
  [SMALL_STATE(702)] = 17584,
  [SMALL_STATE(703)] = 17595,
  [SMALL_STATE(704)] = 17604,
  [SMALL_STATE(705)] = 17615,
  [SMALL_STATE(706)] = 17626,
  [SMALL_STATE(707)] = 17637,
  [SMALL_STATE(708)] = 17648,
  [SMALL_STATE(709)] = 17659,
  [SMALL_STATE(710)] = 17670,
  [SMALL_STATE(711)] = 17681,
  [SMALL_STATE(712)] = 17692,
  [SMALL_STATE(713)] = 17703,
  [SMALL_STATE(714)] = 17714,
  [SMALL_STATE(715)] = 17725,
  [SMALL_STATE(716)] = 17736,
  [SMALL_STATE(717)] = 17747,
  [SMALL_STATE(718)] = 17758,
  [SMALL_STATE(719)] = 17769,
  [SMALL_STATE(720)] = 17780,
  [SMALL_STATE(721)] = 17791,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(721),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(718),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 3, .production_id = 37),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 3, .production_id = 37),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 2, .production_id = 25),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 2, .production_id = 25),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 4, .production_id = 37),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 4, .production_id = 37),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 3, .production_id = 25),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 3, .production_id = 25),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(442),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(252),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(295),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(78),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(269),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_block, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(279),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(712),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(275),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__target_block, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(713),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(192),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(303),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(42),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(714),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(423),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(14),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(239),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(343),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(47),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(316),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(48),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(471),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(244),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(294),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(72),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(268),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(277),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(705),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(278),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(696),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(228),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(317),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(49),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(664),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(509),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(33),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(242),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2, .production_id = 5),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2, .production_id = 5),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 5, .production_id = 17),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 5, .production_id = 17),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(672),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(60),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 2),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(572),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(669),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(158),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 3, .production_id = 5),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3, .production_id = 5),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(67),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(595),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(128),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(576),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(148),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 28),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 28),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 2, .production_id = 20),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 2, .production_id = 20),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 4, .production_id = 18),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 4, .production_id = 18),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 27),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 27),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 41),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 41),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 7),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 7),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 7, .production_id = 57),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 7, .production_id = 57),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 7, .production_id = 58),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 7, .production_id = 58),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 7),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 7),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 56),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 56),
  [495] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(133),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 7),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 7),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 59),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 59),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 8, .production_id = 60),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 8, .production_id = 60),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 9, .production_id = 59),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 9, .production_id = 59),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait_command, 3),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wait_command, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_command, 4, .production_id = 29),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_command, 4, .production_id = 29),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 3),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 6),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 6),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 6, .production_id = 53),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 6, .production_id = 53),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 6, .production_id = 52),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 6, .production_id = 52),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 6, .production_id = 51),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_git_clone_command, 6, .production_id = 51),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 6, .production_id = 3),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 6, .production_id = 3),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_docker_command, 5, .production_id = 5),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_docker_command, 5, .production_id = 5),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_command, 5, .production_id = 18),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_command, 5, .production_id = 18),
  [578] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(97),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 56),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 56),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 48),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 5, .production_id = 48),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 47),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 5, .production_id = 47),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 5, .production_id = 46),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 5, .production_id = 46),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_command, 5, .production_id = 18),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_command, 5, .production_id = 18),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 3, .production_id = 26),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 3, .production_id = 26),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 5, .production_id = 45),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 5, .production_id = 45),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 5, .production_id = 44),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_git_clone_command, 5, .production_id = 44),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 5, .production_id = 42),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_command, 5, .production_id = 42),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_docker_command, 4),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_docker_command, 4),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait_command, 4),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wait_command, 4),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_dockerfile_command, 3, .production_id = 24),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_dockerfile_command, 3, .production_id = 24),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_command, 3, .production_id = 22),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_command, 3, .production_id = 22),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 40),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 40),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 39),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 4, .production_id = 39),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 38),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 4, .production_id = 38),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 4, .production_id = 33),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 4, .production_id = 33),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [663] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(118),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_dockerfile_command, 4, .production_id = 32),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_dockerfile_command, 4, .production_id = 32),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 4, .production_id = 30),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_command, 4, .production_id = 30),
  [674] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(699),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2, .production_id = 21),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2, .production_id = 21),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(247),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(631),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(563),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(703),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(254),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(634),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(635),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chown, 3, .production_id = 10),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chown, 3, .production_id = 10),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(707),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_platform, 3, .production_id = 10),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_platform, 3, .production_id = 10),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(351),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(596),
  [804] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(623),
  [807] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(666),
  [810] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(627),
  [813] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(557),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(673),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount, 3, .production_id = 10),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount, 3, .production_id = 10),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_secret, 3, .production_id = 10),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_secret, 3, .production_id = 10),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [860] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(474),
  [863] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(248),
  [866] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(721),
  [869] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(537),
  [872] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(718),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [893] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 43), SHIFT_REPEAT(336),
  [896] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 43), SHIFT_REPEAT(673),
  [899] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 43), SHIFT_REPEAT(674),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 43),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4),
  [908] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(567),
  [911] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(335),
  [914] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(571),
  [917] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(577),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [924] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(654),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4),
  [945] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(578),
  [948] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(579),
  [951] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(580),
  [954] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(624),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [971] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 4),
  [973] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(560),
  [976] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(561),
  [979] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(394),
  [982] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(562),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4),
  [987] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(567),
  [990] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(358),
  [993] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(571),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 2),
  [1020] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 3, .production_id = 2),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1034] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 19),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 3, .production_id = 10),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 5, .production_id = 55),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pull, 3, .production_id = 10),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compose, 3, .production_id = 10),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 8, .production_id = 61),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sep, 3, .production_id = 10),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 1, .production_id = 1),
  [1084] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 1, .production_id = 31),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [1094] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [1098] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [1100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4),
  [1102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(376),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [1107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(346),
  [1110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 1, .production_id = 1),
  [1120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 23), SHIFT_REPEAT(550),
  [1123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 23), SHIFT_REPEAT(707),
  [1126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 23), SHIFT_REPEAT(556),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [1139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 1, .production_id = 1),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4),
  [1161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(435),
  [1164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(703),
  [1167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [1169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [1175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [1181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [1195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [1221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6, .production_id = 2),
  [1225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 6, .production_id = 2),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 2),
  [1229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 5, .production_id = 2),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [1243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [1263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [1269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cache_command_repeat1, 1, .production_id = 1),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 1, .production_id = 1),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [1281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_build_arg, 5, .production_id = 50),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_build_arg, 5, .production_id = 50),
  [1285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [1299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [1301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [1303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4),
  [1305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(655),
  [1308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(536),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [1315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [1317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_target, 3, .production_id = 10),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_target, 3, .production_id = 10),
  [1321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_file, 3, .production_id = 10),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_file, 3, .production_id = 10),
  [1325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 1, .production_id = 1),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 1, .production_id = 1),
  [1329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sharing, 3),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sharing, 3),
  [1333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 3),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [1337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [1339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [1341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [1343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [1351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [1353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [1355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [1357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 36),
  [1361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 36), SHIFT_REPEAT(274),
  [1364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 36),
  [1366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 1, .production_id = 1),
  [1376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [1378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [1380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4),
  [1398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(538),
  [1401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [1403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [1419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [1429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [1433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [1439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [1449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [1453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [1455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_try_command_repeat1, 2, .production_id = 54),
  [1461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_try_command_repeat1, 2, .production_id = 54), SHIFT_REPEAT(305),
  [1464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [1470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [1476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [1478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [1480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [1484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [1486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [1488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [1496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [1498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [1500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [1506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [1508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [1510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [1516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [1522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [1524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [1526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [1528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [1530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [1532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [1536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [1538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [1540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [1542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [1544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [1546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [1548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [1550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [1552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [1554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [1556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [1558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [1560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [1562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [1564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [1566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [1568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [1570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [1572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [1574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [1576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [1578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [1580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [1586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [1588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 1, .production_id = 1),
  [1598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 35),
  [1600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 35),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_block, 1, .production_id = 34),
  [1604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_block, 1, .production_id = 34),
  [1606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact, 3),
  [1608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact, 3),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 6),
  [1620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 6),
  [1622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2),
  [1624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2), SHIFT_REPEAT(546),
  [1627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 5),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 5),
  [1631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 19),
  [1633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 3, .production_id = 10),
  [1635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3, .production_id = 10),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_try_command_repeat1, 1, .production_id = 49),
  [1643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [1649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [1653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [1655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [1683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(647),
  [1687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [1689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [1721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [1723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [1777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [1779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [1781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(658),
  [1783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [1785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [1791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [1793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [1799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(702),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [1851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [1863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [1865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [1867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [1869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [1871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [1873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [1875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [1877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [1879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [1881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [1883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [1885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [1887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [1889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [1891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [1893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [1895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [1897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [1899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(613),
  [1901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [1903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [1905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(616),
  [1907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [1909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [1911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(619),
  [1913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [1915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(621),
  [1917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [1919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [1935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [1937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [1949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1961] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
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
