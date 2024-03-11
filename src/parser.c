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
#define STATE_COUNT 726
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 172
#define ALIAS_COUNT 0
#define TOKEN_COUNT 99
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
  anon_sym_LOCALLY = 21,
  anon_sym_RUN = 22,
  anon_sym_DASH_DASH = 23,
  anon_sym_SAVEARTIFACT = 24,
  anon_sym_ASLOCAL = 25,
  anon_sym_SAVEIMAGE = 26,
  anon_sym_SET = 27,
  anon_sym_TRY = 28,
  anon_sym_FINALLY = 29,
  anon_sym_WAIT = 30,
  anon_sym_WITHDOCKER = 31,
  sym_expr = 32,
  sym_identifier = 33,
  anon_sym_COLON2 = 34,
  anon_sym_AT = 35,
  sym_image_name = 36,
  sym_image_tag = 37,
  sym_image_digest = 38,
  sym_immediate_identifier = 39,
  sym_path = 40,
  aux_sym_shell_fragment_token1 = 41,
  aux_sym_shell_fragment_token2 = 42,
  aux_sym_shell_fragment_token3 = 43,
  anon_sym_PLUS = 44,
  anon_sym_LPAREN = 45,
  anon_sym_RPAREN = 46,
  sym_version_major_minor = 47,
  sym_allow_privileged = 48,
  anon_sym_DASH_DASHbranch = 49,
  aux_sym_branch_token1 = 50,
  anon_sym_DASH_DASH2 = 51,
  anon_sym_DASH_DASHcache_DASHfrom = 52,
  sym_cache_hint = 53,
  anon_sym_DASH_DASHchmod = 54,
  anon_sym_DASH_DASHchown = 55,
  anon_sym_DASH_DASHcompose = 56,
  sym_dir = 57,
  anon_sym_DASH_DASHbuild_DASHarg = 58,
  anon_sym_DASHf = 59,
  anon_sym_DASH_DASHtarget = 60,
  sym_entrypoint = 61,
  sym_feature_flag = 62,
  sym_force = 63,
  sym_global = 64,
  anon_sym_DASH_DASHid = 65,
  sym_if_exists = 66,
  sym_keep_own = 67,
  sym_keep_ts = 68,
  anon_sym_DASH_DASHload = 69,
  anon_sym_DASH_DASHmount = 70,
  sym_network_none = 71,
  sym_no_cache = 72,
  sym_pass_args = 73,
  sym_persist = 74,
  anon_sym_DASH_DASHplatform = 75,
  sym_privileged = 76,
  anon_sym_DASH_DASHpull = 77,
  sym_push = 78,
  sym_required = 79,
  anon_sym_DASH_DASHsecret = 80,
  anon_sym_DASH_DASHsep = 81,
  anon_sym_DASH_DASHservice = 82,
  anon_sym_DASH_DASHsharing = 83,
  sym_ssh = 84,
  sym_symlink_no_follow = 85,
  anon_sym_DQUOTE = 86,
  aux_sym_double_quoted_string_token1 = 87,
  anon_sym_SQUOTE = 88,
  aux_sym_single_quoted_string_token1 = 89,
  sym_unquoted_string = 90,
  sym_line_continuation = 91,
  sym_comment = 92,
  sym_line_continuation_comment = 93,
  anon_sym_LF = 94,
  anon_sym_CRn = 95,
  anon_sym_FF = 96,
  sym__indent = 97,
  sym__dedent = 98,
  sym_source_file = 99,
  sym_arg_command = 100,
  sym_from_command = 101,
  sym_project_command = 102,
  sym_target = 103,
  sym_version_command = 104,
  sym_cache_command = 105,
  sym_copy_command = 106,
  sym_for_command = 107,
  sym_from_dockerfile_command = 108,
  sym_git_clone_command = 109,
  sym_if_command = 110,
  sym_let_command = 111,
  sym_locally_command = 112,
  sym_run_command = 113,
  sym_save_artifact_command = 114,
  sym_save_image_command = 115,
  sym_set_command = 116,
  sym_try_command = 117,
  sym_wait_command = 118,
  sym_with_docker_command = 119,
  aux_sym__target_block = 120,
  sym__conditional_block = 121,
  sym_else_if_block = 122,
  sym_else_block = 123,
  sym_image_spec = 124,
  sym_shell_fragment = 125,
  sym_target_ref = 126,
  sym_target_artifact = 127,
  sym_target_artifact_build_args = 128,
  sym_branch = 129,
  sym_build_arg = 130,
  sym_cache_from = 131,
  sym_chmod = 132,
  sym_chown = 133,
  sym_compose = 134,
  sym_docker_build_arg = 135,
  sym_docker_file = 136,
  sym_docker_target = 137,
  sym_id = 138,
  sym_load = 139,
  sym_mount = 140,
  sym_platform = 141,
  sym_pull = 142,
  sym_secret = 143,
  sym_sep = 144,
  sym_service = 145,
  sym_sharing = 146,
  sym__string = 147,
  sym_double_quoted_string = 148,
  sym_single_quoted_string = 149,
  sym__eol = 150,
  aux_sym_source_file_repeat1 = 151,
  aux_sym_arg_command_repeat1 = 152,
  aux_sym_build_command_repeat2 = 153,
  aux_sym_from_command_repeat1 = 154,
  aux_sym_version_command_repeat1 = 155,
  aux_sym_cache_command_repeat1 = 156,
  aux_sym_copy_command_repeat1 = 157,
  aux_sym_copy_command_repeat2 = 158,
  aux_sym_for_command_repeat1 = 159,
  aux_sym_for_command_repeat2 = 160,
  aux_sym_from_dockerfile_command_repeat1 = 161,
  aux_sym_git_clone_command_repeat1 = 162,
  aux_sym_if_command_repeat1 = 163,
  aux_sym_run_command_repeat1 = 164,
  aux_sym_save_artifact_command_repeat1 = 165,
  aux_sym_save_image_command_repeat1 = 166,
  aux_sym_save_image_command_repeat2 = 167,
  aux_sym_try_command_repeat1 = 168,
  aux_sym_with_docker_command_repeat1 = 169,
  aux_sym__conditional_block_repeat1 = 170,
  aux_sym_shell_fragment_repeat1 = 171,
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
  [anon_sym_LOCALLY] = "LOCALLY",
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
  [sym_locally_command] = "locally_command",
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
  [anon_sym_LOCALLY] = anon_sym_LOCALLY,
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
  [sym_locally_command] = sym_locally_command,
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
  [anon_sym_LOCALLY] = {
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
  [sym_locally_command] = {
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
  [10] = 7,
  [11] = 9,
  [12] = 12,
  [13] = 13,
  [14] = 8,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 12,
  [21] = 21,
  [22] = 4,
  [23] = 23,
  [24] = 24,
  [25] = 13,
  [26] = 26,
  [27] = 15,
  [28] = 17,
  [29] = 18,
  [30] = 30,
  [31] = 19,
  [32] = 23,
  [33] = 4,
  [34] = 34,
  [35] = 35,
  [36] = 24,
  [37] = 26,
  [38] = 4,
  [39] = 35,
  [40] = 16,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 42,
  [48] = 42,
  [49] = 42,
  [50] = 45,
  [51] = 45,
  [52] = 45,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 53,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 53,
  [69] = 41,
  [70] = 53,
  [71] = 67,
  [72] = 66,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 43,
  [80] = 80,
  [81] = 59,
  [82] = 82,
  [83] = 83,
  [84] = 55,
  [85] = 85,
  [86] = 86,
  [87] = 63,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 56,
  [92] = 54,
  [93] = 62,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 67,
  [99] = 57,
  [100] = 100,
  [101] = 101,
  [102] = 95,
  [103] = 103,
  [104] = 66,
  [105] = 67,
  [106] = 106,
  [107] = 66,
  [108] = 67,
  [109] = 109,
  [110] = 46,
  [111] = 65,
  [112] = 112,
  [113] = 44,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 41,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 59,
  [124] = 41,
  [125] = 125,
  [126] = 65,
  [127] = 127,
  [128] = 128,
  [129] = 59,
  [130] = 130,
  [131] = 65,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 41,
  [137] = 62,
  [138] = 138,
  [139] = 64,
  [140] = 140,
  [141] = 63,
  [142] = 96,
  [143] = 62,
  [144] = 63,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 64,
  [152] = 152,
  [153] = 153,
  [154] = 64,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 58,
  [161] = 66,
  [162] = 43,
  [163] = 76,
  [164] = 43,
  [165] = 77,
  [166] = 60,
  [167] = 77,
  [168] = 77,
  [169] = 41,
  [170] = 76,
  [171] = 76,
  [172] = 43,
  [173] = 44,
  [174] = 67,
  [175] = 44,
  [176] = 46,
  [177] = 44,
  [178] = 46,
  [179] = 78,
  [180] = 46,
  [181] = 66,
  [182] = 74,
  [183] = 73,
  [184] = 43,
  [185] = 75,
  [186] = 89,
  [187] = 130,
  [188] = 135,
  [189] = 117,
  [190] = 158,
  [191] = 106,
  [192] = 44,
  [193] = 101,
  [194] = 150,
  [195] = 149,
  [196] = 138,
  [197] = 133,
  [198] = 159,
  [199] = 155,
  [200] = 145,
  [201] = 115,
  [202] = 116,
  [203] = 148,
  [204] = 147,
  [205] = 125,
  [206] = 146,
  [207] = 140,
  [208] = 121,
  [209] = 85,
  [210] = 134,
  [211] = 46,
  [212] = 152,
  [213] = 100,
  [214] = 128,
  [215] = 127,
  [216] = 132,
  [217] = 153,
  [218] = 83,
  [219] = 86,
  [220] = 88,
  [221] = 94,
  [222] = 97,
  [223] = 82,
  [224] = 90,
  [225] = 103,
  [226] = 109,
  [227] = 122,
  [228] = 156,
  [229] = 112,
  [230] = 80,
  [231] = 114,
  [232] = 118,
  [233] = 157,
  [234] = 120,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 235,
  [239] = 237,
  [240] = 240,
  [241] = 241,
  [242] = 241,
  [243] = 243,
  [244] = 243,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 66,
  [250] = 67,
  [251] = 251,
  [252] = 248,
  [253] = 248,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 66,
  [258] = 67,
  [259] = 256,
  [260] = 260,
  [261] = 260,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 264,
  [268] = 268,
  [269] = 265,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 272,
  [274] = 274,
  [275] = 275,
  [276] = 270,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 278,
  [281] = 279,
  [282] = 277,
  [283] = 55,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 286,
  [289] = 285,
  [290] = 60,
  [291] = 54,
  [292] = 56,
  [293] = 293,
  [294] = 41,
  [295] = 58,
  [296] = 57,
  [297] = 297,
  [298] = 66,
  [299] = 73,
  [300] = 43,
  [301] = 74,
  [302] = 67,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 303,
  [308] = 306,
  [309] = 303,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 306,
  [321] = 67,
  [322] = 311,
  [323] = 323,
  [324] = 66,
  [325] = 313,
  [326] = 306,
  [327] = 246,
  [328] = 328,
  [329] = 329,
  [330] = 328,
  [331] = 331,
  [332] = 317,
  [333] = 333,
  [334] = 319,
  [335] = 335,
  [336] = 336,
  [337] = 67,
  [338] = 73,
  [339] = 46,
  [340] = 66,
  [341] = 67,
  [342] = 66,
  [343] = 44,
  [344] = 316,
  [345] = 313,
  [346] = 312,
  [347] = 303,
  [348] = 311,
  [349] = 303,
  [350] = 350,
  [351] = 312,
  [352] = 262,
  [353] = 263,
  [354] = 306,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 125,
  [362] = 362,
  [363] = 363,
  [364] = 148,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 365,
  [369] = 369,
  [370] = 356,
  [371] = 371,
  [372] = 372,
  [373] = 150,
  [374] = 374,
  [375] = 363,
  [376] = 363,
  [377] = 85,
  [378] = 80,
  [379] = 379,
  [380] = 366,
  [381] = 379,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 363,
  [387] = 369,
  [388] = 362,
  [389] = 357,
  [390] = 379,
  [391] = 366,
  [392] = 117,
  [393] = 116,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 395,
  [399] = 399,
  [400] = 67,
  [401] = 66,
  [402] = 402,
  [403] = 403,
  [404] = 397,
  [405] = 397,
  [406] = 406,
  [407] = 407,
  [408] = 403,
  [409] = 67,
  [410] = 66,
  [411] = 411,
  [412] = 246,
  [413] = 402,
  [414] = 407,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 395,
  [419] = 406,
  [420] = 420,
  [421] = 421,
  [422] = 247,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 426,
  [431] = 423,
  [432] = 424,
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
  [448] = 448,
  [449] = 449,
  [450] = 436,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 427,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 455,
  [465] = 465,
  [466] = 447,
  [467] = 467,
  [468] = 468,
  [469] = 439,
  [470] = 438,
  [471] = 471,
  [472] = 472,
  [473] = 444,
  [474] = 474,
  [475] = 475,
  [476] = 444,
  [477] = 477,
  [478] = 76,
  [479] = 77,
  [480] = 480,
  [481] = 468,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 480,
  [489] = 489,
  [490] = 490,
  [491] = 435,
  [492] = 480,
  [493] = 485,
  [494] = 438,
  [495] = 439,
  [496] = 496,
  [497] = 451,
  [498] = 446,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 458,
  [503] = 461,
  [504] = 435,
  [505] = 462,
  [506] = 463,
  [507] = 425,
  [508] = 471,
  [509] = 496,
  [510] = 510,
  [511] = 483,
  [512] = 484,
  [513] = 485,
  [514] = 514,
  [515] = 489,
  [516] = 516,
  [517] = 517,
  [518] = 517,
  [519] = 499,
  [520] = 486,
  [521] = 477,
  [522] = 428,
  [523] = 475,
  [524] = 429,
  [525] = 467,
  [526] = 501,
  [527] = 510,
  [528] = 514,
  [529] = 460,
  [530] = 456,
  [531] = 453,
  [532] = 452,
  [533] = 516,
  [534] = 487,
  [535] = 449,
  [536] = 445,
  [537] = 457,
  [538] = 440,
  [539] = 434,
  [540] = 540,
  [541] = 66,
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
  [553] = 67,
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
  [568] = 568,
  [569] = 569,
  [570] = 565,
  [571] = 571,
  [572] = 562,
  [573] = 564,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 565,
  [586] = 564,
  [587] = 574,
  [588] = 578,
  [589] = 579,
  [590] = 562,
  [591] = 579,
  [592] = 578,
  [593] = 593,
  [594] = 564,
  [595] = 574,
  [596] = 578,
  [597] = 579,
  [598] = 562,
  [599] = 599,
  [600] = 580,
  [601] = 564,
  [602] = 574,
  [603] = 578,
  [604] = 579,
  [605] = 562,
  [606] = 564,
  [607] = 574,
  [608] = 578,
  [609] = 579,
  [610] = 562,
  [611] = 578,
  [612] = 579,
  [613] = 578,
  [614] = 579,
  [615] = 578,
  [616] = 579,
  [617] = 578,
  [618] = 579,
  [619] = 578,
  [620] = 579,
  [621] = 578,
  [622] = 579,
  [623] = 578,
  [624] = 579,
  [625] = 578,
  [626] = 579,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 578,
  [634] = 630,
  [635] = 566,
  [636] = 629,
  [637] = 637,
  [638] = 577,
  [639] = 581,
  [640] = 579,
  [641] = 641,
  [642] = 642,
  [643] = 574,
  [644] = 576,
  [645] = 645,
  [646] = 637,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 657,
  [658] = 576,
  [659] = 648,
  [660] = 574,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 564,
  [665] = 665,
  [666] = 645,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 628,
  [671] = 629,
  [672] = 630,
  [673] = 580,
  [674] = 629,
  [675] = 630,
  [676] = 580,
  [677] = 629,
  [678] = 630,
  [679] = 629,
  [680] = 630,
  [681] = 629,
  [682] = 630,
  [683] = 629,
  [684] = 630,
  [685] = 629,
  [686] = 630,
  [687] = 629,
  [688] = 630,
  [689] = 629,
  [690] = 630,
  [691] = 629,
  [692] = 630,
  [693] = 629,
  [694] = 630,
  [695] = 629,
  [696] = 630,
  [697] = 629,
  [698] = 630,
  [699] = 653,
  [700] = 665,
  [701] = 701,
  [702] = 702,
  [703] = 703,
  [704] = 663,
  [705] = 650,
  [706] = 706,
  [707] = 628,
  [708] = 708,
  [709] = 655,
  [710] = 710,
  [711] = 565,
  [712] = 661,
  [713] = 713,
  [714] = 656,
  [715] = 669,
  [716] = 710,
  [717] = 713,
  [718] = 703,
  [719] = 575,
  [720] = 720,
  [721] = 651,
  [722] = 722,
  [723] = 562,
  [724] = 668,
  [725] = 725,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(298);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(727);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(731);
      if (lookahead == '(') ADVANCE(684);
      if (lookahead == ')') ADVANCE(685);
      if (lookahead == '+') ADVANCE(683);
      if (lookahead == ',') ADVANCE(676);
      if (lookahead == '-') ADVANCE(677);
      if (lookahead == '/') ADVANCE(311);
      if (lookahead == ':') ADVANCE(385);
      if (lookahead == '=') ADVANCE(303);
      if (lookahead == '@') ADVANCE(386);
      if (lookahead == 'A') ADVANCE(158);
      if (lookahead == 'B') ADVANCE(176);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'E') ADVANCE(134);
      if (lookahead == 'F') ADVANCE(123);
      if (lookahead == 'G') ADVANCE(124);
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead == 'L') ADVANCE(109);
      if (lookahead == 'P') ADVANCE(163);
      if (lookahead == 'R') ADVANCE(177);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == 'V') ADVANCE(111);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(294)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(738);
      if (lookahead == '\f') ADVANCE(739);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(737);
      if (lookahead == '#') ADVANCE(681);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(680);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(737);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(742);
      if (lookahead == '\f') ADVANCE(743);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(744);
      if (lookahead == '\f') ADVANCE(754);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(683);
      if (lookahead == '-') ADVANCE(392);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(750);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(744);
      if (lookahead == '\f') ADVANCE(754);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(683);
      if (lookahead == '-') ADVANCE(392);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(745);
      if (lookahead == '\f') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(727);
      if (lookahead == '#') ADVANCE(735);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(751);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(736);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(745);
      if (lookahead == '\f') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(727);
      if (lookahead == '#') ADVANCE(735);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(736);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(746);
      if (lookahead == '\f') ADVANCE(756);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == '(') ADVANCE(684);
      if (lookahead == '+') ADVANCE(683);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(752);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(675);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(746);
      if (lookahead == '\f') ADVANCE(756);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == '(') ADVANCE(684);
      if (lookahead == '+') ADVANCE(683);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(675);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '#') ADVANCE(728);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(729);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(730);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '#') ADVANCE(732);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(734);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(747);
      if (lookahead == '\f') ADVANCE(757);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(753);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(14)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(679);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(747);
      if (lookahead == '\f') ADVANCE(757);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(14)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(679);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\f') ADVANCE(758);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(303);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\f') ADVANCE(758);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(749);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\f') ADVANCE(758);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(727);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(731);
      if (lookahead == '(') ADVANCE(684);
      if (lookahead == ')') ADVANCE(685);
      if (lookahead == '+') ADVANCE(683);
      if (lookahead == '-') ADVANCE(677);
      if (lookahead == ':') ADVANCE(312);
      if (lookahead == 'A') ADVANCE(158);
      if (lookahead == 'B') ADVANCE(176);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'E') ADVANCE(134);
      if (lookahead == 'F') ADVANCE(123);
      if (lookahead == 'G') ADVANCE(124);
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead == 'L') ADVANCE(109);
      if (lookahead == 'P') ADVANCE(163);
      if (lookahead == 'R') ADVANCE(177);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == 'V') ADVANCE(111);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(749);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(676);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 19:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(727);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(731);
      if (lookahead == '(') ADVANCE(684);
      if (lookahead == ')') ADVANCE(685);
      if (lookahead == '+') ADVANCE(683);
      if (lookahead == '-') ADVANCE(677);
      if (lookahead == ':') ADVANCE(312);
      if (lookahead == 'A') ADVANCE(158);
      if (lookahead == 'B') ADVANCE(176);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'E') ADVANCE(134);
      if (lookahead == 'F') ADVANCE(123);
      if (lookahead == 'G') ADVANCE(124);
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead == 'L') ADVANCE(109);
      if (lookahead == 'P') ADVANCE(163);
      if (lookahead == 'R') ADVANCE(177);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == 'V') ADVANCE(111);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(676);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 20:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(727);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(731);
      if (lookahead == '(') ADVANCE(684);
      if (lookahead == ')') ADVANCE(685);
      if (lookahead == '+') ADVANCE(683);
      if (lookahead == '-') ADVANCE(678);
      if (lookahead == ':') ADVANCE(312);
      if (lookahead == 'A') ADVANCE(158);
      if (lookahead == 'B') ADVANCE(176);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'E') ADVANCE(134);
      if (lookahead == 'F') ADVANCE(123);
      if (lookahead == 'G') ADVANCE(124);
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead == 'L') ADVANCE(109);
      if (lookahead == 'P') ADVANCE(163);
      if (lookahead == 'R') ADVANCE(177);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == 'V') ADVANCE(111);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(676);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(349);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == 'm') ADVANCE(247);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 'p') ADVANCE(263);
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(690);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '=') ADVANCE(689);
      if (lookahead == 'A') ADVANCE(157);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'E') ADVANCE(134);
      if (lookahead == 'F') ADVANCE(123);
      if (lookahead == 'G') ADVANCE(124);
      if (lookahead == 'I') ADVANCE(114);
      if (lookahead == 'L') ADVANCE(109);
      if (lookahead == 'R') ADVANCE(177);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(36)
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(691);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(689);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(54)
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(677);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(676);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(26)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(679);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(678);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(676);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(26)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(679);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(102);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(727);
      if (lookahead == '#') ADVANCE(735);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(736);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(683);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == ':') ADVANCE(385);
      if (lookahead == '@') ADVANCE(386);
      if (lookahead == 'A') ADVANCE(157);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'E') ADVANCE(134);
      if (lookahead == 'F') ADVANCE(123);
      if (lookahead == 'G') ADVANCE(124);
      if (lookahead == 'I') ADVANCE(114);
      if (lookahead == 'L') ADVANCE(109);
      if (lookahead == 'R') ADVANCE(177);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(683);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == 'A') ADVANCE(157);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'E') ADVANCE(134);
      if (lookahead == 'F') ADVANCE(123);
      if (lookahead == 'G') ADVANCE(124);
      if (lookahead == 'I') ADVANCE(114);
      if (lookahead == 'L') ADVANCE(109);
      if (lookahead == 'R') ADVANCE(177);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(389);
      if (lookahead == ':') ADVANCE(312);
      if (lookahead == 'A') ADVANCE(427);
      if (lookahead == 'C') ADVANCE(396);
      if (lookahead == 'E') ADVANCE(415);
      if (lookahead == 'F') ADVANCE(425);
      if (lookahead == 'G') ADVANCE(412);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(407);
      if (lookahead == 'R') ADVANCE(436);
      if (lookahead == 'S') ADVANCE(397);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == 'W') ADVANCE(399);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(427);
      if (lookahead == 'C') ADVANCE(396);
      if (lookahead == 'E') ADVANCE(421);
      if (lookahead == 'F') ADVANCE(425);
      if (lookahead == 'G') ADVANCE(412);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(407);
      if (lookahead == 'R') ADVANCE(436);
      if (lookahead == 'S') ADVANCE(397);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == 'W') ADVANCE(399);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(427);
      if (lookahead == 'C') ADVANCE(396);
      if (lookahead == 'F') ADVANCE(425);
      if (lookahead == 'G') ADVANCE(412);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(407);
      if (lookahead == 'R') ADVANCE(436);
      if (lookahead == 'S') ADVANCE(397);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == 'W') ADVANCE(399);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(427);
      if (lookahead == 'C') ADVANCE(396);
      if (lookahead == 'F') ADVANCE(413);
      if (lookahead == 'G') ADVANCE(412);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(407);
      if (lookahead == 'R') ADVANCE(436);
      if (lookahead == 'S') ADVANCE(397);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == 'W') ADVANCE(399);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == 'A') ADVANCE(157);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'E') ADVANCE(134);
      if (lookahead == 'F') ADVANCE(123);
      if (lookahead == 'G') ADVANCE(124);
      if (lookahead == 'I') ADVANCE(114);
      if (lookahead == 'L') ADVANCE(109);
      if (lookahead == 'R') ADVANCE(177);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(159);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(497);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(427);
      if (lookahead == 'C') ADVANCE(396);
      if (lookahead == 'E') ADVANCE(415);
      if (lookahead == 'F') ADVANCE(425);
      if (lookahead == 'G') ADVANCE(412);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(407);
      if (lookahead == 'R') ADVANCE(436);
      if (lookahead == 'S') ADVANCE(397);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == 'W') ADVANCE(399);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(427);
      if (lookahead == 'C') ADVANCE(396);
      if (lookahead == 'E') ADVANCE(421);
      if (lookahead == 'F') ADVANCE(425);
      if (lookahead == 'G') ADVANCE(412);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(407);
      if (lookahead == 'R') ADVANCE(436);
      if (lookahead == 'S') ADVANCE(397);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == 'W') ADVANCE(399);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(427);
      if (lookahead == 'C') ADVANCE(396);
      if (lookahead == 'F') ADVANCE(425);
      if (lookahead == 'G') ADVANCE(412);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(407);
      if (lookahead == 'R') ADVANCE(436);
      if (lookahead == 'S') ADVANCE(397);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == 'W') ADVANCE(399);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(427);
      if (lookahead == 'C') ADVANCE(396);
      if (lookahead == 'F') ADVANCE(413);
      if (lookahead == 'G') ADVANCE(412);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(407);
      if (lookahead == 'R') ADVANCE(436);
      if (lookahead == 'S') ADVANCE(397);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == 'W') ADVANCE(399);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(385);
      if (lookahead == '@') ADVANCE(386);
      if (lookahead == 'A') ADVANCE(427);
      if (lookahead == 'C') ADVANCE(396);
      if (lookahead == 'E') ADVANCE(415);
      if (lookahead == 'F') ADVANCE(425);
      if (lookahead == 'G') ADVANCE(412);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(407);
      if (lookahead == 'R') ADVANCE(436);
      if (lookahead == 'S') ADVANCE(397);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == 'W') ADVANCE(399);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(385);
      if (lookahead == '@') ADVANCE(386);
      if (lookahead == 'A') ADVANCE(427);
      if (lookahead == 'C') ADVANCE(396);
      if (lookahead == 'E') ADVANCE(421);
      if (lookahead == 'F') ADVANCE(425);
      if (lookahead == 'G') ADVANCE(412);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(407);
      if (lookahead == 'R') ADVANCE(436);
      if (lookahead == 'S') ADVANCE(397);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == 'W') ADVANCE(399);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(385);
      if (lookahead == '@') ADVANCE(386);
      if (lookahead == 'A') ADVANCE(427);
      if (lookahead == 'C') ADVANCE(396);
      if (lookahead == 'F') ADVANCE(425);
      if (lookahead == 'G') ADVANCE(412);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(407);
      if (lookahead == 'R') ADVANCE(436);
      if (lookahead == 'S') ADVANCE(397);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == 'W') ADVANCE(399);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(385);
      if (lookahead == '@') ADVANCE(386);
      if (lookahead == 'A') ADVANCE(427);
      if (lookahead == 'C') ADVANCE(396);
      if (lookahead == 'F') ADVANCE(413);
      if (lookahead == 'G') ADVANCE(412);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(407);
      if (lookahead == 'R') ADVANCE(436);
      if (lookahead == 'S') ADVANCE(397);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == 'W') ADVANCE(399);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(427);
      if (lookahead == 'C') ADVANCE(396);
      if (lookahead == 'E') ADVANCE(415);
      if (lookahead == 'F') ADVANCE(425);
      if (lookahead == 'G') ADVANCE(412);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(407);
      if (lookahead == 'R') ADVANCE(436);
      if (lookahead == 'S') ADVANCE(397);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == 'W') ADVANCE(399);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(427);
      if (lookahead == 'C') ADVANCE(396);
      if (lookahead == 'E') ADVANCE(421);
      if (lookahead == 'F') ADVANCE(425);
      if (lookahead == 'G') ADVANCE(412);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(407);
      if (lookahead == 'R') ADVANCE(436);
      if (lookahead == 'S') ADVANCE(397);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == 'W') ADVANCE(399);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(427);
      if (lookahead == 'C') ADVANCE(396);
      if (lookahead == 'F') ADVANCE(425);
      if (lookahead == 'G') ADVANCE(412);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(407);
      if (lookahead == 'R') ADVANCE(436);
      if (lookahead == 'S') ADVANCE(397);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == 'W') ADVANCE(399);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(427);
      if (lookahead == 'C') ADVANCE(396);
      if (lookahead == 'F') ADVANCE(413);
      if (lookahead == 'G') ADVANCE(412);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(407);
      if (lookahead == 'R') ADVANCE(436);
      if (lookahead == 'S') ADVANCE(397);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == 'W') ADVANCE(399);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(676);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(679);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == '(') ADVANCE(684);
      if (lookahead == '+') ADVANCE(683);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(675);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == '(') ADVANCE(684);
      if (lookahead == '+') ADVANCE(683);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(675);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == '-') ADVANCE(505);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(675);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == '-') ADVANCE(506);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(675);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(60)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(675);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == '-') ADVANCE(508);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(675);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(516);
      if (lookahead == 'E') ADVANCE(537);
      if (lookahead == 'F') ADVANCE(547);
      if (lookahead == 'G') ADVANCE(534);
      if (lookahead == 'I') ADVANCE(530);
      if (lookahead == 'L') ADVANCE(528);
      if (lookahead == 'R') ADVANCE(559);
      if (lookahead == 'S') ADVANCE(517);
      if (lookahead == 'T') ADVANCE(550);
      if (lookahead == 'W') ADVANCE(519);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(675);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(516);
      if (lookahead == 'E') ADVANCE(543);
      if (lookahead == 'F') ADVANCE(547);
      if (lookahead == 'G') ADVANCE(534);
      if (lookahead == 'I') ADVANCE(530);
      if (lookahead == 'L') ADVANCE(528);
      if (lookahead == 'R') ADVANCE(559);
      if (lookahead == 'S') ADVANCE(517);
      if (lookahead == 'T') ADVANCE(550);
      if (lookahead == 'W') ADVANCE(519);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(63)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(675);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(516);
      if (lookahead == 'F') ADVANCE(547);
      if (lookahead == 'G') ADVANCE(534);
      if (lookahead == 'I') ADVANCE(530);
      if (lookahead == 'L') ADVANCE(528);
      if (lookahead == 'R') ADVANCE(559);
      if (lookahead == 'S') ADVANCE(517);
      if (lookahead == 'T') ADVANCE(550);
      if (lookahead == 'W') ADVANCE(519);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(675);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(516);
      if (lookahead == 'F') ADVANCE(535);
      if (lookahead == 'G') ADVANCE(534);
      if (lookahead == 'I') ADVANCE(530);
      if (lookahead == 'L') ADVANCE(528);
      if (lookahead == 'R') ADVANCE(559);
      if (lookahead == 'S') ADVANCE(517);
      if (lookahead == 'T') ADVANCE(550);
      if (lookahead == 'W') ADVANCE(519);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(675);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == 'A') ADVANCE(552);
      if (lookahead == 'E') ADVANCE(543);
      if (lookahead == 'S') ADVANCE(520);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(66)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(675);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(675);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(492);
      if (lookahead == '\\') ADVANCE(493);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(495);
      END_STATE();
    case 69:
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == '(') ADVANCE(293);
      END_STATE();
    case 71:
      if (lookahead == ')') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(692);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(184);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(220);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(292);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(191);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(259);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(187);
      END_STATE();
    case 79:
      if (lookahead == '.') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      if (lookahead == '=') ADVANCE(244);
      END_STATE();
    case 81:
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'L') ADVANCE(151);
      if (lookahead == 'O') ADVANCE(156);
      END_STATE();
    case 82:
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'O') ADVANCE(156);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(178);
      if (lookahead == 'E') ADVANCE(170);
      END_STATE();
    case 84:
      if (lookahead == 'A') ADVANCE(120);
      END_STATE();
    case 85:
      if (lookahead == 'A') ADVANCE(140);
      END_STATE();
    case 86:
      if (lookahead == 'A') ADVANCE(165);
      END_STATE();
    case 87:
      if (lookahead == 'A') ADVANCE(165);
      if (lookahead == 'I') ADVANCE(144);
      END_STATE();
    case 88:
      if (lookahead == 'A') ADVANCE(135);
      END_STATE();
    case 89:
      if (lookahead == 'A') ADVANCE(128);
      if (lookahead == 'I') ADVANCE(174);
      END_STATE();
    case 90:
      if (lookahead == 'A') ADVANCE(95);
      END_STATE();
    case 91:
      if (lookahead == 'A') ADVANCE(141);
      END_STATE();
    case 92:
      if (lookahead == 'C') ADVANCE(122);
      END_STATE();
    case 93:
      if (lookahead == 'C') ADVANCE(132);
      END_STATE();
    case 94:
      if (lookahead == 'C') ADVANCE(172);
      END_STATE();
    case 95:
      if (lookahead == 'C') ADVANCE(173);
      END_STATE();
    case 96:
      if (lookahead == 'C') ADVANCE(88);
      END_STATE();
    case 97:
      if (lookahead == 'C') ADVANCE(91);
      END_STATE();
    case 98:
      if (lookahead == 'C') ADVANCE(133);
      END_STATE();
    case 99:
      if (lookahead == 'D') ADVANCE(325);
      END_STATE();
    case 100:
      if (lookahead == 'D') ADVANCE(304);
      END_STATE();
    case 101:
      if (lookahead == 'D') ADVANCE(152);
      END_STATE();
    case 102:
      if (lookahead == 'D') ADVANCE(155);
      END_STATE();
    case 103:
      if (lookahead == 'E') ADVANCE(337);
      END_STATE();
    case 104:
      if (lookahead == 'E') ADVANCE(315);
      END_STATE();
    case 105:
      if (lookahead == 'E') ADVANCE(332);
      END_STATE();
    case 106:
      if (lookahead == 'E') ADVANCE(352);
      END_STATE();
    case 107:
      if (lookahead == 'E') ADVANCE(328);
      END_STATE();
    case 108:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 109:
      if (lookahead == 'E') ADVANCE(169);
      if (lookahead == 'O') ADVANCE(97);
      END_STATE();
    case 110:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 111:
      if (lookahead == 'E') ADVANCE(162);
      END_STATE();
    case 112:
      if (lookahead == 'E') ADVANCE(164);
      END_STATE();
    case 113:
      if (lookahead == 'E') ADVANCE(161);
      END_STATE();
    case 114:
      if (lookahead == 'F') ADVANCE(333);
      END_STATE();
    case 115:
      if (lookahead == 'F') ADVANCE(333);
      if (lookahead == 'N') ADVANCE(324);
      END_STATE();
    case 116:
      if (lookahead == 'F') ADVANCE(336);
      END_STATE();
    case 117:
      if (lookahead == 'F') ADVANCE(90);
      END_STATE();
    case 118:
      if (lookahead == 'F') ADVANCE(129);
      END_STATE();
    case 119:
      if (lookahead == 'G') ADVANCE(299);
      END_STATE();
    case 120:
      if (lookahead == 'G') ADVANCE(106);
      END_STATE();
    case 121:
      if (lookahead == 'H') ADVANCE(28);
      END_STATE();
    case 122:
      if (lookahead == 'H') ADVANCE(104);
      END_STATE();
    case 123:
      if (lookahead == 'I') ADVANCE(145);
      if (lookahead == 'O') ADVANCE(160);
      if (lookahead == 'R') ADVANCE(149);
      END_STATE();
    case 124:
      if (lookahead == 'I') ADVANCE(168);
      END_STATE();
    case 125:
      if (lookahead == 'I') ADVANCE(116);
      END_STATE();
    case 126:
      if (lookahead == 'I') ADVANCE(136);
      END_STATE();
    case 127:
      if (lookahead == 'I') ADVANCE(117);
      END_STATE();
    case 128:
      if (lookahead == 'I') ADVANCE(171);
      END_STATE();
    case 129:
      if (lookahead == 'I') ADVANCE(142);
      END_STATE();
    case 130:
      if (lookahead == 'I') ADVANCE(153);
      END_STATE();
    case 131:
      if (lookahead == 'J') ADVANCE(110);
      END_STATE();
    case 132:
      if (lookahead == 'K') ADVANCE(112);
      END_STATE();
    case 133:
      if (lookahead == 'K') ADVANCE(113);
      END_STATE();
    case 134:
      if (lookahead == 'L') ADVANCE(166);
      if (lookahead == 'N') ADVANCE(99);
      END_STATE();
    case 135:
      if (lookahead == 'L') ADVANCE(351);
      END_STATE();
    case 136:
      if (lookahead == 'L') ADVANCE(100);
      END_STATE();
    case 137:
      if (lookahead == 'L') ADVANCE(181);
      END_STATE();
    case 138:
      if (lookahead == 'L') ADVANCE(154);
      END_STATE();
    case 139:
      if (lookahead == 'L') ADVANCE(182);
      END_STATE();
    case 140:
      if (lookahead == 'L') ADVANCE(137);
      END_STATE();
    case 141:
      if (lookahead == 'L') ADVANCE(139);
      END_STATE();
    case 142:
      if (lookahead == 'L') ADVANCE(107);
      END_STATE();
    case 143:
      if (lookahead == 'M') ADVANCE(305);
      END_STATE();
    case 144:
      if (lookahead == 'M') ADVANCE(84);
      END_STATE();
    case 145:
      if (lookahead == 'N') ADVANCE(85);
      END_STATE();
    case 146:
      if (lookahead == 'N') ADVANCE(346);
      END_STATE();
    case 147:
      if (lookahead == 'N') ADVANCE(313);
      END_STATE();
    case 148:
      if (lookahead == 'N') ADVANCE(105);
      END_STATE();
    case 149:
      if (lookahead == 'O') ADVANCE(143);
      END_STATE();
    case 150:
      if (lookahead == 'O') ADVANCE(131);
      END_STATE();
    case 151:
      if (lookahead == 'O') ADVANCE(148);
      END_STATE();
    case 152:
      if (lookahead == 'O') ADVANCE(93);
      END_STATE();
    case 153:
      if (lookahead == 'O') ADVANCE(147);
      END_STATE();
    case 154:
      if (lookahead == 'O') ADVANCE(96);
      END_STATE();
    case 155:
      if (lookahead == 'O') ADVANCE(98);
      END_STATE();
    case 156:
      if (lookahead == 'P') ADVANCE(180);
      END_STATE();
    case 157:
      if (lookahead == 'R') ADVANCE(119);
      END_STATE();
    case 158:
      if (lookahead == 'R') ADVANCE(119);
      if (lookahead == 'S') ADVANCE(21);
      END_STATE();
    case 159:
      if (lookahead == 'R') ADVANCE(179);
      END_STATE();
    case 160:
      if (lookahead == 'R') ADVANCE(321);
      END_STATE();
    case 161:
      if (lookahead == 'R') ADVANCE(365);
      END_STATE();
    case 162:
      if (lookahead == 'R') ADVANCE(167);
      END_STATE();
    case 163:
      if (lookahead == 'R') ADVANCE(150);
      END_STATE();
    case 164:
      if (lookahead == 'R') ADVANCE(118);
      END_STATE();
    case 165:
      if (lookahead == 'R') ADVANCE(175);
      END_STATE();
    case 166:
      if (lookahead == 'S') ADVANCE(103);
      END_STATE();
    case 167:
      if (lookahead == 'S') ADVANCE(130);
      END_STATE();
    case 168:
      if (lookahead == 'T') ADVANCE(329);
      END_STATE();
    case 169:
      if (lookahead == 'T') ADVANCE(340);
      END_STATE();
    case 170:
      if (lookahead == 'T') ADVANCE(353);
      END_STATE();
    case 171:
      if (lookahead == 'T') ADVANCE(362);
      END_STATE();
    case 172:
      if (lookahead == 'T') ADVANCE(309);
      END_STATE();
    case 173:
      if (lookahead == 'T') ADVANCE(350);
      END_STATE();
    case 174:
      if (lookahead == 'T') ADVANCE(121);
      END_STATE();
    case 175:
      if (lookahead == 'T') ADVANCE(127);
      END_STATE();
    case 176:
      if (lookahead == 'U') ADVANCE(126);
      END_STATE();
    case 177:
      if (lookahead == 'U') ADVANCE(146);
      END_STATE();
    case 178:
      if (lookahead == 'V') ADVANCE(108);
      END_STATE();
    case 179:
      if (lookahead == 'Y') ADVANCE(356);
      END_STATE();
    case 180:
      if (lookahead == 'Y') ADVANCE(318);
      END_STATE();
    case 181:
      if (lookahead == 'Y') ADVANCE(359);
      END_STATE();
    case 182:
      if (lookahead == 'Y') ADVANCE(343);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead == 'u') ADVANCE(236);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'c') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == 'p') ADVANCE(183);
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 190:
      if (lookahead == 'b') ADVANCE(188);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(186);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(265);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(722);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(223);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(717);
      END_STATE();
    case 197:
      if (lookahead == 'd') ADVANCE(710);
      END_STATE();
    case 198:
      if (lookahead == 'd') ADVANCE(687);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(720);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == 'm') ADVANCE(247);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 'p') ADVANCE(263);
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(712);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(723);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 216:
      if (lookahead == 'f') ADVANCE(257);
      END_STATE();
    case 217:
      if (lookahead == 'g') ADVANCE(204);
      END_STATE();
    case 218:
      if (lookahead == 'g') ADVANCE(272);
      END_STATE();
    case 219:
      if (lookahead == 'g') ADVANCE(211);
      END_STATE();
    case 220:
      if (lookahead == 'g') ADVANCE(238);
      if (lookahead == 'm') ADVANCE(247);
      if (lookahead == 'n') ADVANCE(248);
      if (lookahead == 'p') ADVANCE(262);
      if (lookahead == 'r') ADVANCE(208);
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 221:
      if (lookahead == 'h') ADVANCE(725);
      END_STATE();
    case 222:
      if (lookahead == 'h') ADVANCE(719);
      END_STATE();
    case 223:
      if (lookahead == 'h') ADVANCE(203);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 229:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 231:
      if (lookahead == 'k') ADVANCE(80);
      END_STATE();
    case 232:
      if (lookahead == 'l') ADVANCE(718);
      END_STATE();
    case 233:
      if (lookahead == 'l') ADVANCE(705);
      END_STATE();
    case 234:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 235:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 236:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 237:
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 238:
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 240:
      if (lookahead == 'm') ADVANCE(716);
      END_STATE();
    case 241:
      if (lookahead == 'm') ADVANCE(260);
      END_STATE();
    case 242:
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 243:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 244:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 245:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 246:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 248:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 249:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 250:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 251:
      if (lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 252:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 253:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 254:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 255:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 256:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 257:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 258:
      if (lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 259:
      if (lookahead == 'p') ADVANCE(271);
      END_STATE();
    case 260:
      if (lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 261:
      if (lookahead == 'q') ADVANCE(283);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 271:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(714);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(711);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(721);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(702);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 283:
      if (lookahead == 'u') ADVANCE(227);
      END_STATE();
    case 284:
      if (lookahead == 'u') ADVANCE(243);
      END_STATE();
    case 285:
      if (lookahead == 'v') ADVANCE(225);
      END_STATE();
    case 286:
      if (lookahead == 'v') ADVANCE(226);
      END_STATE();
    case 287:
      if (lookahead == 'v') ADVANCE(229);
      END_STATE();
    case 288:
      if (lookahead == 'w') ADVANCE(255);
      END_STATE();
    case 289:
      if (lookahead == 'w') ADVANCE(77);
      END_STATE();
    case 290:
      if (lookahead == 'y') ADVANCE(258);
      END_STATE();
    case 291:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(686);
      END_STATE();
    case 292:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(703);
      END_STATE();
    case 293:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 294:
      if (eof) ADVANCE(298);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(727);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(731);
      if (lookahead == '(') ADVANCE(684);
      if (lookahead == ')') ADVANCE(685);
      if (lookahead == '+') ADVANCE(683);
      if (lookahead == '-') ADVANCE(677);
      if (lookahead == ':') ADVANCE(312);
      if (lookahead == 'A') ADVANCE(158);
      if (lookahead == 'B') ADVANCE(176);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'E') ADVANCE(134);
      if (lookahead == 'F') ADVANCE(123);
      if (lookahead == 'G') ADVANCE(124);
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead == 'L') ADVANCE(109);
      if (lookahead == 'P') ADVANCE(163);
      if (lookahead == 'R') ADVANCE(177);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == 'V') ADVANCE(111);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(676);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(294)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 295:
      if (eof) ADVANCE(298);
      if (lookahead == ' ') ADVANCE(690);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(685);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '=') ADVANCE(689);
      if (lookahead == 'A') ADVANCE(378);
      if (lookahead == 'F') ADVANCE(379);
      if (lookahead == 'P') ADVANCE(381);
      if (lookahead == 'V') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(297)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 296:
      if (eof) ADVANCE(298);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(685);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(311);
      if (lookahead == ':') ADVANCE(385);
      if (lookahead == '=') ADVANCE(303);
      if (lookahead == '@') ADVANCE(386);
      if (lookahead == 'A') ADVANCE(378);
      if (lookahead == 'F') ADVANCE(379);
      if (lookahead == 'P') ADVANCE(381);
      if (lookahead == 'V') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(297)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 297:
      if (eof) ADVANCE(298);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(685);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == 'A') ADVANCE(378);
      if (lookahead == 'F') ADVANCE(379);
      if (lookahead == 'P') ADVANCE(381);
      if (lookahead == 'V') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(297)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_BUILD);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(101);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(101);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_CACHE);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_CACHE);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_CACHE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_END);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_FROMDOCKERFILE);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_GIT);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_CLONE);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_IF);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(125);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_LET);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_LET);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_LOCALLY);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_LOCALLY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_LOCALLY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_RUN);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_SAVEARTIFACT);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_ASLOCAL);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_SAVEIMAGE);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_SET);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_TRY);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_WAIT);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_WAIT);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_WAIT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_WITHDOCKER);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == ')') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'J') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == ' ') ADVANCE(87);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == ' ') ADVANCE(102);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(448);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(457);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(458);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(443);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(477);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(445);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(451);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(401);
      if (lookahead == 'O') ADVANCE(426);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(416);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(414);
      if (lookahead == 'I') ADVANCE(435);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(419);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'C') ADVANCE(411);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'C') ADVANCE(398);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'D') ADVANCE(326);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(338);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(387);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(316);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(432);
      if (lookahead == 'O') ADVANCE(402);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'F') ADVANCE(334);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'G') ADVANCE(301);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'H') ADVANCE(388);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'H') ADVANCE(406);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(431);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(423);
      if (lookahead == 'O') ADVANCE(429);
      if (lookahead == 'R') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(434);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(430);
      if (lookahead == 'N') ADVANCE(403);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(417);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(441);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(418);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'M') ADVANCE(306);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(403);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(347);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(400);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(420);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(429);
      if (lookahead == 'R') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'P') ADVANCE(439);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(409);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(438);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'S') ADVANCE(404);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(330);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(341);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(354);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(363);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(410);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'U') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'V') ADVANCE(405);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(357);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(319);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(344);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(360);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(449);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(470);
      if (lookahead == 'p') ADVANCE(444);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(484);
      if (lookahead == 'l') ADVANCE(446);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(479);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(487);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(450);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(442);
      if (lookahead == 'p') ADVANCE(488);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(463);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(464);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(447);
      if (lookahead == 'p') ADVANCE(488);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'd') ADVANCE(687);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(452);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(390);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(460);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(391);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(478);
      if (lookahead == 'h') ADVANCE(465);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(478);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(476);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'g') ADVANCE(453);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'g') ADVANCE(482);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(719);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(454);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(456);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(473);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(489);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(468);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(455);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(475);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(469);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'm') ADVANCE(716);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'm') ADVANCE(693);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'n') ADVANCE(486);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(472);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(490);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(481);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'p') ADVANCE(480);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(474);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(461);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(466);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(471);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(714);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(462);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(485);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(394);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 't') ADVANCE(694);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 't') ADVANCE(459);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'u') ADVANCE(483);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'v') ADVANCE(467);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'w') ADVANCE(393);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_image_name);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(738);
      if (lookahead == '\f') ADVANCE(739);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(492);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(737);
      if (lookahead == '#') ADVANCE(494);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(495);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(742);
      if (lookahead == '\f') ADVANCE(743);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(494);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(495);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_image_digest);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_immediate_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(497);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(738);
      if (lookahead == '\f') ADVANCE(739);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(566);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(639);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(574);
      if (lookahead == 'f') ADVANCE(700);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(576);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(596);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(575);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(642);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(584);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(631);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(595);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(665);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(571);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(522);
      if (lookahead == 'O') ADVANCE(548);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(560);
      if (lookahead == 'E') ADVANCE(556);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(538);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(536);
      if (lookahead == 'I') ADVANCE(558);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(561);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'C') ADVANCE(533);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'C') ADVANCE(518);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D') ADVANCE(327);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(339);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(317);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(500);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(555);
      if (lookahead == 'O') ADVANCE(523);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(501);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'F') ADVANCE(335);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G') ADVANCE(302);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H') ADVANCE(502);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H') ADVANCE(526);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(545);
      if (lookahead == 'O') ADVANCE(551);
      if (lookahead == 'R') ADVANCE(546);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(557);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(553);
      if (lookahead == 'N') ADVANCE(524);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(539);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(564);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(565);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(540);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M') ADVANCE(307);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(524);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(348);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(521);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(542);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(551);
      if (lookahead == 'R') ADVANCE(546);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(531);
      if (lookahead == 'S') ADVANCE(499);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(562);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S') ADVANCE(499);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S') ADVANCE(525);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(342);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(355);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(364);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(532);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U') ADVANCE(544);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'V') ADVANCE(527);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'V') ADVANCE(529);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(358);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(320);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(345);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(361);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(617);
      if (lookahead == 'c') ADVANCE(602);
      if (lookahead == 'd') ADVANCE(606);
      if (lookahead == 'i') ADVANCE(593);
      if (lookahead == 'k') ADVANCE(586);
      if (lookahead == 'p') ADVANCE(567);
      if (lookahead == 's') ADVANCE(674);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(657);
      if (lookahead == 'l') ADVANCE(568);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(664);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(645);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(653);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(648);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(630);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(652);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'b') ADVANCE(667);
      if (lookahead == 'p') ADVANCE(615);
      if (lookahead == 't') ADVANCE(570);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'b') ADVANCE(650);
      if (lookahead == 'k') ADVANCE(592);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(604);
      if (lookahead == 'i') ADVANCE(581);
      if (lookahead == 'p') ADVANCE(590);
      if (lookahead == 's') ADVANCE(605);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(603);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(585);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(687);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(695);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(706);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(515);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(641);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(673);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(704);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(583);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(599);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(662);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(651);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(643);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(591);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(511);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(635);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(640);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(638);
      if (lookahead == 'i') ADVANCE(593);
      if (lookahead == 'k') ADVANCE(586);
      if (lookahead == 's') ADVANCE(674);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(699);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(724);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(587);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(589);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(654);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(624);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(688);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(625);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(573);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(644);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(668);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(658);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(620);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(619);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(660);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'k') ADVANCE(512);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(568);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(634);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(616);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(608);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(582);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(588);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(636);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(621);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(716);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(633);
      if (lookahead == 'o') ADVANCE(669);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(633);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(618);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(696);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(614);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(708);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(577);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(637);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(598);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(580);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(672);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(647);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(670);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(513);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(646);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(671);
      if (lookahead == 't') ADVANCE(655);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(622);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(504);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(649);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(514);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(698);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(601);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(578);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(623);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(597);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(607);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(572);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(661);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(611);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(600);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(714);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(709);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(707);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(659);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(666);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(509);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(663);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(613);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(701);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(715);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(594);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(655);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(656);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'u') ADVANCE(612);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'v') ADVANCE(610);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(627);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(726);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(629);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(510);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'x') ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'y') ADVANCE(626);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(200);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(679);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n') ADVANCE(742);
      if (lookahead == '\f') ADVANCE(743);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_version_major_minor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(686);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_allow_privileged);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_DASH_DASHbranch);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcache_DASHfrom);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_cache_hint);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchmod);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcompose);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_dir);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_DASH_DASHbuild_DASHarg);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_DASHf);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtarget);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_entrypoint);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_feature_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(703);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_force);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_DASH_DASHid);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_if_exists);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_keep_own);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_keep_ts);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_DASH_DASHload);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_DASH_DASHmount);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_network_none);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_no_cache);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_pass_args);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_persist);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_privileged);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_DASH_DASHpull);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_push);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsecret);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsep);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_DASH_DASHservice);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsharing);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_ssh);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_symlink_no_follow);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(738);
      if (lookahead == '\f') ADVANCE(740);
      if (lookahead == '\r') ADVANCE(728);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(728);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(728);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(730);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(730);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(738);
      if (lookahead == '\f') ADVANCE(741);
      if (lookahead == '\r') ADVANCE(732);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(732);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(732);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(734);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(734);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\n') ADVANCE(738);
      if (lookahead == '\f') ADVANCE(739);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(735);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(736);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(738);
      if (lookahead == '\f') ADVANCE(739);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(738);
      if (lookahead == '\f') ADVANCE(740);
      if (lookahead == '\r') ADVANCE(728);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(728);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(738);
      if (lookahead == '\f') ADVANCE(741);
      if (lookahead == '\r') ADVANCE(732);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(732);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      if (lookahead == '\n') ADVANCE(742);
      if (lookahead == '\f') ADVANCE(743);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(744);
      if (lookahead == '\f') ADVANCE(754);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(683);
      if (lookahead == '-') ADVANCE(392);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(745);
      if (lookahead == '\f') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(746);
      if (lookahead == '\f') ADVANCE(756);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == '+') ADVANCE(683);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(747);
      if (lookahead == '\f') ADVANCE(757);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\f') ADVANCE(758);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_CRn);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(736);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(679);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(744);
      if (lookahead == '\f') ADVANCE(754);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(683);
      if (lookahead == '-') ADVANCE(392);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(745);
      if (lookahead == '\f') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(746);
      if (lookahead == '\f') ADVANCE(756);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == '+') ADVANCE(683);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(747);
      if (lookahead == '\f') ADVANCE(757);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(748);
      if (lookahead == '\f') ADVANCE(758);
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
  [1] = {.lex_state = 296},
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
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
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
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0, .external_lex_state = 2},
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
  [44] = {.lex_state = 30},
  [45] = {.lex_state = 40},
  [46] = {.lex_state = 30},
  [47] = {.lex_state = 34, .external_lex_state = 2},
  [48] = {.lex_state = 35},
  [49] = {.lex_state = 33},
  [50] = {.lex_state = 41},
  [51] = {.lex_state = 42, .external_lex_state = 2},
  [52] = {.lex_state = 43},
  [53] = {.lex_state = 40},
  [54] = {.lex_state = 36},
  [55] = {.lex_state = 36},
  [56] = {.lex_state = 36},
  [57] = {.lex_state = 36},
  [58] = {.lex_state = 36},
  [59] = {.lex_state = 44},
  [60] = {.lex_state = 23},
  [61] = {.lex_state = 42, .external_lex_state = 2},
  [62] = {.lex_state = 44},
  [63] = {.lex_state = 44},
  [64] = {.lex_state = 40},
  [65] = {.lex_state = 40},
  [66] = {.lex_state = 40},
  [67] = {.lex_state = 40},
  [68] = {.lex_state = 41},
  [69] = {.lex_state = 44},
  [70] = {.lex_state = 43},
  [71] = {.lex_state = 36},
  [72] = {.lex_state = 36},
  [73] = {.lex_state = 36},
  [74] = {.lex_state = 36},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 62},
  [77] = {.lex_state = 62},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 44},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 46, .external_lex_state = 2},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 36, .external_lex_state = 2},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 46, .external_lex_state = 2},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 36, .external_lex_state = 2},
  [92] = {.lex_state = 36, .external_lex_state = 2},
  [93] = {.lex_state = 46, .external_lex_state = 2},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 56},
  [96] = {.lex_state = 56},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 43},
  [99] = {.lex_state = 36, .external_lex_state = 2},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 56},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 41},
  [105] = {.lex_state = 41},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 42, .external_lex_state = 2},
  [108] = {.lex_state = 42, .external_lex_state = 2},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 44},
  [111] = {.lex_state = 41},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 44},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 47},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 45},
  [124] = {.lex_state = 46, .external_lex_state = 2},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 43},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 47},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 42, .external_lex_state = 2},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 45},
  [137] = {.lex_state = 47},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 42, .external_lex_state = 2},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 47},
  [142] = {.lex_state = 56},
  [143] = {.lex_state = 45},
  [144] = {.lex_state = 45},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 41},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 43},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 36, .external_lex_state = 2},
  [161] = {.lex_state = 43},
  [162] = {.lex_state = 47},
  [163] = {.lex_state = 63},
  [164] = {.lex_state = 46, .external_lex_state = 2},
  [165] = {.lex_state = 63},
  [166] = {.lex_state = 23, .external_lex_state = 2},
  [167] = {.lex_state = 65},
  [168] = {.lex_state = 64, .external_lex_state = 2},
  [169] = {.lex_state = 30, .external_lex_state = 2},
  [170] = {.lex_state = 64, .external_lex_state = 2},
  [171] = {.lex_state = 65},
  [172] = {.lex_state = 45},
  [173] = {.lex_state = 46, .external_lex_state = 2},
  [174] = {.lex_state = 36, .external_lex_state = 2},
  [175] = {.lex_state = 47},
  [176] = {.lex_state = 47},
  [177] = {.lex_state = 45},
  [178] = {.lex_state = 45},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 46, .external_lex_state = 2},
  [181] = {.lex_state = 36, .external_lex_state = 2},
  [182] = {.lex_state = 36, .external_lex_state = 2},
  [183] = {.lex_state = 36, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 0, .external_lex_state = 2},
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
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 26},
  [236] = {.lex_state = 56},
  [237] = {.lex_state = 26},
  [238] = {.lex_state = 26},
  [239] = {.lex_state = 26},
  [240] = {.lex_state = 26},
  [241] = {.lex_state = 30},
  [242] = {.lex_state = 30},
  [243] = {.lex_state = 30},
  [244] = {.lex_state = 30},
  [245] = {.lex_state = 56},
  [246] = {.lex_state = 56},
  [247] = {.lex_state = 56},
  [248] = {.lex_state = 6},
  [249] = {.lex_state = 56},
  [250] = {.lex_state = 56},
  [251] = {.lex_state = 30},
  [252] = {.lex_state = 6},
  [253] = {.lex_state = 6},
  [254] = {.lex_state = 56},
  [255] = {.lex_state = 26},
  [256] = {.lex_state = 8},
  [257] = {.lex_state = 26},
  [258] = {.lex_state = 26},
  [259] = {.lex_state = 8},
  [260] = {.lex_state = 8},
  [261] = {.lex_state = 8},
  [262] = {.lex_state = 26},
  [263] = {.lex_state = 26},
  [264] = {.lex_state = 8},
  [265] = {.lex_state = 8},
  [266] = {.lex_state = 296},
  [267] = {.lex_state = 8},
  [268] = {.lex_state = 296},
  [269] = {.lex_state = 8},
  [270] = {.lex_state = 37},
  [271] = {.lex_state = 8},
  [272] = {.lex_state = 37},
  [273] = {.lex_state = 37},
  [274] = {.lex_state = 37},
  [275] = {.lex_state = 37},
  [276] = {.lex_state = 37},
  [277] = {.lex_state = 37},
  [278] = {.lex_state = 58},
  [279] = {.lex_state = 58},
  [280] = {.lex_state = 58},
  [281] = {.lex_state = 58},
  [282] = {.lex_state = 37},
  [283] = {.lex_state = 296},
  [284] = {.lex_state = 58},
  [285] = {.lex_state = 59},
  [286] = {.lex_state = 59},
  [287] = {.lex_state = 37},
  [288] = {.lex_state = 59},
  [289] = {.lex_state = 59},
  [290] = {.lex_state = 295},
  [291] = {.lex_state = 296},
  [292] = {.lex_state = 296},
  [293] = {.lex_state = 37},
  [294] = {.lex_state = 296},
  [295] = {.lex_state = 296},
  [296] = {.lex_state = 296},
  [297] = {.lex_state = 59},
  [298] = {.lex_state = 296},
  [299] = {.lex_state = 296},
  [300] = {.lex_state = 296},
  [301] = {.lex_state = 296},
  [302] = {.lex_state = 296},
  [303] = {.lex_state = 60},
  [304] = {.lex_state = 30},
  [305] = {.lex_state = 14},
  [306] = {.lex_state = 60},
  [307] = {.lex_state = 60},
  [308] = {.lex_state = 60},
  [309] = {.lex_state = 60},
  [310] = {.lex_state = 30},
  [311] = {.lex_state = 29},
  [312] = {.lex_state = 29},
  [313] = {.lex_state = 30},
  [314] = {.lex_state = 60},
  [315] = {.lex_state = 30},
  [316] = {.lex_state = 10},
  [317] = {.lex_state = 10},
  [318] = {.lex_state = 296, .external_lex_state = 3},
  [319] = {.lex_state = 57},
  [320] = {.lex_state = 60},
  [321] = {.lex_state = 8},
  [322] = {.lex_state = 29},
  [323] = {.lex_state = 14},
  [324] = {.lex_state = 8},
  [325] = {.lex_state = 30},
  [326] = {.lex_state = 60},
  [327] = {.lex_state = 30},
  [328] = {.lex_state = 57},
  [329] = {.lex_state = 30},
  [330] = {.lex_state = 57},
  [331] = {.lex_state = 30},
  [332] = {.lex_state = 10},
  [333] = {.lex_state = 37},
  [334] = {.lex_state = 57},
  [335] = {.lex_state = 30},
  [336] = {.lex_state = 57},
  [337] = {.lex_state = 37},
  [338] = {.lex_state = 30},
  [339] = {.lex_state = 296},
  [340] = {.lex_state = 37},
  [341] = {.lex_state = 30},
  [342] = {.lex_state = 30},
  [343] = {.lex_state = 296},
  [344] = {.lex_state = 10},
  [345] = {.lex_state = 30},
  [346] = {.lex_state = 29},
  [347] = {.lex_state = 60},
  [348] = {.lex_state = 29},
  [349] = {.lex_state = 60},
  [350] = {.lex_state = 8},
  [351] = {.lex_state = 29},
  [352] = {.lex_state = 37},
  [353] = {.lex_state = 37},
  [354] = {.lex_state = 60},
  [355] = {.lex_state = 37},
  [356] = {.lex_state = 29},
  [357] = {.lex_state = 29},
  [358] = {.lex_state = 60},
  [359] = {.lex_state = 29},
  [360] = {.lex_state = 37},
  [361] = {.lex_state = 296},
  [362] = {.lex_state = 29},
  [363] = {.lex_state = 29},
  [364] = {.lex_state = 296},
  [365] = {.lex_state = 29},
  [366] = {.lex_state = 29},
  [367] = {.lex_state = 30},
  [368] = {.lex_state = 29},
  [369] = {.lex_state = 29},
  [370] = {.lex_state = 29},
  [371] = {.lex_state = 296},
  [372] = {.lex_state = 29},
  [373] = {.lex_state = 296},
  [374] = {.lex_state = 296},
  [375] = {.lex_state = 29},
  [376] = {.lex_state = 29},
  [377] = {.lex_state = 296},
  [378] = {.lex_state = 296},
  [379] = {.lex_state = 29},
  [380] = {.lex_state = 29},
  [381] = {.lex_state = 29},
  [382] = {.lex_state = 29},
  [383] = {.lex_state = 296},
  [384] = {.lex_state = 296},
  [385] = {.lex_state = 296},
  [386] = {.lex_state = 29},
  [387] = {.lex_state = 29},
  [388] = {.lex_state = 29},
  [389] = {.lex_state = 29},
  [390] = {.lex_state = 29},
  [391] = {.lex_state = 29},
  [392] = {.lex_state = 296},
  [393] = {.lex_state = 296},
  [394] = {.lex_state = 29},
  [395] = {.lex_state = 15},
  [396] = {.lex_state = 59},
  [397] = {.lex_state = 15},
  [398] = {.lex_state = 15},
  [399] = {.lex_state = 58},
  [400] = {.lex_state = 58},
  [401] = {.lex_state = 58},
  [402] = {.lex_state = 52},
  [403] = {.lex_state = 52},
  [404] = {.lex_state = 15},
  [405] = {.lex_state = 15},
  [406] = {.lex_state = 61},
  [407] = {.lex_state = 61},
  [408] = {.lex_state = 52},
  [409] = {.lex_state = 59},
  [410] = {.lex_state = 59},
  [411] = {.lex_state = 61},
  [412] = {.lex_state = 58},
  [413] = {.lex_state = 52},
  [414] = {.lex_state = 61},
  [415] = {.lex_state = 58},
  [416] = {.lex_state = 58},
  [417] = {.lex_state = 58},
  [418] = {.lex_state = 15},
  [419] = {.lex_state = 61},
  [420] = {.lex_state = 59},
  [421] = {.lex_state = 59},
  [422] = {.lex_state = 59},
  [423] = {.lex_state = 15},
  [424] = {.lex_state = 15},
  [425] = {.lex_state = 15},
  [426] = {.lex_state = 15},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 15},
  [429] = {.lex_state = 15},
  [430] = {.lex_state = 15},
  [431] = {.lex_state = 15},
  [432] = {.lex_state = 15},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 15},
  [435] = {.lex_state = 37},
  [436] = {.lex_state = 15},
  [437] = {.lex_state = 30},
  [438] = {.lex_state = 15},
  [439] = {.lex_state = 15},
  [440] = {.lex_state = 15},
  [441] = {.lex_state = 296},
  [442] = {.lex_state = 15},
  [443] = {.lex_state = 15},
  [444] = {.lex_state = 37},
  [445] = {.lex_state = 15},
  [446] = {.lex_state = 15},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 37},
  [449] = {.lex_state = 15},
  [450] = {.lex_state = 15},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 15},
  [453] = {.lex_state = 15},
  [454] = {.lex_state = 15},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 15},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 15},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 15},
  [461] = {.lex_state = 15},
  [462] = {.lex_state = 15},
  [463] = {.lex_state = 15},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 15},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 15},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 15},
  [470] = {.lex_state = 15},
  [471] = {.lex_state = 15},
  [472] = {.lex_state = 15},
  [473] = {.lex_state = 37},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 15},
  [476] = {.lex_state = 37},
  [477] = {.lex_state = 15},
  [478] = {.lex_state = 66},
  [479] = {.lex_state = 66},
  [480] = {.lex_state = 15},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 15},
  [483] = {.lex_state = 15},
  [484] = {.lex_state = 15},
  [485] = {.lex_state = 15},
  [486] = {.lex_state = 15},
  [487] = {.lex_state = 15},
  [488] = {.lex_state = 15},
  [489] = {.lex_state = 15},
  [490] = {.lex_state = 296},
  [491] = {.lex_state = 37},
  [492] = {.lex_state = 15},
  [493] = {.lex_state = 15},
  [494] = {.lex_state = 15},
  [495] = {.lex_state = 15},
  [496] = {.lex_state = 15},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 15},
  [499] = {.lex_state = 15},
  [500] = {.lex_state = 296},
  [501] = {.lex_state = 15},
  [502] = {.lex_state = 15},
  [503] = {.lex_state = 15},
  [504] = {.lex_state = 37},
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
  [533] = {.lex_state = 15},
  [534] = {.lex_state = 15},
  [535] = {.lex_state = 15},
  [536] = {.lex_state = 15},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 15},
  [539] = {.lex_state = 15},
  [540] = {.lex_state = 57},
  [541] = {.lex_state = 15},
  [542] = {.lex_state = 39},
  [543] = {.lex_state = 37},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 57},
  [547] = {.lex_state = 39},
  [548] = {.lex_state = 296},
  [549] = {.lex_state = 61},
  [550] = {.lex_state = 39},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 57},
  [553] = {.lex_state = 15},
  [554] = {.lex_state = 57},
  [555] = {.lex_state = 61},
  [556] = {.lex_state = 53},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 53},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 24},
  [562] = {.lex_state = 55},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 68},
  [565] = {.lex_state = 39},
  [566] = {.lex_state = 24},
  [567] = {.lex_state = 24},
  [568] = {.lex_state = 24},
  [569] = {.lex_state = 24},
  [570] = {.lex_state = 39},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 55},
  [573] = {.lex_state = 68},
  [574] = {.lex_state = 55},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 39},
  [577] = {.lex_state = 24},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 24},
  [581] = {.lex_state = 24},
  [582] = {.lex_state = 24},
  [583] = {.lex_state = 24},
  [584] = {.lex_state = 24},
  [585] = {.lex_state = 39},
  [586] = {.lex_state = 68},
  [587] = {.lex_state = 55},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 55},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 24},
  [594] = {.lex_state = 68},
  [595] = {.lex_state = 55},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 55},
  [599] = {.lex_state = 296},
  [600] = {.lex_state = 24},
  [601] = {.lex_state = 68},
  [602] = {.lex_state = 55},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 55},
  [606] = {.lex_state = 68},
  [607] = {.lex_state = 55},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 55},
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
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 24},
  [628] = {.lex_state = 24},
  [629] = {.lex_state = 11},
  [630] = {.lex_state = 12},
  [631] = {.lex_state = 24},
  [632] = {.lex_state = 24},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 12},
  [635] = {.lex_state = 24},
  [636] = {.lex_state = 11},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 24},
  [639] = {.lex_state = 24},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 37},
  [642] = {.lex_state = 37},
  [643] = {.lex_state = 55},
  [644] = {.lex_state = 39},
  [645] = {.lex_state = 67},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 37},
  [648] = {.lex_state = 67},
  [649] = {.lex_state = 67},
  [650] = {.lex_state = 296},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 37},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 67},
  [655] = {.lex_state = 67},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 37},
  [658] = {.lex_state = 39},
  [659] = {.lex_state = 67},
  [660] = {.lex_state = 55},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 24},
  [663] = {.lex_state = 296},
  [664] = {.lex_state = 68},
  [665] = {.lex_state = 67},
  [666] = {.lex_state = 67},
  [667] = {.lex_state = 67},
  [668] = {.lex_state = 67},
  [669] = {.lex_state = 67},
  [670] = {.lex_state = 24},
  [671] = {.lex_state = 11},
  [672] = {.lex_state = 12},
  [673] = {.lex_state = 24},
  [674] = {.lex_state = 11},
  [675] = {.lex_state = 12},
  [676] = {.lex_state = 24},
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
  [695] = {.lex_state = 11},
  [696] = {.lex_state = 12},
  [697] = {.lex_state = 11},
  [698] = {.lex_state = 12},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 67},
  [701] = {.lex_state = 67},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 37},
  [704] = {.lex_state = 296},
  [705] = {.lex_state = 296},
  [706] = {.lex_state = 24},
  [707] = {.lex_state = 24},
  [708] = {.lex_state = 67},
  [709] = {.lex_state = 67},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 39},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 37},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 67},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 37},
  [718] = {.lex_state = 37},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 32},
  [723] = {.lex_state = 55},
  [724] = {.lex_state = 67},
  [725] = {.lex_state = 37},
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
    [anon_sym_LOCALLY] = ACTIONS(1),
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
    [sym_source_file] = STATE(720),
    [sym_arg_command] = STATE(268),
    [sym_from_command] = STATE(268),
    [sym_project_command] = STATE(268),
    [sym_target] = STATE(268),
    [sym_version_command] = STATE(268),
    [aux_sym_source_file_repeat1] = STATE(268),
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
  [0] = 22,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(47), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(29), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(5), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [86] = 22,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(47), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(59), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(57), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(6), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [172] = 22,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(64), 1,
      anon_sym_FROM,
    ACTIONS(67), 1,
      anon_sym_CACHE,
    ACTIONS(70), 1,
      anon_sym_COPY,
    ACTIONS(73), 1,
      anon_sym_FOR,
    ACTIONS(78), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(81), 1,
      anon_sym_GIT,
    ACTIONS(84), 1,
      anon_sym_IF,
    ACTIONS(87), 1,
      anon_sym_ELSE,
    ACTIONS(89), 1,
      anon_sym_LET,
    ACTIONS(92), 1,
      anon_sym_LOCALLY,
    ACTIONS(95), 1,
      anon_sym_RUN,
    ACTIONS(98), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(101), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(104), 1,
      anon_sym_SET,
    ACTIONS(107), 1,
      anon_sym_TRY,
    ACTIONS(110), 1,
      anon_sym_WAIT,
    ACTIONS(113), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(76), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(4), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [258] = 22,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(47), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(118), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(116), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(4), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [344] = 22,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(47), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(122), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(120), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(4), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [430] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(124), 1,
      anon_sym_END,
    ACTIONS(126), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(128), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(38), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [512] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(126), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(128), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(130), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(38), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [594] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(132), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(134), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(136), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(26), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [676] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(126), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(128), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(138), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(38), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [758] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(132), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(134), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(140), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(37), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [840] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(126), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(128), 1,
      anon_sym_SAVEIMAGE,
    STATE(661), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(21), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [922] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(126), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(128), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(142), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(10), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1004] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(126), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(128), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(144), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(38), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1086] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(126), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(128), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(146), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(38), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1168] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(126), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(128), 1,
      anon_sym_SAVEIMAGE,
    STATE(656), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(21), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1250] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(126), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(128), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(148), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(14), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1332] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(126), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(128), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(150), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(15), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1414] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(126), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(128), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(152), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(38), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1496] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(126), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(128), 1,
      anon_sym_SAVEIMAGE,
    STATE(712), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(21), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1578] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(126), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(128), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(154), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(38), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1660] = 21,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(64), 1,
      anon_sym_FROM,
    ACTIONS(67), 1,
      anon_sym_CACHE,
    ACTIONS(70), 1,
      anon_sym_COPY,
    ACTIONS(73), 1,
      anon_sym_FOR,
    ACTIONS(76), 1,
      anon_sym_FINALLY,
    ACTIONS(78), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(81), 1,
      anon_sym_GIT,
    ACTIONS(84), 1,
      anon_sym_IF,
    ACTIONS(89), 1,
      anon_sym_LET,
    ACTIONS(92), 1,
      anon_sym_LOCALLY,
    ACTIONS(95), 1,
      anon_sym_RUN,
    ACTIONS(104), 1,
      anon_sym_SET,
    ACTIONS(107), 1,
      anon_sym_TRY,
    ACTIONS(110), 1,
      anon_sym_WAIT,
    ACTIONS(113), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(156), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(159), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(22), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1742] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(126), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(128), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(162), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(19), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1824] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(126), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(128), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(164), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(38), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1906] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(126), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(128), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(166), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(7), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1988] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(132), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(134), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(168), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(22), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2070] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(126), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(128), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(170), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(38), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2152] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(126), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(128), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(172), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(8), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2234] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(126), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(128), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(174), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(27), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2316] = 21,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(176), 1,
      anon_sym_ARG,
    ACTIONS(178), 1,
      anon_sym_FROM,
    ACTIONS(180), 1,
      anon_sym_CACHE,
    ACTIONS(182), 1,
      anon_sym_COPY,
    ACTIONS(184), 1,
      anon_sym_FOR,
    ACTIONS(186), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(188), 1,
      anon_sym_GIT,
    ACTIONS(190), 1,
      anon_sym_IF,
    ACTIONS(192), 1,
      anon_sym_LET,
    ACTIONS(194), 1,
      anon_sym_LOCALLY,
    ACTIONS(196), 1,
      anon_sym_RUN,
    ACTIONS(198), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(200), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(202), 1,
      anon_sym_SET,
    ACTIONS(204), 1,
      anon_sym_TRY,
    ACTIONS(206), 1,
      anon_sym_WAIT,
    ACTIONS(208), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(210), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(33), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2398] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(126), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(128), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(212), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(38), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2480] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(126), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(128), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(214), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2562] = 21,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(76), 1,
      sym__dedent,
    ACTIONS(216), 1,
      anon_sym_ARG,
    ACTIONS(219), 1,
      anon_sym_FROM,
    ACTIONS(222), 1,
      anon_sym_CACHE,
    ACTIONS(225), 1,
      anon_sym_COPY,
    ACTIONS(228), 1,
      anon_sym_FOR,
    ACTIONS(231), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(234), 1,
      anon_sym_GIT,
    ACTIONS(237), 1,
      anon_sym_IF,
    ACTIONS(240), 1,
      anon_sym_LET,
    ACTIONS(243), 1,
      anon_sym_LOCALLY,
    ACTIONS(246), 1,
      anon_sym_RUN,
    ACTIONS(249), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(252), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(255), 1,
      anon_sym_SET,
    ACTIONS(258), 1,
      anon_sym_TRY,
    ACTIONS(261), 1,
      anon_sym_WAIT,
    ACTIONS(264), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(33), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2644] = 21,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(176), 1,
      anon_sym_ARG,
    ACTIONS(178), 1,
      anon_sym_FROM,
    ACTIONS(180), 1,
      anon_sym_CACHE,
    ACTIONS(182), 1,
      anon_sym_COPY,
    ACTIONS(184), 1,
      anon_sym_FOR,
    ACTIONS(186), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(188), 1,
      anon_sym_GIT,
    ACTIONS(190), 1,
      anon_sym_IF,
    ACTIONS(192), 1,
      anon_sym_LET,
    ACTIONS(194), 1,
      anon_sym_LOCALLY,
    ACTIONS(196), 1,
      anon_sym_RUN,
    ACTIONS(198), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(200), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(202), 1,
      anon_sym_SET,
    ACTIONS(204), 1,
      anon_sym_TRY,
    ACTIONS(206), 1,
      anon_sym_WAIT,
    ACTIONS(208), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(267), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(30), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2726] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(126), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(128), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(269), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(24), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2808] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(126), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(128), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(271), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(38), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2890] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(132), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(134), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(273), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(22), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2972] = 21,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(64), 1,
      anon_sym_FROM,
    ACTIONS(67), 1,
      anon_sym_CACHE,
    ACTIONS(70), 1,
      anon_sym_COPY,
    ACTIONS(73), 1,
      anon_sym_FOR,
    ACTIONS(76), 1,
      anon_sym_END,
    ACTIONS(78), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(81), 1,
      anon_sym_GIT,
    ACTIONS(84), 1,
      anon_sym_IF,
    ACTIONS(89), 1,
      anon_sym_LET,
    ACTIONS(92), 1,
      anon_sym_LOCALLY,
    ACTIONS(95), 1,
      anon_sym_RUN,
    ACTIONS(104), 1,
      anon_sym_SET,
    ACTIONS(107), 1,
      anon_sym_TRY,
    ACTIONS(110), 1,
      anon_sym_WAIT,
    ACTIONS(113), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(275), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(278), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(38), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [3054] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(126), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(128), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(281), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(36), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [3136] = 21,
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
      anon_sym_LOCALLY,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SET,
    ACTIONS(51), 1,
      anon_sym_TRY,
    ACTIONS(53), 1,
      anon_sym_WAIT,
    ACTIONS(55), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(126), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(128), 1,
      anon_sym_SAVEIMAGE,
    STATE(714), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(21), 18,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [3218] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(287), 1,
      anon_sym_COLON2,
    ACTIONS(289), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(285), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(283), 25,
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
      anon_sym_LOCALLY,
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
  [3263] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(295), 1,
      sym_image_name,
    ACTIONS(297), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(299), 1,
      sym_cache_hint,
    ACTIONS(301), 1,
      sym_push,
    STATE(45), 1,
      aux_sym_save_image_command_repeat1,
    STATE(65), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(59), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(293), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(291), 15,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [3317] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(307), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(305), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(303), 25,
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
      anon_sym_LOCALLY,
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
  [3359] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(311), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(309), 25,
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
      anon_sym_LOCALLY,
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
  [3398] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(295), 1,
      sym_image_name,
    ACTIONS(297), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(301), 1,
      sym_push,
    STATE(53), 1,
      aux_sym_save_image_command_repeat1,
    STATE(65), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(62), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(315), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(313), 15,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [3449] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(319), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(317), 25,
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
      anon_sym_LOCALLY,
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
  [3488] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(321), 1,
      sym_image_name,
    ACTIONS(323), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(325), 1,
      sym_cache_hint,
    ACTIONS(327), 1,
      sym_push,
    STATE(51), 1,
      aux_sym_save_image_command_repeat1,
    STATE(131), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(81), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(293), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(291), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [3540] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(299), 1,
      sym_cache_hint,
    ACTIONS(329), 1,
      sym_image_name,
    ACTIONS(331), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(333), 1,
      sym_push,
    STATE(52), 1,
      aux_sym_save_image_command_repeat1,
    STATE(126), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(129), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(293), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(291), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [3592] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(299), 1,
      sym_cache_hint,
    ACTIONS(335), 1,
      sym_image_name,
    ACTIONS(337), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(339), 1,
      sym_push,
    STATE(50), 1,
      aux_sym_save_image_command_repeat1,
    STATE(111), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(123), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(293), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(291), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [3644] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(335), 1,
      sym_image_name,
    ACTIONS(337), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(339), 1,
      sym_push,
    STATE(68), 1,
      aux_sym_save_image_command_repeat1,
    STATE(111), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(143), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(315), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(313), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [3693] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(321), 1,
      sym_image_name,
    ACTIONS(323), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(327), 1,
      sym_push,
    STATE(61), 1,
      aux_sym_save_image_command_repeat1,
    STATE(131), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(93), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(315), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(313), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [3742] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(329), 1,
      sym_image_name,
    ACTIONS(331), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(333), 1,
      sym_push,
    STATE(70), 1,
      aux_sym_save_image_command_repeat1,
    STATE(126), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(137), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(315), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(313), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [3791] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(345), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(348), 1,
      sym_push,
    STATE(53), 1,
      aux_sym_save_image_command_repeat1,
    STATE(65), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(343), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(341), 16,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [3836] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(355), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(353), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(55), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(351), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [3876] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(361), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(359), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(55), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(357), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [3916] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(355), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(366), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(58), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(364), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [3956] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(355), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(370), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(54), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(368), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [3996] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(355), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(374), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(55), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(372), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4036] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(295), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(63), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(378), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [4075] = 3,
    ACTIONS(382), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(380), 22,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [4108] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(384), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(387), 1,
      sym_push,
    STATE(61), 1,
      aux_sym_save_image_command_repeat1,
    STATE(131), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(343), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(341), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4151] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(295), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(63), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(392), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(390), 15,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [4190] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(398), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(63), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(396), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(394), 15,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [4229] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(403), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(401), 16,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4264] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(407), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(405), 16,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4299] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(411), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(409), 16,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4334] = 4,
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
    ACTIONS(413), 16,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4369] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(417), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(420), 1,
      sym_push,
    STATE(68), 1,
      aux_sym_save_image_command_repeat1,
    STATE(111), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(343), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(341), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4412] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(423), 1,
      anon_sym_COLON2,
    ACTIONS(425), 1,
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
    ACTIONS(285), 16,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4451] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(427), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(430), 1,
      sym_push,
    STATE(70), 1,
      aux_sym_save_image_command_repeat1,
    STATE(126), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(343), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(341), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [4494] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(413), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(415), 20,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [4528] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(409), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(411), 20,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [4562] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(435), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(433), 20,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [4596] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(439), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(437), 20,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [4630] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(445), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(443), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(441), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4666] = 6,
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
    ACTIONS(447), 15,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [4704] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(459), 1,
      anon_sym_ASLOCAL,
    ACTIONS(461), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(457), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(455), 15,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [4742] = 5,
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
    ACTIONS(463), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4778] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(469), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(303), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(305), 16,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4814] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(473), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(471), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4847] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(321), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(87), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(378), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(376), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [4884] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(477), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(475), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4917] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(481), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(479), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4950] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(359), 1,
      anon_sym_FROM,
    ACTIONS(483), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(84), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(357), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4987] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(488), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(486), 19,
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
      anon_sym_LOCALLY,
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
    ACTIONS(492), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(490), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5053] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(494), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(87), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(396), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(394), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [5090] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(499), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(497), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5123] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(503), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(501), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5156] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(507), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(505), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5189] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(366), 1,
      anon_sym_FROM,
    ACTIONS(509), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(160), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(364), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5226] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(353), 1,
      anon_sym_FROM,
    ACTIONS(509), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(84), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(351), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5263] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(321), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(87), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(392), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(390), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [5300] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(513), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(511), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5333] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(515), 1,
      sym_path,
    ACTIONS(517), 1,
      anon_sym_PLUS,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(525), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(527), 1,
      anon_sym_DASH_DASHplatform,
    STATE(236), 1,
      aux_sym_copy_command_repeat1,
    STATE(330), 1,
      aux_sym_copy_command_repeat2,
    STATE(571), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(554), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(254), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(521), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [5386] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(515), 1,
      sym_path,
    ACTIONS(517), 1,
      anon_sym_PLUS,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(525), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(527), 1,
      anon_sym_DASH_DASHplatform,
    STATE(95), 1,
      aux_sym_copy_command_repeat1,
    STATE(319), 1,
      aux_sym_copy_command_repeat2,
    STATE(571), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(554), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(254), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(521), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [5439] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(531), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(529), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5472] = 4,
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
    ACTIONS(413), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [5505] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(370), 1,
      anon_sym_FROM,
    ACTIONS(509), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(92), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(368), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5542] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(535), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(533), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5575] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(539), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(537), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5608] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(515), 1,
      sym_path,
    ACTIONS(517), 1,
      anon_sym_PLUS,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(525), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(527), 1,
      anon_sym_DASH_DASHplatform,
    STATE(236), 1,
      aux_sym_copy_command_repeat1,
    STATE(328), 1,
      aux_sym_copy_command_repeat2,
    STATE(571), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(554), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(254), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(521), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [5661] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(543), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(541), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5694] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(411), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(409), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [5727] = 4,
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
    ACTIONS(413), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [5760] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(547), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(545), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5793] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(411), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(409), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [5826] = 4,
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
    ACTIONS(413), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [5859] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(551), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(549), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5892] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(317), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(319), 16,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [5925] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(407), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(405), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [5958] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(555), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(553), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5991] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(309), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(311), 16,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [6024] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(559), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(557), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6057] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(563), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(561), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6090] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(567), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(565), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6123] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(571), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(569), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6156] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(575), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(573), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6189] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(577), 1,
      anon_sym_COLON2,
    ACTIONS(579), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(283), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(285), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [6226] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(583), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(581), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6259] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(587), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(585), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6292] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(591), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(589), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6325] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(335), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(144), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(378), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [6362] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(593), 1,
      anon_sym_COLON2,
    ACTIONS(595), 1,
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
    ACTIONS(285), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [6399] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(370), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(368), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6432] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(407), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(405), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [6465] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(599), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(597), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6498] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(603), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(601), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6531] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(329), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(141), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(378), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(376), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [6568] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(607), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(605), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6601] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(407), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(405), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [6634] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(611), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(609), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6667] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(615), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(613), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6700] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(619), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(617), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6733] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(623), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(621), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6766] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(625), 1,
      anon_sym_COLON2,
    ACTIONS(627), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(283), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(285), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [6803] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(329), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(141), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(392), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(390), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [6840] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(631), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(629), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6873] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(403), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(401), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [6906] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(635), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(633), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6939] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(637), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(141), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(396), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(394), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [6976] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(515), 1,
      sym_path,
    ACTIONS(517), 1,
      anon_sym_PLUS,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(525), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(527), 1,
      anon_sym_DASH_DASHplatform,
    STATE(102), 1,
      aux_sym_copy_command_repeat1,
    STATE(334), 1,
      aux_sym_copy_command_repeat2,
    STATE(571), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(554), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(254), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(521), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [7029] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(335), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(144), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(392), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(390), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [7066] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(640), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(144), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(396), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(394), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [7103] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(645), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(643), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7136] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(649), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(647), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7169] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(653), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(651), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7202] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(657), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(655), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7235] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(661), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(659), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7268] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(665), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(663), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7301] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(403), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(401), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7334] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(669), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(667), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7367] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(673), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(671), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7400] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(403), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(401), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [7433] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(677), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(675), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7466] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(681), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(679), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7499] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(685), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(683), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7532] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(689), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(687), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7565] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(693), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(691), 19,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7598] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(374), 1,
      anon_sym_FROM,
    ACTIONS(509), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(84), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(372), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7635] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(411), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(409), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [7668] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(695), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(303), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(305), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [7702] = 6,
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
    ACTIONS(447), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [7738] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(697), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(303), 5,
      sym__dedent,
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
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7772] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(459), 1,
      anon_sym_ASLOCAL,
    ACTIONS(461), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(457), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(455), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [7808] = 4,
    ACTIONS(699), 1,
      aux_sym_branch_token1,
    ACTIONS(701), 1,
      sym__dedent,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(380), 18,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [7840] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(459), 1,
      anon_sym_ASLOCAL,
    ACTIONS(461), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(457), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(455), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [7876] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(703), 1,
      anon_sym_ASLOCAL,
    ACTIONS(705), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(457), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(455), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [7912] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(285), 1,
      anon_sym_FROM,
    ACTIONS(707), 1,
      anon_sym_COLON2,
    ACTIONS(709), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(283), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7948] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(711), 1,
      anon_sym_ASLOCAL,
    ACTIONS(713), 1,
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
    ACTIONS(447), 13,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [7984] = 6,
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
    ACTIONS(447), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [8020] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(715), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(303), 4,
      anon_sym_FROMDOCKERFILE,
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
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [8054] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(309), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(311), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [8085] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(413), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(415), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [8116] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(309), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(311), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [8147] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(317), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(319), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [8178] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(309), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(311), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [8209] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(317), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(319), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [8240] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(465), 1,
      anon_sym_FROM,
    ACTIONS(717), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(463), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8273] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(317), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(319), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [8304] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(409), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(411), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [8335] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(439), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(437), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [8366] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(435), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(433), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [8397] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(305), 1,
      anon_sym_FROM,
    ACTIONS(719), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(303), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8430] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(443), 1,
      anon_sym_FROM,
    ACTIONS(721), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(441), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8463] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(503), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(501), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8493] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(607), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(605), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8523] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(623), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(621), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8553] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(571), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(569), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8583] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(689), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(687), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
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
    ACTIONS(547), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(545), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8643] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(311), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(309), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8673] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(539), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(537), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8703] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(665), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(663), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
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
    ACTIONS(661), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(659), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8763] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(631), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(629), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8793] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(615), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(613), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8823] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(693), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(691), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8853] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(677), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(675), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8883] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(645), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(643), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8913] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(563), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(561), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8943] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(567), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(565), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8973] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(657), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(655), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9003] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(653), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(651), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
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
    ACTIONS(370), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(368), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9063] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(649), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(647), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9093] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(635), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(633), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9123] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(587), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(585), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9153] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(488), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(486), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9183] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(619), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(617), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9213] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(319), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(317), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9243] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(669), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(667), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9273] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(535), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(533), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9303] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(603), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(601), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9333] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(599), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(597), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9363] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(611), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(609), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9393] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(673), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(671), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9423] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(481), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(479), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9453] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(492), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(490), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9483] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(499), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(497), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9513] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(513), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(511), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9543] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(531), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(529), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
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
    ACTIONS(477), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(475), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9603] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(507), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(505), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9633] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(543), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(541), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9663] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(551), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(549), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9693] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(591), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(589), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9723] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(681), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(679), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9753] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(555), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(553), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9783] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(473), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(471), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9813] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(559), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(557), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9843] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(575), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(573), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9873] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(685), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(683), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9903] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(583), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(581), 17,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9933] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(723), 1,
      anon_sym_DASH_DASH,
    ACTIONS(727), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(731), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(733), 1,
      anon_sym_DASH_DASHsecret,
    STATE(240), 1,
      aux_sym_run_command_repeat1,
    STATE(323), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(452), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(725), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(255), 2,
      sym_mount,
      sym_secret,
    ACTIONS(729), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [9978] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(735), 1,
      sym_path,
    ACTIONS(742), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(745), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(748), 1,
      anon_sym_DASH_DASHplatform,
    STATE(236), 1,
      aux_sym_copy_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(737), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    STATE(254), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(739), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [10019] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(727), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(731), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(733), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(751), 1,
      anon_sym_DASH_DASH,
    STATE(235), 1,
      aux_sym_run_command_repeat1,
    STATE(323), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(477), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(725), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(255), 2,
      sym_mount,
      sym_secret,
    ACTIONS(729), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [10064] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(727), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(731), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(733), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(753), 1,
      anon_sym_DASH_DASH,
    STATE(240), 1,
      aux_sym_run_command_repeat1,
    STATE(323), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(532), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(725), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(255), 2,
      sym_mount,
      sym_secret,
    ACTIONS(729), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [10109] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(727), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(731), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(733), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(755), 1,
      anon_sym_DASH_DASH,
    STATE(238), 1,
      aux_sym_run_command_repeat1,
    STATE(323), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(521), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(725), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(255), 2,
      sym_mount,
      sym_secret,
    ACTIONS(729), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [10154] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(764), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(767), 1,
      anon_sym_DASH_DASHsecret,
    STATE(240), 1,
      aux_sym_run_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(757), 2,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
    ACTIONS(759), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(255), 2,
      sym_mount,
      sym_secret,
    ACTIONS(761), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [10191] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(770), 1,
      sym_allow_privileged,
    ACTIONS(772), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(774), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(776), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(778), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(780), 1,
      anon_sym_DASH_DASHservice,
    STATE(251), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(699), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(315), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [10233] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(770), 1,
      sym_allow_privileged,
    ACTIONS(772), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(774), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(776), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(778), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(780), 1,
      anon_sym_DASH_DASHservice,
    STATE(251), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(653), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(315), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [10275] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(770), 1,
      sym_allow_privileged,
    ACTIONS(772), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(774), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(776), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(778), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(780), 1,
      anon_sym_DASH_DASHservice,
    STATE(242), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(646), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(315), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [10317] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(43), 1,
      anon_sym_RUN,
    ACTIONS(770), 1,
      sym_allow_privileged,
    ACTIONS(772), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(774), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(776), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(778), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(780), 1,
      anon_sym_DASH_DASHservice,
    STATE(241), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(637), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(315), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [10359] = 4,
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
  [10384] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(786), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(788), 12,
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
  [10409] = 4,
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
  [10434] = 10,
    ACTIONS(794), 1,
      sym_image_name,
    ACTIONS(796), 1,
      anon_sym_PLUS,
    ACTIONS(800), 1,
      anon_sym_DASH_DASHplatform,
    STATE(57), 1,
      sym_target_ref,
    STATE(313), 1,
      aux_sym_from_command_repeat1,
    STATE(437), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(798), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(125), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(802), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10471] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(409), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(411), 12,
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
  [10496] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(413), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(415), 12,
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
  [10521] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(804), 1,
      anon_sym_RUN,
    ACTIONS(806), 1,
      sym_allow_privileged,
    ACTIONS(809), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(812), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(815), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(818), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(821), 1,
      anon_sym_DASH_DASHservice,
    STATE(251), 1,
      aux_sym_with_docker_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(315), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [10560] = 10,
    ACTIONS(800), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(824), 1,
      sym_image_name,
    ACTIONS(826), 1,
      anon_sym_PLUS,
    STATE(296), 1,
      sym_target_ref,
    STATE(325), 1,
      aux_sym_from_command_repeat1,
    STATE(437), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(798), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(361), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(828), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10597] = 10,
    ACTIONS(800), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(830), 1,
      sym_image_name,
    ACTIONS(832), 1,
      anon_sym_PLUS,
    STATE(99), 1,
      sym_target_ref,
    STATE(345), 1,
      aux_sym_from_command_repeat1,
    STATE(437), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(798), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(205), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(834), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10634] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(836), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(838), 12,
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
  [10659] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(842), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(840), 10,
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
  [10683] = 8,
    ACTIONS(846), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 1,
      anon_sym_SQUOTE,
    STATE(18), 1,
      sym__eol,
    STATE(271), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(844), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(350), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(850), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10715] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(409), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(411), 10,
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
  [10739] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(413), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(415), 10,
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
  [10763] = 8,
    ACTIONS(846), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      sym__eol,
    STATE(271), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(844), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(350), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(852), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10795] = 8,
    ACTIONS(846), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 1,
      anon_sym_SQUOTE,
    STATE(32), 1,
      sym__eol,
    STATE(259), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(844), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(350), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(854), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10827] = 8,
    ACTIONS(846), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 1,
      anon_sym_SQUOTE,
    STATE(23), 1,
      sym__eol,
    STATE(256), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(844), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(350), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(856), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10859] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(860), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(858), 10,
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
  [10883] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(864), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(862), 10,
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
  [10907] = 8,
    ACTIONS(846), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 1,
      anon_sym_SQUOTE,
    STATE(17), 1,
      sym__eol,
    STATE(269), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(844), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(350), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(866), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10939] = 8,
    ACTIONS(846), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 1,
      anon_sym_SQUOTE,
    STATE(25), 1,
      sym__eol,
    STATE(271), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(844), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(350), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(868), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10971] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(870), 1,
      ts_builtin_sym_end,
    ACTIONS(872), 1,
      anon_sym_ARG,
    ACTIONS(875), 1,
      anon_sym_FROM,
    ACTIONS(878), 1,
      anon_sym_PROJECT,
    ACTIONS(881), 1,
      anon_sym_VERSION,
    ACTIONS(884), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(266), 6,
      sym_arg_command,
      sym_from_command,
      sym_project_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [11005] = 8,
    ACTIONS(846), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym__eol,
    STATE(265), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(844), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(350), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(887), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11037] = 9,
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
    ACTIONS(889), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(266), 6,
      sym_arg_command,
      sym_from_command,
      sym_project_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [11071] = 8,
    ACTIONS(846), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 1,
      anon_sym_SQUOTE,
    STATE(13), 1,
      sym__eol,
    STATE(271), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(844), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(350), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(891), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11103] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(893), 1,
      sym_identifier,
    ACTIONS(895), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(899), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(901), 1,
      anon_sym_DASH_DASHsep,
    STATE(272), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(897), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(333), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [11136] = 7,
    ACTIONS(906), 1,
      anon_sym_DQUOTE,
    ACTIONS(909), 1,
      anon_sym_SQUOTE,
    STATE(271), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(903), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(350), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(912), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11165] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(895), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(899), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(901), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(914), 1,
      sym_identifier,
    STATE(275), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(897), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(333), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [11198] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(895), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(899), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(901), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(916), 1,
      sym_identifier,
    STATE(275), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(897), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(333), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [11231] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(895), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(899), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(918), 1,
      sym_identifier,
    STATE(293), 1,
      aux_sym__conditional_block_repeat1,
    STATE(544), 1,
      sym_else_if_block,
    STATE(545), 1,
      sym__conditional_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(360), 2,
      sym_mount,
      sym_secret,
    ACTIONS(920), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [11266] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(922), 1,
      sym_identifier,
    ACTIONS(924), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(930), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(933), 1,
      anon_sym_DASH_DASHsep,
    STATE(275), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(927), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(333), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [11299] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(895), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(899), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(901), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(936), 1,
      sym_identifier,
    STATE(273), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(897), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(333), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [11332] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(895), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(899), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(918), 1,
      sym_identifier,
    STATE(293), 1,
      aux_sym__conditional_block_repeat1,
    STATE(481), 1,
      sym__conditional_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(360), 2,
      sym_mount,
      sym_secret,
    ACTIONS(920), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [11364] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(938), 1,
      sym_path,
    ACTIONS(940), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(942), 1,
      anon_sym_DASHf,
    ACTIONS(944), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(946), 1,
      anon_sym_DASH_DASHplatform,
    STATE(284), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(417), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [11396] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(940), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(942), 1,
      anon_sym_DASHf,
    ACTIONS(944), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(946), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(948), 1,
      sym_path,
    STATE(278), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(417), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [11428] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(940), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(942), 1,
      anon_sym_DASHf,
    ACTIONS(944), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(946), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(950), 1,
      sym_path,
    STATE(284), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(417), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [11460] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(940), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(942), 1,
      anon_sym_DASHf,
    ACTIONS(944), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(946), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(952), 1,
      sym_path,
    STATE(280), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(417), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [11492] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(895), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(899), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(918), 1,
      sym_identifier,
    STATE(293), 1,
      aux_sym__conditional_block_repeat1,
    STATE(468), 1,
      sym__conditional_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(360), 2,
      sym_mount,
      sym_secret,
    ACTIONS(920), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [11524] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(954), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(357), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(283), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(359), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [11550] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(957), 1,
      sym_path,
    ACTIONS(959), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(962), 1,
      anon_sym_DASHf,
    ACTIONS(965), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(968), 1,
      anon_sym_DASH_DASHplatform,
    STATE(284), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(417), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [11582] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(971), 1,
      sym_path,
    ACTIONS(973), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(975), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(977), 1,
      sym_persist,
    ACTIONS(979), 1,
      anon_sym_DASH_DASHsharing,
    STATE(297), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(396), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [11613] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(973), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(975), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(977), 1,
      sym_persist,
    ACTIONS(979), 1,
      anon_sym_DASH_DASHsharing,
    ACTIONS(981), 1,
      sym_path,
    STATE(289), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(396), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [11644] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(983), 1,
      sym_identifier,
    ACTIONS(985), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(991), 1,
      anon_sym_DASH_DASHsecret,
    STATE(287), 1,
      aux_sym__conditional_block_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(360), 2,
      sym_mount,
      sym_secret,
    ACTIONS(988), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [11673] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(973), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(975), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(977), 1,
      sym_persist,
    ACTIONS(979), 1,
      anon_sym_DASH_DASHsharing,
    ACTIONS(994), 1,
      sym_path,
    STATE(285), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(396), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [11704] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(973), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(975), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(977), 1,
      sym_persist,
    ACTIONS(979), 1,
      anon_sym_DASH_DASHsharing,
    ACTIONS(996), 1,
      sym_path,
    STATE(297), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(396), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [11735] = 4,
    ACTIONS(701), 1,
      ts_builtin_sym_end,
    ACTIONS(998), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(380), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
  [11756] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
    ACTIONS(1000), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(283), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(353), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [11781] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    ACTIONS(1000), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(295), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(366), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [11806] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(895), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(899), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(1002), 1,
      sym_identifier,
    STATE(287), 1,
      aux_sym__conditional_block_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(360), 2,
      sym_mount,
      sym_secret,
    ACTIONS(920), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [11835] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1004), 1,
      anon_sym_COLON2,
    ACTIONS(1006), 1,
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
  [11860] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    ACTIONS(1000), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(283), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(374), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [11885] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    ACTIONS(1000), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(291), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(370), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [11910] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1008), 1,
      sym_path,
    ACTIONS(1010), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(1013), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(1016), 1,
      sym_persist,
    ACTIONS(1019), 1,
      anon_sym_DASH_DASHsharing,
    STATE(297), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(396), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [11941] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(411), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(409), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [11961] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(433), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_DASH_DASH2,
    ACTIONS(435), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [11981] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1022), 1,
      anon_sym_AT,
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
  [12003] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(437), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(439), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12023] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(415), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(413), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12043] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1024), 1,
      sym_path,
    STATE(326), 1,
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
  [12064] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1028), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [12081] = 4,
    STATE(305), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1030), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(1033), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12100] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1035), 1,
      sym_path,
    STATE(314), 1,
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
  [12121] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1037), 1,
      sym_path,
    STATE(306), 1,
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
  [12142] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1039), 1,
      sym_path,
    STATE(314), 1,
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
  [12163] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1041), 1,
      sym_path,
    STATE(308), 1,
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
  [12184] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1043), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [12201] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1045), 1,
      sym_expr,
    ACTIONS(1047), 1,
      anon_sym_DQUOTE,
    ACTIONS(1049), 1,
      anon_sym_SQUOTE,
    ACTIONS(1051), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(492), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12226] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1047), 1,
      anon_sym_DQUOTE,
    ACTIONS(1049), 1,
      anon_sym_SQUOTE,
    ACTIONS(1053), 1,
      sym_expr,
    ACTIONS(1055), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(494), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12251] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(527), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1057), 1,
      anon_sym_PLUS,
    STATE(56), 1,
      sym_target_ref,
    STATE(367), 1,
      aux_sym_from_command_repeat1,
    STATE(437), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1059), 2,
      sym_allow_privileged,
      sym_pass_args,
  [12278] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1061), 1,
      sym_path,
    STATE(314), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1063), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [12299] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1066), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [12316] = 4,
    STATE(115), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1068), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(1070), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12335] = 4,
    STATE(153), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1068), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(1072), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12354] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1074), 1,
      ts_builtin_sym_end,
    ACTIONS(1078), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1076), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12375] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(517), 1,
      anon_sym_PLUS,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(1080), 1,
      sym_path,
    STATE(336), 1,
      aux_sym_copy_command_repeat2,
    STATE(571), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(554), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [12402] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1082), 1,
      sym_path,
    STATE(314), 1,
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
  [12423] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(413), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12438] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1047), 1,
      anon_sym_DQUOTE,
    ACTIONS(1049), 1,
      anon_sym_SQUOTE,
    ACTIONS(1084), 1,
      sym_expr,
    ACTIONS(1086), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(488), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12463] = 4,
    STATE(305), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1088), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(1090), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12482] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(409), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12497] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(517), 1,
      anon_sym_PLUS,
    ACTIONS(527), 1,
      anon_sym_DASH_DASHplatform,
    STATE(292), 1,
      sym_target_ref,
    STATE(367), 1,
      aux_sym_from_command_repeat1,
    STATE(437), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1059), 2,
      sym_allow_privileged,
      sym_pass_args,
  [12524] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1092), 1,
      sym_path,
    STATE(314), 1,
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
  [12545] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(788), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [12562] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(517), 1,
      anon_sym_PLUS,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(1094), 1,
      sym_path,
    STATE(336), 1,
      aux_sym_copy_command_repeat2,
    STATE(571), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(554), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [12589] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1096), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [12606] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(517), 1,
      anon_sym_PLUS,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(1098), 1,
      sym_path,
    STATE(336), 1,
      aux_sym_copy_command_repeat2,
    STATE(571), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(554), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [12633] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1100), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [12650] = 4,
    STATE(217), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1068), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(1102), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12669] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1104), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [12686] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(517), 1,
      anon_sym_PLUS,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(1106), 1,
      sym_path,
    STATE(336), 1,
      aux_sym_copy_command_repeat2,
    STATE(571), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(554), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [12713] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1108), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [12730] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1110), 1,
      sym_path,
    ACTIONS(1113), 1,
      anon_sym_PLUS,
    ACTIONS(1116), 1,
      anon_sym_LPAREN,
    STATE(336), 1,
      aux_sym_copy_command_repeat2,
    STATE(571), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(554), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [12757] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(415), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [12774] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(433), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [12791] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(317), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(319), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12810] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(411), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [12827] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(415), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [12844] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(411), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [12861] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(309), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(311), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12880] = 4,
    STATE(201), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1068), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(1119), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12899] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(527), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1121), 1,
      anon_sym_PLUS,
    STATE(91), 1,
      sym_target_ref,
    STATE(367), 1,
      aux_sym_from_command_repeat1,
    STATE(437), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1059), 2,
      sym_allow_privileged,
      sym_pass_args,
  [12926] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1047), 1,
      anon_sym_DQUOTE,
    ACTIONS(1049), 1,
      anon_sym_SQUOTE,
    ACTIONS(1123), 1,
      sym_expr,
    ACTIONS(1125), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(438), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12951] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1127), 1,
      sym_path,
    STATE(320), 1,
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
  [12972] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1047), 1,
      anon_sym_DQUOTE,
    ACTIONS(1049), 1,
      anon_sym_SQUOTE,
    ACTIONS(1129), 1,
      sym_expr,
    ACTIONS(1131), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(480), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12997] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1133), 1,
      sym_path,
    STATE(354), 1,
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
  [13018] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1135), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13033] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1047), 1,
      anon_sym_DQUOTE,
    ACTIONS(1049), 1,
      anon_sym_SQUOTE,
    ACTIONS(1137), 1,
      sym_expr,
    ACTIONS(1139), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(470), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13058] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(858), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [13075] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(862), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [13092] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1141), 1,
      sym_path,
    STATE(314), 1,
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
  [13113] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1143), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [13130] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1047), 1,
      anon_sym_DQUOTE,
    ACTIONS(1049), 1,
      anon_sym_SQUOTE,
    ACTIONS(1145), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(432), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13152] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1147), 1,
      anon_sym_DQUOTE,
    ACTIONS(1149), 1,
      anon_sym_SQUOTE,
    ACTIONS(1151), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(247), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13174] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1153), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1155), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [13192] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1147), 1,
      anon_sym_DQUOTE,
    ACTIONS(1149), 1,
      anon_sym_SQUOTE,
    ACTIONS(1157), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(245), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13214] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1159), 6,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      sym_ssh,
  [13230] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(370), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13248] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1161), 1,
      anon_sym_DQUOTE,
    ACTIONS(1163), 1,
      anon_sym_SQUOTE,
    ACTIONS(1165), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(352), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13270] = 6,
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
    STATE(139), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13292] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(655), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(657), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13310] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1047), 1,
      anon_sym_DQUOTE,
    ACTIONS(1049), 1,
      anon_sym_SQUOTE,
    ACTIONS(1173), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(428), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13332] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1147), 1,
      anon_sym_DQUOTE,
    ACTIONS(1149), 1,
      anon_sym_SQUOTE,
    ACTIONS(1175), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(246), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13354] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1177), 1,
      anon_sym_PLUS,
    ACTIONS(1182), 1,
      anon_sym_DASH_DASHplatform,
    STATE(367), 1,
      aux_sym_from_command_repeat1,
    STATE(437), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1179), 2,
      sym_allow_privileged,
      sym_pass_args,
  [13378] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1047), 1,
      anon_sym_DQUOTE,
    ACTIONS(1049), 1,
      anon_sym_SQUOTE,
    ACTIONS(1185), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(522), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13400] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1161), 1,
      anon_sym_DQUOTE,
    ACTIONS(1163), 1,
      anon_sym_SQUOTE,
    ACTIONS(1187), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(353), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13422] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1047), 1,
      anon_sym_DQUOTE,
    ACTIONS(1049), 1,
      anon_sym_SQUOTE,
    ACTIONS(1189), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(424), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13444] = 4,
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
  [13462] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1161), 1,
      anon_sym_DQUOTE,
    ACTIONS(1163), 1,
      anon_sym_SQUOTE,
    ACTIONS(1195), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(355), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13484] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(663), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(665), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13502] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1197), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1199), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13520] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1201), 1,
      anon_sym_DQUOTE,
    ACTIONS(1203), 1,
      anon_sym_SQUOTE,
    ACTIONS(1205), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(64), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13542] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1207), 1,
      anon_sym_DQUOTE,
    ACTIONS(1209), 1,
      anon_sym_SQUOTE,
    ACTIONS(1211), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(154), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13564] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(486), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(488), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13582] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(473), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13600] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1213), 1,
      anon_sym_DQUOTE,
    ACTIONS(1215), 1,
      anon_sym_SQUOTE,
    ACTIONS(1217), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(74), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13622] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1219), 1,
      anon_sym_DQUOTE,
    ACTIONS(1221), 1,
      anon_sym_SQUOTE,
    ACTIONS(1223), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(327), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13644] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1225), 1,
      anon_sym_DQUOTE,
    ACTIONS(1227), 1,
      anon_sym_SQUOTE,
    ACTIONS(1229), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(301), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13666] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1219), 1,
      anon_sym_DQUOTE,
    ACTIONS(1221), 1,
      anon_sym_SQUOTE,
    ACTIONS(1231), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(329), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13688] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1233), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1235), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13706] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1237), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1239), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13724] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1241), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1243), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13742] = 6,
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
    STATE(151), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13764] = 6,
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
    STATE(263), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13786] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1251), 1,
      anon_sym_DQUOTE,
    ACTIONS(1253), 1,
      anon_sym_SQUOTE,
    ACTIONS(1257), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(262), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13808] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1259), 1,
      anon_sym_DQUOTE,
    ACTIONS(1261), 1,
      anon_sym_SQUOTE,
    ACTIONS(1263), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(422), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13830] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1265), 1,
      anon_sym_DQUOTE,
    ACTIONS(1267), 1,
      anon_sym_SQUOTE,
    ACTIONS(1269), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(182), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13852] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1271), 1,
      anon_sym_DQUOTE,
    ACTIONS(1273), 1,
      anon_sym_SQUOTE,
    ACTIONS(1275), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(412), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13874] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(569), 1,
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
  [13892] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(565), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(567), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13910] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1271), 1,
      anon_sym_DQUOTE,
    ACTIONS(1273), 1,
      anon_sym_SQUOTE,
    ACTIONS(1277), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(399), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13932] = 4,
    ACTIONS(1279), 1,
      anon_sym_EQ,
    STATE(203), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1281), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13949] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1283), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1285), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [13966] = 4,
    ACTIONS(1287), 1,
      anon_sym_EQ,
    STATE(150), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1289), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13983] = 4,
    ACTIONS(1291), 1,
      anon_sym_EQ,
    STATE(148), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1293), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14000] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1295), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1297), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [14017] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(413), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(415), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [14034] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(409), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(411), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [14051] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(725), 1,
      aux_sym_shell_fragment_token3,
    STATE(323), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(531), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(727), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [14072] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(725), 1,
      aux_sym_shell_fragment_token3,
    STATE(323), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(423), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(727), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [14093] = 4,
    ACTIONS(1299), 1,
      anon_sym_EQ,
    STATE(373), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1301), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14110] = 4,
    ACTIONS(1303), 1,
      anon_sym_EQ,
    STATE(194), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1305), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14127] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1307), 1,
      sym_path,
    ACTIONS(1309), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1311), 1,
      sym_keep_ts,
    STATE(407), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(549), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14150] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1309), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1311), 1,
      sym_keep_ts,
    ACTIONS(1313), 1,
      sym_path,
    STATE(411), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(549), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14173] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(725), 1,
      aux_sym_shell_fragment_token3,
    STATE(323), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(431), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(727), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [14194] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(413), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(415), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [14211] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(409), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(411), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [14228] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1315), 1,
      sym_path,
    ACTIONS(1317), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1320), 1,
      sym_keep_ts,
    STATE(411), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(549), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14251] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(786), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(788), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [14268] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(725), 1,
      aux_sym_shell_fragment_token3,
    STATE(323), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(453), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(727), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [14289] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1309), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1311), 1,
      sym_keep_ts,
    ACTIONS(1323), 1,
      sym_path,
    STATE(411), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(549), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14312] = 4,
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
  [14329] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1329), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1331), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [14346] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1333), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1335), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [14363] = 4,
    ACTIONS(1337), 1,
      anon_sym_EQ,
    STATE(364), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1339), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14380] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1309), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1311), 1,
      sym_keep_ts,
    ACTIONS(1341), 1,
      sym_path,
    STATE(414), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(549), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14403] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1343), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1345), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [14420] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1347), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1349), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [14437] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(790), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(792), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [14454] = 3,
    STATE(133), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1351), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14468] = 3,
    STATE(100), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1353), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14482] = 3,
    STATE(9), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1355), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14496] = 3,
    STATE(497), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1357), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14510] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1359), 1,
      anon_sym_END,
    ACTIONS(1361), 1,
      anon_sym_SAVEARTIFACT,
    STATE(537), 1,
      aux_sym_try_command_repeat1,
    STATE(557), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14530] = 3,
    STATE(195), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1363), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14544] = 3,
    STATE(204), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1365), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14558] = 3,
    STATE(451), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1367), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14572] = 3,
    STATE(197), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1369), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14586] = 3,
    STATE(213), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1371), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14600] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1373), 1,
      anon_sym_END,
    ACTIONS(1375), 1,
      anon_sym_ELSEIF,
    ACTIONS(1378), 1,
      anon_sym_ELSE,
    STATE(433), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14620] = 3,
    STATE(193), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1380), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14634] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1382), 1,
      sym_identifier,
    STATE(448), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1384), 2,
      sym_global,
      sym_required,
  [14652] = 3,
    STATE(459), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1386), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14666] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1388), 4,
      anon_sym_PLUS,
      sym_allow_privileged,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
  [14680] = 3,
    STATE(209), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1390), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14694] = 3,
    STATE(230), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1392), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14708] = 3,
    STATE(191), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1394), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14722] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1000), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1396), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(283), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [14740] = 3,
    STATE(371), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1398), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14754] = 3,
    STATE(318), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1400), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14768] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1402), 1,
      sym_identifier,
    STATE(491), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1384), 2,
      sym_global,
      sym_required,
  [14786] = 3,
    STATE(208), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1404), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14800] = 3,
    STATE(227), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1406), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14814] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1361), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1408), 1,
      anon_sym_END,
    STATE(474), 1,
      aux_sym_try_command_repeat1,
    STATE(557), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14834] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1410), 1,
      sym_identifier,
    STATE(448), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1412), 2,
      sym_global,
      sym_required,
  [14852] = 3,
    STATE(210), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1415), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14866] = 3,
    STATE(427), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1417), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14880] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1361), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1419), 1,
      anon_sym_END,
    STATE(447), 1,
      aux_sym_try_command_repeat1,
    STATE(557), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14900] = 3,
    STATE(223), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1421), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14914] = 3,
    STATE(198), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1423), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14928] = 3,
    STATE(2), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1425), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14942] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1427), 1,
      anon_sym_END,
    ACTIONS(1429), 1,
      anon_sym_ELSEIF,
    ACTIONS(1431), 1,
      anon_sym_ELSE,
    STATE(433), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14962] = 3,
    STATE(233), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1433), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14976] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1361), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1435), 1,
      anon_sym_END,
    STATE(474), 1,
      aux_sym_try_command_repeat1,
    STATE(557), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14996] = 3,
    STATE(234), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1437), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15010] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1361), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1439), 1,
      anon_sym_END,
    STATE(457), 1,
      aux_sym_try_command_repeat1,
    STATE(557), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15030] = 3,
    STATE(228), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1441), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15044] = 3,
    STATE(232), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1443), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15058] = 3,
    STATE(231), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1445), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15072] = 3,
    STATE(229), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1447), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15086] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1429), 1,
      anon_sym_ELSEIF,
    ACTIONS(1449), 1,
      anon_sym_END,
    ACTIONS(1451), 1,
      anon_sym_ELSE,
    STATE(433), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15106] = 3,
    STATE(374), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1453), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15120] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1361), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1455), 1,
      anon_sym_END,
    STATE(474), 1,
      aux_sym_try_command_repeat1,
    STATE(557), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15140] = 3,
    STATE(212), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1457), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15154] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1429), 1,
      anon_sym_ELSEIF,
    ACTIONS(1459), 1,
      anon_sym_END,
    ACTIONS(1461), 1,
      anon_sym_ELSE,
    STATE(464), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15174] = 3,
    STATE(378), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1463), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15188] = 3,
    STATE(377), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1465), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15202] = 3,
    STATE(226), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1467), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15216] = 3,
    STATE(383), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1469), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15230] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1471), 1,
      sym_identifier,
    STATE(504), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1384), 2,
      sym_global,
      sym_required,
  [15248] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1473), 1,
      anon_sym_END,
    ACTIONS(1475), 1,
      anon_sym_SAVEARTIFACT,
    STATE(474), 1,
      aux_sym_try_command_repeat1,
    STATE(557), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15268] = 3,
    STATE(200), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1478), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15282] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1480), 1,
      sym_identifier,
    STATE(435), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1384), 2,
      sym_global,
      sym_required,
  [15300] = 3,
    STATE(196), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1482), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15314] = 6,
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
  [15334] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(455), 1,
      anon_sym_END,
    ACTIONS(457), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(459), 1,
      anon_sym_ASLOCAL,
    ACTIONS(461), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15354] = 3,
    STATE(189), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1484), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15368] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1429), 1,
      anon_sym_ELSEIF,
    ACTIONS(1486), 1,
      anon_sym_END,
    ACTIONS(1488), 1,
      anon_sym_ELSE,
    STATE(455), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15388] = 3,
    STATE(3), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1490), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15402] = 3,
    STATE(224), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1492), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15416] = 3,
    STATE(220), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1494), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15430] = 3,
    STATE(393), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1496), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15444] = 3,
    STATE(188), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1498), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15458] = 3,
    STATE(219), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1500), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15472] = 3,
    STATE(392), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1502), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15486] = 3,
    STATE(218), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1504), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15500] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1000), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1506), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(283), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [15518] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1508), 1,
      sym_identifier,
    STATE(448), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1384), 2,
      sym_global,
      sym_required,
  [15536] = 3,
    STATE(117), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1510), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15550] = 3,
    STATE(116), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1512), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15564] = 3,
    STATE(85), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1514), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15578] = 3,
    STATE(80), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1516), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15592] = 3,
    STATE(225), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1518), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15606] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1361), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1520), 1,
      anon_sym_END,
    STATE(466), 1,
      aux_sym_try_command_repeat1,
    STATE(557), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15626] = 3,
    STATE(122), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1522), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15640] = 3,
    STATE(216), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1524), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15654] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1000), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1526), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(490), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [15672] = 3,
    STATE(206), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1528), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15686] = 3,
    STATE(120), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1530), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15700] = 3,
    STATE(118), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1532), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15714] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1534), 1,
      sym_identifier,
    STATE(448), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1384), 2,
      sym_global,
      sym_required,
  [15732] = 3,
    STATE(114), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1536), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15746] = 3,
    STATE(112), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1538), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15760] = 3,
    STATE(11), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1540), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15774] = 3,
    STATE(109), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1542), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15788] = 3,
    STATE(103), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1544), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15802] = 3,
    STATE(207), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1546), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15816] = 3,
    STATE(90), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1548), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15830] = 3,
    STATE(88), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1550), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15844] = 3,
    STATE(202), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1552), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15858] = 3,
    STATE(127), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1554), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15872] = 3,
    STATE(83), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1556), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15886] = 3,
    STATE(187), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1558), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15900] = 3,
    STATE(89), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1560), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15914] = 3,
    STATE(186), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1562), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15928] = 3,
    STATE(132), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1564), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15942] = 3,
    STATE(135), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1566), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15956] = 3,
    STATE(138), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1568), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15970] = 3,
    STATE(149), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1570), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15984] = 3,
    STATE(145), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1572), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15998] = 3,
    STATE(147), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1574), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16012] = 3,
    STATE(152), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1576), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16026] = 3,
    STATE(146), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1578), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16040] = 3,
    STATE(140), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1580), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16054] = 3,
    STATE(215), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1582), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16068] = 3,
    STATE(156), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1584), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16082] = 3,
    STATE(157), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1586), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16096] = 3,
    STATE(159), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1588), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16110] = 3,
    STATE(82), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1590), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16124] = 3,
    STATE(130), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1592), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16138] = 3,
    STATE(86), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1594), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16152] = 3,
    STATE(134), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1596), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16166] = 3,
    STATE(121), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1598), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16180] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1361), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1600), 1,
      anon_sym_END,
    STATE(474), 1,
      aux_sym_try_command_repeat1,
    STATE(557), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16200] = 3,
    STATE(106), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1602), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16214] = 3,
    STATE(101), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1604), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16228] = 4,
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
  [16243] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(409), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16254] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1610), 1,
      sym_version_major_minor,
    ACTIONS(1612), 1,
      sym_feature_flag,
    STATE(547), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16271] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1614), 3,
      sym_identifier,
      sym_global,
      sym_required,
  [16284] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1618), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1616), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
  [16299] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1622), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1620), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
  [16314] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1624), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1626), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [16329] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1628), 1,
      sym_version_major_minor,
    ACTIONS(1630), 1,
      sym_feature_flag,
    STATE(550), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16346] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1000), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(441), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [16361] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1632), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1634), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [16376] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1636), 1,
      sym_version_major_minor,
    ACTIONS(1638), 1,
      sym_feature_flag,
    STATE(550), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16393] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1641), 1,
      anon_sym_PLUS,
    ACTIONS(1643), 1,
      anon_sym_LPAREN,
    STATE(310), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16410] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1645), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1647), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [16425] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(413), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16436] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1068), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1649), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [16451] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1651), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1653), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [16466] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1655), 1,
      sym_image_name,
    STATE(304), 1,
      sym_image_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16480] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1657), 2,
      anon_sym_END,
      anon_sym_SAVEARTIFACT,
  [16492] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1659), 1,
      sym_image_name,
    STATE(599), 1,
      sym_image_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16506] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(517), 1,
      anon_sym_PLUS,
    STATE(548), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16520] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(517), 1,
      anon_sym_PLUS,
    STATE(563), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16534] = 2,
    ACTIONS(1661), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16543] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1663), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16554] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1665), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16565] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1667), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16576] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1669), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16587] = 2,
    ACTIONS(1671), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16596] = 2,
    ACTIONS(1673), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16605] = 2,
    ACTIONS(1675), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16614] = 2,
    ACTIONS(1677), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16623] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1679), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16634] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1681), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16645] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1683), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16656] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1685), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16667] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1687), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16678] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1689), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16689] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1691), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16700] = 2,
    ACTIONS(1693), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16709] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1695), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16720] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1697), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16731] = 2,
    ACTIONS(1699), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16740] = 2,
    ACTIONS(1701), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16749] = 2,
    ACTIONS(1703), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16758] = 2,
    ACTIONS(1705), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16767] = 2,
    ACTIONS(1707), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16776] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1709), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16787] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1711), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16798] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1713), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16809] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1715), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16820] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1717), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16831] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1719), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16842] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1721), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16853] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1723), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16864] = 2,
    ACTIONS(1725), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16873] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1727), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16884] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1729), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16895] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1731), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16906] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1733), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16917] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1735), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16928] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1737), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16939] = 2,
    ACTIONS(1739), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16948] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1741), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16959] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1743), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16970] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1745), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16981] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1747), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16992] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1749), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17003] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1751), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17014] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1753), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17025] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1755), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17036] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1757), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17047] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1759), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17058] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1761), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17069] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1763), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17080] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1765), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17091] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1767), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17102] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1769), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17113] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1771), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17124] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1773), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17135] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1775), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17146] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1777), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17157] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1779), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17168] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1781), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17179] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1783), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17190] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1785), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17201] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1787), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17212] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1789), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17223] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1791), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17234] = 2,
    ACTIONS(1793), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17243] = 2,
    ACTIONS(1795), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17252] = 2,
    ACTIONS(1797), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17261] = 2,
    ACTIONS(1799), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17270] = 2,
    ACTIONS(1801), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17279] = 2,
    ACTIONS(1803), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17288] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1805), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17299] = 2,
    ACTIONS(1807), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17308] = 2,
    ACTIONS(1809), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17317] = 2,
    ACTIONS(1811), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17326] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1813), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17337] = 2,
    ACTIONS(1815), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17346] = 2,
    ACTIONS(1817), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17355] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1819), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17366] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1821), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17377] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1823), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17388] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1825), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17399] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1827), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17410] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1829), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17421] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1831), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17432] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1833), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17443] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1835), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17454] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1837), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17465] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1839), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17476] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1841), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17487] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1843), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17498] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1845), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17509] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1847), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17520] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1849), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17531] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1851), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17542] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1853), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17553] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1855), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17564] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1857), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17575] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1859), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17586] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1861), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17597] = 2,
    ACTIONS(1863), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17606] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1865), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17617] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1867), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17628] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1869), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17639] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1871), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17650] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1873), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17661] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1875), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17672] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1877), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17683] = 2,
    ACTIONS(1879), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17692] = 2,
    ACTIONS(1881), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17701] = 2,
    ACTIONS(1883), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17710] = 2,
    ACTIONS(1885), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17719] = 2,
    ACTIONS(1887), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17728] = 2,
    ACTIONS(1889), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17737] = 2,
    ACTIONS(1891), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17746] = 2,
    ACTIONS(1893), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17755] = 2,
    ACTIONS(1895), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17764] = 2,
    ACTIONS(1897), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17773] = 2,
    ACTIONS(1899), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17782] = 2,
    ACTIONS(1901), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17791] = 2,
    ACTIONS(1903), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17800] = 2,
    ACTIONS(1905), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17809] = 2,
    ACTIONS(1907), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17818] = 2,
    ACTIONS(1909), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17827] = 2,
    ACTIONS(1911), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17836] = 2,
    ACTIONS(1913), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17845] = 2,
    ACTIONS(1915), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17854] = 2,
    ACTIONS(1917), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17863] = 2,
    ACTIONS(1919), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17872] = 2,
    ACTIONS(1921), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17881] = 2,
    ACTIONS(1923), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17890] = 2,
    ACTIONS(1925), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17899] = 2,
    ACTIONS(1927), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17908] = 2,
    ACTIONS(1929), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17917] = 2,
    ACTIONS(1931), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17926] = 2,
    ACTIONS(1933), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17935] = 2,
    ACTIONS(1935), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17944] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1937), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17955] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1939), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17966] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1941), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17977] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1943), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17988] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1945), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17999] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1947), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18010] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1949), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18021] = 2,
    ACTIONS(1951), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18030] = 2,
    ACTIONS(1953), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18039] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1955), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18050] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1957), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18061] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1959), 1,
      anon_sym_CLONE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18072] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1961), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18083] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1963), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18094] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1965), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18105] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1967), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18116] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1969), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18127] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1971), 1,
      anon_sym_CLONE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18138] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1973), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18149] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1975), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18160] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1977), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18171] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1979), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18182] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1981), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18193] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1983), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18204] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1985), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18215] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1987), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18226] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1989), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 86,
  [SMALL_STATE(4)] = 172,
  [SMALL_STATE(5)] = 258,
  [SMALL_STATE(6)] = 344,
  [SMALL_STATE(7)] = 430,
  [SMALL_STATE(8)] = 512,
  [SMALL_STATE(9)] = 594,
  [SMALL_STATE(10)] = 676,
  [SMALL_STATE(11)] = 758,
  [SMALL_STATE(12)] = 840,
  [SMALL_STATE(13)] = 922,
  [SMALL_STATE(14)] = 1004,
  [SMALL_STATE(15)] = 1086,
  [SMALL_STATE(16)] = 1168,
  [SMALL_STATE(17)] = 1250,
  [SMALL_STATE(18)] = 1332,
  [SMALL_STATE(19)] = 1414,
  [SMALL_STATE(20)] = 1496,
  [SMALL_STATE(21)] = 1578,
  [SMALL_STATE(22)] = 1660,
  [SMALL_STATE(23)] = 1742,
  [SMALL_STATE(24)] = 1824,
  [SMALL_STATE(25)] = 1906,
  [SMALL_STATE(26)] = 1988,
  [SMALL_STATE(27)] = 2070,
  [SMALL_STATE(28)] = 2152,
  [SMALL_STATE(29)] = 2234,
  [SMALL_STATE(30)] = 2316,
  [SMALL_STATE(31)] = 2398,
  [SMALL_STATE(32)] = 2480,
  [SMALL_STATE(33)] = 2562,
  [SMALL_STATE(34)] = 2644,
  [SMALL_STATE(35)] = 2726,
  [SMALL_STATE(36)] = 2808,
  [SMALL_STATE(37)] = 2890,
  [SMALL_STATE(38)] = 2972,
  [SMALL_STATE(39)] = 3054,
  [SMALL_STATE(40)] = 3136,
  [SMALL_STATE(41)] = 3218,
  [SMALL_STATE(42)] = 3263,
  [SMALL_STATE(43)] = 3317,
  [SMALL_STATE(44)] = 3359,
  [SMALL_STATE(45)] = 3398,
  [SMALL_STATE(46)] = 3449,
  [SMALL_STATE(47)] = 3488,
  [SMALL_STATE(48)] = 3540,
  [SMALL_STATE(49)] = 3592,
  [SMALL_STATE(50)] = 3644,
  [SMALL_STATE(51)] = 3693,
  [SMALL_STATE(52)] = 3742,
  [SMALL_STATE(53)] = 3791,
  [SMALL_STATE(54)] = 3836,
  [SMALL_STATE(55)] = 3876,
  [SMALL_STATE(56)] = 3916,
  [SMALL_STATE(57)] = 3956,
  [SMALL_STATE(58)] = 3996,
  [SMALL_STATE(59)] = 4036,
  [SMALL_STATE(60)] = 4075,
  [SMALL_STATE(61)] = 4108,
  [SMALL_STATE(62)] = 4151,
  [SMALL_STATE(63)] = 4190,
  [SMALL_STATE(64)] = 4229,
  [SMALL_STATE(65)] = 4264,
  [SMALL_STATE(66)] = 4299,
  [SMALL_STATE(67)] = 4334,
  [SMALL_STATE(68)] = 4369,
  [SMALL_STATE(69)] = 4412,
  [SMALL_STATE(70)] = 4451,
  [SMALL_STATE(71)] = 4494,
  [SMALL_STATE(72)] = 4528,
  [SMALL_STATE(73)] = 4562,
  [SMALL_STATE(74)] = 4596,
  [SMALL_STATE(75)] = 4630,
  [SMALL_STATE(76)] = 4666,
  [SMALL_STATE(77)] = 4704,
  [SMALL_STATE(78)] = 4742,
  [SMALL_STATE(79)] = 4778,
  [SMALL_STATE(80)] = 4814,
  [SMALL_STATE(81)] = 4847,
  [SMALL_STATE(82)] = 4884,
  [SMALL_STATE(83)] = 4917,
  [SMALL_STATE(84)] = 4950,
  [SMALL_STATE(85)] = 4987,
  [SMALL_STATE(86)] = 5020,
  [SMALL_STATE(87)] = 5053,
  [SMALL_STATE(88)] = 5090,
  [SMALL_STATE(89)] = 5123,
  [SMALL_STATE(90)] = 5156,
  [SMALL_STATE(91)] = 5189,
  [SMALL_STATE(92)] = 5226,
  [SMALL_STATE(93)] = 5263,
  [SMALL_STATE(94)] = 5300,
  [SMALL_STATE(95)] = 5333,
  [SMALL_STATE(96)] = 5386,
  [SMALL_STATE(97)] = 5439,
  [SMALL_STATE(98)] = 5472,
  [SMALL_STATE(99)] = 5505,
  [SMALL_STATE(100)] = 5542,
  [SMALL_STATE(101)] = 5575,
  [SMALL_STATE(102)] = 5608,
  [SMALL_STATE(103)] = 5661,
  [SMALL_STATE(104)] = 5694,
  [SMALL_STATE(105)] = 5727,
  [SMALL_STATE(106)] = 5760,
  [SMALL_STATE(107)] = 5793,
  [SMALL_STATE(108)] = 5826,
  [SMALL_STATE(109)] = 5859,
  [SMALL_STATE(110)] = 5892,
  [SMALL_STATE(111)] = 5925,
  [SMALL_STATE(112)] = 5958,
  [SMALL_STATE(113)] = 5991,
  [SMALL_STATE(114)] = 6024,
  [SMALL_STATE(115)] = 6057,
  [SMALL_STATE(116)] = 6090,
  [SMALL_STATE(117)] = 6123,
  [SMALL_STATE(118)] = 6156,
  [SMALL_STATE(119)] = 6189,
  [SMALL_STATE(120)] = 6226,
  [SMALL_STATE(121)] = 6259,
  [SMALL_STATE(122)] = 6292,
  [SMALL_STATE(123)] = 6325,
  [SMALL_STATE(124)] = 6362,
  [SMALL_STATE(125)] = 6399,
  [SMALL_STATE(126)] = 6432,
  [SMALL_STATE(127)] = 6465,
  [SMALL_STATE(128)] = 6498,
  [SMALL_STATE(129)] = 6531,
  [SMALL_STATE(130)] = 6568,
  [SMALL_STATE(131)] = 6601,
  [SMALL_STATE(132)] = 6634,
  [SMALL_STATE(133)] = 6667,
  [SMALL_STATE(134)] = 6700,
  [SMALL_STATE(135)] = 6733,
  [SMALL_STATE(136)] = 6766,
  [SMALL_STATE(137)] = 6803,
  [SMALL_STATE(138)] = 6840,
  [SMALL_STATE(139)] = 6873,
  [SMALL_STATE(140)] = 6906,
  [SMALL_STATE(141)] = 6939,
  [SMALL_STATE(142)] = 6976,
  [SMALL_STATE(143)] = 7029,
  [SMALL_STATE(144)] = 7066,
  [SMALL_STATE(145)] = 7103,
  [SMALL_STATE(146)] = 7136,
  [SMALL_STATE(147)] = 7169,
  [SMALL_STATE(148)] = 7202,
  [SMALL_STATE(149)] = 7235,
  [SMALL_STATE(150)] = 7268,
  [SMALL_STATE(151)] = 7301,
  [SMALL_STATE(152)] = 7334,
  [SMALL_STATE(153)] = 7367,
  [SMALL_STATE(154)] = 7400,
  [SMALL_STATE(155)] = 7433,
  [SMALL_STATE(156)] = 7466,
  [SMALL_STATE(157)] = 7499,
  [SMALL_STATE(158)] = 7532,
  [SMALL_STATE(159)] = 7565,
  [SMALL_STATE(160)] = 7598,
  [SMALL_STATE(161)] = 7635,
  [SMALL_STATE(162)] = 7668,
  [SMALL_STATE(163)] = 7702,
  [SMALL_STATE(164)] = 7738,
  [SMALL_STATE(165)] = 7772,
  [SMALL_STATE(166)] = 7808,
  [SMALL_STATE(167)] = 7840,
  [SMALL_STATE(168)] = 7876,
  [SMALL_STATE(169)] = 7912,
  [SMALL_STATE(170)] = 7948,
  [SMALL_STATE(171)] = 7984,
  [SMALL_STATE(172)] = 8020,
  [SMALL_STATE(173)] = 8054,
  [SMALL_STATE(174)] = 8085,
  [SMALL_STATE(175)] = 8116,
  [SMALL_STATE(176)] = 8147,
  [SMALL_STATE(177)] = 8178,
  [SMALL_STATE(178)] = 8209,
  [SMALL_STATE(179)] = 8240,
  [SMALL_STATE(180)] = 8273,
  [SMALL_STATE(181)] = 8304,
  [SMALL_STATE(182)] = 8335,
  [SMALL_STATE(183)] = 8366,
  [SMALL_STATE(184)] = 8397,
  [SMALL_STATE(185)] = 8430,
  [SMALL_STATE(186)] = 8463,
  [SMALL_STATE(187)] = 8493,
  [SMALL_STATE(188)] = 8523,
  [SMALL_STATE(189)] = 8553,
  [SMALL_STATE(190)] = 8583,
  [SMALL_STATE(191)] = 8613,
  [SMALL_STATE(192)] = 8643,
  [SMALL_STATE(193)] = 8673,
  [SMALL_STATE(194)] = 8703,
  [SMALL_STATE(195)] = 8733,
  [SMALL_STATE(196)] = 8763,
  [SMALL_STATE(197)] = 8793,
  [SMALL_STATE(198)] = 8823,
  [SMALL_STATE(199)] = 8853,
  [SMALL_STATE(200)] = 8883,
  [SMALL_STATE(201)] = 8913,
  [SMALL_STATE(202)] = 8943,
  [SMALL_STATE(203)] = 8973,
  [SMALL_STATE(204)] = 9003,
  [SMALL_STATE(205)] = 9033,
  [SMALL_STATE(206)] = 9063,
  [SMALL_STATE(207)] = 9093,
  [SMALL_STATE(208)] = 9123,
  [SMALL_STATE(209)] = 9153,
  [SMALL_STATE(210)] = 9183,
  [SMALL_STATE(211)] = 9213,
  [SMALL_STATE(212)] = 9243,
  [SMALL_STATE(213)] = 9273,
  [SMALL_STATE(214)] = 9303,
  [SMALL_STATE(215)] = 9333,
  [SMALL_STATE(216)] = 9363,
  [SMALL_STATE(217)] = 9393,
  [SMALL_STATE(218)] = 9423,
  [SMALL_STATE(219)] = 9453,
  [SMALL_STATE(220)] = 9483,
  [SMALL_STATE(221)] = 9513,
  [SMALL_STATE(222)] = 9543,
  [SMALL_STATE(223)] = 9573,
  [SMALL_STATE(224)] = 9603,
  [SMALL_STATE(225)] = 9633,
  [SMALL_STATE(226)] = 9663,
  [SMALL_STATE(227)] = 9693,
  [SMALL_STATE(228)] = 9723,
  [SMALL_STATE(229)] = 9753,
  [SMALL_STATE(230)] = 9783,
  [SMALL_STATE(231)] = 9813,
  [SMALL_STATE(232)] = 9843,
  [SMALL_STATE(233)] = 9873,
  [SMALL_STATE(234)] = 9903,
  [SMALL_STATE(235)] = 9933,
  [SMALL_STATE(236)] = 9978,
  [SMALL_STATE(237)] = 10019,
  [SMALL_STATE(238)] = 10064,
  [SMALL_STATE(239)] = 10109,
  [SMALL_STATE(240)] = 10154,
  [SMALL_STATE(241)] = 10191,
  [SMALL_STATE(242)] = 10233,
  [SMALL_STATE(243)] = 10275,
  [SMALL_STATE(244)] = 10317,
  [SMALL_STATE(245)] = 10359,
  [SMALL_STATE(246)] = 10384,
  [SMALL_STATE(247)] = 10409,
  [SMALL_STATE(248)] = 10434,
  [SMALL_STATE(249)] = 10471,
  [SMALL_STATE(250)] = 10496,
  [SMALL_STATE(251)] = 10521,
  [SMALL_STATE(252)] = 10560,
  [SMALL_STATE(253)] = 10597,
  [SMALL_STATE(254)] = 10634,
  [SMALL_STATE(255)] = 10659,
  [SMALL_STATE(256)] = 10683,
  [SMALL_STATE(257)] = 10715,
  [SMALL_STATE(258)] = 10739,
  [SMALL_STATE(259)] = 10763,
  [SMALL_STATE(260)] = 10795,
  [SMALL_STATE(261)] = 10827,
  [SMALL_STATE(262)] = 10859,
  [SMALL_STATE(263)] = 10883,
  [SMALL_STATE(264)] = 10907,
  [SMALL_STATE(265)] = 10939,
  [SMALL_STATE(266)] = 10971,
  [SMALL_STATE(267)] = 11005,
  [SMALL_STATE(268)] = 11037,
  [SMALL_STATE(269)] = 11071,
  [SMALL_STATE(270)] = 11103,
  [SMALL_STATE(271)] = 11136,
  [SMALL_STATE(272)] = 11165,
  [SMALL_STATE(273)] = 11198,
  [SMALL_STATE(274)] = 11231,
  [SMALL_STATE(275)] = 11266,
  [SMALL_STATE(276)] = 11299,
  [SMALL_STATE(277)] = 11332,
  [SMALL_STATE(278)] = 11364,
  [SMALL_STATE(279)] = 11396,
  [SMALL_STATE(280)] = 11428,
  [SMALL_STATE(281)] = 11460,
  [SMALL_STATE(282)] = 11492,
  [SMALL_STATE(283)] = 11524,
  [SMALL_STATE(284)] = 11550,
  [SMALL_STATE(285)] = 11582,
  [SMALL_STATE(286)] = 11613,
  [SMALL_STATE(287)] = 11644,
  [SMALL_STATE(288)] = 11673,
  [SMALL_STATE(289)] = 11704,
  [SMALL_STATE(290)] = 11735,
  [SMALL_STATE(291)] = 11756,
  [SMALL_STATE(292)] = 11781,
  [SMALL_STATE(293)] = 11806,
  [SMALL_STATE(294)] = 11835,
  [SMALL_STATE(295)] = 11860,
  [SMALL_STATE(296)] = 11885,
  [SMALL_STATE(297)] = 11910,
  [SMALL_STATE(298)] = 11941,
  [SMALL_STATE(299)] = 11961,
  [SMALL_STATE(300)] = 11981,
  [SMALL_STATE(301)] = 12003,
  [SMALL_STATE(302)] = 12023,
  [SMALL_STATE(303)] = 12043,
  [SMALL_STATE(304)] = 12064,
  [SMALL_STATE(305)] = 12081,
  [SMALL_STATE(306)] = 12100,
  [SMALL_STATE(307)] = 12121,
  [SMALL_STATE(308)] = 12142,
  [SMALL_STATE(309)] = 12163,
  [SMALL_STATE(310)] = 12184,
  [SMALL_STATE(311)] = 12201,
  [SMALL_STATE(312)] = 12226,
  [SMALL_STATE(313)] = 12251,
  [SMALL_STATE(314)] = 12278,
  [SMALL_STATE(315)] = 12299,
  [SMALL_STATE(316)] = 12316,
  [SMALL_STATE(317)] = 12335,
  [SMALL_STATE(318)] = 12354,
  [SMALL_STATE(319)] = 12375,
  [SMALL_STATE(320)] = 12402,
  [SMALL_STATE(321)] = 12423,
  [SMALL_STATE(322)] = 12438,
  [SMALL_STATE(323)] = 12463,
  [SMALL_STATE(324)] = 12482,
  [SMALL_STATE(325)] = 12497,
  [SMALL_STATE(326)] = 12524,
  [SMALL_STATE(327)] = 12545,
  [SMALL_STATE(328)] = 12562,
  [SMALL_STATE(329)] = 12589,
  [SMALL_STATE(330)] = 12606,
  [SMALL_STATE(331)] = 12633,
  [SMALL_STATE(332)] = 12650,
  [SMALL_STATE(333)] = 12669,
  [SMALL_STATE(334)] = 12686,
  [SMALL_STATE(335)] = 12713,
  [SMALL_STATE(336)] = 12730,
  [SMALL_STATE(337)] = 12757,
  [SMALL_STATE(338)] = 12774,
  [SMALL_STATE(339)] = 12791,
  [SMALL_STATE(340)] = 12810,
  [SMALL_STATE(341)] = 12827,
  [SMALL_STATE(342)] = 12844,
  [SMALL_STATE(343)] = 12861,
  [SMALL_STATE(344)] = 12880,
  [SMALL_STATE(345)] = 12899,
  [SMALL_STATE(346)] = 12926,
  [SMALL_STATE(347)] = 12951,
  [SMALL_STATE(348)] = 12972,
  [SMALL_STATE(349)] = 12997,
  [SMALL_STATE(350)] = 13018,
  [SMALL_STATE(351)] = 13033,
  [SMALL_STATE(352)] = 13058,
  [SMALL_STATE(353)] = 13075,
  [SMALL_STATE(354)] = 13092,
  [SMALL_STATE(355)] = 13113,
  [SMALL_STATE(356)] = 13130,
  [SMALL_STATE(357)] = 13152,
  [SMALL_STATE(358)] = 13174,
  [SMALL_STATE(359)] = 13192,
  [SMALL_STATE(360)] = 13214,
  [SMALL_STATE(361)] = 13230,
  [SMALL_STATE(362)] = 13248,
  [SMALL_STATE(363)] = 13270,
  [SMALL_STATE(364)] = 13292,
  [SMALL_STATE(365)] = 13310,
  [SMALL_STATE(366)] = 13332,
  [SMALL_STATE(367)] = 13354,
  [SMALL_STATE(368)] = 13378,
  [SMALL_STATE(369)] = 13400,
  [SMALL_STATE(370)] = 13422,
  [SMALL_STATE(371)] = 13444,
  [SMALL_STATE(372)] = 13462,
  [SMALL_STATE(373)] = 13484,
  [SMALL_STATE(374)] = 13502,
  [SMALL_STATE(375)] = 13520,
  [SMALL_STATE(376)] = 13542,
  [SMALL_STATE(377)] = 13564,
  [SMALL_STATE(378)] = 13582,
  [SMALL_STATE(379)] = 13600,
  [SMALL_STATE(380)] = 13622,
  [SMALL_STATE(381)] = 13644,
  [SMALL_STATE(382)] = 13666,
  [SMALL_STATE(383)] = 13688,
  [SMALL_STATE(384)] = 13706,
  [SMALL_STATE(385)] = 13724,
  [SMALL_STATE(386)] = 13742,
  [SMALL_STATE(387)] = 13764,
  [SMALL_STATE(388)] = 13786,
  [SMALL_STATE(389)] = 13808,
  [SMALL_STATE(390)] = 13830,
  [SMALL_STATE(391)] = 13852,
  [SMALL_STATE(392)] = 13874,
  [SMALL_STATE(393)] = 13892,
  [SMALL_STATE(394)] = 13910,
  [SMALL_STATE(395)] = 13932,
  [SMALL_STATE(396)] = 13949,
  [SMALL_STATE(397)] = 13966,
  [SMALL_STATE(398)] = 13983,
  [SMALL_STATE(399)] = 14000,
  [SMALL_STATE(400)] = 14017,
  [SMALL_STATE(401)] = 14034,
  [SMALL_STATE(402)] = 14051,
  [SMALL_STATE(403)] = 14072,
  [SMALL_STATE(404)] = 14093,
  [SMALL_STATE(405)] = 14110,
  [SMALL_STATE(406)] = 14127,
  [SMALL_STATE(407)] = 14150,
  [SMALL_STATE(408)] = 14173,
  [SMALL_STATE(409)] = 14194,
  [SMALL_STATE(410)] = 14211,
  [SMALL_STATE(411)] = 14228,
  [SMALL_STATE(412)] = 14251,
  [SMALL_STATE(413)] = 14268,
  [SMALL_STATE(414)] = 14289,
  [SMALL_STATE(415)] = 14312,
  [SMALL_STATE(416)] = 14329,
  [SMALL_STATE(417)] = 14346,
  [SMALL_STATE(418)] = 14363,
  [SMALL_STATE(419)] = 14380,
  [SMALL_STATE(420)] = 14403,
  [SMALL_STATE(421)] = 14420,
  [SMALL_STATE(422)] = 14437,
  [SMALL_STATE(423)] = 14454,
  [SMALL_STATE(424)] = 14468,
  [SMALL_STATE(425)] = 14482,
  [SMALL_STATE(426)] = 14496,
  [SMALL_STATE(427)] = 14510,
  [SMALL_STATE(428)] = 14530,
  [SMALL_STATE(429)] = 14544,
  [SMALL_STATE(430)] = 14558,
  [SMALL_STATE(431)] = 14572,
  [SMALL_STATE(432)] = 14586,
  [SMALL_STATE(433)] = 14600,
  [SMALL_STATE(434)] = 14620,
  [SMALL_STATE(435)] = 14634,
  [SMALL_STATE(436)] = 14652,
  [SMALL_STATE(437)] = 14666,
  [SMALL_STATE(438)] = 14680,
  [SMALL_STATE(439)] = 14694,
  [SMALL_STATE(440)] = 14708,
  [SMALL_STATE(441)] = 14722,
  [SMALL_STATE(442)] = 14740,
  [SMALL_STATE(443)] = 14754,
  [SMALL_STATE(444)] = 14768,
  [SMALL_STATE(445)] = 14786,
  [SMALL_STATE(446)] = 14800,
  [SMALL_STATE(447)] = 14814,
  [SMALL_STATE(448)] = 14834,
  [SMALL_STATE(449)] = 14852,
  [SMALL_STATE(450)] = 14866,
  [SMALL_STATE(451)] = 14880,
  [SMALL_STATE(452)] = 14900,
  [SMALL_STATE(453)] = 14914,
  [SMALL_STATE(454)] = 14928,
  [SMALL_STATE(455)] = 14942,
  [SMALL_STATE(456)] = 14962,
  [SMALL_STATE(457)] = 14976,
  [SMALL_STATE(458)] = 14996,
  [SMALL_STATE(459)] = 15010,
  [SMALL_STATE(460)] = 15030,
  [SMALL_STATE(461)] = 15044,
  [SMALL_STATE(462)] = 15058,
  [SMALL_STATE(463)] = 15072,
  [SMALL_STATE(464)] = 15086,
  [SMALL_STATE(465)] = 15106,
  [SMALL_STATE(466)] = 15120,
  [SMALL_STATE(467)] = 15140,
  [SMALL_STATE(468)] = 15154,
  [SMALL_STATE(469)] = 15174,
  [SMALL_STATE(470)] = 15188,
  [SMALL_STATE(471)] = 15202,
  [SMALL_STATE(472)] = 15216,
  [SMALL_STATE(473)] = 15230,
  [SMALL_STATE(474)] = 15248,
  [SMALL_STATE(475)] = 15268,
  [SMALL_STATE(476)] = 15282,
  [SMALL_STATE(477)] = 15300,
  [SMALL_STATE(478)] = 15314,
  [SMALL_STATE(479)] = 15334,
  [SMALL_STATE(480)] = 15354,
  [SMALL_STATE(481)] = 15368,
  [SMALL_STATE(482)] = 15388,
  [SMALL_STATE(483)] = 15402,
  [SMALL_STATE(484)] = 15416,
  [SMALL_STATE(485)] = 15430,
  [SMALL_STATE(486)] = 15444,
  [SMALL_STATE(487)] = 15458,
  [SMALL_STATE(488)] = 15472,
  [SMALL_STATE(489)] = 15486,
  [SMALL_STATE(490)] = 15500,
  [SMALL_STATE(491)] = 15518,
  [SMALL_STATE(492)] = 15536,
  [SMALL_STATE(493)] = 15550,
  [SMALL_STATE(494)] = 15564,
  [SMALL_STATE(495)] = 15578,
  [SMALL_STATE(496)] = 15592,
  [SMALL_STATE(497)] = 15606,
  [SMALL_STATE(498)] = 15626,
  [SMALL_STATE(499)] = 15640,
  [SMALL_STATE(500)] = 15654,
  [SMALL_STATE(501)] = 15672,
  [SMALL_STATE(502)] = 15686,
  [SMALL_STATE(503)] = 15700,
  [SMALL_STATE(504)] = 15714,
  [SMALL_STATE(505)] = 15732,
  [SMALL_STATE(506)] = 15746,
  [SMALL_STATE(507)] = 15760,
  [SMALL_STATE(508)] = 15774,
  [SMALL_STATE(509)] = 15788,
  [SMALL_STATE(510)] = 15802,
  [SMALL_STATE(511)] = 15816,
  [SMALL_STATE(512)] = 15830,
  [SMALL_STATE(513)] = 15844,
  [SMALL_STATE(514)] = 15858,
  [SMALL_STATE(515)] = 15872,
  [SMALL_STATE(516)] = 15886,
  [SMALL_STATE(517)] = 15900,
  [SMALL_STATE(518)] = 15914,
  [SMALL_STATE(519)] = 15928,
  [SMALL_STATE(520)] = 15942,
  [SMALL_STATE(521)] = 15956,
  [SMALL_STATE(522)] = 15970,
  [SMALL_STATE(523)] = 15984,
  [SMALL_STATE(524)] = 15998,
  [SMALL_STATE(525)] = 16012,
  [SMALL_STATE(526)] = 16026,
  [SMALL_STATE(527)] = 16040,
  [SMALL_STATE(528)] = 16054,
  [SMALL_STATE(529)] = 16068,
  [SMALL_STATE(530)] = 16082,
  [SMALL_STATE(531)] = 16096,
  [SMALL_STATE(532)] = 16110,
  [SMALL_STATE(533)] = 16124,
  [SMALL_STATE(534)] = 16138,
  [SMALL_STATE(535)] = 16152,
  [SMALL_STATE(536)] = 16166,
  [SMALL_STATE(537)] = 16180,
  [SMALL_STATE(538)] = 16200,
  [SMALL_STATE(539)] = 16214,
  [SMALL_STATE(540)] = 16228,
  [SMALL_STATE(541)] = 16243,
  [SMALL_STATE(542)] = 16254,
  [SMALL_STATE(543)] = 16271,
  [SMALL_STATE(544)] = 16284,
  [SMALL_STATE(545)] = 16299,
  [SMALL_STATE(546)] = 16314,
  [SMALL_STATE(547)] = 16329,
  [SMALL_STATE(548)] = 16346,
  [SMALL_STATE(549)] = 16361,
  [SMALL_STATE(550)] = 16376,
  [SMALL_STATE(551)] = 16393,
  [SMALL_STATE(552)] = 16410,
  [SMALL_STATE(553)] = 16425,
  [SMALL_STATE(554)] = 16436,
  [SMALL_STATE(555)] = 16451,
  [SMALL_STATE(556)] = 16466,
  [SMALL_STATE(557)] = 16480,
  [SMALL_STATE(558)] = 16492,
  [SMALL_STATE(559)] = 16506,
  [SMALL_STATE(560)] = 16520,
  [SMALL_STATE(561)] = 16534,
  [SMALL_STATE(562)] = 16543,
  [SMALL_STATE(563)] = 16554,
  [SMALL_STATE(564)] = 16565,
  [SMALL_STATE(565)] = 16576,
  [SMALL_STATE(566)] = 16587,
  [SMALL_STATE(567)] = 16596,
  [SMALL_STATE(568)] = 16605,
  [SMALL_STATE(569)] = 16614,
  [SMALL_STATE(570)] = 16623,
  [SMALL_STATE(571)] = 16634,
  [SMALL_STATE(572)] = 16645,
  [SMALL_STATE(573)] = 16656,
  [SMALL_STATE(574)] = 16667,
  [SMALL_STATE(575)] = 16678,
  [SMALL_STATE(576)] = 16689,
  [SMALL_STATE(577)] = 16700,
  [SMALL_STATE(578)] = 16709,
  [SMALL_STATE(579)] = 16720,
  [SMALL_STATE(580)] = 16731,
  [SMALL_STATE(581)] = 16740,
  [SMALL_STATE(582)] = 16749,
  [SMALL_STATE(583)] = 16758,
  [SMALL_STATE(584)] = 16767,
  [SMALL_STATE(585)] = 16776,
  [SMALL_STATE(586)] = 16787,
  [SMALL_STATE(587)] = 16798,
  [SMALL_STATE(588)] = 16809,
  [SMALL_STATE(589)] = 16820,
  [SMALL_STATE(590)] = 16831,
  [SMALL_STATE(591)] = 16842,
  [SMALL_STATE(592)] = 16853,
  [SMALL_STATE(593)] = 16864,
  [SMALL_STATE(594)] = 16873,
  [SMALL_STATE(595)] = 16884,
  [SMALL_STATE(596)] = 16895,
  [SMALL_STATE(597)] = 16906,
  [SMALL_STATE(598)] = 16917,
  [SMALL_STATE(599)] = 16928,
  [SMALL_STATE(600)] = 16939,
  [SMALL_STATE(601)] = 16948,
  [SMALL_STATE(602)] = 16959,
  [SMALL_STATE(603)] = 16970,
  [SMALL_STATE(604)] = 16981,
  [SMALL_STATE(605)] = 16992,
  [SMALL_STATE(606)] = 17003,
  [SMALL_STATE(607)] = 17014,
  [SMALL_STATE(608)] = 17025,
  [SMALL_STATE(609)] = 17036,
  [SMALL_STATE(610)] = 17047,
  [SMALL_STATE(611)] = 17058,
  [SMALL_STATE(612)] = 17069,
  [SMALL_STATE(613)] = 17080,
  [SMALL_STATE(614)] = 17091,
  [SMALL_STATE(615)] = 17102,
  [SMALL_STATE(616)] = 17113,
  [SMALL_STATE(617)] = 17124,
  [SMALL_STATE(618)] = 17135,
  [SMALL_STATE(619)] = 17146,
  [SMALL_STATE(620)] = 17157,
  [SMALL_STATE(621)] = 17168,
  [SMALL_STATE(622)] = 17179,
  [SMALL_STATE(623)] = 17190,
  [SMALL_STATE(624)] = 17201,
  [SMALL_STATE(625)] = 17212,
  [SMALL_STATE(626)] = 17223,
  [SMALL_STATE(627)] = 17234,
  [SMALL_STATE(628)] = 17243,
  [SMALL_STATE(629)] = 17252,
  [SMALL_STATE(630)] = 17261,
  [SMALL_STATE(631)] = 17270,
  [SMALL_STATE(632)] = 17279,
  [SMALL_STATE(633)] = 17288,
  [SMALL_STATE(634)] = 17299,
  [SMALL_STATE(635)] = 17308,
  [SMALL_STATE(636)] = 17317,
  [SMALL_STATE(637)] = 17326,
  [SMALL_STATE(638)] = 17337,
  [SMALL_STATE(639)] = 17346,
  [SMALL_STATE(640)] = 17355,
  [SMALL_STATE(641)] = 17366,
  [SMALL_STATE(642)] = 17377,
  [SMALL_STATE(643)] = 17388,
  [SMALL_STATE(644)] = 17399,
  [SMALL_STATE(645)] = 17410,
  [SMALL_STATE(646)] = 17421,
  [SMALL_STATE(647)] = 17432,
  [SMALL_STATE(648)] = 17443,
  [SMALL_STATE(649)] = 17454,
  [SMALL_STATE(650)] = 17465,
  [SMALL_STATE(651)] = 17476,
  [SMALL_STATE(652)] = 17487,
  [SMALL_STATE(653)] = 17498,
  [SMALL_STATE(654)] = 17509,
  [SMALL_STATE(655)] = 17520,
  [SMALL_STATE(656)] = 17531,
  [SMALL_STATE(657)] = 17542,
  [SMALL_STATE(658)] = 17553,
  [SMALL_STATE(659)] = 17564,
  [SMALL_STATE(660)] = 17575,
  [SMALL_STATE(661)] = 17586,
  [SMALL_STATE(662)] = 17597,
  [SMALL_STATE(663)] = 17606,
  [SMALL_STATE(664)] = 17617,
  [SMALL_STATE(665)] = 17628,
  [SMALL_STATE(666)] = 17639,
  [SMALL_STATE(667)] = 17650,
  [SMALL_STATE(668)] = 17661,
  [SMALL_STATE(669)] = 17672,
  [SMALL_STATE(670)] = 17683,
  [SMALL_STATE(671)] = 17692,
  [SMALL_STATE(672)] = 17701,
  [SMALL_STATE(673)] = 17710,
  [SMALL_STATE(674)] = 17719,
  [SMALL_STATE(675)] = 17728,
  [SMALL_STATE(676)] = 17737,
  [SMALL_STATE(677)] = 17746,
  [SMALL_STATE(678)] = 17755,
  [SMALL_STATE(679)] = 17764,
  [SMALL_STATE(680)] = 17773,
  [SMALL_STATE(681)] = 17782,
  [SMALL_STATE(682)] = 17791,
  [SMALL_STATE(683)] = 17800,
  [SMALL_STATE(684)] = 17809,
  [SMALL_STATE(685)] = 17818,
  [SMALL_STATE(686)] = 17827,
  [SMALL_STATE(687)] = 17836,
  [SMALL_STATE(688)] = 17845,
  [SMALL_STATE(689)] = 17854,
  [SMALL_STATE(690)] = 17863,
  [SMALL_STATE(691)] = 17872,
  [SMALL_STATE(692)] = 17881,
  [SMALL_STATE(693)] = 17890,
  [SMALL_STATE(694)] = 17899,
  [SMALL_STATE(695)] = 17908,
  [SMALL_STATE(696)] = 17917,
  [SMALL_STATE(697)] = 17926,
  [SMALL_STATE(698)] = 17935,
  [SMALL_STATE(699)] = 17944,
  [SMALL_STATE(700)] = 17955,
  [SMALL_STATE(701)] = 17966,
  [SMALL_STATE(702)] = 17977,
  [SMALL_STATE(703)] = 17988,
  [SMALL_STATE(704)] = 17999,
  [SMALL_STATE(705)] = 18010,
  [SMALL_STATE(706)] = 18021,
  [SMALL_STATE(707)] = 18030,
  [SMALL_STATE(708)] = 18039,
  [SMALL_STATE(709)] = 18050,
  [SMALL_STATE(710)] = 18061,
  [SMALL_STATE(711)] = 18072,
  [SMALL_STATE(712)] = 18083,
  [SMALL_STATE(713)] = 18094,
  [SMALL_STATE(714)] = 18105,
  [SMALL_STATE(715)] = 18116,
  [SMALL_STATE(716)] = 18127,
  [SMALL_STATE(717)] = 18138,
  [SMALL_STATE(718)] = 18149,
  [SMALL_STATE(719)] = 18160,
  [SMALL_STATE(720)] = 18171,
  [SMALL_STATE(721)] = 18182,
  [SMALL_STATE(722)] = 18193,
  [SMALL_STATE(723)] = 18204,
  [SMALL_STATE(724)] = 18215,
  [SMALL_STATE(725)] = 18226,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(725),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(722),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 3, .production_id = 37),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 3, .production_id = 37),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 2, .production_id = 25),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 2, .production_id = 25),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(444),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(248),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(288),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(96),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(276),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_block, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(281),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(716),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(282),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__target_block, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(717),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(517),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(239),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(307),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(42),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(718),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(425),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(39),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(243),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 4, .production_id = 37),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 4, .production_id = 37),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 3, .production_id = 25),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 3, .production_id = 25),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 1),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(309),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(48),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(473),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(253),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(286),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(142),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(270),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(279),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(710),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(277),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(713),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(518),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(237),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(347),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(47),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(703),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(507),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(35),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(244),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(349),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(49),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2, .production_id = 5),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2, .production_id = 5),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 5, .production_id = 17),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 5, .production_id = 17),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(676),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(65),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(576),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(600),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(131),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 3, .production_id = 5),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3, .production_id = 5),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(69),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(580),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(111),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(673),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(126),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 4, .production_id = 18),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 4, .production_id = 18),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 41),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 41),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 2, .production_id = 20),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 2, .production_id = 20),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 28),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 28),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 27),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 27),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 39),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 4, .production_id = 39),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 3),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 3),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(644),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 56),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 56),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(124),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 7),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 7),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_locally_command, 2),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_locally_command, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 7, .production_id = 57),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 7, .production_id = 57),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2, .production_id = 21),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2, .production_id = 21),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 40),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 40),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_command, 5, .production_id = 18),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_command, 5, .production_id = 18),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 5, .production_id = 45),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 5, .production_id = 45),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 7, .production_id = 58),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 7, .production_id = 58),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 5, .production_id = 44),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_git_clone_command, 5, .production_id = 44),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 7),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 7),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 56),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 56),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 7),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 7),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 5, .production_id = 42),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_command, 5, .production_id = 42),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 59),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 59),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 8, .production_id = 60),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 8, .production_id = 60),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_docker_command, 4),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_docker_command, 4),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 9, .production_id = 59),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 9, .production_id = 59),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 6),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 6),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 6, .production_id = 53),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 6, .production_id = 53),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 6, .production_id = 52),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 6, .production_id = 52),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_command, 3, .production_id = 22),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_command, 3, .production_id = 22),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 5, .production_id = 46),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 5, .production_id = 46),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait_command, 4),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wait_command, 4),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_dockerfile_command, 3, .production_id = 24),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_dockerfile_command, 3, .production_id = 24),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 3, .production_id = 26),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 3, .production_id = 26),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 6, .production_id = 51),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_git_clone_command, 6, .production_id = 51),
  [637] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(119),
  [640] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(136),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait_command, 3),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wait_command, 3),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 6, .production_id = 3),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 6, .production_id = 3),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_docker_command, 5, .production_id = 5),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_docker_command, 5, .production_id = 5),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_command, 5, .production_id = 18),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_command, 5, .production_id = 18),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_command, 4, .production_id = 29),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_command, 4, .production_id = 29),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 4, .production_id = 30),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_command, 4, .production_id = 30),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 48),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 5, .production_id = 48),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_dockerfile_command, 4, .production_id = 32),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_dockerfile_command, 4, .production_id = 32),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 4, .production_id = 33),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 4, .production_id = 33),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 47),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 5, .production_id = 47),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 38),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 4, .production_id = 38),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(254),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(635),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(569),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(707),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(255),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(638),
  [767] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(639),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chown, 3, .production_id = 10),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chown, 3, .production_id = 10),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_platform, 3, .production_id = 10),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_platform, 3, .production_id = 10),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(707),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4),
  [806] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(315),
  [809] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(627),
  [812] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(631),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(670),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(632),
  [821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(561),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(711),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount, 3, .production_id = 10),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount, 3, .production_id = 10),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_secret, 3, .production_id = 10),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_secret, 3, .production_id = 10),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [872] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(476),
  [875] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(252),
  [878] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(725),
  [881] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(542),
  [884] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(722),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [903] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 43), SHIFT_REPEAT(350),
  [906] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 43), SHIFT_REPEAT(677),
  [909] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 43), SHIFT_REPEAT(678),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 43),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4),
  [924] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(577),
  [927] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(333),
  [930] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(581),
  [933] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(582),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [954] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(658),
  [957] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4),
  [959] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(583),
  [962] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(584),
  [965] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(593),
  [968] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(628),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4),
  [985] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(577),
  [988] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(360),
  [991] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(581),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1008] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 4),
  [1010] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(566),
  [1013] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(567),
  [1016] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(396),
  [1019] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(568),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pull, 3, .production_id = 10),
  [1030] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(305),
  [1033] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 5, .production_id = 55),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1061] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4),
  [1063] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(358),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 1, .production_id = 1),
  [1068] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 19),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 2),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 3, .production_id = 2),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [1094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 3, .production_id = 10),
  [1098] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 8, .production_id = 61),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 1, .production_id = 1),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compose, 3, .production_id = 10),
  [1110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 23), SHIFT_REPEAT(554),
  [1113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 23), SHIFT_REPEAT(711),
  [1116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 23), SHIFT_REPEAT(560),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 1, .production_id = 31),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sep, 3, .production_id = 10),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [1153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 1, .production_id = 1),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4),
  [1179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(437),
  [1182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(707),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [1189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [1193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [1195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [1199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [1231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [1235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6, .production_id = 2),
  [1239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 6, .production_id = 2),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 2),
  [1243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 5, .production_id = 2),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [1257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [1277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [1283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cache_command_repeat1, 1, .production_id = 1),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 1, .production_id = 1),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [1295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_build_arg, 5, .production_id = 50),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_build_arg, 5, .production_id = 50),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [1307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [1315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4),
  [1317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(662),
  [1320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(549),
  [1323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [1325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_target, 3, .production_id = 10),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_target, 3, .production_id = 10),
  [1329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_file, 3, .production_id = 10),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_file, 3, .production_id = 10),
  [1333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 1, .production_id = 1),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 1, .production_id = 1),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [1341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [1343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sharing, 3),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sharing, 3),
  [1347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 3),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [1351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [1353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [1355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [1357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [1365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [1369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [1371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 36),
  [1375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 36), SHIFT_REPEAT(274),
  [1378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 36),
  [1380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 1, .production_id = 1),
  [1390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [1392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [1406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4),
  [1412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(543),
  [1415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [1417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [1425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [1433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [1443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [1453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [1463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [1465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [1467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [1469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_try_command_repeat1, 2, .production_id = 54),
  [1475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_try_command_repeat1, 2, .production_id = 54), SHIFT_REPEAT(303),
  [1478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [1484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [1490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [1492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [1494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [1496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [1498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [1500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [1502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [1504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [1512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [1514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [1516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [1518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [1524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [1530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [1532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [1538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [1540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [1542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [1544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [1546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [1548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [1550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [1552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [1554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [1556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [1558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [1560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [1562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [1564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [1566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [1568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [1570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [1572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [1574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [1576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [1578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [1580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [1582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [1584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [1586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [1588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [1592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [1594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [1598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [1604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [1606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 6),
  [1608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 6),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 1, .production_id = 1),
  [1616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 35),
  [1618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 35),
  [1620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_block, 1, .production_id = 34),
  [1622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_block, 1, .production_id = 34),
  [1624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact, 3),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact, 3),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [1634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2),
  [1638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2), SHIFT_REPEAT(550),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 5),
  [1647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 5),
  [1649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 19),
  [1651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 3, .production_id = 10),
  [1653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3, .production_id = 10),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_try_command_repeat1, 1, .production_id = 49),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [1673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [1675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [1677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [1701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [1705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [1707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [1727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [1741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [1795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [1797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [1799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [1801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [1803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [1809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [1811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [1837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [1849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(708),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [1869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [1873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [1875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [1877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [1879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [1881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [1883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [1885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [1887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [1889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(589),
  [1891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [1893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [1895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [1897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(603),
  [1899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [1901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [1903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [1905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [1907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [1909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(613),
  [1911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [1913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [1915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(616),
  [1917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [1919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [1921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(619),
  [1923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [1925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(621),
  [1927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [1929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(623),
  [1931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [1933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [1935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [1941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [1953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [1955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [1957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1979] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
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
