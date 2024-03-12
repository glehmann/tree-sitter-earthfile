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
#define STATE_COUNT 785
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 182
#define ALIAS_COUNT 0
#define TOKEN_COUNT 102
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 25
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 64

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
  anon_sym_DO = 11,
  anon_sym_FOR = 12,
  anon_sym_IN = 13,
  anon_sym_END = 14,
  anon_sym_FROMDOCKERFILE = 15,
  anon_sym_FUNCTION = 16,
  anon_sym_GITCLONE = 17,
  anon_sym_IF = 18,
  anon_sym_ELSEIF = 19,
  anon_sym_ELSE = 20,
  anon_sym_IMPORT = 21,
  anon_sym_AS = 22,
  anon_sym_LET = 23,
  anon_sym_LOCALLY = 24,
  anon_sym_RUN = 25,
  anon_sym_DASH_DASH = 26,
  anon_sym_SAVEARTIFACT = 27,
  anon_sym_ASLOCAL = 28,
  anon_sym_SAVEIMAGE = 29,
  anon_sym_SET = 30,
  anon_sym_TRY = 31,
  anon_sym_FINALLY = 32,
  anon_sym_WAIT = 33,
  anon_sym_WITHDOCKER = 34,
  sym_expr = 35,
  anon_sym_PLUS = 36,
  sym_identifier = 37,
  anon_sym_COLON2 = 38,
  anon_sym_AT = 39,
  sym_image_name = 40,
  sym_image_tag = 41,
  sym_image_digest = 42,
  sym_immediate_identifier = 43,
  sym_path = 44,
  aux_sym_shell_fragment_token1 = 45,
  aux_sym_shell_fragment_token2 = 46,
  aux_sym_shell_fragment_token3 = 47,
  anon_sym_LPAREN = 48,
  anon_sym_RPAREN = 49,
  sym_version_major_minor = 50,
  sym_allow_privileged = 51,
  anon_sym_DASH_DASHbranch = 52,
  aux_sym_branch_token1 = 53,
  anon_sym_DASH_DASH2 = 54,
  anon_sym_DASH_DASHcache_DASHfrom = 55,
  sym_cache_hint = 56,
  anon_sym_DASH_DASHchmod = 57,
  anon_sym_DASH_DASHchown = 58,
  anon_sym_DASH_DASHcompose = 59,
  sym_dir = 60,
  anon_sym_DASH_DASHbuild_DASHarg = 61,
  anon_sym_DASHf = 62,
  anon_sym_DASH_DASHtarget = 63,
  sym_entrypoint = 64,
  sym_feature_flag = 65,
  sym_force = 66,
  sym_global = 67,
  anon_sym_DASH_DASHid = 68,
  sym_if_exists = 69,
  sym_keep_own = 70,
  sym_keep_ts = 71,
  anon_sym_DASH_DASHload = 72,
  anon_sym_DASH_DASHmount = 73,
  sym_network_none = 74,
  sym_no_cache = 75,
  sym_pass_args = 76,
  sym_persist = 77,
  anon_sym_DASH_DASHplatform = 78,
  sym_privileged = 79,
  anon_sym_DASH_DASHpull = 80,
  sym_push = 81,
  sym_required = 82,
  anon_sym_DASH_DASHsecret = 83,
  anon_sym_DASH_DASHsep = 84,
  anon_sym_DASH_DASHservice = 85,
  anon_sym_DASH_DASHsharing = 86,
  sym_ssh = 87,
  sym_symlink_no_follow = 88,
  anon_sym_DQUOTE = 89,
  aux_sym_double_quoted_string_token1 = 90,
  anon_sym_SQUOTE = 91,
  aux_sym_single_quoted_string_token1 = 92,
  sym_unquoted_string = 93,
  sym_line_continuation = 94,
  sym_comment = 95,
  sym_line_continuation_comment = 96,
  anon_sym_LF = 97,
  anon_sym_CRn = 98,
  anon_sym_FF = 99,
  sym__indent = 100,
  sym__dedent = 101,
  sym_source_file = 102,
  sym_arg_command = 103,
  sym_from_command = 104,
  sym_project_command = 105,
  sym_target = 106,
  sym_version_command = 107,
  sym_cache_command = 108,
  sym_copy_command = 109,
  sym_do_command = 110,
  sym_for_command = 111,
  sym_from_dockerfile_command = 112,
  sym_function_command = 113,
  sym_git_clone_command = 114,
  sym_if_command = 115,
  sym_import_command = 116,
  sym_let_command = 117,
  sym_locally_command = 118,
  sym_run_command = 119,
  sym_save_artifact_command = 120,
  sym_save_image_command = 121,
  sym_set_command = 122,
  sym_try_command = 123,
  sym_wait_command = 124,
  sym_with_docker_command = 125,
  aux_sym__target_block = 126,
  sym__conditional_block = 127,
  sym_else_if_block = 128,
  sym_else_block = 129,
  sym_earthfile_ref = 130,
  sym_function_ref = 131,
  sym_image_spec = 132,
  sym_shell_fragment = 133,
  sym_target_ref = 134,
  sym_target_artifact = 135,
  sym_target_artifact_build_args = 136,
  sym_branch = 137,
  sym_build_arg = 138,
  sym_cache_from = 139,
  sym_chmod = 140,
  sym_chown = 141,
  sym_compose = 142,
  sym_docker_build_arg = 143,
  sym_docker_file = 144,
  sym_docker_target = 145,
  sym_id = 146,
  sym_load = 147,
  sym_mount = 148,
  sym_platform = 149,
  sym_pull = 150,
  sym_secret = 151,
  sym_sep = 152,
  sym_service = 153,
  sym_sharing = 154,
  sym__string = 155,
  sym_double_quoted_string = 156,
  sym_single_quoted_string = 157,
  sym__eol = 158,
  aux_sym_source_file_repeat1 = 159,
  aux_sym_arg_command_repeat1 = 160,
  aux_sym_build_command_repeat2 = 161,
  aux_sym_from_command_repeat1 = 162,
  aux_sym_version_command_repeat1 = 163,
  aux_sym_cache_command_repeat1 = 164,
  aux_sym_copy_command_repeat1 = 165,
  aux_sym_copy_command_repeat2 = 166,
  aux_sym_do_command_repeat1 = 167,
  aux_sym_for_command_repeat1 = 168,
  aux_sym_for_command_repeat2 = 169,
  aux_sym_from_dockerfile_command_repeat1 = 170,
  aux_sym_git_clone_command_repeat1 = 171,
  aux_sym_if_command_repeat1 = 172,
  aux_sym_import_command_repeat1 = 173,
  aux_sym_run_command_repeat1 = 174,
  aux_sym_save_artifact_command_repeat1 = 175,
  aux_sym_save_image_command_repeat1 = 176,
  aux_sym_save_image_command_repeat2 = 177,
  aux_sym_try_command_repeat1 = 178,
  aux_sym_with_docker_command_repeat1 = 179,
  aux_sym__conditional_block_repeat1 = 180,
  aux_sym_shell_fragment_repeat1 = 181,
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
  [anon_sym_DO] = "DO",
  [anon_sym_FOR] = "FOR",
  [anon_sym_IN] = "IN",
  [anon_sym_END] = "END",
  [anon_sym_FROMDOCKERFILE] = "FROM DOCKERFILE",
  [anon_sym_FUNCTION] = "FUNCTION",
  [anon_sym_GITCLONE] = "GIT CLONE",
  [anon_sym_IF] = "IF",
  [anon_sym_ELSEIF] = "ELSE IF",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_IMPORT] = "IMPORT",
  [anon_sym_AS] = "AS",
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
  [anon_sym_PLUS] = "+",
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
  [sym_do_command] = "do_command",
  [sym_for_command] = "for_command",
  [sym_from_dockerfile_command] = "from_dockerfile_command",
  [sym_function_command] = "function_command",
  [sym_git_clone_command] = "git_clone_command",
  [sym_if_command] = "if_command",
  [sym_import_command] = "import_command",
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
  [sym_earthfile_ref] = "earthfile_ref",
  [sym_function_ref] = "function_ref",
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
  [aux_sym_do_command_repeat1] = "do_command_repeat1",
  [aux_sym_for_command_repeat1] = "for_command_repeat1",
  [aux_sym_for_command_repeat2] = "for_command_repeat2",
  [aux_sym_from_dockerfile_command_repeat1] = "from_dockerfile_command_repeat1",
  [aux_sym_git_clone_command_repeat1] = "git_clone_command_repeat1",
  [aux_sym_if_command_repeat1] = "if_command_repeat1",
  [aux_sym_import_command_repeat1] = "import_command_repeat1",
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
  [anon_sym_DO] = anon_sym_DO,
  [anon_sym_FOR] = anon_sym_FOR,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_FROMDOCKERFILE] = anon_sym_FROMDOCKERFILE,
  [anon_sym_FUNCTION] = anon_sym_FUNCTION,
  [anon_sym_GITCLONE] = anon_sym_GITCLONE,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_ELSEIF] = anon_sym_ELSEIF,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_IMPORT] = anon_sym_IMPORT,
  [anon_sym_AS] = anon_sym_AS,
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
  [anon_sym_PLUS] = anon_sym_PLUS,
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
  [sym_do_command] = sym_do_command,
  [sym_for_command] = sym_for_command,
  [sym_from_dockerfile_command] = sym_from_dockerfile_command,
  [sym_function_command] = sym_function_command,
  [sym_git_clone_command] = sym_git_clone_command,
  [sym_if_command] = sym_if_command,
  [sym_import_command] = sym_import_command,
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
  [sym_earthfile_ref] = sym_earthfile_ref,
  [sym_function_ref] = sym_function_ref,
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
  [aux_sym_do_command_repeat1] = aux_sym_do_command_repeat1,
  [aux_sym_for_command_repeat1] = aux_sym_for_command_repeat1,
  [aux_sym_for_command_repeat2] = aux_sym_for_command_repeat2,
  [aux_sym_from_dockerfile_command_repeat1] = aux_sym_from_dockerfile_command_repeat1,
  [aux_sym_git_clone_command_repeat1] = aux_sym_git_clone_command_repeat1,
  [aux_sym_if_command_repeat1] = aux_sym_if_command_repeat1,
  [aux_sym_import_command_repeat1] = aux_sym_import_command_repeat1,
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
  [anon_sym_DO] = {
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
  [anon_sym_FUNCTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GITCLONE] = {
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
  [anon_sym_IMPORT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AS] = {
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
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
  [sym_do_command] = {
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
  [sym_function_command] = {
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
  [sym_import_command] = {
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
  [sym_earthfile_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_function_ref] = {
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
  [aux_sym_do_command_repeat1] = {
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
  [aux_sym_import_command_repeat1] = {
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
  field_alias = 1,
  field_command = 2,
  field_condition = 3,
  field_context = 4,
  field_default_value = 5,
  field_default_value_expr = 6,
  field_dest = 7,
  field_digest = 8,
  field_else = 9,
  field_else_if = 10,
  field_finally = 11,
  field_image = 12,
  field_key = 13,
  field_local_dest = 14,
  field_mount_point = 15,
  field_name = 16,
  field_option = 17,
  field_org_name = 18,
  field_project_name = 19,
  field_src = 20,
  field_tag = 21,
  field_target = 22,
  field_url = 23,
  field_value = 24,
  field_version = 25,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
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
  [15] = {.index = 24, .length = 1},
  [16] = {.index = 25, .length = 3},
  [17] = {.index = 28, .length = 3},
  [18] = {.index = 31, .length = 5},
  [19] = {.index = 36, .length = 2},
  [20] = {.index = 38, .length = 2},
  [21] = {.index = 40, .length = 1},
  [22] = {.index = 41, .length = 1},
  [23] = {.index = 42, .length = 1},
  [24] = {.index = 43, .length = 1},
  [25] = {.index = 44, .length = 2},
  [26] = {.index = 46, .length = 1},
  [27] = {.index = 47, .length = 1},
  [28] = {.index = 48, .length = 1},
  [29] = {.index = 49, .length = 2},
  [30] = {.index = 51, .length = 2},
  [31] = {.index = 53, .length = 2},
  [32] = {.index = 55, .length = 2},
  [33] = {.index = 57, .length = 1},
  [34] = {.index = 58, .length = 2},
  [35] = {.index = 60, .length = 2},
  [36] = {.index = 62, .length = 2},
  [37] = {.index = 64, .length = 2},
  [38] = {.index = 66, .length = 2},
  [39] = {.index = 68, .length = 2},
  [40] = {.index = 70, .length = 2},
  [41] = {.index = 72, .length = 1},
  [42] = {.index = 73, .length = 2},
  [43] = {.index = 75, .length = 2},
  [44] = {.index = 77, .length = 3},
  [45] = {.index = 80, .length = 3},
  [46] = {.index = 83, .length = 2},
  [47] = {.index = 85, .length = 3},
  [48] = {.index = 88, .length = 3},
  [49] = {.index = 91, .length = 2},
  [50] = {.index = 93, .length = 3},
  [51] = {.index = 96, .length = 3},
  [52] = {.index = 99, .length = 1},
  [53] = {.index = 100, .length = 2},
  [54] = {.index = 102, .length = 4},
  [55] = {.index = 106, .length = 4},
  [56] = {.index = 110, .length = 2},
  [57] = {.index = 112, .length = 2},
  [58] = {.index = 114, .length = 2},
  [59] = {.index = 116, .length = 5},
  [60] = {.index = 121, .length = 1},
  [61] = {.index = 122, .length = 3},
  [62] = {.index = 125, .length = 1},
  [63] = {.index = 126, .length = 5},
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
    {field_alias, 3},
  [25] =
    {field_default_value_expr, 4},
    {field_name, 2},
    {field_option, 1, .inherited = true},
  [28] =
    {field_default_value, 4},
    {field_name, 2},
    {field_option, 1, .inherited = true},
  [31] =
    {field_digest, 3},
    {field_digest, 4},
    {field_name, 0},
    {field_tag, 1},
    {field_tag, 2},
  [36] =
    {field_name, 1},
    {field_value, 3},
  [38] =
    {field_alias, 4},
    {field_option, 1, .inherited = true},
  [40] =
    {field_src, 0},
  [41] =
    {field_src, 1},
  [42] =
    {field_option, 1},
  [43] =
    {field_mount_point, 1},
  [44] =
    {field_src, 0, .inherited = true},
    {field_src, 1, .inherited = true},
  [46] =
    {field_context, 1},
  [47] =
    {field_condition, 0},
  [48] =
    {field_command, 1},
  [49] =
    {field_dest, 2},
    {field_src, 1},
  [51] =
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [53] =
    {field_mount_point, 2},
    {field_option, 1, .inherited = true},
  [55] =
    {field_dest, 2},
    {field_src, 1, .inherited = true},
  [57] =
    {field_value, 0},
  [58] =
    {field_context, 2},
    {field_option, 1, .inherited = true},
  [60] =
    {field_dest, 2},
    {field_url, 1},
  [62] =
    {field_condition, 1, .inherited = true},
    {field_option, 1, .inherited = true},
  [64] =
    {field_condition, 0, .inherited = true},
    {field_option, 0, .inherited = true},
  [66] =
    {field_else_if, 0},
    {field_else_if, 1},
  [68] =
    {field_else_if, 0, .inherited = true},
    {field_else_if, 1, .inherited = true},
  [70] =
    {field_condition, 1},
    {field_option, 0, .inherited = true},
  [72] =
    {field_command, 2},
  [73] =
    {field_command, 2},
    {field_option, 1, .inherited = true},
  [75] =
    {field_local_dest, 3},
    {field_src, 1},
  [77] =
    {field_dest, 3},
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [80] =
    {field_dest, 3},
    {field_option, 1, .inherited = true},
    {field_src, 2, .inherited = true},
  [83] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [85] =
    {field_dest, 3},
    {field_option, 1, .inherited = true},
    {field_url, 2},
  [88] =
    {field_condition, 1, .inherited = true},
    {field_else_if, 2, .inherited = true},
    {field_option, 1, .inherited = true},
  [91] =
    {field_command, 3},
    {field_option, 1, .inherited = true},
  [93] =
    {field_dest, 2},
    {field_local_dest, 4},
    {field_src, 1},
  [96] =
    {field_local_dest, 4},
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [99] =
    {field_finally, 0},
  [100] =
    {field_key, 2},
    {field_value, 4},
  [102] =
    {field_condition, 1, .inherited = true},
    {field_else, 2},
    {field_else, 3},
    {field_option, 1, .inherited = true},
  [106] =
    {field_dest, 3},
    {field_local_dest, 5},
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [110] =
    {field_finally, 0, .inherited = true},
    {field_finally, 1, .inherited = true},
  [112] =
    {field_image, 2},
    {field_target, 4},
  [114] =
    {field_name, 1},
    {field_value, 3, .inherited = true},
  [116] =
    {field_condition, 1, .inherited = true},
    {field_else, 3},
    {field_else, 4},
    {field_else_if, 2, .inherited = true},
    {field_option, 1, .inherited = true},
  [121] =
    {field_finally, 4, .inherited = true},
  [122] =
    {field_name, 2},
    {field_option, 1, .inherited = true},
    {field_value, 4, .inherited = true},
  [125] =
    {field_finally, 5, .inherited = true},
  [126] =
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
  [10] = 5,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 11,
  [15] = 15,
  [16] = 7,
  [17] = 13,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 24,
  [25] = 15,
  [26] = 18,
  [27] = 12,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 5,
  [32] = 23,
  [33] = 9,
  [34] = 24,
  [35] = 8,
  [36] = 28,
  [37] = 37,
  [38] = 20,
  [39] = 5,
  [40] = 37,
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
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 50,
  [65] = 65,
  [66] = 66,
  [67] = 41,
  [68] = 68,
  [69] = 50,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 50,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 68,
  [81] = 43,
  [82] = 82,
  [83] = 83,
  [84] = 70,
  [85] = 85,
  [86] = 86,
  [87] = 55,
  [88] = 56,
  [89] = 58,
  [90] = 45,
  [91] = 68,
  [92] = 92,
  [93] = 93,
  [94] = 70,
  [95] = 57,
  [96] = 60,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 68,
  [106] = 106,
  [107] = 107,
  [108] = 66,
  [109] = 63,
  [110] = 110,
  [111] = 62,
  [112] = 66,
  [113] = 113,
  [114] = 63,
  [115] = 115,
  [116] = 70,
  [117] = 117,
  [118] = 54,
  [119] = 71,
  [120] = 59,
  [121] = 72,
  [122] = 71,
  [123] = 72,
  [124] = 124,
  [125] = 125,
  [126] = 73,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 73,
  [132] = 132,
  [133] = 70,
  [134] = 134,
  [135] = 73,
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
  [147] = 147,
  [148] = 61,
  [149] = 41,
  [150] = 41,
  [151] = 151,
  [152] = 41,
  [153] = 153,
  [154] = 154,
  [155] = 66,
  [156] = 156,
  [157] = 63,
  [158] = 158,
  [159] = 159,
  [160] = 72,
  [161] = 161,
  [162] = 71,
  [163] = 163,
  [164] = 68,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 46,
  [170] = 170,
  [171] = 171,
  [172] = 82,
  [173] = 43,
  [174] = 43,
  [175] = 78,
  [176] = 82,
  [177] = 82,
  [178] = 78,
  [179] = 78,
  [180] = 65,
  [181] = 43,
  [182] = 41,
  [183] = 46,
  [184] = 68,
  [185] = 83,
  [186] = 45,
  [187] = 46,
  [188] = 45,
  [189] = 46,
  [190] = 76,
  [191] = 77,
  [192] = 70,
  [193] = 43,
  [194] = 45,
  [195] = 79,
  [196] = 75,
  [197] = 153,
  [198] = 165,
  [199] = 144,
  [200] = 138,
  [201] = 139,
  [202] = 110,
  [203] = 115,
  [204] = 45,
  [205] = 107,
  [206] = 104,
  [207] = 102,
  [208] = 208,
  [209] = 113,
  [210] = 101,
  [211] = 100,
  [212] = 130,
  [213] = 99,
  [214] = 46,
  [215] = 117,
  [216] = 134,
  [217] = 93,
  [218] = 103,
  [219] = 97,
  [220] = 143,
  [221] = 92,
  [222] = 151,
  [223] = 140,
  [224] = 129,
  [225] = 171,
  [226] = 170,
  [227] = 168,
  [228] = 167,
  [229] = 124,
  [230] = 106,
  [231] = 166,
  [232] = 128,
  [233] = 208,
  [234] = 137,
  [235] = 163,
  [236] = 236,
  [237] = 161,
  [238] = 159,
  [239] = 158,
  [240] = 156,
  [241] = 125,
  [242] = 154,
  [243] = 86,
  [244] = 147,
  [245] = 146,
  [246] = 127,
  [247] = 136,
  [248] = 236,
  [249] = 85,
  [250] = 145,
  [251] = 141,
  [252] = 142,
  [253] = 132,
  [254] = 98,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 257,
  [259] = 255,
  [260] = 260,
  [261] = 261,
  [262] = 261,
  [263] = 263,
  [264] = 264,
  [265] = 264,
  [266] = 266,
  [267] = 68,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 269,
  [274] = 70,
  [275] = 269,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 277,
  [283] = 70,
  [284] = 68,
  [285] = 278,
  [286] = 286,
  [287] = 286,
  [288] = 288,
  [289] = 288,
  [290] = 57,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 293,
  [296] = 296,
  [297] = 294,
  [298] = 60,
  [299] = 299,
  [300] = 41,
  [301] = 58,
  [302] = 302,
  [303] = 302,
  [304] = 56,
  [305] = 55,
  [306] = 306,
  [307] = 299,
  [308] = 308,
  [309] = 306,
  [310] = 65,
  [311] = 311,
  [312] = 312,
  [313] = 43,
  [314] = 312,
  [315] = 315,
  [316] = 316,
  [317] = 79,
  [318] = 70,
  [319] = 68,
  [320] = 311,
  [321] = 321,
  [322] = 76,
  [323] = 45,
  [324] = 46,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 327,
  [330] = 79,
  [331] = 331,
  [332] = 281,
  [333] = 333,
  [334] = 334,
  [335] = 280,
  [336] = 334,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 107,
  [341] = 334,
  [342] = 331,
  [343] = 104,
  [344] = 344,
  [345] = 337,
  [346] = 68,
  [347] = 134,
  [348] = 70,
  [349] = 328,
  [350] = 350,
  [351] = 276,
  [352] = 333,
  [353] = 353,
  [354] = 354,
  [355] = 70,
  [356] = 344,
  [357] = 68,
  [358] = 358,
  [359] = 344,
  [360] = 360,
  [361] = 361,
  [362] = 92,
  [363] = 70,
  [364] = 337,
  [365] = 328,
  [366] = 337,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 110,
  [372] = 99,
  [373] = 100,
  [374] = 331,
  [375] = 344,
  [376] = 97,
  [377] = 377,
  [378] = 101,
  [379] = 369,
  [380] = 68,
  [381] = 381,
  [382] = 367,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 337,
  [387] = 102,
  [388] = 388,
  [389] = 389,
  [390] = 344,
  [391] = 93,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 394,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 393,
  [400] = 400,
  [401] = 397,
  [402] = 402,
  [403] = 392,
  [404] = 404,
  [405] = 405,
  [406] = 392,
  [407] = 396,
  [408] = 392,
  [409] = 409,
  [410] = 410,
  [411] = 402,
  [412] = 412,
  [413] = 413,
  [414] = 396,
  [415] = 410,
  [416] = 405,
  [417] = 417,
  [418] = 393,
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
  [429] = 420,
  [430] = 430,
  [431] = 424,
  [432] = 419,
  [433] = 430,
  [434] = 70,
  [435] = 435,
  [436] = 276,
  [437] = 421,
  [438] = 426,
  [439] = 439,
  [440] = 423,
  [441] = 70,
  [442] = 439,
  [443] = 425,
  [444] = 424,
  [445] = 68,
  [446] = 430,
  [447] = 426,
  [448] = 448,
  [449] = 68,
  [450] = 450,
  [451] = 427,
  [452] = 427,
  [453] = 268,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 466,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 468,
  [473] = 469,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 470,
  [484] = 471,
  [485] = 485,
  [486] = 486,
  [487] = 475,
  [488] = 488,
  [489] = 489,
  [490] = 477,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 496,
  [500] = 478,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 479,
  [507] = 480,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 481,
  [512] = 512,
  [513] = 488,
  [514] = 514,
  [515] = 464,
  [516] = 78,
  [517] = 82,
  [518] = 491,
  [519] = 519,
  [520] = 457,
  [521] = 509,
  [522] = 492,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 474,
  [535] = 485,
  [536] = 494,
  [537] = 486,
  [538] = 498,
  [539] = 539,
  [540] = 540,
  [541] = 463,
  [542] = 497,
  [543] = 462,
  [544] = 464,
  [545] = 526,
  [546] = 463,
  [547] = 495,
  [548] = 548,
  [549] = 505,
  [550] = 550,
  [551] = 462,
  [552] = 528,
  [553] = 553,
  [554] = 461,
  [555] = 460,
  [556] = 556,
  [557] = 459,
  [558] = 532,
  [559] = 559,
  [560] = 532,
  [561] = 561,
  [562] = 489,
  [563] = 501,
  [564] = 553,
  [565] = 565,
  [566] = 559,
  [567] = 561,
  [568] = 502,
  [569] = 569,
  [570] = 504,
  [571] = 569,
  [572] = 572,
  [573] = 556,
  [574] = 508,
  [575] = 548,
  [576] = 528,
  [577] = 539,
  [578] = 461,
  [579] = 505,
  [580] = 572,
  [581] = 531,
  [582] = 530,
  [583] = 527,
  [584] = 524,
  [585] = 523,
  [586] = 495,
  [587] = 459,
  [588] = 460,
  [589] = 514,
  [590] = 590,
  [591] = 591,
  [592] = 70,
  [593] = 593,
  [594] = 68,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 615,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 617,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 616,
  [645] = 627,
  [646] = 631,
  [647] = 632,
  [648] = 617,
  [649] = 639,
  [650] = 640,
  [651] = 640,
  [652] = 652,
  [653] = 639,
  [654] = 631,
  [655] = 632,
  [656] = 617,
  [657] = 639,
  [658] = 640,
  [659] = 618,
  [660] = 637,
  [661] = 631,
  [662] = 632,
  [663] = 617,
  [664] = 639,
  [665] = 640,
  [666] = 631,
  [667] = 632,
  [668] = 617,
  [669] = 639,
  [670] = 640,
  [671] = 617,
  [672] = 639,
  [673] = 617,
  [674] = 639,
  [675] = 617,
  [676] = 639,
  [677] = 617,
  [678] = 639,
  [679] = 617,
  [680] = 639,
  [681] = 617,
  [682] = 639,
  [683] = 617,
  [684] = 639,
  [685] = 617,
  [686] = 639,
  [687] = 687,
  [688] = 688,
  [689] = 689,
  [690] = 690,
  [691] = 635,
  [692] = 640,
  [693] = 634,
  [694] = 632,
  [695] = 641,
  [696] = 639,
  [697] = 617,
  [698] = 621,
  [699] = 699,
  [700] = 637,
  [701] = 642,
  [702] = 631,
  [703] = 703,
  [704] = 704,
  [705] = 703,
  [706] = 627,
  [707] = 707,
  [708] = 690,
  [709] = 709,
  [710] = 710,
  [711] = 689,
  [712] = 712,
  [713] = 713,
  [714] = 714,
  [715] = 635,
  [716] = 716,
  [717] = 717,
  [718] = 707,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 723,
  [724] = 634,
  [725] = 632,
  [726] = 631,
  [727] = 727,
  [728] = 728,
  [729] = 729,
  [730] = 688,
  [731] = 689,
  [732] = 690,
  [733] = 703,
  [734] = 689,
  [735] = 690,
  [736] = 703,
  [737] = 689,
  [738] = 690,
  [739] = 689,
  [740] = 690,
  [741] = 689,
  [742] = 690,
  [743] = 689,
  [744] = 690,
  [745] = 689,
  [746] = 690,
  [747] = 689,
  [748] = 690,
  [749] = 689,
  [750] = 690,
  [751] = 689,
  [752] = 690,
  [753] = 689,
  [754] = 690,
  [755] = 689,
  [756] = 690,
  [757] = 689,
  [758] = 690,
  [759] = 759,
  [760] = 760,
  [761] = 709,
  [762] = 626,
  [763] = 763,
  [764] = 714,
  [765] = 687,
  [766] = 704,
  [767] = 767,
  [768] = 688,
  [769] = 769,
  [770] = 770,
  [771] = 627,
  [772] = 772,
  [773] = 716,
  [774] = 620,
  [775] = 775,
  [776] = 629,
  [777] = 652,
  [778] = 699,
  [779] = 779,
  [780] = 727,
  [781] = 619,
  [782] = 782,
  [783] = 721,
  [784] = 784,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(314);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(782);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(786);
      if (lookahead == '(') ADVANCE(739);
      if (lookahead == ')') ADVANCE(740);
      if (lookahead == '+') ADVANCE(391);
      if (lookahead == ',') ADVANCE(732);
      if (lookahead == '-') ADVANCE(733);
      if (lookahead == '/') ADVANCE(327);
      if (lookahead == ':') ADVANCE(415);
      if (lookahead == '=') ADVANCE(319);
      if (lookahead == '@') ADVANCE(416);
      if (lookahead == 'A') ADVANCE(169);
      if (lookahead == 'B') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'D') ADVANCE(156);
      if (lookahead == 'E') ADVANCE(138);
      if (lookahead == 'F') ADVANCE(126);
      if (lookahead == 'G') ADVANCE(127);
      if (lookahead == 'I') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(111);
      if (lookahead == 'P') ADVANCE(175);
      if (lookahead == 'R') ADVANCE(193);
      if (lookahead == 'S') ADVANCE(84);
      if (lookahead == 'T') ADVANCE(171);
      if (lookahead == 'V') ADVANCE(113);
      if (lookahead == 'W') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(310)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(793);
      if (lookahead == '\f') ADVANCE(794);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(792);
      if (lookahead == '#') ADVANCE(737);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(736);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(792);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(797);
      if (lookahead == '\f') ADVANCE(798);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(799);
      if (lookahead == '\f') ADVANCE(809);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(391);
      if (lookahead == '-') ADVANCE(423);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(805);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(799);
      if (lookahead == '\f') ADVANCE(809);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(391);
      if (lookahead == '-') ADVANCE(423);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(800);
      if (lookahead == '\f') ADVANCE(810);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(782);
      if (lookahead == '#') ADVANCE(790);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(786);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(806);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(791);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(800);
      if (lookahead == '\f') ADVANCE(810);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(782);
      if (lookahead == '#') ADVANCE(790);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(786);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(791);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\f') ADVANCE(811);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '(') ADVANCE(739);
      if (lookahead == '+') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(807);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(731);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\f') ADVANCE(811);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '(') ADVANCE(739);
      if (lookahead == '+') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(731);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(55)
      if (lookahead == '#') ADVANCE(783);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(784);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(785);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(55)
      if (lookahead == '#') ADVANCE(787);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(789);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\f') ADVANCE(812);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(808);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(14)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(735);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\f') ADVANCE(812);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(14)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(735);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\f') ADVANCE(813);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(319);
      if (lookahead == 'A') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\f') ADVANCE(813);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(804);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\f') ADVANCE(813);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(782);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(786);
      if (lookahead == '(') ADVANCE(739);
      if (lookahead == ')') ADVANCE(740);
      if (lookahead == '+') ADVANCE(391);
      if (lookahead == '-') ADVANCE(733);
      if (lookahead == ':') ADVANCE(328);
      if (lookahead == 'A') ADVANCE(169);
      if (lookahead == 'B') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'D') ADVANCE(156);
      if (lookahead == 'E') ADVANCE(138);
      if (lookahead == 'F') ADVANCE(126);
      if (lookahead == 'G') ADVANCE(127);
      if (lookahead == 'I') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(111);
      if (lookahead == 'P') ADVANCE(175);
      if (lookahead == 'R') ADVANCE(193);
      if (lookahead == 'S') ADVANCE(84);
      if (lookahead == 'T') ADVANCE(171);
      if (lookahead == 'V') ADVANCE(113);
      if (lookahead == 'W') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(804);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(732);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 19:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(782);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(786);
      if (lookahead == '(') ADVANCE(739);
      if (lookahead == ')') ADVANCE(740);
      if (lookahead == '+') ADVANCE(391);
      if (lookahead == '-') ADVANCE(733);
      if (lookahead == ':') ADVANCE(328);
      if (lookahead == 'A') ADVANCE(169);
      if (lookahead == 'B') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'D') ADVANCE(156);
      if (lookahead == 'E') ADVANCE(138);
      if (lookahead == 'F') ADVANCE(126);
      if (lookahead == 'G') ADVANCE(127);
      if (lookahead == 'I') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(111);
      if (lookahead == 'P') ADVANCE(175);
      if (lookahead == 'R') ADVANCE(193);
      if (lookahead == 'S') ADVANCE(84);
      if (lookahead == 'T') ADVANCE(171);
      if (lookahead == 'V') ADVANCE(113);
      if (lookahead == 'W') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(732);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 20:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(782);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(786);
      if (lookahead == '(') ADVANCE(739);
      if (lookahead == ')') ADVANCE(740);
      if (lookahead == '+') ADVANCE(391);
      if (lookahead == '-') ADVANCE(734);
      if (lookahead == ':') ADVANCE(328);
      if (lookahead == 'A') ADVANCE(169);
      if (lookahead == 'B') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'D') ADVANCE(156);
      if (lookahead == 'E') ADVANCE(138);
      if (lookahead == 'F') ADVANCE(126);
      if (lookahead == 'G') ADVANCE(127);
      if (lookahead == 'I') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(111);
      if (lookahead == 'P') ADVANCE(175);
      if (lookahead == 'R') ADVANCE(193);
      if (lookahead == 'S') ADVANCE(84);
      if (lookahead == 'T') ADVANCE(171);
      if (lookahead == 'V') ADVANCE(113);
      if (lookahead == 'W') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(732);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == 'm') ADVANCE(263);
      if (lookahead == 'n') ADVANCE(226);
      if (lookahead == 'p') ADVANCE(279);
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(745);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '=') ADVANCE(744);
      if (lookahead == 'A') ADVANCE(168);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'D') ADVANCE(156);
      if (lookahead == 'E') ADVANCE(138);
      if (lookahead == 'F') ADVANCE(126);
      if (lookahead == 'G') ADVANCE(127);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'L') ADVANCE(111);
      if (lookahead == 'R') ADVANCE(193);
      if (lookahead == 'S') ADVANCE(84);
      if (lookahead == 'T') ADVANCE(171);
      if (lookahead == 'W') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(37)
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(746);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(744);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(55)
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(732);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(25)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(735);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(734);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(732);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(25)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(735);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(147);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(782);
      if (lookahead == '#') ADVANCE(790);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(786);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(791);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(391);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == ':') ADVANCE(415);
      if (lookahead == '@') ADVANCE(416);
      if (lookahead == 'A') ADVANCE(170);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'D') ADVANCE(156);
      if (lookahead == 'E') ADVANCE(138);
      if (lookahead == 'F') ADVANCE(126);
      if (lookahead == 'G') ADVANCE(127);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'L') ADVANCE(111);
      if (lookahead == 'R') ADVANCE(193);
      if (lookahead == 'S') ADVANCE(84);
      if (lookahead == 'T') ADVANCE(171);
      if (lookahead == 'W') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32)
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(391);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == 'A') ADVANCE(170);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'D') ADVANCE(156);
      if (lookahead == 'E') ADVANCE(138);
      if (lookahead == 'F') ADVANCE(126);
      if (lookahead == 'G') ADVANCE(127);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'L') ADVANCE(111);
      if (lookahead == 'R') ADVANCE(193);
      if (lookahead == 'S') ADVANCE(84);
      if (lookahead == 'T') ADVANCE(171);
      if (lookahead == 'W') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32)
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(420);
      if (lookahead == ':') ADVANCE(328);
      if (lookahead == 'A') ADVANCE(466);
      if (lookahead == 'C') ADVANCE(427);
      if (lookahead == 'D') ADVANCE(459);
      if (lookahead == 'E') ADVANCE(448);
      if (lookahead == 'F') ADVANCE(461);
      if (lookahead == 'G') ADVANCE(444);
      if (lookahead == 'I') ADVANCE(440);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'R') ADVANCE(478);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(467);
      if (lookahead == 'W') ADVANCE(430);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(420);
      if (lookahead == 'A') ADVANCE(466);
      if (lookahead == 'C') ADVANCE(427);
      if (lookahead == 'D') ADVANCE(459);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'F') ADVANCE(461);
      if (lookahead == 'G') ADVANCE(444);
      if (lookahead == 'I') ADVANCE(440);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'R') ADVANCE(478);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(467);
      if (lookahead == 'W') ADVANCE(430);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(420);
      if (lookahead == 'A') ADVANCE(466);
      if (lookahead == 'C') ADVANCE(427);
      if (lookahead == 'D') ADVANCE(459);
      if (lookahead == 'F') ADVANCE(461);
      if (lookahead == 'G') ADVANCE(444);
      if (lookahead == 'I') ADVANCE(440);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'R') ADVANCE(478);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(467);
      if (lookahead == 'W') ADVANCE(430);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(420);
      if (lookahead == 'A') ADVANCE(466);
      if (lookahead == 'C') ADVANCE(427);
      if (lookahead == 'D') ADVANCE(459);
      if (lookahead == 'F') ADVANCE(446);
      if (lookahead == 'G') ADVANCE(444);
      if (lookahead == 'I') ADVANCE(440);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'R') ADVANCE(478);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(467);
      if (lookahead == 'W') ADVANCE(430);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == 'A') ADVANCE(168);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'D') ADVANCE(156);
      if (lookahead == 'E') ADVANCE(138);
      if (lookahead == 'F') ADVANCE(126);
      if (lookahead == 'G') ADVANCE(127);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'L') ADVANCE(111);
      if (lookahead == 'R') ADVANCE(193);
      if (lookahead == 'S') ADVANCE(84);
      if (lookahead == 'T') ADVANCE(171);
      if (lookahead == 'W') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37)
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(539);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(426);
      if (lookahead == 'A') ADVANCE(466);
      if (lookahead == 'C') ADVANCE(427);
      if (lookahead == 'D') ADVANCE(459);
      if (lookahead == 'E') ADVANCE(448);
      if (lookahead == 'F') ADVANCE(461);
      if (lookahead == 'G') ADVANCE(444);
      if (lookahead == 'I') ADVANCE(440);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'R') ADVANCE(478);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(467);
      if (lookahead == 'W') ADVANCE(430);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(426);
      if (lookahead == 'A') ADVANCE(466);
      if (lookahead == 'C') ADVANCE(427);
      if (lookahead == 'D') ADVANCE(459);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'F') ADVANCE(461);
      if (lookahead == 'G') ADVANCE(444);
      if (lookahead == 'I') ADVANCE(440);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'R') ADVANCE(478);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(467);
      if (lookahead == 'W') ADVANCE(430);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(426);
      if (lookahead == 'A') ADVANCE(466);
      if (lookahead == 'C') ADVANCE(427);
      if (lookahead == 'D') ADVANCE(459);
      if (lookahead == 'F') ADVANCE(461);
      if (lookahead == 'G') ADVANCE(444);
      if (lookahead == 'I') ADVANCE(440);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'R') ADVANCE(478);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(467);
      if (lookahead == 'W') ADVANCE(430);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(426);
      if (lookahead == 'A') ADVANCE(466);
      if (lookahead == 'C') ADVANCE(427);
      if (lookahead == 'D') ADVANCE(459);
      if (lookahead == 'F') ADVANCE(446);
      if (lookahead == 'G') ADVANCE(444);
      if (lookahead == 'I') ADVANCE(440);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'R') ADVANCE(478);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(467);
      if (lookahead == 'W') ADVANCE(430);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(415);
      if (lookahead == '@') ADVANCE(416);
      if (lookahead == 'A') ADVANCE(466);
      if (lookahead == 'C') ADVANCE(427);
      if (lookahead == 'D') ADVANCE(459);
      if (lookahead == 'E') ADVANCE(448);
      if (lookahead == 'F') ADVANCE(461);
      if (lookahead == 'G') ADVANCE(444);
      if (lookahead == 'I') ADVANCE(440);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'R') ADVANCE(478);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(467);
      if (lookahead == 'W') ADVANCE(430);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(415);
      if (lookahead == '@') ADVANCE(416);
      if (lookahead == 'A') ADVANCE(466);
      if (lookahead == 'C') ADVANCE(427);
      if (lookahead == 'D') ADVANCE(459);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'F') ADVANCE(461);
      if (lookahead == 'G') ADVANCE(444);
      if (lookahead == 'I') ADVANCE(440);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'R') ADVANCE(478);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(467);
      if (lookahead == 'W') ADVANCE(430);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(415);
      if (lookahead == '@') ADVANCE(416);
      if (lookahead == 'A') ADVANCE(466);
      if (lookahead == 'C') ADVANCE(427);
      if (lookahead == 'D') ADVANCE(459);
      if (lookahead == 'F') ADVANCE(461);
      if (lookahead == 'G') ADVANCE(444);
      if (lookahead == 'I') ADVANCE(440);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'R') ADVANCE(478);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(467);
      if (lookahead == 'W') ADVANCE(430);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(415);
      if (lookahead == '@') ADVANCE(416);
      if (lookahead == 'A') ADVANCE(466);
      if (lookahead == 'C') ADVANCE(427);
      if (lookahead == 'D') ADVANCE(459);
      if (lookahead == 'F') ADVANCE(446);
      if (lookahead == 'G') ADVANCE(444);
      if (lookahead == 'I') ADVANCE(440);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'R') ADVANCE(478);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(467);
      if (lookahead == 'W') ADVANCE(430);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(466);
      if (lookahead == 'C') ADVANCE(427);
      if (lookahead == 'D') ADVANCE(459);
      if (lookahead == 'E') ADVANCE(448);
      if (lookahead == 'F') ADVANCE(461);
      if (lookahead == 'G') ADVANCE(444);
      if (lookahead == 'I') ADVANCE(440);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'R') ADVANCE(478);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(467);
      if (lookahead == 'W') ADVANCE(430);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(466);
      if (lookahead == 'C') ADVANCE(427);
      if (lookahead == 'D') ADVANCE(459);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'F') ADVANCE(461);
      if (lookahead == 'G') ADVANCE(444);
      if (lookahead == 'I') ADVANCE(440);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'R') ADVANCE(478);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(467);
      if (lookahead == 'W') ADVANCE(430);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(466);
      if (lookahead == 'C') ADVANCE(427);
      if (lookahead == 'D') ADVANCE(459);
      if (lookahead == 'F') ADVANCE(461);
      if (lookahead == 'G') ADVANCE(444);
      if (lookahead == 'I') ADVANCE(440);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'R') ADVANCE(478);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(467);
      if (lookahead == 'W') ADVANCE(430);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(466);
      if (lookahead == 'C') ADVANCE(427);
      if (lookahead == 'D') ADVANCE(459);
      if (lookahead == 'F') ADVANCE(446);
      if (lookahead == 'G') ADVANCE(444);
      if (lookahead == 'I') ADVANCE(440);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'R') ADVANCE(478);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(467);
      if (lookahead == 'W') ADVANCE(430);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(732);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(735);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55)
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '(') ADVANCE(739);
      if (lookahead == '+') ADVANCE(391);
      if (lookahead == '-') ADVANCE(546);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(731);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '(') ADVANCE(739);
      if (lookahead == '+') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(731);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(731);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '-') ADVANCE(549);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(60)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(731);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(731);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '-') ADVANCE(551);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(731);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(63)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(731);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == 'A') ADVANCE(601);
      if (lookahead == 'C') ADVANCE(560);
      if (lookahead == 'D') ADVANCE(594);
      if (lookahead == 'E') ADVANCE(583);
      if (lookahead == 'F') ADVANCE(596);
      if (lookahead == 'G') ADVANCE(579);
      if (lookahead == 'I') ADVANCE(575);
      if (lookahead == 'L') ADVANCE(572);
      if (lookahead == 'R') ADVANCE(614);
      if (lookahead == 'S') ADVANCE(561);
      if (lookahead == 'T') ADVANCE(602);
      if (lookahead == 'W') ADVANCE(563);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(731);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == 'A') ADVANCE(601);
      if (lookahead == 'C') ADVANCE(560);
      if (lookahead == 'D') ADVANCE(594);
      if (lookahead == 'E') ADVANCE(589);
      if (lookahead == 'F') ADVANCE(596);
      if (lookahead == 'G') ADVANCE(579);
      if (lookahead == 'I') ADVANCE(575);
      if (lookahead == 'L') ADVANCE(572);
      if (lookahead == 'R') ADVANCE(614);
      if (lookahead == 'S') ADVANCE(561);
      if (lookahead == 'T') ADVANCE(602);
      if (lookahead == 'W') ADVANCE(563);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(731);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == 'A') ADVANCE(601);
      if (lookahead == 'C') ADVANCE(560);
      if (lookahead == 'D') ADVANCE(594);
      if (lookahead == 'F') ADVANCE(596);
      if (lookahead == 'G') ADVANCE(579);
      if (lookahead == 'I') ADVANCE(575);
      if (lookahead == 'L') ADVANCE(572);
      if (lookahead == 'R') ADVANCE(614);
      if (lookahead == 'S') ADVANCE(561);
      if (lookahead == 'T') ADVANCE(602);
      if (lookahead == 'W') ADVANCE(563);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(66)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(731);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == 'A') ADVANCE(601);
      if (lookahead == 'C') ADVANCE(560);
      if (lookahead == 'D') ADVANCE(594);
      if (lookahead == 'F') ADVANCE(581);
      if (lookahead == 'G') ADVANCE(579);
      if (lookahead == 'I') ADVANCE(575);
      if (lookahead == 'L') ADVANCE(572);
      if (lookahead == 'R') ADVANCE(614);
      if (lookahead == 'S') ADVANCE(561);
      if (lookahead == 'T') ADVANCE(602);
      if (lookahead == 'W') ADVANCE(563);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(731);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == 'A') ADVANCE(605);
      if (lookahead == 'E') ADVANCE(589);
      if (lookahead == 'S') ADVANCE(564);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(731);
      END_STATE();
    case 69:
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(69)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(731);
      END_STATE();
    case 70:
      if (lookahead == '#') ADVANCE(534);
      if (lookahead == '\\') ADVANCE(535);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(537);
      END_STATE();
    case 71:
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 72:
      if (lookahead == '(') ADVANCE(309);
      END_STATE();
    case 73:
      if (lookahead == ')') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(747);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(200);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(236);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(308);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(207);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(275);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(203);
      END_STATE();
    case 81:
      if (lookahead == '.') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      if (lookahead == '=') ADVANCE(260);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'O') ADVANCE(166);
      END_STATE();
    case 84:
      if (lookahead == 'A') ADVANCE(194);
      if (lookahead == 'E') ADVANCE(184);
      END_STATE();
    case 85:
      if (lookahead == 'A') ADVANCE(123);
      END_STATE();
    case 86:
      if (lookahead == 'A') ADVANCE(142);
      END_STATE();
    case 87:
      if (lookahead == 'A') ADVANCE(139);
      END_STATE();
    case 88:
      if (lookahead == 'A') ADVANCE(132);
      if (lookahead == 'I') ADVANCE(189);
      END_STATE();
    case 89:
      if (lookahead == 'A') ADVANCE(144);
      END_STATE();
    case 90:
      if (lookahead == 'A') ADVANCE(178);
      END_STATE();
    case 91:
      if (lookahead == 'A') ADVANCE(178);
      if (lookahead == 'I') ADVANCE(149);
      END_STATE();
    case 92:
      if (lookahead == 'A') ADVANCE(98);
      END_STATE();
    case 93:
      if (lookahead == 'C') ADVANCE(125);
      END_STATE();
    case 94:
      if (lookahead == 'C') ADVANCE(136);
      END_STATE();
    case 95:
      if (lookahead == 'C') ADVANCE(145);
      END_STATE();
    case 96:
      if (lookahead == 'C') ADVANCE(191);
      END_STATE();
    case 97:
      if (lookahead == 'C') ADVANCE(187);
      END_STATE();
    case 98:
      if (lookahead == 'C') ADVANCE(188);
      END_STATE();
    case 99:
      if (lookahead == 'C') ADVANCE(87);
      END_STATE();
    case 100:
      if (lookahead == 'C') ADVANCE(89);
      END_STATE();
    case 101:
      if (lookahead == 'C') ADVANCE(137);
      END_STATE();
    case 102:
      if (lookahead == 'D') ADVANCE(344);
      END_STATE();
    case 103:
      if (lookahead == 'D') ADVANCE(320);
      END_STATE();
    case 104:
      if (lookahead == 'D') ADVANCE(161);
      END_STATE();
    case 105:
      if (lookahead == 'D') ADVANCE(165);
      END_STATE();
    case 106:
      if (lookahead == 'E') ADVANCE(356);
      END_STATE();
    case 107:
      if (lookahead == 'E') ADVANCE(331);
      END_STATE();
    case 108:
      if (lookahead == 'E') ADVANCE(351);
      END_STATE();
    case 109:
      if (lookahead == 'E') ADVANCE(376);
      END_STATE();
    case 110:
      if (lookahead == 'E') ADVANCE(347);
      END_STATE();
    case 111:
      if (lookahead == 'E') ADVANCE(183);
      if (lookahead == 'O') ADVANCE(100);
      END_STATE();
    case 112:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 113:
      if (lookahead == 'E') ADVANCE(174);
      END_STATE();
    case 114:
      if (lookahead == 'E') ADVANCE(176);
      END_STATE();
    case 115:
      if (lookahead == 'E') ADVANCE(173);
      END_STATE();
    case 116:
      if (lookahead == 'E') ADVANCE(97);
      END_STATE();
    case 117:
      if (lookahead == 'F') ADVANCE(352);
      if (lookahead == 'M') ADVANCE(167);
      END_STATE();
    case 118:
      if (lookahead == 'F') ADVANCE(352);
      if (lookahead == 'M') ADVANCE(167);
      if (lookahead == 'N') ADVANCE(343);
      END_STATE();
    case 119:
      if (lookahead == 'F') ADVANCE(355);
      END_STATE();
    case 120:
      if (lookahead == 'F') ADVANCE(92);
      END_STATE();
    case 121:
      if (lookahead == 'F') ADVANCE(133);
      END_STATE();
    case 122:
      if (lookahead == 'G') ADVANCE(315);
      END_STATE();
    case 123:
      if (lookahead == 'G') ADVANCE(109);
      END_STATE();
    case 124:
      if (lookahead == 'H') ADVANCE(29);
      END_STATE();
    case 125:
      if (lookahead == 'H') ADVANCE(107);
      END_STATE();
    case 126:
      if (lookahead == 'I') ADVANCE(150);
      if (lookahead == 'O') ADVANCE(172);
      if (lookahead == 'R') ADVANCE(157);
      if (lookahead == 'U') ADVANCE(154);
      END_STATE();
    case 127:
      if (lookahead == 'I') ADVANCE(182);
      END_STATE();
    case 128:
      if (lookahead == 'I') ADVANCE(140);
      END_STATE();
    case 129:
      if (lookahead == 'I') ADVANCE(119);
      END_STATE();
    case 130:
      if (lookahead == 'I') ADVANCE(120);
      END_STATE();
    case 131:
      if (lookahead == 'I') ADVANCE(159);
      END_STATE();
    case 132:
      if (lookahead == 'I') ADVANCE(185);
      END_STATE();
    case 133:
      if (lookahead == 'I') ADVANCE(146);
      END_STATE();
    case 134:
      if (lookahead == 'I') ADVANCE(162);
      END_STATE();
    case 135:
      if (lookahead == 'J') ADVANCE(116);
      END_STATE();
    case 136:
      if (lookahead == 'K') ADVANCE(114);
      END_STATE();
    case 137:
      if (lookahead == 'K') ADVANCE(115);
      END_STATE();
    case 138:
      if (lookahead == 'L') ADVANCE(180);
      if (lookahead == 'N') ADVANCE(102);
      END_STATE();
    case 139:
      if (lookahead == 'L') ADVANCE(375);
      END_STATE();
    case 140:
      if (lookahead == 'L') ADVANCE(103);
      END_STATE();
    case 141:
      if (lookahead == 'L') ADVANCE(197);
      END_STATE();
    case 142:
      if (lookahead == 'L') ADVANCE(141);
      END_STATE();
    case 143:
      if (lookahead == 'L') ADVANCE(198);
      END_STATE();
    case 144:
      if (lookahead == 'L') ADVANCE(143);
      END_STATE();
    case 145:
      if (lookahead == 'L') ADVANCE(163);
      END_STATE();
    case 146:
      if (lookahead == 'L') ADVANCE(110);
      END_STATE();
    case 147:
      if (lookahead == 'L') ADVANCE(164);
      END_STATE();
    case 148:
      if (lookahead == 'M') ADVANCE(321);
      END_STATE();
    case 149:
      if (lookahead == 'M') ADVANCE(85);
      END_STATE();
    case 150:
      if (lookahead == 'N') ADVANCE(86);
      END_STATE();
    case 151:
      if (lookahead == 'N') ADVANCE(370);
      END_STATE();
    case 152:
      if (lookahead == 'N') ADVANCE(329);
      END_STATE();
    case 153:
      if (lookahead == 'N') ADVANCE(348);
      END_STATE();
    case 154:
      if (lookahead == 'N') ADVANCE(96);
      END_STATE();
    case 155:
      if (lookahead == 'N') ADVANCE(108);
      END_STATE();
    case 156:
      if (lookahead == 'O') ADVANCE(337);
      END_STATE();
    case 157:
      if (lookahead == 'O') ADVANCE(148);
      END_STATE();
    case 158:
      if (lookahead == 'O') ADVANCE(135);
      END_STATE();
    case 159:
      if (lookahead == 'O') ADVANCE(152);
      END_STATE();
    case 160:
      if (lookahead == 'O') ADVANCE(177);
      END_STATE();
    case 161:
      if (lookahead == 'O') ADVANCE(94);
      END_STATE();
    case 162:
      if (lookahead == 'O') ADVANCE(153);
      END_STATE();
    case 163:
      if (lookahead == 'O') ADVANCE(155);
      END_STATE();
    case 164:
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 165:
      if (lookahead == 'O') ADVANCE(101);
      END_STATE();
    case 166:
      if (lookahead == 'P') ADVANCE(196);
      END_STATE();
    case 167:
      if (lookahead == 'P') ADVANCE(160);
      END_STATE();
    case 168:
      if (lookahead == 'R') ADVANCE(122);
      END_STATE();
    case 169:
      if (lookahead == 'R') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(363);
      END_STATE();
    case 170:
      if (lookahead == 'R') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(28);
      END_STATE();
    case 171:
      if (lookahead == 'R') ADVANCE(195);
      END_STATE();
    case 172:
      if (lookahead == 'R') ADVANCE(340);
      END_STATE();
    case 173:
      if (lookahead == 'R') ADVANCE(389);
      END_STATE();
    case 174:
      if (lookahead == 'R') ADVANCE(181);
      END_STATE();
    case 175:
      if (lookahead == 'R') ADVANCE(158);
      END_STATE();
    case 176:
      if (lookahead == 'R') ADVANCE(121);
      END_STATE();
    case 177:
      if (lookahead == 'R') ADVANCE(186);
      END_STATE();
    case 178:
      if (lookahead == 'R') ADVANCE(190);
      END_STATE();
    case 179:
      if (lookahead == 'S') ADVANCE(363);
      END_STATE();
    case 180:
      if (lookahead == 'S') ADVANCE(106);
      END_STATE();
    case 181:
      if (lookahead == 'S') ADVANCE(131);
      END_STATE();
    case 182:
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 183:
      if (lookahead == 'T') ADVANCE(364);
      END_STATE();
    case 184:
      if (lookahead == 'T') ADVANCE(377);
      END_STATE();
    case 185:
      if (lookahead == 'T') ADVANCE(386);
      END_STATE();
    case 186:
      if (lookahead == 'T') ADVANCE(359);
      END_STATE();
    case 187:
      if (lookahead == 'T') ADVANCE(325);
      END_STATE();
    case 188:
      if (lookahead == 'T') ADVANCE(374);
      END_STATE();
    case 189:
      if (lookahead == 'T') ADVANCE(124);
      END_STATE();
    case 190:
      if (lookahead == 'T') ADVANCE(130);
      END_STATE();
    case 191:
      if (lookahead == 'T') ADVANCE(134);
      END_STATE();
    case 192:
      if (lookahead == 'U') ADVANCE(128);
      END_STATE();
    case 193:
      if (lookahead == 'U') ADVANCE(151);
      END_STATE();
    case 194:
      if (lookahead == 'V') ADVANCE(112);
      END_STATE();
    case 195:
      if (lookahead == 'Y') ADVANCE(380);
      END_STATE();
    case 196:
      if (lookahead == 'Y') ADVANCE(334);
      END_STATE();
    case 197:
      if (lookahead == 'Y') ADVANCE(383);
      END_STATE();
    case 198:
      if (lookahead == 'Y') ADVANCE(367);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead == 'l') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == 'c') ADVANCE(265);
      if (lookahead == 'l') ADVANCE(268);
      if (lookahead == 'p') ADVANCE(199);
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 206:
      if (lookahead == 'b') ADVANCE(204);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(202);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(281);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == 'p') ADVANCE(777);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 211:
      if (lookahead == 'c') ADVANCE(223);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(772);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(765);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(742);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(775);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == 'm') ADVANCE(263);
      if (lookahead == 'n') ADVANCE(226);
      if (lookahead == 'p') ADVANCE(279);
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(768);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(767);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(752);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(778);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 232:
      if (lookahead == 'f') ADVANCE(273);
      END_STATE();
    case 233:
      if (lookahead == 'g') ADVANCE(220);
      END_STATE();
    case 234:
      if (lookahead == 'g') ADVANCE(288);
      END_STATE();
    case 235:
      if (lookahead == 'g') ADVANCE(227);
      END_STATE();
    case 236:
      if (lookahead == 'g') ADVANCE(254);
      if (lookahead == 'm') ADVANCE(263);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead == 'p') ADVANCE(278);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 237:
      if (lookahead == 'h') ADVANCE(780);
      END_STATE();
    case 238:
      if (lookahead == 'h') ADVANCE(774);
      END_STATE();
    case 239:
      if (lookahead == 'h') ADVANCE(219);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 244:
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 247:
      if (lookahead == 'k') ADVANCE(82);
      END_STATE();
    case 248:
      if (lookahead == 'l') ADVANCE(773);
      END_STATE();
    case 249:
      if (lookahead == 'l') ADVANCE(760);
      END_STATE();
    case 250:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 251:
      if (lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 252:
      if (lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 253:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 254:
      if (lookahead == 'l') ADVANCE(266);
      END_STATE();
    case 255:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 256:
      if (lookahead == 'm') ADVANCE(771);
      END_STATE();
    case 257:
      if (lookahead == 'm') ADVANCE(276);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(297);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 264:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 265:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 266:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 267:
      if (lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 268:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 269:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 270:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 271:
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 272:
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 273:
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 274:
      if (lookahead == 'p') ADVANCE(270);
      END_STATE();
    case 275:
      if (lookahead == 'p') ADVANCE(287);
      END_STATE();
    case 276:
      if (lookahead == 'p') ADVANCE(272);
      END_STATE();
    case 277:
      if (lookahead == 'q') ADVANCE(299);
      END_STATE();
    case 278:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 279:
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 281:
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 282:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 283:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 284:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 285:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 286:
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 287:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 288:
      if (lookahead == 's') ADVANCE(769);
      END_STATE();
    case 289:
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 290:
      if (lookahead == 's') ADVANCE(291);
      END_STATE();
    case 291:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 292:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(766);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(776);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(757);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 299:
      if (lookahead == 'u') ADVANCE(243);
      END_STATE();
    case 300:
      if (lookahead == 'u') ADVANCE(259);
      END_STATE();
    case 301:
      if (lookahead == 'v') ADVANCE(241);
      END_STATE();
    case 302:
      if (lookahead == 'v') ADVANCE(242);
      END_STATE();
    case 303:
      if (lookahead == 'v') ADVANCE(245);
      END_STATE();
    case 304:
      if (lookahead == 'w') ADVANCE(271);
      END_STATE();
    case 305:
      if (lookahead == 'w') ADVANCE(79);
      END_STATE();
    case 306:
      if (lookahead == 'y') ADVANCE(274);
      END_STATE();
    case 307:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(741);
      END_STATE();
    case 308:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(758);
      END_STATE();
    case 309:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 310:
      if (eof) ADVANCE(314);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(782);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(786);
      if (lookahead == '(') ADVANCE(739);
      if (lookahead == ')') ADVANCE(740);
      if (lookahead == '+') ADVANCE(391);
      if (lookahead == '-') ADVANCE(733);
      if (lookahead == ':') ADVANCE(328);
      if (lookahead == 'A') ADVANCE(169);
      if (lookahead == 'B') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'D') ADVANCE(156);
      if (lookahead == 'E') ADVANCE(138);
      if (lookahead == 'F') ADVANCE(126);
      if (lookahead == 'G') ADVANCE(127);
      if (lookahead == 'I') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(111);
      if (lookahead == 'P') ADVANCE(175);
      if (lookahead == 'R') ADVANCE(193);
      if (lookahead == 'S') ADVANCE(84);
      if (lookahead == 'T') ADVANCE(171);
      if (lookahead == 'V') ADVANCE(113);
      if (lookahead == 'W') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(732);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(310)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 311:
      if (eof) ADVANCE(314);
      if (lookahead == ' ') ADVANCE(745);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(740);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '=') ADVANCE(744);
      if (lookahead == 'A') ADVANCE(406);
      if (lookahead == 'F') ADVANCE(407);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'P') ADVANCE(410);
      if (lookahead == 'V') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(313)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 312:
      if (eof) ADVANCE(314);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(740);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '/') ADVANCE(327);
      if (lookahead == ':') ADVANCE(415);
      if (lookahead == '=') ADVANCE(319);
      if (lookahead == '@') ADVANCE(416);
      if (lookahead == 'A') ADVANCE(406);
      if (lookahead == 'F') ADVANCE(407);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'P') ADVANCE(410);
      if (lookahead == 'V') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(313)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 313:
      if (eof) ADVANCE(314);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(740);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == 'A') ADVANCE(406);
      if (lookahead == 'F') ADVANCE(407);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'P') ADVANCE(410);
      if (lookahead == 'V') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(313)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_BUILD);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(104);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_CACHE);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_CACHE);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_CACHE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_DO);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DO);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_DO);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_END);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_FROMDOCKERFILE);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_FUNCTION);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_FUNCTION);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_FUNCTION);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_GITCLONE);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_IF);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(129);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(129);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_IMPORT);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_IMPORT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_IMPORT);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_IMPORT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_AS);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_LET);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_LET);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_LOCALLY);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_LOCALLY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_LOCALLY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_RUN);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_SAVEARTIFACT);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_ASLOCAL);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_SAVEIMAGE);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_SET);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_TRY);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_WAIT);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_WAIT);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_WAIT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_WITHDOCKER);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == ')') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'J') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == ' ') ADVANCE(91);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == ' ') ADVANCE(95);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == ' ') ADVANCE(105);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(490);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(499);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(500);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(485);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(519);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(487);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(493);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(432);
      if (lookahead == 'O') ADVANCE(464);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(479);
      if (lookahead == 'E') ADVANCE(473);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(449);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'I') ADVANCE(477);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(452);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'C') ADVANCE(442);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'C') ADVANCE(429);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'C') ADVANCE(476);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'D') ADVANCE(345);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(357);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(332);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(472);
      if (lookahead == 'O') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(417);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'F') ADVANCE(353);
      if (lookahead == 'M') ADVANCE(465);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'G') ADVANCE(317);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'H') ADVANCE(437);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'H') ADVANCE(419);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(471);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(462);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(458);
      if (lookahead == 'O') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(460);
      if (lookahead == 'U') ADVANCE(457);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(474);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(470);
      if (lookahead == 'N') ADVANCE(435);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(450);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(482);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(483);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(451);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'M') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(435);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(371);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(349);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(434);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(431);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(338);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(453);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(460);
      if (lookahead == 'U') ADVANCE(457);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(456);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(469);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'P') ADVANCE(481);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'P') ADVANCE(463);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(441);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(480);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(341);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(475);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'S') ADVANCE(436);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(418);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(365);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(378);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(387);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(361);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(445);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(443);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'U') ADVANCE(455);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'V') ADVANCE(439);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(381);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(335);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(368);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(384);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(491);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(512);
      if (lookahead == 'p') ADVANCE(486);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(526);
      if (lookahead == 'l') ADVANCE(488);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(521);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(529);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(492);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(484);
      if (lookahead == 'p') ADVANCE(530);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(505);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(506);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(489);
      if (lookahead == 'p') ADVANCE(530);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'd') ADVANCE(742);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(494);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(502);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(520);
      if (lookahead == 'h') ADVANCE(507);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(520);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(518);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'g') ADVANCE(495);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'g') ADVANCE(524);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(774);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(496);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(498);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(515);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(531);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(510);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(497);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(517);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(511);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'm') ADVANCE(771);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'm') ADVANCE(748);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'n') ADVANCE(528);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(514);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(532);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(523);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'p') ADVANCE(522);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(516);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(503);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(508);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(513);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(769);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(504);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(527);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(425);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 't') ADVANCE(749);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 't') ADVANCE(501);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'u') ADVANCE(525);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'v') ADVANCE(509);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'w') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_image_name);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(793);
      if (lookahead == '\f') ADVANCE(794);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(534);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(792);
      if (lookahead == '#') ADVANCE(536);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(537);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(797);
      if (lookahead == '\f') ADVANCE(798);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(536);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(537);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_image_digest);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_immediate_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(539);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(793);
      if (lookahead == '\f') ADVANCE(794);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(540);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(621);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(695);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(630);
      if (lookahead == 'f') ADVANCE(755);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(632);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(652);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(631);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(698);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(640);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(687);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(651);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(721);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(627);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(566);
      if (lookahead == 'O') ADVANCE(599);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(608);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(584);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(582);
      if (lookahead == 'I') ADVANCE(613);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(616);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(587);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'C') ADVANCE(577);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'C') ADVANCE(562);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'C') ADVANCE(611);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D') ADVANCE(346);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(358);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(607);
      if (lookahead == 'O') ADVANCE(567);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'F') ADVANCE(354);
      if (lookahead == 'M') ADVANCE(600);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G') ADVANCE(318);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H') ADVANCE(571);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H') ADVANCE(545);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(612);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(598);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(593);
      if (lookahead == 'O') ADVANCE(603);
      if (lookahead == 'R') ADVANCE(595);
      if (lookahead == 'U') ADVANCE(592);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(606);
      if (lookahead == 'N') ADVANCE(569);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(585);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(619);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(620);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(586);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M') ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(569);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(372);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(350);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(568);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(565);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(339);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(588);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(603);
      if (lookahead == 'R') ADVANCE(595);
      if (lookahead == 'U') ADVANCE(592);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(604);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(591);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P') ADVANCE(618);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P') ADVANCE(597);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(576);
      if (lookahead == 'S') ADVANCE(544);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(617);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(342);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(610);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S') ADVANCE(544);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S') ADVANCE(570);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(366);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(379);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(388);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(362);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(580);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(542);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(578);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U') ADVANCE(590);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'V') ADVANCE(573);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'V') ADVANCE(574);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(382);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(336);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(369);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(385);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(673);
      if (lookahead == 'c') ADVANCE(658);
      if (lookahead == 'd') ADVANCE(662);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'k') ADVANCE(642);
      if (lookahead == 'p') ADVANCE(623);
      if (lookahead == 's') ADVANCE(730);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(673);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(713);
      if (lookahead == 'l') ADVANCE(624);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(720);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(701);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(709);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(704);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(686);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(708);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'b') ADVANCE(723);
      if (lookahead == 'p') ADVANCE(671);
      if (lookahead == 't') ADVANCE(626);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'b') ADVANCE(706);
      if (lookahead == 'k') ADVANCE(648);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(660);
      if (lookahead == 'i') ADVANCE(637);
      if (lookahead == 'p') ADVANCE(646);
      if (lookahead == 's') ADVANCE(661);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(659);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(641);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(742);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(750);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(761);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(559);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(697);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(729);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(759);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(639);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(635);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(655);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(718);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(707);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(699);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(647);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(554);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(691);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(696);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(694);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'k') ADVANCE(642);
      if (lookahead == 's') ADVANCE(730);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(754);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(779);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(643);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(645);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(710);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(680);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(743);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(681);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(629);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(700);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(724);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(684);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(714);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(676);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(688);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(675);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(716);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'k') ADVANCE(555);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(624);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(672);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(664);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(638);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(644);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(692);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(677);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(771);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(689);
      if (lookahead == 'o') ADVANCE(725);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(689);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(674);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(751);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(670);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(763);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(633);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(693);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(654);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(636);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(728);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(703);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(726);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(557);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(702);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(727);
      if (lookahead == 't') ADVANCE(711);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(678);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(547);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(705);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(558);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(753);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(657);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(634);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(679);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(653);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(663);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(628);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(717);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(667);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(656);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(769);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(764);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(762);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(715);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(722);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(552);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(719);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(669);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(756);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(770);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(650);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(711);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(712);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'u') ADVANCE(668);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'v') ADVANCE(666);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(683);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(781);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(685);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(553);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'x') ADVANCE(665);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'y') ADVANCE(682);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(216);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(21);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(735);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n') ADVANCE(797);
      if (lookahead == '\f') ADVANCE(798);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_version_major_minor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(741);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_allow_privileged);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_DASH_DASHbranch);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcache_DASHfrom);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_cache_hint);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchmod);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcompose);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_dir);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_DASH_DASHbuild_DASHarg);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_DASHf);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtarget);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_entrypoint);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_feature_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(758);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_force);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_DASH_DASHid);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_if_exists);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_keep_own);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_keep_ts);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_DASH_DASHload);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_DASH_DASHmount);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_network_none);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_no_cache);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_pass_args);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_persist);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_privileged);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_DASH_DASHpull);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_push);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsecret);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsep);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_DASH_DASHservice);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsharing);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_ssh);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_symlink_no_follow);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(793);
      if (lookahead == '\f') ADVANCE(795);
      if (lookahead == '\r') ADVANCE(783);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(783);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(785);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(785);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(793);
      if (lookahead == '\f') ADVANCE(796);
      if (lookahead == '\r') ADVANCE(787);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(787);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(787);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(789);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(789);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\n') ADVANCE(793);
      if (lookahead == '\f') ADVANCE(794);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(790);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(791);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(793);
      if (lookahead == '\f') ADVANCE(794);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(793);
      if (lookahead == '\f') ADVANCE(795);
      if (lookahead == '\r') ADVANCE(783);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(793);
      if (lookahead == '\f') ADVANCE(796);
      if (lookahead == '\r') ADVANCE(787);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(787);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      if (lookahead == '\n') ADVANCE(797);
      if (lookahead == '\f') ADVANCE(798);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(799);
      if (lookahead == '\f') ADVANCE(809);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(391);
      if (lookahead == '-') ADVANCE(423);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(800);
      if (lookahead == '\f') ADVANCE(810);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(790);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\f') ADVANCE(811);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '+') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\f') ADVANCE(812);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\f') ADVANCE(813);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_CRn);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(791);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(735);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(799);
      if (lookahead == '\f') ADVANCE(809);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(391);
      if (lookahead == '-') ADVANCE(423);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(800);
      if (lookahead == '\f') ADVANCE(810);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(790);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\f') ADVANCE(811);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '+') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\f') ADVANCE(812);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\f') ADVANCE(813);
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
  [1] = {.lex_state = 312},
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
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0, .external_lex_state = 2},
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
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 31},
  [42] = {.lex_state = 33},
  [43] = {.lex_state = 31},
  [44] = {.lex_state = 41},
  [45] = {.lex_state = 31},
  [46] = {.lex_state = 31},
  [47] = {.lex_state = 35, .external_lex_state = 2},
  [48] = {.lex_state = 36},
  [49] = {.lex_state = 34},
  [50] = {.lex_state = 41},
  [51] = {.lex_state = 43, .external_lex_state = 2},
  [52] = {.lex_state = 42},
  [53] = {.lex_state = 44},
  [54] = {.lex_state = 37},
  [55] = {.lex_state = 37},
  [56] = {.lex_state = 37},
  [57] = {.lex_state = 37},
  [58] = {.lex_state = 37},
  [59] = {.lex_state = 37},
  [60] = {.lex_state = 37},
  [61] = {.lex_state = 37},
  [62] = {.lex_state = 37},
  [63] = {.lex_state = 45},
  [64] = {.lex_state = 44},
  [65] = {.lex_state = 22},
  [66] = {.lex_state = 41},
  [67] = {.lex_state = 45},
  [68] = {.lex_state = 41},
  [69] = {.lex_state = 43, .external_lex_state = 2},
  [70] = {.lex_state = 41},
  [71] = {.lex_state = 45},
  [72] = {.lex_state = 45},
  [73] = {.lex_state = 41},
  [74] = {.lex_state = 42},
  [75] = {.lex_state = 31},
  [76] = {.lex_state = 37},
  [77] = {.lex_state = 37},
  [78] = {.lex_state = 64},
  [79] = {.lex_state = 37},
  [80] = {.lex_state = 37},
  [81] = {.lex_state = 45},
  [82] = {.lex_state = 64},
  [83] = {.lex_state = 31},
  [84] = {.lex_state = 37},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 37, .external_lex_state = 2},
  [88] = {.lex_state = 37, .external_lex_state = 2},
  [89] = {.lex_state = 37, .external_lex_state = 2},
  [90] = {.lex_state = 45},
  [91] = {.lex_state = 43, .external_lex_state = 2},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 43, .external_lex_state = 2},
  [95] = {.lex_state = 37, .external_lex_state = 2},
  [96] = {.lex_state = 37, .external_lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 44},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 42},
  [109] = {.lex_state = 46},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 37, .external_lex_state = 2},
  [112] = {.lex_state = 44},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 48},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 44},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 37, .external_lex_state = 2},
  [119] = {.lex_state = 48},
  [120] = {.lex_state = 37, .external_lex_state = 2},
  [121] = {.lex_state = 48},
  [122] = {.lex_state = 46},
  [123] = {.lex_state = 46},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 44},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 43, .external_lex_state = 2},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 42},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 42},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 37, .external_lex_state = 2},
  [149] = {.lex_state = 46},
  [150] = {.lex_state = 47, .external_lex_state = 2},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 48},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 43, .external_lex_state = 2},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 47, .external_lex_state = 2},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 47, .external_lex_state = 2},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 47, .external_lex_state = 2},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 42},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 45},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 66, .external_lex_state = 2},
  [173] = {.lex_state = 48},
  [174] = {.lex_state = 46},
  [175] = {.lex_state = 66, .external_lex_state = 2},
  [176] = {.lex_state = 65},
  [177] = {.lex_state = 67},
  [178] = {.lex_state = 67},
  [179] = {.lex_state = 65},
  [180] = {.lex_state = 22, .external_lex_state = 2},
  [181] = {.lex_state = 47, .external_lex_state = 2},
  [182] = {.lex_state = 31, .external_lex_state = 2},
  [183] = {.lex_state = 48},
  [184] = {.lex_state = 37, .external_lex_state = 2},
  [185] = {.lex_state = 31, .external_lex_state = 2},
  [186] = {.lex_state = 47, .external_lex_state = 2},
  [187] = {.lex_state = 46},
  [188] = {.lex_state = 46},
  [189] = {.lex_state = 47, .external_lex_state = 2},
  [190] = {.lex_state = 37, .external_lex_state = 2},
  [191] = {.lex_state = 37, .external_lex_state = 2},
  [192] = {.lex_state = 37, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 48},
  [195] = {.lex_state = 37, .external_lex_state = 2},
  [196] = {.lex_state = 31, .external_lex_state = 2},
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
  [208] = {.lex_state = 57},
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
  [233] = {.lex_state = 57},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 0, .external_lex_state = 2},
  [236] = {.lex_state = 57},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 0, .external_lex_state = 2},
  [239] = {.lex_state = 0, .external_lex_state = 2},
  [240] = {.lex_state = 0, .external_lex_state = 2},
  [241] = {.lex_state = 0, .external_lex_state = 2},
  [242] = {.lex_state = 0, .external_lex_state = 2},
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 0, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 2},
  [248] = {.lex_state = 57},
  [249] = {.lex_state = 0, .external_lex_state = 2},
  [250] = {.lex_state = 0, .external_lex_state = 2},
  [251] = {.lex_state = 0, .external_lex_state = 2},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 2},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 25},
  [256] = {.lex_state = 57},
  [257] = {.lex_state = 25},
  [258] = {.lex_state = 25},
  [259] = {.lex_state = 25},
  [260] = {.lex_state = 25},
  [261] = {.lex_state = 31},
  [262] = {.lex_state = 31},
  [263] = {.lex_state = 312},
  [264] = {.lex_state = 31},
  [265] = {.lex_state = 31},
  [266] = {.lex_state = 312},
  [267] = {.lex_state = 57},
  [268] = {.lex_state = 57},
  [269] = {.lex_state = 6},
  [270] = {.lex_state = 31},
  [271] = {.lex_state = 57},
  [272] = {.lex_state = 57},
  [273] = {.lex_state = 6},
  [274] = {.lex_state = 57},
  [275] = {.lex_state = 6},
  [276] = {.lex_state = 57},
  [277] = {.lex_state = 8},
  [278] = {.lex_state = 8},
  [279] = {.lex_state = 25},
  [280] = {.lex_state = 25},
  [281] = {.lex_state = 25},
  [282] = {.lex_state = 8},
  [283] = {.lex_state = 25},
  [284] = {.lex_state = 25},
  [285] = {.lex_state = 8},
  [286] = {.lex_state = 8},
  [287] = {.lex_state = 8},
  [288] = {.lex_state = 8},
  [289] = {.lex_state = 8},
  [290] = {.lex_state = 312},
  [291] = {.lex_state = 38},
  [292] = {.lex_state = 38},
  [293] = {.lex_state = 38},
  [294] = {.lex_state = 38},
  [295] = {.lex_state = 38},
  [296] = {.lex_state = 8},
  [297] = {.lex_state = 38},
  [298] = {.lex_state = 312},
  [299] = {.lex_state = 59},
  [300] = {.lex_state = 312},
  [301] = {.lex_state = 312},
  [302] = {.lex_state = 38},
  [303] = {.lex_state = 38},
  [304] = {.lex_state = 312},
  [305] = {.lex_state = 312},
  [306] = {.lex_state = 59},
  [307] = {.lex_state = 59},
  [308] = {.lex_state = 59},
  [309] = {.lex_state = 59},
  [310] = {.lex_state = 311},
  [311] = {.lex_state = 60},
  [312] = {.lex_state = 60},
  [313] = {.lex_state = 312},
  [314] = {.lex_state = 60},
  [315] = {.lex_state = 38},
  [316] = {.lex_state = 38},
  [317] = {.lex_state = 312},
  [318] = {.lex_state = 312},
  [319] = {.lex_state = 312},
  [320] = {.lex_state = 60},
  [321] = {.lex_state = 60},
  [322] = {.lex_state = 312},
  [323] = {.lex_state = 312},
  [324] = {.lex_state = 312},
  [325] = {.lex_state = 312, .external_lex_state = 3},
  [326] = {.lex_state = 8},
  [327] = {.lex_state = 10},
  [328] = {.lex_state = 31},
  [329] = {.lex_state = 10},
  [330] = {.lex_state = 31},
  [331] = {.lex_state = 30},
  [332] = {.lex_state = 38},
  [333] = {.lex_state = 58},
  [334] = {.lex_state = 30},
  [335] = {.lex_state = 38},
  [336] = {.lex_state = 30},
  [337] = {.lex_state = 61},
  [338] = {.lex_state = 38},
  [339] = {.lex_state = 31},
  [340] = {.lex_state = 312},
  [341] = {.lex_state = 30},
  [342] = {.lex_state = 30},
  [343] = {.lex_state = 312},
  [344] = {.lex_state = 61},
  [345] = {.lex_state = 61},
  [346] = {.lex_state = 8},
  [347] = {.lex_state = 312},
  [348] = {.lex_state = 8},
  [349] = {.lex_state = 31},
  [350] = {.lex_state = 14},
  [351] = {.lex_state = 31},
  [352] = {.lex_state = 58},
  [353] = {.lex_state = 312},
  [354] = {.lex_state = 31},
  [355] = {.lex_state = 31},
  [356] = {.lex_state = 61},
  [357] = {.lex_state = 31},
  [358] = {.lex_state = 31},
  [359] = {.lex_state = 61},
  [360] = {.lex_state = 38},
  [361] = {.lex_state = 61},
  [362] = {.lex_state = 312},
  [363] = {.lex_state = 38},
  [364] = {.lex_state = 61},
  [365] = {.lex_state = 31},
  [366] = {.lex_state = 61},
  [367] = {.lex_state = 58},
  [368] = {.lex_state = 14},
  [369] = {.lex_state = 10},
  [370] = {.lex_state = 58},
  [371] = {.lex_state = 312},
  [372] = {.lex_state = 312},
  [373] = {.lex_state = 312},
  [374] = {.lex_state = 30},
  [375] = {.lex_state = 61},
  [376] = {.lex_state = 312},
  [377] = {.lex_state = 31},
  [378] = {.lex_state = 312},
  [379] = {.lex_state = 10},
  [380] = {.lex_state = 38},
  [381] = {.lex_state = 312},
  [382] = {.lex_state = 58},
  [383] = {.lex_state = 31},
  [384] = {.lex_state = 312},
  [385] = {.lex_state = 312},
  [386] = {.lex_state = 61},
  [387] = {.lex_state = 312},
  [388] = {.lex_state = 31},
  [389] = {.lex_state = 312},
  [390] = {.lex_state = 61},
  [391] = {.lex_state = 312},
  [392] = {.lex_state = 30},
  [393] = {.lex_state = 30},
  [394] = {.lex_state = 30},
  [395] = {.lex_state = 30},
  [396] = {.lex_state = 30},
  [397] = {.lex_state = 30},
  [398] = {.lex_state = 30},
  [399] = {.lex_state = 30},
  [400] = {.lex_state = 30},
  [401] = {.lex_state = 30},
  [402] = {.lex_state = 30},
  [403] = {.lex_state = 30},
  [404] = {.lex_state = 31},
  [405] = {.lex_state = 30},
  [406] = {.lex_state = 30},
  [407] = {.lex_state = 30},
  [408] = {.lex_state = 30},
  [409] = {.lex_state = 38},
  [410] = {.lex_state = 30},
  [411] = {.lex_state = 30},
  [412] = {.lex_state = 30},
  [413] = {.lex_state = 30},
  [414] = {.lex_state = 30},
  [415] = {.lex_state = 30},
  [416] = {.lex_state = 30},
  [417] = {.lex_state = 61},
  [418] = {.lex_state = 30},
  [419] = {.lex_state = 31},
  [420] = {.lex_state = 31},
  [421] = {.lex_state = 53},
  [422] = {.lex_state = 60},
  [423] = {.lex_state = 53},
  [424] = {.lex_state = 15},
  [425] = {.lex_state = 62},
  [426] = {.lex_state = 15},
  [427] = {.lex_state = 15},
  [428] = {.lex_state = 62},
  [429] = {.lex_state = 31},
  [430] = {.lex_state = 15},
  [431] = {.lex_state = 15},
  [432] = {.lex_state = 31},
  [433] = {.lex_state = 15},
  [434] = {.lex_state = 60},
  [435] = {.lex_state = 59},
  [436] = {.lex_state = 59},
  [437] = {.lex_state = 53},
  [438] = {.lex_state = 15},
  [439] = {.lex_state = 62},
  [440] = {.lex_state = 53},
  [441] = {.lex_state = 59},
  [442] = {.lex_state = 62},
  [443] = {.lex_state = 62},
  [444] = {.lex_state = 15},
  [445] = {.lex_state = 59},
  [446] = {.lex_state = 15},
  [447] = {.lex_state = 15},
  [448] = {.lex_state = 59},
  [449] = {.lex_state = 60},
  [450] = {.lex_state = 59},
  [451] = {.lex_state = 15},
  [452] = {.lex_state = 15},
  [453] = {.lex_state = 60},
  [454] = {.lex_state = 60},
  [455] = {.lex_state = 60},
  [456] = {.lex_state = 59},
  [457] = {.lex_state = 15},
  [458] = {.lex_state = 31},
  [459] = {.lex_state = 15},
  [460] = {.lex_state = 15},
  [461] = {.lex_state = 15},
  [462] = {.lex_state = 15},
  [463] = {.lex_state = 15},
  [464] = {.lex_state = 15},
  [465] = {.lex_state = 312},
  [466] = {.lex_state = 15},
  [467] = {.lex_state = 15},
  [468] = {.lex_state = 15},
  [469] = {.lex_state = 15},
  [470] = {.lex_state = 15},
  [471] = {.lex_state = 15},
  [472] = {.lex_state = 15},
  [473] = {.lex_state = 15},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 15},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 15},
  [478] = {.lex_state = 15},
  [479] = {.lex_state = 15},
  [480] = {.lex_state = 15},
  [481] = {.lex_state = 15},
  [482] = {.lex_state = 312},
  [483] = {.lex_state = 15},
  [484] = {.lex_state = 15},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 15},
  [488] = {.lex_state = 15},
  [489] = {.lex_state = 15},
  [490] = {.lex_state = 15},
  [491] = {.lex_state = 15},
  [492] = {.lex_state = 15},
  [493] = {.lex_state = 312},
  [494] = {.lex_state = 15},
  [495] = {.lex_state = 63},
  [496] = {.lex_state = 15},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 15},
  [499] = {.lex_state = 15},
  [500] = {.lex_state = 15},
  [501] = {.lex_state = 15},
  [502] = {.lex_state = 15},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 15},
  [505] = {.lex_state = 38},
  [506] = {.lex_state = 15},
  [507] = {.lex_state = 15},
  [508] = {.lex_state = 15},
  [509] = {.lex_state = 15},
  [510] = {.lex_state = 31},
  [511] = {.lex_state = 15},
  [512] = {.lex_state = 15},
  [513] = {.lex_state = 15},
  [514] = {.lex_state = 15},
  [515] = {.lex_state = 15},
  [516] = {.lex_state = 68},
  [517] = {.lex_state = 68},
  [518] = {.lex_state = 15},
  [519] = {.lex_state = 15},
  [520] = {.lex_state = 15},
  [521] = {.lex_state = 15},
  [522] = {.lex_state = 15},
  [523] = {.lex_state = 15},
  [524] = {.lex_state = 15},
  [525] = {.lex_state = 15},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 15},
  [528] = {.lex_state = 63},
  [529] = {.lex_state = 15},
  [530] = {.lex_state = 15},
  [531] = {.lex_state = 15},
  [532] = {.lex_state = 38},
  [533] = {.lex_state = 38},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 15},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 15},
  [539] = {.lex_state = 15},
  [540] = {.lex_state = 15},
  [541] = {.lex_state = 15},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 15},
  [544] = {.lex_state = 15},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 15},
  [547] = {.lex_state = 63},
  [548] = {.lex_state = 15},
  [549] = {.lex_state = 38},
  [550] = {.lex_state = 15},
  [551] = {.lex_state = 15},
  [552] = {.lex_state = 63},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 15},
  [555] = {.lex_state = 15},
  [556] = {.lex_state = 15},
  [557] = {.lex_state = 15},
  [558] = {.lex_state = 38},
  [559] = {.lex_state = 15},
  [560] = {.lex_state = 38},
  [561] = {.lex_state = 15},
  [562] = {.lex_state = 15},
  [563] = {.lex_state = 15},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 15},
  [566] = {.lex_state = 15},
  [567] = {.lex_state = 15},
  [568] = {.lex_state = 15},
  [569] = {.lex_state = 15},
  [570] = {.lex_state = 15},
  [571] = {.lex_state = 15},
  [572] = {.lex_state = 15},
  [573] = {.lex_state = 15},
  [574] = {.lex_state = 15},
  [575] = {.lex_state = 15},
  [576] = {.lex_state = 63},
  [577] = {.lex_state = 15},
  [578] = {.lex_state = 15},
  [579] = {.lex_state = 38},
  [580] = {.lex_state = 15},
  [581] = {.lex_state = 15},
  [582] = {.lex_state = 15},
  [583] = {.lex_state = 15},
  [584] = {.lex_state = 15},
  [585] = {.lex_state = 15},
  [586] = {.lex_state = 63},
  [587] = {.lex_state = 15},
  [588] = {.lex_state = 15},
  [589] = {.lex_state = 15},
  [590] = {.lex_state = 40},
  [591] = {.lex_state = 58},
  [592] = {.lex_state = 15},
  [593] = {.lex_state = 62},
  [594] = {.lex_state = 15},
  [595] = {.lex_state = 63},
  [596] = {.lex_state = 312},
  [597] = {.lex_state = 62},
  [598] = {.lex_state = 31},
  [599] = {.lex_state = 58},
  [600] = {.lex_state = 58},
  [601] = {.lex_state = 40},
  [602] = {.lex_state = 38},
  [603] = {.lex_state = 58},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 40},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 54},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 54},
  [613] = {.lex_state = 63},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 23},
  [616] = {.lex_state = 40},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 69},
  [619] = {.lex_state = 69},
  [620] = {.lex_state = 69},
  [621] = {.lex_state = 23},
  [622] = {.lex_state = 23},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 23},
  [625] = {.lex_state = 23},
  [626] = {.lex_state = 69},
  [627] = {.lex_state = 40},
  [628] = {.lex_state = 23},
  [629] = {.lex_state = 38},
  [630] = {.lex_state = 23},
  [631] = {.lex_state = 70},
  [632] = {.lex_state = 56},
  [633] = {.lex_state = 23},
  [634] = {.lex_state = 40},
  [635] = {.lex_state = 38},
  [636] = {.lex_state = 23},
  [637] = {.lex_state = 38},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 56},
  [641] = {.lex_state = 23},
  [642] = {.lex_state = 69},
  [643] = {.lex_state = 23},
  [644] = {.lex_state = 40},
  [645] = {.lex_state = 40},
  [646] = {.lex_state = 70},
  [647] = {.lex_state = 56},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 56},
  [651] = {.lex_state = 56},
  [652] = {.lex_state = 38},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 70},
  [655] = {.lex_state = 56},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 56},
  [659] = {.lex_state = 69},
  [660] = {.lex_state = 38},
  [661] = {.lex_state = 70},
  [662] = {.lex_state = 56},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 56},
  [666] = {.lex_state = 70},
  [667] = {.lex_state = 56},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 56},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 312},
  [688] = {.lex_state = 23},
  [689] = {.lex_state = 11},
  [690] = {.lex_state = 12},
  [691] = {.lex_state = 38},
  [692] = {.lex_state = 56},
  [693] = {.lex_state = 40},
  [694] = {.lex_state = 56},
  [695] = {.lex_state = 23},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 23},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 38},
  [701] = {.lex_state = 69},
  [702] = {.lex_state = 70},
  [703] = {.lex_state = 23},
  [704] = {.lex_state = 312},
  [705] = {.lex_state = 23},
  [706] = {.lex_state = 40},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 12},
  [709] = {.lex_state = 69},
  [710] = {.lex_state = 23},
  [711] = {.lex_state = 11},
  [712] = {.lex_state = 23},
  [713] = {.lex_state = 23},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 38},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 23},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 38},
  [720] = {.lex_state = 38},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 38},
  [723] = {.lex_state = 69},
  [724] = {.lex_state = 40},
  [725] = {.lex_state = 56},
  [726] = {.lex_state = 70},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 38},
  [729] = {.lex_state = 69},
  [730] = {.lex_state = 23},
  [731] = {.lex_state = 11},
  [732] = {.lex_state = 12},
  [733] = {.lex_state = 23},
  [734] = {.lex_state = 11},
  [735] = {.lex_state = 12},
  [736] = {.lex_state = 23},
  [737] = {.lex_state = 11},
  [738] = {.lex_state = 12},
  [739] = {.lex_state = 11},
  [740] = {.lex_state = 12},
  [741] = {.lex_state = 11},
  [742] = {.lex_state = 12},
  [743] = {.lex_state = 11},
  [744] = {.lex_state = 12},
  [745] = {.lex_state = 11},
  [746] = {.lex_state = 12},
  [747] = {.lex_state = 11},
  [748] = {.lex_state = 12},
  [749] = {.lex_state = 11},
  [750] = {.lex_state = 12},
  [751] = {.lex_state = 11},
  [752] = {.lex_state = 12},
  [753] = {.lex_state = 11},
  [754] = {.lex_state = 12},
  [755] = {.lex_state = 11},
  [756] = {.lex_state = 12},
  [757] = {.lex_state = 11},
  [758] = {.lex_state = 12},
  [759] = {.lex_state = 38},
  [760] = {.lex_state = 23},
  [761] = {.lex_state = 69},
  [762] = {.lex_state = 69},
  [763] = {.lex_state = 69},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 312},
  [766] = {.lex_state = 312},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 23},
  [769] = {.lex_state = 69},
  [770] = {.lex_state = 23},
  [771] = {.lex_state = 40},
  [772] = {.lex_state = 69},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 69},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 38},
  [777] = {.lex_state = 38},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 33},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 69},
  [782] = {.lex_state = 312},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 38},
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
    [anon_sym_DO] = ACTIONS(1),
    [anon_sym_FOR] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_FROMDOCKERFILE] = ACTIONS(1),
    [anon_sym_FUNCTION] = ACTIONS(1),
    [anon_sym_GITCLONE] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_ELSEIF] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_IMPORT] = ACTIONS(1),
    [anon_sym_AS] = ACTIONS(1),
    [anon_sym_LET] = ACTIONS(1),
    [anon_sym_LOCALLY] = ACTIONS(1),
    [anon_sym_RUN] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_SAVEARTIFACT] = ACTIONS(1),
    [anon_sym_SAVEIMAGE] = ACTIONS(1),
    [anon_sym_SET] = ACTIONS(1),
    [anon_sym_TRY] = ACTIONS(1),
    [anon_sym_FINALLY] = ACTIONS(1),
    [anon_sym_WAIT] = ACTIONS(1),
    [anon_sym_WITHDOCKER] = ACTIONS(1),
    [sym_expr] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_shell_fragment_token1] = ACTIONS(1),
    [aux_sym_shell_fragment_token3] = ACTIONS(1),
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
    [sym_source_file] = STATE(775),
    [sym_arg_command] = STATE(263),
    [sym_from_command] = STATE(263),
    [sym_project_command] = STATE(263),
    [sym_target] = STATE(263),
    [sym_version_command] = STATE(263),
    [sym_import_command] = STATE(263),
    [aux_sym_source_file_repeat1] = STATE(263),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_ARG] = ACTIONS(9),
    [anon_sym_FROM] = ACTIONS(11),
    [anon_sym_PROJECT] = ACTIONS(13),
    [anon_sym_VERSION] = ACTIONS(15),
    [anon_sym_IMPORT] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_ELSE,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(55), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(33), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(6), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [98] = 25,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(55), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(67), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(65), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(5), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [196] = 25,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(55), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(71), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(69), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(3), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [294] = 25,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(73), 1,
      anon_sym_ARG,
    ACTIONS(76), 1,
      anon_sym_FROM,
    ACTIONS(79), 1,
      anon_sym_CACHE,
    ACTIONS(82), 1,
      anon_sym_COPY,
    ACTIONS(85), 1,
      anon_sym_DO,
    ACTIONS(88), 1,
      anon_sym_FOR,
    ACTIONS(93), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(96), 1,
      anon_sym_FUNCTION,
    ACTIONS(99), 1,
      anon_sym_GITCLONE,
    ACTIONS(102), 1,
      anon_sym_IF,
    ACTIONS(105), 1,
      anon_sym_ELSE,
    ACTIONS(107), 1,
      anon_sym_IMPORT,
    ACTIONS(110), 1,
      anon_sym_LET,
    ACTIONS(113), 1,
      anon_sym_LOCALLY,
    ACTIONS(116), 1,
      anon_sym_RUN,
    ACTIONS(119), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(122), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(125), 1,
      anon_sym_SET,
    ACTIONS(128), 1,
      anon_sym_TRY,
    ACTIONS(131), 1,
      anon_sym_WAIT,
    ACTIONS(134), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(91), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(5), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [392] = 25,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(55), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(139), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(137), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(5), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [490] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(141), 1,
      anon_sym_END,
    ACTIONS(143), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(145), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [584] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(143), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(145), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(147), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [678] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(143), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(145), 1,
      anon_sym_SAVEIMAGE,
    STATE(721), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(29), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [772] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(91), 1,
      sym__dedent,
    ACTIONS(149), 1,
      anon_sym_ARG,
    ACTIONS(152), 1,
      anon_sym_FROM,
    ACTIONS(155), 1,
      anon_sym_CACHE,
    ACTIONS(158), 1,
      anon_sym_COPY,
    ACTIONS(161), 1,
      anon_sym_DO,
    ACTIONS(164), 1,
      anon_sym_FOR,
    ACTIONS(167), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(170), 1,
      anon_sym_FUNCTION,
    ACTIONS(173), 1,
      anon_sym_GITCLONE,
    ACTIONS(176), 1,
      anon_sym_IF,
    ACTIONS(179), 1,
      anon_sym_IMPORT,
    ACTIONS(182), 1,
      anon_sym_LET,
    ACTIONS(185), 1,
      anon_sym_LOCALLY,
    ACTIONS(188), 1,
      anon_sym_RUN,
    ACTIONS(191), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(194), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(197), 1,
      anon_sym_SET,
    ACTIONS(200), 1,
      anon_sym_TRY,
    ACTIONS(203), 1,
      anon_sym_WAIT,
    ACTIONS(206), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(10), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [866] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(143), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(145), 1,
      anon_sym_SAVEIMAGE,
    STATE(773), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(29), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [960] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(143), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(145), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(209), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [1054] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(143), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(145), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(211), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [1148] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(143), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(145), 1,
      anon_sym_SAVEIMAGE,
    STATE(716), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(29), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [1242] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(143), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(145), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(213), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [1336] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(143), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(145), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(215), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [1430] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(143), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(145), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(217), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [1524] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(219), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(221), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(223), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(20), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [1618] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(225), 1,
      anon_sym_ARG,
    ACTIONS(227), 1,
      anon_sym_FROM,
    ACTIONS(229), 1,
      anon_sym_CACHE,
    ACTIONS(231), 1,
      anon_sym_COPY,
    ACTIONS(233), 1,
      anon_sym_DO,
    ACTIONS(235), 1,
      anon_sym_FOR,
    ACTIONS(237), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(239), 1,
      anon_sym_FUNCTION,
    ACTIONS(241), 1,
      anon_sym_GITCLONE,
    ACTIONS(243), 1,
      anon_sym_IF,
    ACTIONS(245), 1,
      anon_sym_IMPORT,
    ACTIONS(247), 1,
      anon_sym_LET,
    ACTIONS(249), 1,
      anon_sym_LOCALLY,
    ACTIONS(251), 1,
      anon_sym_RUN,
    ACTIONS(253), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(255), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(257), 1,
      anon_sym_SET,
    ACTIONS(259), 1,
      anon_sym_TRY,
    ACTIONS(261), 1,
      anon_sym_WAIT,
    ACTIONS(263), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(265), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(10), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [1712] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(219), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(221), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(267), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(39), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [1806] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(143), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(145), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(269), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(7), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [1900] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(143), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(145), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(271), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(16), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [1994] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(143), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(145), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(273), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(12), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [2088] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(143), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(145), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(275), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [2182] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(143), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(145), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(277), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(13), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [2276] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(219), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(221), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(279), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(38), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [2370] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(143), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(145), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(281), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [2464] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(143), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(145), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(283), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(8), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [2558] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(143), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(145), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(285), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [2652] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(225), 1,
      anon_sym_ARG,
    ACTIONS(227), 1,
      anon_sym_FROM,
    ACTIONS(229), 1,
      anon_sym_CACHE,
    ACTIONS(231), 1,
      anon_sym_COPY,
    ACTIONS(233), 1,
      anon_sym_DO,
    ACTIONS(235), 1,
      anon_sym_FOR,
    ACTIONS(237), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(239), 1,
      anon_sym_FUNCTION,
    ACTIONS(241), 1,
      anon_sym_GITCLONE,
    ACTIONS(243), 1,
      anon_sym_IF,
    ACTIONS(245), 1,
      anon_sym_IMPORT,
    ACTIONS(247), 1,
      anon_sym_LET,
    ACTIONS(249), 1,
      anon_sym_LOCALLY,
    ACTIONS(251), 1,
      anon_sym_RUN,
    ACTIONS(253), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(255), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(257), 1,
      anon_sym_SET,
    ACTIONS(259), 1,
      anon_sym_TRY,
    ACTIONS(261), 1,
      anon_sym_WAIT,
    ACTIONS(263), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(287), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(19), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [2746] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(73), 1,
      anon_sym_ARG,
    ACTIONS(76), 1,
      anon_sym_FROM,
    ACTIONS(79), 1,
      anon_sym_CACHE,
    ACTIONS(82), 1,
      anon_sym_COPY,
    ACTIONS(85), 1,
      anon_sym_DO,
    ACTIONS(88), 1,
      anon_sym_FOR,
    ACTIONS(91), 1,
      anon_sym_END,
    ACTIONS(93), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(96), 1,
      anon_sym_FUNCTION,
    ACTIONS(99), 1,
      anon_sym_GITCLONE,
    ACTIONS(102), 1,
      anon_sym_IF,
    ACTIONS(107), 1,
      anon_sym_IMPORT,
    ACTIONS(110), 1,
      anon_sym_LET,
    ACTIONS(113), 1,
      anon_sym_LOCALLY,
    ACTIONS(116), 1,
      anon_sym_RUN,
    ACTIONS(125), 1,
      anon_sym_SET,
    ACTIONS(128), 1,
      anon_sym_TRY,
    ACTIONS(131), 1,
      anon_sym_WAIT,
    ACTIONS(134), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(289), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(292), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [2840] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(143), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(145), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(295), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(27), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [2934] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(143), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(145), 1,
      anon_sym_SAVEIMAGE,
    STATE(783), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(29), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [3028] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(143), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(145), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(297), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [3122] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(143), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(145), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(299), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [3216] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(143), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(145), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(301), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(35), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [3310] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(143), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(145), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(303), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(34), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [3404] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(219), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(221), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(305), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(39), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [3498] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(73), 1,
      anon_sym_ARG,
    ACTIONS(76), 1,
      anon_sym_FROM,
    ACTIONS(79), 1,
      anon_sym_CACHE,
    ACTIONS(82), 1,
      anon_sym_COPY,
    ACTIONS(85), 1,
      anon_sym_DO,
    ACTIONS(88), 1,
      anon_sym_FOR,
    ACTIONS(91), 1,
      anon_sym_FINALLY,
    ACTIONS(93), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(96), 1,
      anon_sym_FUNCTION,
    ACTIONS(99), 1,
      anon_sym_GITCLONE,
    ACTIONS(102), 1,
      anon_sym_IF,
    ACTIONS(107), 1,
      anon_sym_IMPORT,
    ACTIONS(110), 1,
      anon_sym_LET,
    ACTIONS(113), 1,
      anon_sym_LOCALLY,
    ACTIONS(116), 1,
      anon_sym_RUN,
    ACTIONS(125), 1,
      anon_sym_SET,
    ACTIONS(128), 1,
      anon_sym_TRY,
    ACTIONS(131), 1,
      anon_sym_WAIT,
    ACTIONS(134), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(307), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(310), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(39), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [3592] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(21), 1,
      anon_sym_ARG,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_CACHE,
    ACTIONS(27), 1,
      anon_sym_COPY,
    ACTIONS(29), 1,
      anon_sym_DO,
    ACTIONS(31), 1,
      anon_sym_FOR,
    ACTIONS(35), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(37), 1,
      anon_sym_FUNCTION,
    ACTIONS(39), 1,
      anon_sym_GITCLONE,
    ACTIONS(41), 1,
      anon_sym_IF,
    ACTIONS(45), 1,
      anon_sym_IMPORT,
    ACTIONS(47), 1,
      anon_sym_LET,
    ACTIONS(49), 1,
      anon_sym_LOCALLY,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SET,
    ACTIONS(59), 1,
      anon_sym_TRY,
    ACTIONS(61), 1,
      anon_sym_WAIT,
    ACTIONS(63), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(143), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(145), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(313), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(24), 21,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
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
  [3686] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(319), 1,
      anon_sym_COLON2,
    ACTIONS(321), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(317), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(315), 28,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [3734] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(327), 1,
      sym_image_name,
    ACTIONS(329), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(331), 1,
      sym_cache_hint,
    ACTIONS(333), 1,
      sym_push,
    STATE(44), 1,
      aux_sym_save_image_command_repeat1,
    STATE(66), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(63), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(325), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(323), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [3791] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(339), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(337), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(335), 28,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [3836] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(327), 1,
      sym_image_name,
    ACTIONS(329), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(333), 1,
      sym_push,
    STATE(50), 1,
      aux_sym_save_image_command_repeat1,
    STATE(66), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(71), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(343), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(341), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [3890] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(347), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(345), 28,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [3932] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(351), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(349), 28,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [3974] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(353), 1,
      sym_image_name,
    ACTIONS(355), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(357), 1,
      sym_cache_hint,
    ACTIONS(359), 1,
      sym_push,
    STATE(51), 1,
      aux_sym_save_image_command_repeat1,
    STATE(155), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(157), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(325), 6,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(323), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [4029] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(331), 1,
      sym_cache_hint,
    ACTIONS(361), 1,
      sym_image_name,
    ACTIONS(363), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(365), 1,
      sym_push,
    STATE(53), 1,
      aux_sym_save_image_command_repeat1,
    STATE(112), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(114), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(325), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(323), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [4084] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(331), 1,
      sym_cache_hint,
    ACTIONS(367), 1,
      sym_image_name,
    ACTIONS(369), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(371), 1,
      sym_push,
    STATE(52), 1,
      aux_sym_save_image_command_repeat1,
    STATE(108), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(109), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(325), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(323), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [4139] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(377), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(380), 1,
      sym_push,
    STATE(50), 1,
      aux_sym_save_image_command_repeat1,
    STATE(66), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(375), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(373), 18,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4187] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(353), 1,
      sym_image_name,
    ACTIONS(355), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(359), 1,
      sym_push,
    STATE(69), 1,
      aux_sym_save_image_command_repeat1,
    STATE(155), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(162), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(343), 6,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(341), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [4239] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(367), 1,
      sym_image_name,
    ACTIONS(369), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(371), 1,
      sym_push,
    STATE(74), 1,
      aux_sym_save_image_command_repeat1,
    STATE(108), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(122), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(343), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(341), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [4291] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(361), 1,
      sym_image_name,
    ACTIONS(363), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(365), 1,
      sym_push,
    STATE(64), 1,
      aux_sym_save_image_command_repeat1,
    STATE(112), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(119), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(343), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(341), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [4343] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(387), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(385), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(57), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(383), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [4386] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(387), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(391), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(60), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(389), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [4429] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(387), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(395), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(57), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(393), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [4472] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(401), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(399), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(57), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(397), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [4515] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(387), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(406), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(56), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(404), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [4558] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(387), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(410), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(54), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(408), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [4601] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(387), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(414), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(57), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(412), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [4644] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(387), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(418), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(57), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(416), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [4687] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(387), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(422), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(61), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(420), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [4730] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(327), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(72), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(426), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(424), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [4772] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(428), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(431), 1,
      sym_push,
    STATE(64), 1,
      aux_sym_save_image_command_repeat1,
    STATE(112), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(375), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(373), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [4818] = 3,
    ACTIONS(436), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(434), 25,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
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
  [4854] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(440), 8,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(438), 18,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4892] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(442), 1,
      anon_sym_COLON2,
    ACTIONS(444), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(315), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(317), 18,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4934] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(448), 8,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(446), 18,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4972] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(450), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(453), 1,
      sym_push,
    STATE(69), 1,
      aux_sym_save_image_command_repeat1,
    STATE(155), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(375), 6,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(373), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [5018] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(458), 8,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(456), 18,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [5056] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(327), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(72), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(462), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(460), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [5098] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(468), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(72), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(466), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(464), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [5140] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(473), 8,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(471), 18,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [5178] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(475), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(478), 1,
      sym_push,
    STATE(74), 1,
      aux_sym_save_image_command_repeat1,
    STATE(108), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(375), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(373), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [5224] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(485), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(483), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(481), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [5263] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(489), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(487), 23,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [5300] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(493), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(491), 23,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [5337] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(499), 1,
      anon_sym_ASLOCAL,
    ACTIONS(501), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(497), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(495), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [5378] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(505), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(503), 23,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [5415] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(446), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(448), 23,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [5452] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(507), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(335), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(337), 18,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [5491] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(513), 1,
      anon_sym_ASLOCAL,
    ACTIONS(515), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(511), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(509), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [5532] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(521), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(519), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(517), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [5571] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(456), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(458), 23,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [5608] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(525), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(523), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [5644] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(529), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(527), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [5680] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(391), 1,
      anon_sym_FROM,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(96), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(389), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5720] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(395), 1,
      anon_sym_FROM,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(95), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(393), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5760] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(406), 1,
      anon_sym_FROM,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(88), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(404), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5800] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(345), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(347), 18,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [5836] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(448), 8,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(446), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [5872] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(406), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(404), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [5908] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(535), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(533), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [5944] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(458), 8,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(456), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [5980] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(399), 1,
      anon_sym_FROM,
    ACTIONS(537), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(95), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(397), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6020] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(414), 1,
      anon_sym_FROM,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(95), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(412), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6060] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(542), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(540), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [6096] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(546), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(544), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [6132] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(550), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(548), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [6168] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(554), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(552), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [6204] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(558), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(556), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [6240] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(562), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(560), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [6276] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(566), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(564), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [6312] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(570), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(568), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [6348] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(448), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(446), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [6384] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(574), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(572), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [6420] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(578), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(576), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [6456] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(440), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(438), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [6492] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(367), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(123), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(426), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(424), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [6532] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(582), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(580), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [6568] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(422), 1,
      anon_sym_FROM,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(148), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(420), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6608] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(440), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(438), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [6644] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(586), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(584), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [6680] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(361), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(121), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(426), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(424), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [6720] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(590), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(588), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [6756] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(458), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(456), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [6792] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(594), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(592), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [6828] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(385), 1,
      anon_sym_FROM,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(95), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(383), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6868] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(361), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(121), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(462), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(460), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [6908] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(410), 1,
      anon_sym_FROM,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(118), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(408), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6948] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(596), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(121), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(466), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(464), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [6988] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(367), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(123), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(462), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(460), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [7028] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(599), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(123), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(466), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(464), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [7068] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(604), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(602), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [7104] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(608), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(606), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [7140] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(473), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(471), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [7176] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(612), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(610), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [7212] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(616), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(614), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [7248] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(620), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(618), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [7284] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(624), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(622), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [7320] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(473), 8,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(471), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7356] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(628), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(626), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [7392] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(458), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(456), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7428] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(632), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(630), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [7464] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(473), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(471), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7500] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(636), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(634), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [7536] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(640), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(638), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [7572] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(644), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(642), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [7608] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(648), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(646), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [7644] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(652), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(650), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [7680] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(656), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(654), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [7716] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(660), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(658), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [7752] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(664), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(662), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [7788] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(668), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(666), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [7824] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(672), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(670), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [7860] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(676), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(674), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [7896] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(680), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(678), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [7932] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(418), 1,
      anon_sym_FROM,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(95), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(416), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7972] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(682), 1,
      anon_sym_COLON2,
    ACTIONS(684), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(315), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(317), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [8012] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(686), 1,
      anon_sym_COLON2,
    ACTIONS(688), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(315), 6,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(317), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [8052] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(692), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(690), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [8088] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(694), 1,
      anon_sym_COLON2,
    ACTIONS(696), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(315), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(317), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [8128] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(700), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(698), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [8164] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(704), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(702), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [8200] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(440), 8,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(438), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [8236] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(708), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(706), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [8272] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(353), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(160), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(426), 6,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(424), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [8312] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(712), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(710), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [8348] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(716), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(714), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [8384] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(718), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(160), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(466), 6,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(464), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [8424] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(723), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(721), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [8460] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(353), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(160), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(462), 6,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(460), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [8500] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(727), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(725), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [8536] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(448), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(446), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [8572] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(731), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(729), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [8608] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(735), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(733), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [8644] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(739), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(737), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [8680] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(743), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(741), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [8716] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(349), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(351), 18,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [8752] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(747), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(745), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [8788] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(751), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(749), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [8824] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(753), 1,
      anon_sym_ASLOCAL,
    ACTIONS(755), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(511), 6,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(509), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [8863] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(757), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(335), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(337), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [8900] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(759), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(335), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(337), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [8937] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(761), 1,
      anon_sym_ASLOCAL,
    ACTIONS(763), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(497), 6,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(495), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [8976] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(513), 1,
      anon_sym_ASLOCAL,
    ACTIONS(515), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(511), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(509), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [9015] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(513), 1,
      anon_sym_ASLOCAL,
    ACTIONS(515), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(511), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(509), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [9054] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(499), 1,
      anon_sym_ASLOCAL,
    ACTIONS(501), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(497), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(495), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [9093] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(499), 1,
      anon_sym_ASLOCAL,
    ACTIONS(501), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(497), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(495), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [9132] = 4,
    ACTIONS(765), 1,
      aux_sym_branch_token1,
    ACTIONS(767), 1,
      sym__dedent,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(434), 21,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
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
  [9167] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(769), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(335), 6,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(337), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [9204] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(317), 1,
      anon_sym_FROM,
    ACTIONS(771), 1,
      anon_sym_COLON2,
    ACTIONS(773), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(315), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
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
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(349), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(351), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [9277] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(446), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(448), 21,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
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
  [9311] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(519), 1,
      anon_sym_FROM,
    ACTIONS(775), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(517), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9347] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(345), 6,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(347), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [9381] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(349), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(351), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [9415] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(345), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(347), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [9449] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(349), 6,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(351), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [9483] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(489), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(487), 21,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
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
  [9517] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(493), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(491), 21,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
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
  [9551] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(456), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(458), 21,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
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
  [9585] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(337), 1,
      anon_sym_FROM,
    ACTIONS(777), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(335), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9621] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(345), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(347), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [9655] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(505), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(503), 21,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
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
  [9689] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(483), 1,
      anon_sym_FROM,
    ACTIONS(779), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(481), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9725] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(700), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(698), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9758] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(731), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(729), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9791] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(668), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(666), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9824] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(644), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(642), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9857] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(648), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(646), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9890] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(582), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(580), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9923] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(590), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(588), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9956] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(347), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(345), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9989] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(578), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(576), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10022] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(570), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(568), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10055] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(562), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(560), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10088] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(781), 1,
      anon_sym_PLUS,
    ACTIONS(783), 1,
      sym_path,
    ACTIONS(785), 1,
      anon_sym_LPAREN,
    ACTIONS(789), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(791), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(793), 1,
      anon_sym_DASH_DASHplatform,
    STATE(248), 1,
      aux_sym_copy_command_repeat1,
    STATE(382), 1,
      aux_sym_copy_command_repeat2,
    STATE(623), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(600), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(272), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(787), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [10141] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(586), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(584), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10174] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(558), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(556), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10207] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(554), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(552), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10240] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(624), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(622), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10273] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(550), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(548), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10306] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(351), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(349), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10339] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(594), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(592), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10372] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(632), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(630), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10405] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(535), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(533), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10438] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(566), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(564), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10471] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(542), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(540), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10504] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(664), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(662), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10537] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(406), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(404), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10570] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(692), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(690), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10603] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(652), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(650), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10636] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(620), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(618), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10669] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(751), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(749), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10702] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(747), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(745), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10735] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(743), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(741), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10768] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(739), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(737), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10801] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(604), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(602), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10834] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(574), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(572), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10867] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(735), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(733), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10900] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(616), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(614), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10933] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(781), 1,
      anon_sym_PLUS,
    ACTIONS(783), 1,
      sym_path,
    ACTIONS(785), 1,
      anon_sym_LPAREN,
    ACTIONS(789), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(791), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(793), 1,
      anon_sym_DASH_DASHplatform,
    STATE(236), 1,
      aux_sym_copy_command_repeat1,
    STATE(367), 1,
      aux_sym_copy_command_repeat2,
    STATE(623), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(600), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(272), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(787), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [10986] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(640), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(638), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [11019] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(727), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(725), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [11052] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(781), 1,
      anon_sym_PLUS,
    ACTIONS(783), 1,
      sym_path,
    ACTIONS(785), 1,
      anon_sym_LPAREN,
    ACTIONS(789), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(791), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(793), 1,
      anon_sym_DASH_DASHplatform,
    STATE(256), 1,
      aux_sym_copy_command_repeat1,
    STATE(333), 1,
      aux_sym_copy_command_repeat2,
    STATE(623), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(600), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(272), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(787), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [11105] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(723), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(721), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [11138] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(716), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(714), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [11171] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(712), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(710), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [11204] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(708), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(706), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [11237] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(608), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(606), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [11270] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(704), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(702), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [11303] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(529), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(527), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [11336] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(680), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(678), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [11369] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(676), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(674), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [11402] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(612), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(610), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [11435] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(636), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(634), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [11468] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(781), 1,
      anon_sym_PLUS,
    ACTIONS(783), 1,
      sym_path,
    ACTIONS(785), 1,
      anon_sym_LPAREN,
    ACTIONS(789), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(791), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(793), 1,
      anon_sym_DASH_DASHplatform,
    STATE(256), 1,
      aux_sym_copy_command_repeat1,
    STATE(352), 1,
      aux_sym_copy_command_repeat2,
    STATE(623), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(600), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(272), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(787), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [11521] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(525), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(523), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [11554] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(672), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(670), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [11587] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(656), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(654), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [11620] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(660), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(658), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [11653] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(628), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(626), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [11686] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(546), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(544), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [11719] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(795), 1,
      anon_sym_DASH_DASH,
    ACTIONS(799), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(803), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(805), 1,
      anon_sym_DASH_DASHsecret,
    STATE(260), 1,
      aux_sym_run_command_repeat1,
    STATE(350), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(523), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(797), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(279), 2,
      sym_mount,
      sym_secret,
    ACTIONS(801), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [11764] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(809), 1,
      sym_path,
    ACTIONS(814), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(817), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(820), 1,
      anon_sym_DASH_DASHplatform,
    STATE(256), 1,
      aux_sym_copy_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(807), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    STATE(272), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(811), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [11805] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(799), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(803), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(805), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(823), 1,
      anon_sym_DASH_DASH,
    STATE(255), 1,
      aux_sym_run_command_repeat1,
    STATE(350), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(556), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(797), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(279), 2,
      sym_mount,
      sym_secret,
    ACTIONS(801), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [11850] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(799), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(803), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(805), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(825), 1,
      anon_sym_DASH_DASH,
    STATE(259), 1,
      aux_sym_run_command_repeat1,
    STATE(350), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(573), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(797), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(279), 2,
      sym_mount,
      sym_secret,
    ACTIONS(801), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [11895] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(799), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(803), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(805), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(827), 1,
      anon_sym_DASH_DASH,
    STATE(260), 1,
      aux_sym_run_command_repeat1,
    STATE(350), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(585), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(797), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(279), 2,
      sym_mount,
      sym_secret,
    ACTIONS(801), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [11940] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(836), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(839), 1,
      anon_sym_DASH_DASHsecret,
    STATE(260), 1,
      aux_sym_run_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(829), 2,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
    ACTIONS(831), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(279), 2,
      sym_mount,
      sym_secret,
    ACTIONS(833), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [11977] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(842), 1,
      sym_allow_privileged,
    ACTIONS(844), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(846), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(848), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(850), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(852), 1,
      anon_sym_DASH_DASHservice,
    STATE(265), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(718), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(354), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [12019] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(842), 1,
      sym_allow_privileged,
    ACTIONS(844), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(846), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(848), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(850), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(852), 1,
      anon_sym_DASH_DASHservice,
    STATE(264), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(707), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(354), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [12061] = 10,
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
      anon_sym_IMPORT,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(854), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(266), 7,
      sym_arg_command,
      sym_from_command,
      sym_project_command,
      sym_target,
      sym_version_command,
      sym_import_command,
      aux_sym_source_file_repeat1,
  [12099] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(842), 1,
      sym_allow_privileged,
    ACTIONS(844), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(846), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(848), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(850), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(852), 1,
      anon_sym_DASH_DASHservice,
    STATE(270), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(714), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(354), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [12141] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(51), 1,
      anon_sym_RUN,
    ACTIONS(842), 1,
      sym_allow_privileged,
    ACTIONS(844), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(846), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(848), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(850), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(852), 1,
      anon_sym_DASH_DASHservice,
    STATE(270), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(764), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(354), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [12183] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(856), 1,
      ts_builtin_sym_end,
    ACTIONS(858), 1,
      anon_sym_ARG,
    ACTIONS(861), 1,
      anon_sym_FROM,
    ACTIONS(864), 1,
      anon_sym_PROJECT,
    ACTIONS(867), 1,
      anon_sym_VERSION,
    ACTIONS(870), 1,
      anon_sym_IMPORT,
    ACTIONS(873), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(266), 7,
      sym_arg_command,
      sym_from_command,
      sym_project_command,
      sym_target,
      sym_version_command,
      sym_import_command,
      aux_sym_source_file_repeat1,
  [12221] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(446), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(448), 12,
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
  [12246] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(878), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(876), 12,
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
  [12271] = 10,
    ACTIONS(880), 1,
      anon_sym_PLUS,
    ACTIONS(882), 1,
      sym_image_name,
    ACTIONS(886), 1,
      anon_sym_DASH_DASHplatform,
    STATE(301), 1,
      sym_target_ref,
    STATE(365), 1,
      aux_sym_from_command_repeat1,
    STATE(510), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(884), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(362), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(888), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12308] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(890), 1,
      anon_sym_RUN,
    ACTIONS(892), 1,
      sym_allow_privileged,
    ACTIONS(895), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(898), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(901), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(904), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(907), 1,
      anon_sym_DASH_DASHservice,
    STATE(270), 1,
      aux_sym_with_docker_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(354), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [12347] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(912), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(910), 12,
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
  [12372] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(916), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(914), 12,
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
  [12397] = 10,
    ACTIONS(886), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(918), 1,
      anon_sym_PLUS,
    ACTIONS(920), 1,
      sym_image_name,
    STATE(58), 1,
      sym_target_ref,
    STATE(328), 1,
      aux_sym_from_command_repeat1,
    STATE(510), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(884), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(92), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(922), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12434] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(456), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(458), 12,
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
  [12459] = 10,
    ACTIONS(886), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(924), 1,
      anon_sym_PLUS,
    ACTIONS(926), 1,
      sym_image_name,
    STATE(89), 1,
      sym_target_ref,
    STATE(349), 1,
      aux_sym_from_command_repeat1,
    STATE(510), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(884), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(221), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(928), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12496] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(932), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(930), 12,
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
  [12521] = 8,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      anon_sym_SQUOTE,
    STATE(36), 1,
      sym__eol,
    STATE(296), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(934), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(326), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(940), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12553] = 8,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      anon_sym_SQUOTE,
    STATE(22), 1,
      sym__eol,
    STATE(282), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(934), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(326), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(942), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12585] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(946), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(944), 10,
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
  [12609] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(950), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(948), 10,
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
  [12633] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(954), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(952), 10,
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
  [12657] = 8,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym__eol,
    STATE(296), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(934), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(326), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(956), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12689] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(456), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(458), 10,
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
  [12713] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(446), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(448), 10,
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
  [12737] = 8,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym__eol,
    STATE(277), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(934), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(326), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(958), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12769] = 8,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      anon_sym_SQUOTE,
    STATE(40), 1,
      sym__eol,
    STATE(289), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(934), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(326), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(960), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12801] = 8,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      anon_sym_SQUOTE,
    STATE(37), 1,
      sym__eol,
    STATE(288), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(934), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(326), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(962), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12833] = 8,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      anon_sym_SQUOTE,
    STATE(32), 1,
      sym__eol,
    STATE(296), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(934), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(326), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(964), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12865] = 8,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      anon_sym_SQUOTE,
    STATE(23), 1,
      sym__eol,
    STATE(296), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(934), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(326), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(966), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12897] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(968), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(397), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(290), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(399), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [12924] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(971), 1,
      sym_identifier,
    ACTIONS(973), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(979), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(982), 1,
      anon_sym_DASH_DASHsep,
    STATE(291), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(976), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(360), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [12957] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(985), 1,
      sym_identifier,
    ACTIONS(987), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(991), 1,
      anon_sym_DASH_DASHsecret,
    STATE(315), 1,
      aux_sym__conditional_block_repeat1,
    STATE(604), 1,
      sym__conditional_block,
    STATE(605), 1,
      sym_else_if_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(409), 2,
      sym_mount,
      sym_secret,
    ACTIONS(989), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [12992] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(987), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(991), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(993), 1,
      sym_identifier,
    ACTIONS(997), 1,
      anon_sym_DASH_DASHsep,
    STATE(294), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(995), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(360), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [13025] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(987), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(991), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(997), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(999), 1,
      sym_identifier,
    STATE(291), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(995), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(360), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [13058] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(987), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(991), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(997), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(1001), 1,
      sym_identifier,
    STATE(297), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(995), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(360), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [13091] = 7,
    ACTIONS(1006), 1,
      anon_sym_DQUOTE,
    ACTIONS(1009), 1,
      anon_sym_SQUOTE,
    STATE(296), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1003), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(326), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(1012), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13120] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(987), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(991), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(997), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(1014), 1,
      sym_identifier,
    STATE(291), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(995), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(360), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [13153] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
    ACTIONS(1016), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(290), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(414), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [13179] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1018), 1,
      sym_path,
    ACTIONS(1020), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(1022), 1,
      anon_sym_DASHf,
    ACTIONS(1024), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(1026), 1,
      anon_sym_DASH_DASHplatform,
    STATE(308), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(435), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [13211] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1028), 1,
      anon_sym_COLON2,
    ACTIONS(1030), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(317), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [13237] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(404), 1,
      ts_builtin_sym_end,
    ACTIONS(1016), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(304), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(406), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [13263] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(985), 1,
      sym_identifier,
    ACTIONS(987), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(991), 1,
      anon_sym_DASH_DASHsecret,
    STATE(315), 1,
      aux_sym__conditional_block_repeat1,
    STATE(553), 1,
      sym__conditional_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(409), 2,
      sym_mount,
      sym_secret,
    ACTIONS(989), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [13295] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(985), 1,
      sym_identifier,
    ACTIONS(987), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(991), 1,
      anon_sym_DASH_DASHsecret,
    STATE(315), 1,
      aux_sym__conditional_block_repeat1,
    STATE(564), 1,
      sym__conditional_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(409), 2,
      sym_mount,
      sym_secret,
    ACTIONS(989), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [13327] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(393), 1,
      ts_builtin_sym_end,
    ACTIONS(1016), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(290), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(395), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [13353] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(389), 1,
      ts_builtin_sym_end,
    ACTIONS(1016), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(298), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(391), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [13379] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1020), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(1022), 1,
      anon_sym_DASHf,
    ACTIONS(1024), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(1026), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1032), 1,
      sym_path,
    STATE(307), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(435), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [13411] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1020), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(1022), 1,
      anon_sym_DASHf,
    ACTIONS(1024), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(1026), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1034), 1,
      sym_path,
    STATE(308), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(435), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [13443] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1036), 1,
      sym_path,
    ACTIONS(1038), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(1041), 1,
      anon_sym_DASHf,
    ACTIONS(1044), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(1047), 1,
      anon_sym_DASH_DASHplatform,
    STATE(308), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(435), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [13475] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1020), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(1022), 1,
      anon_sym_DASHf,
    ACTIONS(1024), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(1026), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1050), 1,
      sym_path,
    STATE(299), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(435), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [13507] = 4,
    ACTIONS(767), 1,
      ts_builtin_sym_end,
    ACTIONS(1052), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(434), 8,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
  [13529] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1054), 1,
      sym_path,
    ACTIONS(1056), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(1058), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(1060), 1,
      sym_persist,
    ACTIONS(1062), 1,
      anon_sym_DASH_DASHsharing,
    STATE(321), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(422), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [13560] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1056), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(1058), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(1060), 1,
      sym_persist,
    ACTIONS(1062), 1,
      anon_sym_DASH_DASHsharing,
    ACTIONS(1064), 1,
      sym_path,
    STATE(311), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(422), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [13591] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1066), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(335), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(337), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [13614] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1056), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(1058), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(1060), 1,
      sym_persist,
    ACTIONS(1062), 1,
      anon_sym_DASH_DASHsharing,
    ACTIONS(1068), 1,
      sym_path,
    STATE(320), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(422), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [13645] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(987), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(991), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(1070), 1,
      sym_identifier,
    STATE(316), 1,
      aux_sym__conditional_block_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(409), 2,
      sym_mount,
      sym_secret,
    ACTIONS(989), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [13674] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1072), 1,
      sym_identifier,
    ACTIONS(1074), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(1080), 1,
      anon_sym_DASH_DASHsecret,
    STATE(316), 1,
      aux_sym__conditional_block_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(409), 2,
      sym_mount,
      sym_secret,
    ACTIONS(1077), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [13703] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(503), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_DASH_DASH2,
    ACTIONS(505), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [13724] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(458), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(456), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [13745] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(448), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(446), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [13766] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1056), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(1058), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(1060), 1,
      sym_persist,
    ACTIONS(1062), 1,
      anon_sym_DASH_DASHsharing,
    ACTIONS(1083), 1,
      sym_path,
    STATE(321), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(422), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [13797] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1085), 1,
      sym_path,
    ACTIONS(1087), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(1090), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(1093), 1,
      sym_persist,
    ACTIONS(1096), 1,
      anon_sym_DASH_DASHsharing,
    STATE(321), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(422), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [13828] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(487), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(489), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [13849] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(345), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(347), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [13869] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(349), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(351), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [13889] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1099), 1,
      ts_builtin_sym_end,
    ACTIONS(1103), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1101), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [13911] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1105), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13926] = 4,
    STATE(138), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1107), 3,
      anon_sym_PLUS,
      sym_path,
      anon_sym_LPAREN,
    ACTIONS(1109), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13945] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(793), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1111), 1,
      anon_sym_PLUS,
    STATE(55), 1,
      sym_target_ref,
    STATE(404), 1,
      aux_sym_from_command_repeat1,
    STATE(510), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1113), 2,
      sym_allow_privileged,
      sym_pass_args,
  [13972] = 4,
    STATE(200), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1107), 3,
      anon_sym_PLUS,
      sym_path,
      anon_sym_LPAREN,
    ACTIONS(1115), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13991] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(503), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [14008] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1117), 1,
      sym_expr,
    ACTIONS(1119), 1,
      anon_sym_DQUOTE,
    ACTIONS(1121), 1,
      anon_sym_SQUOTE,
    ACTIONS(1123), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(541), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14033] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(952), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [14050] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(781), 1,
      anon_sym_PLUS,
    ACTIONS(785), 1,
      anon_sym_LPAREN,
    ACTIONS(1125), 1,
      sym_path,
    STATE(370), 1,
      aux_sym_copy_command_repeat2,
    STATE(623), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(600), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [14077] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1119), 1,
      anon_sym_DQUOTE,
    ACTIONS(1121), 1,
      anon_sym_SQUOTE,
    ACTIONS(1127), 1,
      sym_expr,
    ACTIONS(1129), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(588), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14102] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(948), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [14119] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1119), 1,
      anon_sym_DQUOTE,
    ACTIONS(1121), 1,
      anon_sym_SQUOTE,
    ACTIONS(1131), 1,
      sym_expr,
    ACTIONS(1133), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(555), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14144] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1135), 1,
      sym_path,
    STATE(361), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1137), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [14165] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1139), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [14182] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1141), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [14199] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(576), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(578), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [14218] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1119), 1,
      anon_sym_DQUOTE,
    ACTIONS(1121), 1,
      anon_sym_SQUOTE,
    ACTIONS(1143), 1,
      sym_expr,
    ACTIONS(1145), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(460), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14243] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1119), 1,
      anon_sym_DQUOTE,
    ACTIONS(1121), 1,
      anon_sym_SQUOTE,
    ACTIONS(1147), 1,
      sym_expr,
    ACTIONS(1149), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(463), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14268] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(568), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(570), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [14287] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1151), 1,
      sym_path,
    STATE(345), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1137), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [14308] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1153), 1,
      sym_path,
    STATE(361), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1137), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [14329] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(446), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14344] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(630), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(632), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [14363] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(456), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14378] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(793), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1155), 1,
      anon_sym_PLUS,
    STATE(87), 1,
      sym_target_ref,
    STATE(404), 1,
      aux_sym_from_command_repeat1,
    STATE(510), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1113), 2,
      sym_allow_privileged,
      sym_pass_args,
  [14405] = 4,
    STATE(368), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1157), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(1159), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14424] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(930), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [14441] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(781), 1,
      anon_sym_PLUS,
    ACTIONS(785), 1,
      anon_sym_LPAREN,
    ACTIONS(1161), 1,
      sym_path,
    STATE(370), 1,
      aux_sym_copy_command_repeat2,
    STATE(623), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(600), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [14468] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1163), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1165), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [14487] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1167), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [14504] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(458), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [14521] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1169), 1,
      sym_path,
    STATE(366), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1137), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [14542] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(448), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [14559] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1171), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [14576] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1173), 1,
      sym_path,
    STATE(337), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1137), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [14597] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1175), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [14614] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1177), 1,
      sym_path,
    STATE(361), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1179), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [14635] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(404), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(406), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [14654] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(458), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [14671] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1182), 1,
      sym_path,
    STATE(361), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1137), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [14692] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(781), 1,
      anon_sym_PLUS,
    ACTIONS(793), 1,
      anon_sym_DASH_DASHplatform,
    STATE(305), 1,
      sym_target_ref,
    STATE(404), 1,
      aux_sym_from_command_repeat1,
    STATE(510), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1113), 2,
      sym_allow_privileged,
      sym_pass_args,
  [14719] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1184), 1,
      sym_path,
    STATE(361), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1137), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [14740] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(781), 1,
      anon_sym_PLUS,
    ACTIONS(785), 1,
      anon_sym_LPAREN,
    ACTIONS(1186), 1,
      sym_path,
    STATE(370), 1,
      aux_sym_copy_command_repeat2,
    STATE(623), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(600), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [14767] = 4,
    STATE(368), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1188), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(1191), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14786] = 4,
    STATE(246), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1107), 3,
      anon_sym_PLUS,
      sym_path,
      anon_sym_LPAREN,
    ACTIONS(1193), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14805] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1195), 1,
      anon_sym_PLUS,
    ACTIONS(1198), 1,
      sym_path,
    ACTIONS(1201), 1,
      anon_sym_LPAREN,
    STATE(370), 1,
      aux_sym_copy_command_repeat2,
    STATE(623), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(600), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [14832] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(580), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(582), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [14851] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(548), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(550), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [14870] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(552), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(554), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [14889] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1119), 1,
      anon_sym_DQUOTE,
    ACTIONS(1121), 1,
      anon_sym_SQUOTE,
    ACTIONS(1204), 1,
      sym_expr,
    ACTIONS(1206), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(546), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14914] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1208), 1,
      sym_path,
    STATE(386), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1137), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [14935] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(540), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(542), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [14954] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1210), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [14971] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(556), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(558), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [14990] = 4,
    STATE(127), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1107), 3,
      anon_sym_PLUS,
      sym_path,
      anon_sym_LPAREN,
    ACTIONS(1212), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15009] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(448), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [15026] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1214), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1216), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [15045] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(781), 1,
      anon_sym_PLUS,
    ACTIONS(785), 1,
      anon_sym_LPAREN,
    ACTIONS(1218), 1,
      sym_path,
    STATE(370), 1,
      aux_sym_copy_command_repeat2,
    STATE(623), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(600), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [15072] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1220), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [15089] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1222), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1224), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [15108] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1226), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1228), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [15127] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1230), 1,
      sym_path,
    STATE(361), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1137), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [15148] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(560), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(562), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [15167] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1232), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [15184] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1234), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1236), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [15203] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1238), 1,
      sym_path,
    STATE(364), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1137), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [15224] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(533), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(535), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      anon_sym_IMPORT,
      sym_identifier,
  [15243] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1240), 1,
      anon_sym_DQUOTE,
    ACTIONS(1242), 1,
      anon_sym_SQUOTE,
    ACTIONS(1244), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(131), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15265] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1246), 1,
      anon_sym_DQUOTE,
    ACTIONS(1248), 1,
      anon_sym_SQUOTE,
    ACTIONS(1250), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(351), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15287] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1252), 1,
      anon_sym_DQUOTE,
    ACTIONS(1254), 1,
      anon_sym_SQUOTE,
    ACTIONS(1256), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(453), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15309] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1258), 1,
      anon_sym_DQUOTE,
    ACTIONS(1260), 1,
      anon_sym_SQUOTE,
    ACTIONS(1262), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(268), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15331] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1264), 1,
      anon_sym_DQUOTE,
    ACTIONS(1266), 1,
      anon_sym_SQUOTE,
    ACTIONS(1268), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(322), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15353] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1119), 1,
      anon_sym_DQUOTE,
    ACTIONS(1121), 1,
      anon_sym_SQUOTE,
    ACTIONS(1270), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(568), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15375] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1272), 1,
      anon_sym_DQUOTE,
    ACTIONS(1274), 1,
      anon_sym_SQUOTE,
    ACTIONS(1276), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(338), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15397] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1258), 1,
      anon_sym_DQUOTE,
    ACTIONS(1260), 1,
      anon_sym_SQUOTE,
    ACTIONS(1278), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(276), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15419] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1280), 1,
      anon_sym_DQUOTE,
    ACTIONS(1282), 1,
      anon_sym_SQUOTE,
    ACTIONS(1284), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(456), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15441] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1119), 1,
      anon_sym_DQUOTE,
    ACTIONS(1121), 1,
      anon_sym_SQUOTE,
    ACTIONS(1286), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(502), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15463] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1272), 1,
      anon_sym_DQUOTE,
    ACTIONS(1274), 1,
      anon_sym_SQUOTE,
    ACTIONS(1288), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(332), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15485] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1290), 1,
      anon_sym_DQUOTE,
    ACTIONS(1292), 1,
      anon_sym_SQUOTE,
    ACTIONS(1294), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(126), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15507] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1296), 1,
      anon_sym_PLUS,
    ACTIONS(1301), 1,
      anon_sym_DASH_DASHplatform,
    STATE(404), 1,
      aux_sym_from_command_repeat1,
    STATE(510), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1298), 2,
      sym_allow_privileged,
      sym_pass_args,
  [15531] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1119), 1,
      anon_sym_DQUOTE,
    ACTIONS(1121), 1,
      anon_sym_SQUOTE,
    ACTIONS(1304), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(538), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15553] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1306), 1,
      anon_sym_DQUOTE,
    ACTIONS(1308), 1,
      anon_sym_SQUOTE,
    ACTIONS(1310), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(73), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15575] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1312), 1,
      anon_sym_DQUOTE,
    ACTIONS(1314), 1,
      anon_sym_SQUOTE,
    ACTIONS(1316), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(190), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15597] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1318), 1,
      anon_sym_DQUOTE,
    ACTIONS(1320), 1,
      anon_sym_SQUOTE,
    ACTIONS(1322), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(135), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15619] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1324), 6,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      sym_ssh,
  [15635] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1326), 1,
      anon_sym_DQUOTE,
    ACTIONS(1328), 1,
      anon_sym_SQUOTE,
    ACTIONS(1330), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(280), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15657] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1326), 1,
      anon_sym_DQUOTE,
    ACTIONS(1328), 1,
      anon_sym_SQUOTE,
    ACTIONS(1332), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(281), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15679] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1246), 1,
      anon_sym_DQUOTE,
    ACTIONS(1248), 1,
      anon_sym_SQUOTE,
    ACTIONS(1334), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(388), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15701] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1258), 1,
      anon_sym_DQUOTE,
    ACTIONS(1260), 1,
      anon_sym_SQUOTE,
    ACTIONS(1336), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(271), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15723] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1338), 1,
      anon_sym_DQUOTE,
    ACTIONS(1340), 1,
      anon_sym_SQUOTE,
    ACTIONS(1342), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(76), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15745] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1272), 1,
      anon_sym_DQUOTE,
    ACTIONS(1274), 1,
      anon_sym_SQUOTE,
    ACTIONS(1344), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(335), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15767] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1119), 1,
      anon_sym_DQUOTE,
    ACTIONS(1121), 1,
      anon_sym_SQUOTE,
    ACTIONS(1346), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(498), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15789] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1348), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1350), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [15807] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1280), 1,
      anon_sym_DQUOTE,
    ACTIONS(1282), 1,
      anon_sym_SQUOTE,
    ACTIONS(1352), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(436), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15829] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1354), 1,
      anon_sym_PLUS,
    STATE(59), 1,
      sym_function_ref,
    STATE(429), 1,
      aux_sym_do_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1356), 2,
      sym_allow_privileged,
      sym_pass_args,
  [15850] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1358), 1,
      anon_sym_PLUS,
    STATE(111), 1,
      sym_function_ref,
    STATE(458), 1,
      aux_sym_do_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1356), 2,
      sym_allow_privileged,
      sym_pass_args,
  [15871] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(797), 1,
      aux_sym_shell_fragment_token3,
    STATE(350), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(584), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(799), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [15892] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1360), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1362), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [15909] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(797), 1,
      aux_sym_shell_fragment_token3,
    STATE(350), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(563), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(799), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [15930] = 4,
    ACTIONS(1364), 1,
      anon_sym_AS,
    STATE(372), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1366), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15947] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1368), 1,
      sym_path,
    ACTIONS(1370), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1372), 1,
      sym_keep_ts,
    STATE(428), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(593), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15970] = 4,
    ACTIONS(1374), 1,
      anon_sym_AS,
    STATE(93), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1376), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15987] = 4,
    ACTIONS(1378), 1,
      anon_sym_EQ,
    STATE(97), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1380), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16004] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1382), 1,
      sym_path,
    ACTIONS(1384), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1387), 1,
      sym_keep_ts,
    STATE(428), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(593), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16027] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1354), 1,
      anon_sym_PLUS,
    STATE(62), 1,
      sym_function_ref,
    STATE(458), 1,
      aux_sym_do_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1356), 2,
      sym_allow_privileged,
      sym_pass_args,
  [16048] = 4,
    ACTIONS(1390), 1,
      anon_sym_EQ,
    STATE(134), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1392), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16065] = 4,
    ACTIONS(1394), 1,
      anon_sym_AS,
    STATE(99), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1396), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16082] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1358), 1,
      anon_sym_PLUS,
    STATE(120), 1,
      sym_function_ref,
    STATE(420), 1,
      aux_sym_do_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1356), 2,
      sym_allow_privileged,
      sym_pass_args,
  [16103] = 4,
    ACTIONS(1398), 1,
      anon_sym_EQ,
    STATE(347), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1400), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16120] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(456), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(458), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [16137] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1402), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1404), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [16154] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(932), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(930), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [16171] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(797), 1,
      aux_sym_shell_fragment_token3,
    STATE(350), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(524), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(799), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [16192] = 4,
    ACTIONS(1406), 1,
      anon_sym_AS,
    STATE(391), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1408), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16209] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1370), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1372), 1,
      sym_keep_ts,
    ACTIONS(1410), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(593), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16232] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(797), 1,
      aux_sym_shell_fragment_token3,
    STATE(350), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(501), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(799), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [16253] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(456), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(458), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [16270] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1370), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1372), 1,
      sym_keep_ts,
    ACTIONS(1412), 1,
      sym_path,
    STATE(425), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(593), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16293] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1370), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1372), 1,
      sym_keep_ts,
    ACTIONS(1414), 1,
      sym_path,
    STATE(428), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(593), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16316] = 4,
    ACTIONS(1416), 1,
      anon_sym_AS,
    STATE(213), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1418), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16333] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(446), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(448), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [16350] = 4,
    ACTIONS(1420), 1,
      anon_sym_EQ,
    STATE(216), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1422), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16367] = 4,
    ACTIONS(1424), 1,
      anon_sym_AS,
    STATE(217), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1426), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16384] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1428), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1430), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [16401] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(446), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(448), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [16418] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1432), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1434), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [16435] = 4,
    ACTIONS(1436), 1,
      anon_sym_EQ,
    STATE(219), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1438), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16452] = 4,
    ACTIONS(1440), 1,
      anon_sym_EQ,
    STATE(376), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1442), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16469] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(878), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(876), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [16486] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1444), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1446), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [16503] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1448), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1450), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [16520] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1452), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1454), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [16537] = 3,
    STATE(136), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1456), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16551] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1458), 1,
      anon_sym_PLUS,
    STATE(458), 1,
      aux_sym_do_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1460), 2,
      sym_allow_privileged,
      sym_pass_args,
  [16569] = 3,
    STATE(202), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1463), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16583] = 3,
    STATE(205), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1465), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16597] = 3,
    STATE(206), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1467), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16611] = 3,
    STATE(207), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1469), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16625] = 3,
    STATE(210), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1471), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16639] = 3,
    STATE(211), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1473), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16653] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1016), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1475), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(290), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [16671] = 3,
    STATE(222), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1477), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16685] = 3,
    STATE(151), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1479), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16699] = 3,
    STATE(197), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1481), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16713] = 3,
    STATE(225), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1483), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16727] = 3,
    STATE(226), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1485), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16741] = 3,
    STATE(227), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1487), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16755] = 3,
    STATE(153), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1489), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16769] = 3,
    STATE(171), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1491), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16783] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1493), 1,
      anon_sym_END,
    ACTIONS(1495), 1,
      anon_sym_SAVEARTIFACT,
    STATE(476), 1,
      aux_sym_try_command_repeat1,
    STATE(610), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16803] = 3,
    STATE(228), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1497), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16817] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1499), 1,
      anon_sym_END,
    ACTIONS(1501), 1,
      anon_sym_SAVEARTIFACT,
    STATE(476), 1,
      aux_sym_try_command_repeat1,
    STATE(610), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16837] = 3,
    STATE(231), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1504), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16851] = 3,
    STATE(198), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1506), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16865] = 3,
    STATE(235), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1508), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16879] = 3,
    STATE(237), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1510), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16893] = 3,
    STATE(238), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1512), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16907] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1016), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1514), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(290), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [16925] = 3,
    STATE(170), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1516), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16939] = 3,
    STATE(168), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1518), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16953] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1495), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1520), 1,
      anon_sym_END,
    STATE(474), 1,
      aux_sym_try_command_repeat1,
    STATE(610), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16973] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1495), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1522), 1,
      anon_sym_END,
    STATE(476), 1,
      aux_sym_try_command_repeat1,
    STATE(610), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16993] = 3,
    STATE(167), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1524), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17007] = 3,
    STATE(239), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1526), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17021] = 3,
    STATE(26), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1528), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17035] = 3,
    STATE(166), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1530), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17049] = 3,
    STATE(242), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1532), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17063] = 3,
    STATE(244), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1534), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17077] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1016), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1536), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(482), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [17095] = 3,
    STATE(245), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1538), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17109] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1540), 1,
      sym_path,
    ACTIONS(1542), 1,
      sym_allow_privileged,
    STATE(438), 1,
      sym_earthfile_ref,
    STATE(528), 1,
      aux_sym_import_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17129] = 3,
    STATE(485), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1544), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17143] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1495), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1546), 1,
      anon_sym_END,
    STATE(486), 1,
      aux_sym_try_command_repeat1,
    STATE(610), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17163] = 3,
    STATE(250), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1548), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17177] = 3,
    STATE(535), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1550), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17191] = 3,
    STATE(165), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1552), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17205] = 3,
    STATE(252), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1554), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17219] = 3,
    STATE(251), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1556), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17233] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1558), 1,
      anon_sym_END,
    ACTIONS(1560), 1,
      anon_sym_ELSEIF,
    ACTIONS(1563), 1,
      anon_sym_ELSE,
    STATE(503), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17253] = 3,
    STATE(223), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1565), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17267] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1567), 1,
      sym_identifier,
    STATE(533), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1569), 2,
      sym_global,
      sym_required,
  [17285] = 3,
    STATE(163), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1571), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17299] = 3,
    STATE(161), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1573), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17313] = 3,
    STATE(201), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1575), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17327] = 3,
    STATE(542), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1577), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17341] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1579), 4,
      anon_sym_PLUS,
      sym_allow_privileged,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
  [17355] = 3,
    STATE(159), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1581), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17369] = 3,
    STATE(389), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1583), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17383] = 3,
    STATE(158), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1585), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17397] = 3,
    STATE(234), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1587), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17411] = 3,
    STATE(100), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1589), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17425] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(495), 1,
      anon_sym_END,
    ACTIONS(497), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(499), 1,
      anon_sym_ASLOCAL,
    ACTIONS(501), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17445] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(509), 1,
      anon_sym_END,
    ACTIONS(511), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(513), 1,
      anon_sym_ASLOCAL,
    ACTIONS(515), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17465] = 3,
    STATE(154), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1591), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17479] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1593), 5,
      anon_sym_AS,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17491] = 3,
    STATE(247), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1595), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17505] = 3,
    STATE(497), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1597), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17519] = 3,
    STATE(147), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1599), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17533] = 3,
    STATE(249), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1601), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17547] = 3,
    STATE(253), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1603), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17561] = 3,
    STATE(4), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1605), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17575] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1607), 1,
      anon_sym_END,
    ACTIONS(1609), 1,
      anon_sym_ELSEIF,
    ACTIONS(1611), 1,
      anon_sym_ELSE,
    STATE(503), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17595] = 3,
    STATE(212), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1613), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17609] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1540), 1,
      sym_path,
    ACTIONS(1542), 1,
      sym_allow_privileged,
    STATE(424), 1,
      sym_earthfile_ref,
    STATE(595), 1,
      aux_sym_import_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17629] = 3,
    STATE(325), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1615), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17643] = 3,
    STATE(224), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1617), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17657] = 3,
    STATE(232), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1619), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17671] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1621), 1,
      sym_identifier,
    STATE(579), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1569), 2,
      sym_global,
      sym_required,
  [17689] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1623), 1,
      sym_identifier,
    STATE(533), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1625), 2,
      sym_global,
      sym_required,
  [17707] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1495), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1628), 1,
      anon_sym_END,
    STATE(476), 1,
      aux_sym_try_command_repeat1,
    STATE(610), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17727] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1495), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1630), 1,
      anon_sym_END,
    STATE(534), 1,
      aux_sym_try_command_repeat1,
    STATE(610), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17747] = 3,
    STATE(146), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1632), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17761] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1495), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1634), 1,
      anon_sym_END,
    STATE(476), 1,
      aux_sym_try_command_repeat1,
    STATE(610), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17781] = 3,
    STATE(145), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1636), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17795] = 3,
    STATE(241), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1638), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17809] = 3,
    STATE(353), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1640), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17823] = 3,
    STATE(101), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1642), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17837] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1495), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1644), 1,
      anon_sym_END,
    STATE(537), 1,
      aux_sym_try_command_repeat1,
    STATE(610), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17857] = 3,
    STATE(102), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1646), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17871] = 3,
    STATE(373), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1648), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17885] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1609), 1,
      anon_sym_ELSEIF,
    ACTIONS(1650), 1,
      anon_sym_END,
    ACTIONS(1652), 1,
      anon_sym_ELSE,
    STATE(503), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17905] = 3,
    STATE(378), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1654), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17919] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1540), 1,
      sym_path,
    ACTIONS(1542), 1,
      sym_allow_privileged,
    STATE(447), 1,
      sym_earthfile_ref,
    STATE(552), 1,
      aux_sym_import_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17939] = 3,
    STATE(229), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1656), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17953] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1658), 1,
      sym_identifier,
    STATE(533), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1569), 2,
      sym_global,
      sym_required,
  [17971] = 3,
    STATE(384), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1660), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17985] = 3,
    STATE(387), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1662), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17999] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1540), 1,
      sym_path,
    ACTIONS(1542), 1,
      sym_allow_privileged,
    STATE(444), 1,
      sym_earthfile_ref,
    STATE(595), 1,
      aux_sym_import_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18019] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1609), 1,
      anon_sym_ELSEIF,
    ACTIONS(1664), 1,
      anon_sym_END,
    ACTIONS(1666), 1,
      anon_sym_ELSE,
    STATE(545), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18039] = 3,
    STATE(343), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1668), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18053] = 3,
    STATE(340), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1670), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18067] = 3,
    STATE(215), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1672), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18081] = 3,
    STATE(371), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1674), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18095] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1676), 1,
      sym_identifier,
    STATE(549), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1569), 2,
      sym_global,
      sym_required,
  [18113] = 3,
    STATE(254), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1678), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18127] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1680), 1,
      sym_identifier,
    STATE(505), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1569), 2,
      sym_global,
      sym_required,
  [18145] = 3,
    STATE(218), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1682), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18159] = 3,
    STATE(18), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1684), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18173] = 3,
    STATE(142), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1686), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18187] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1609), 1,
      anon_sym_ELSEIF,
    ACTIONS(1688), 1,
      anon_sym_END,
    ACTIONS(1690), 1,
      anon_sym_ELSE,
    STATE(526), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18207] = 3,
    STATE(2), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1692), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18221] = 3,
    STATE(98), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1694), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18235] = 3,
    STATE(103), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1696), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18249] = 3,
    STATE(141), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1698), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18263] = 3,
    STATE(113), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1700), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18277] = 3,
    STATE(140), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1702), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18291] = 3,
    STATE(209), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1704), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18305] = 3,
    STATE(115), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1706), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18319] = 3,
    STATE(117), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1708), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18333] = 3,
    STATE(139), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1710), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18347] = 3,
    STATE(124), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1712), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18361] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1540), 1,
      sym_path,
    ACTIONS(1542), 1,
      sym_allow_privileged,
    STATE(431), 1,
      sym_earthfile_ref,
    STATE(595), 1,
      aux_sym_import_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18381] = 3,
    STATE(125), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1714), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18395] = 3,
    STATE(104), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1716), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18409] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1718), 1,
      sym_identifier,
    STATE(533), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1569), 2,
      sym_global,
      sym_required,
  [18427] = 3,
    STATE(203), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1720), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18441] = 3,
    STATE(128), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1722), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18455] = 3,
    STATE(129), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1724), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18469] = 3,
    STATE(130), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1726), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18483] = 3,
    STATE(132), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1728), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18497] = 3,
    STATE(85), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1730), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18511] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1540), 1,
      sym_path,
    ACTIONS(1542), 1,
      sym_allow_privileged,
    STATE(426), 1,
      sym_earthfile_ref,
    STATE(576), 1,
      aux_sym_import_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18531] = 3,
    STATE(110), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1732), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18545] = 3,
    STATE(107), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1734), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18559] = 3,
    STATE(137), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1736), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18573] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1738), 1,
      sym_version_major_minor,
    ACTIONS(1740), 1,
      sym_feature_flag,
    STATE(601), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18590] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1744), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1742), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [18605] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(456), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18616] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1746), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1748), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [18631] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(446), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18642] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1750), 1,
      sym_path,
    ACTIONS(1752), 1,
      sym_allow_privileged,
    STATE(595), 1,
      aux_sym_import_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18659] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1016), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(465), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [18674] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1755), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1757), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [18689] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1759), 3,
      anon_sym_PLUS,
      sym_allow_privileged,
      sym_pass_args,
  [18702] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1763), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1761), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [18717] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1107), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1765), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [18732] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1767), 1,
      sym_version_major_minor,
    ACTIONS(1769), 1,
      sym_feature_flag,
    STATE(601), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18749] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1772), 3,
      sym_identifier,
      sym_global,
      sym_required,
  [18762] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1776), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1774), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [18777] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1780), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1778), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
  [18792] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1784), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1782), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
  [18807] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1786), 1,
      sym_version_major_minor,
    ACTIONS(1788), 1,
      sym_feature_flag,
    STATE(590), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18824] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1790), 1,
      anon_sym_PLUS,
    ACTIONS(1792), 1,
      anon_sym_LPAREN,
    STATE(339), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18841] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1794), 1,
      sym_image_name,
    STATE(383), 1,
      sym_image_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18855] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(781), 1,
      anon_sym_PLUS,
    STATE(614), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18869] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1796), 2,
      anon_sym_END,
      anon_sym_SAVEARTIFACT,
  [18881] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(781), 1,
      anon_sym_PLUS,
    STATE(596), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18895] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1798), 1,
      sym_image_name,
    STATE(782), 1,
      sym_image_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18909] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1800), 1,
      sym_path,
    ACTIONS(1802), 1,
      sym_allow_privileged,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18923] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1804), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18934] = 2,
    ACTIONS(1806), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18943] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1808), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18954] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1810), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18965] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1812), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18976] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1814), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18987] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1816), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18998] = 2,
    ACTIONS(1818), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19007] = 2,
    ACTIONS(1820), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19016] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1822), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19027] = 2,
    ACTIONS(1824), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19036] = 2,
    ACTIONS(1826), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19045] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1828), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19056] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1830), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19067] = 2,
    ACTIONS(1832), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19076] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1834), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19087] = 2,
    ACTIONS(1836), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19096] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1838), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19107] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1840), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19118] = 2,
    ACTIONS(1842), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19127] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1844), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19138] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1846), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19149] = 2,
    ACTIONS(1848), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19158] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1850), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19169] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1852), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19180] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1854), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19191] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1856), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19202] = 2,
    ACTIONS(1858), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19211] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1860), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19222] = 2,
    ACTIONS(1862), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19231] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1864), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19242] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1866), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19253] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1868), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19264] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1870), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19275] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1872), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19286] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1874), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19297] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1876), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19308] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1878), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19319] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1880), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19330] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1882), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19341] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1884), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19352] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1886), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19363] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1888), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19374] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1890), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19385] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1892), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19396] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1894), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19407] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1896), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19418] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1898), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19429] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1900), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19440] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1902), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19451] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1904), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19462] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1906), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19473] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1908), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19484] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1910), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19495] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1912), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19506] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1914), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19517] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1916), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19528] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1918), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19539] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1920), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19550] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1922), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19561] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1924), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19572] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1926), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19583] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1928), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19594] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1930), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19605] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1932), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19616] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1934), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19627] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1936), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19638] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1938), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19649] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1940), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19660] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1942), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19671] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1944), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19682] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1946), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19693] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1948), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19704] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1950), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19715] = 2,
    ACTIONS(1952), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19724] = 2,
    ACTIONS(1954), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19733] = 2,
    ACTIONS(1956), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19742] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1958), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19753] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1960), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19764] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1962), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19775] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1964), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19786] = 2,
    ACTIONS(1966), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19795] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1968), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19806] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1970), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19817] = 2,
    ACTIONS(1972), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19826] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1974), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19837] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1976), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19848] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1978), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19859] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1980), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19870] = 2,
    ACTIONS(1982), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19879] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1984), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19890] = 2,
    ACTIONS(1986), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19899] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1988), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19910] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1990), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19921] = 2,
    ACTIONS(1992), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19930] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1994), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19941] = 2,
    ACTIONS(1996), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19950] = 2,
    ACTIONS(1998), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19959] = 2,
    ACTIONS(2000), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19968] = 2,
    ACTIONS(2002), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19977] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2004), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19988] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2006), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19999] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2008), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20010] = 2,
    ACTIONS(2010), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20019] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2012), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20030] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2014), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20041] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2016), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20052] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2018), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20063] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2020), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20074] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2022), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20085] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2024), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20096] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2026), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20107] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2028), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20118] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2030), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20129] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2032), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20140] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2034), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20151] = 2,
    ACTIONS(2036), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20160] = 2,
    ACTIONS(2038), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20169] = 2,
    ACTIONS(2040), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20178] = 2,
    ACTIONS(2042), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20187] = 2,
    ACTIONS(2044), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20196] = 2,
    ACTIONS(2046), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20205] = 2,
    ACTIONS(2048), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20214] = 2,
    ACTIONS(2050), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20223] = 2,
    ACTIONS(2052), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20232] = 2,
    ACTIONS(2054), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20241] = 2,
    ACTIONS(2056), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20250] = 2,
    ACTIONS(2058), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20259] = 2,
    ACTIONS(2060), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20268] = 2,
    ACTIONS(2062), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20277] = 2,
    ACTIONS(2064), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20286] = 2,
    ACTIONS(2066), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20295] = 2,
    ACTIONS(2068), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20304] = 2,
    ACTIONS(2070), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20313] = 2,
    ACTIONS(2072), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20322] = 2,
    ACTIONS(2074), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20331] = 2,
    ACTIONS(2076), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20340] = 2,
    ACTIONS(2078), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20349] = 2,
    ACTIONS(2080), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20358] = 2,
    ACTIONS(2082), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20367] = 2,
    ACTIONS(2084), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20376] = 2,
    ACTIONS(2086), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20385] = 2,
    ACTIONS(2088), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20394] = 2,
    ACTIONS(2090), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20403] = 2,
    ACTIONS(2092), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20412] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2094), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20423] = 2,
    ACTIONS(2096), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20432] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2098), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20443] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2100), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20454] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2102), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20465] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2104), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20476] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2106), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20487] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2108), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20498] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2110), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20509] = 2,
    ACTIONS(2112), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20518] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2114), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20529] = 2,
    ACTIONS(2116), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [20538] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2118), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20549] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2120), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20560] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2122), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20571] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2124), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20582] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2126), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20593] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2128), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20604] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2130), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20615] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2132), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20626] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2134), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20637] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2136), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20648] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2138), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20659] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2140), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20670] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2142), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [20681] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2144), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 98,
  [SMALL_STATE(4)] = 196,
  [SMALL_STATE(5)] = 294,
  [SMALL_STATE(6)] = 392,
  [SMALL_STATE(7)] = 490,
  [SMALL_STATE(8)] = 584,
  [SMALL_STATE(9)] = 678,
  [SMALL_STATE(10)] = 772,
  [SMALL_STATE(11)] = 866,
  [SMALL_STATE(12)] = 960,
  [SMALL_STATE(13)] = 1054,
  [SMALL_STATE(14)] = 1148,
  [SMALL_STATE(15)] = 1242,
  [SMALL_STATE(16)] = 1336,
  [SMALL_STATE(17)] = 1430,
  [SMALL_STATE(18)] = 1524,
  [SMALL_STATE(19)] = 1618,
  [SMALL_STATE(20)] = 1712,
  [SMALL_STATE(21)] = 1806,
  [SMALL_STATE(22)] = 1900,
  [SMALL_STATE(23)] = 1994,
  [SMALL_STATE(24)] = 2088,
  [SMALL_STATE(25)] = 2182,
  [SMALL_STATE(26)] = 2276,
  [SMALL_STATE(27)] = 2370,
  [SMALL_STATE(28)] = 2464,
  [SMALL_STATE(29)] = 2558,
  [SMALL_STATE(30)] = 2652,
  [SMALL_STATE(31)] = 2746,
  [SMALL_STATE(32)] = 2840,
  [SMALL_STATE(33)] = 2934,
  [SMALL_STATE(34)] = 3028,
  [SMALL_STATE(35)] = 3122,
  [SMALL_STATE(36)] = 3216,
  [SMALL_STATE(37)] = 3310,
  [SMALL_STATE(38)] = 3404,
  [SMALL_STATE(39)] = 3498,
  [SMALL_STATE(40)] = 3592,
  [SMALL_STATE(41)] = 3686,
  [SMALL_STATE(42)] = 3734,
  [SMALL_STATE(43)] = 3791,
  [SMALL_STATE(44)] = 3836,
  [SMALL_STATE(45)] = 3890,
  [SMALL_STATE(46)] = 3932,
  [SMALL_STATE(47)] = 3974,
  [SMALL_STATE(48)] = 4029,
  [SMALL_STATE(49)] = 4084,
  [SMALL_STATE(50)] = 4139,
  [SMALL_STATE(51)] = 4187,
  [SMALL_STATE(52)] = 4239,
  [SMALL_STATE(53)] = 4291,
  [SMALL_STATE(54)] = 4343,
  [SMALL_STATE(55)] = 4386,
  [SMALL_STATE(56)] = 4429,
  [SMALL_STATE(57)] = 4472,
  [SMALL_STATE(58)] = 4515,
  [SMALL_STATE(59)] = 4558,
  [SMALL_STATE(60)] = 4601,
  [SMALL_STATE(61)] = 4644,
  [SMALL_STATE(62)] = 4687,
  [SMALL_STATE(63)] = 4730,
  [SMALL_STATE(64)] = 4772,
  [SMALL_STATE(65)] = 4818,
  [SMALL_STATE(66)] = 4854,
  [SMALL_STATE(67)] = 4892,
  [SMALL_STATE(68)] = 4934,
  [SMALL_STATE(69)] = 4972,
  [SMALL_STATE(70)] = 5018,
  [SMALL_STATE(71)] = 5056,
  [SMALL_STATE(72)] = 5098,
  [SMALL_STATE(73)] = 5140,
  [SMALL_STATE(74)] = 5178,
  [SMALL_STATE(75)] = 5224,
  [SMALL_STATE(76)] = 5263,
  [SMALL_STATE(77)] = 5300,
  [SMALL_STATE(78)] = 5337,
  [SMALL_STATE(79)] = 5378,
  [SMALL_STATE(80)] = 5415,
  [SMALL_STATE(81)] = 5452,
  [SMALL_STATE(82)] = 5491,
  [SMALL_STATE(83)] = 5532,
  [SMALL_STATE(84)] = 5571,
  [SMALL_STATE(85)] = 5608,
  [SMALL_STATE(86)] = 5644,
  [SMALL_STATE(87)] = 5680,
  [SMALL_STATE(88)] = 5720,
  [SMALL_STATE(89)] = 5760,
  [SMALL_STATE(90)] = 5800,
  [SMALL_STATE(91)] = 5836,
  [SMALL_STATE(92)] = 5872,
  [SMALL_STATE(93)] = 5908,
  [SMALL_STATE(94)] = 5944,
  [SMALL_STATE(95)] = 5980,
  [SMALL_STATE(96)] = 6020,
  [SMALL_STATE(97)] = 6060,
  [SMALL_STATE(98)] = 6096,
  [SMALL_STATE(99)] = 6132,
  [SMALL_STATE(100)] = 6168,
  [SMALL_STATE(101)] = 6204,
  [SMALL_STATE(102)] = 6240,
  [SMALL_STATE(103)] = 6276,
  [SMALL_STATE(104)] = 6312,
  [SMALL_STATE(105)] = 6348,
  [SMALL_STATE(106)] = 6384,
  [SMALL_STATE(107)] = 6420,
  [SMALL_STATE(108)] = 6456,
  [SMALL_STATE(109)] = 6492,
  [SMALL_STATE(110)] = 6532,
  [SMALL_STATE(111)] = 6568,
  [SMALL_STATE(112)] = 6608,
  [SMALL_STATE(113)] = 6644,
  [SMALL_STATE(114)] = 6680,
  [SMALL_STATE(115)] = 6720,
  [SMALL_STATE(116)] = 6756,
  [SMALL_STATE(117)] = 6792,
  [SMALL_STATE(118)] = 6828,
  [SMALL_STATE(119)] = 6868,
  [SMALL_STATE(120)] = 6908,
  [SMALL_STATE(121)] = 6948,
  [SMALL_STATE(122)] = 6988,
  [SMALL_STATE(123)] = 7028,
  [SMALL_STATE(124)] = 7068,
  [SMALL_STATE(125)] = 7104,
  [SMALL_STATE(126)] = 7140,
  [SMALL_STATE(127)] = 7176,
  [SMALL_STATE(128)] = 7212,
  [SMALL_STATE(129)] = 7248,
  [SMALL_STATE(130)] = 7284,
  [SMALL_STATE(131)] = 7320,
  [SMALL_STATE(132)] = 7356,
  [SMALL_STATE(133)] = 7392,
  [SMALL_STATE(134)] = 7428,
  [SMALL_STATE(135)] = 7464,
  [SMALL_STATE(136)] = 7500,
  [SMALL_STATE(137)] = 7536,
  [SMALL_STATE(138)] = 7572,
  [SMALL_STATE(139)] = 7608,
  [SMALL_STATE(140)] = 7644,
  [SMALL_STATE(141)] = 7680,
  [SMALL_STATE(142)] = 7716,
  [SMALL_STATE(143)] = 7752,
  [SMALL_STATE(144)] = 7788,
  [SMALL_STATE(145)] = 7824,
  [SMALL_STATE(146)] = 7860,
  [SMALL_STATE(147)] = 7896,
  [SMALL_STATE(148)] = 7932,
  [SMALL_STATE(149)] = 7972,
  [SMALL_STATE(150)] = 8012,
  [SMALL_STATE(151)] = 8052,
  [SMALL_STATE(152)] = 8088,
  [SMALL_STATE(153)] = 8128,
  [SMALL_STATE(154)] = 8164,
  [SMALL_STATE(155)] = 8200,
  [SMALL_STATE(156)] = 8236,
  [SMALL_STATE(157)] = 8272,
  [SMALL_STATE(158)] = 8312,
  [SMALL_STATE(159)] = 8348,
  [SMALL_STATE(160)] = 8384,
  [SMALL_STATE(161)] = 8424,
  [SMALL_STATE(162)] = 8460,
  [SMALL_STATE(163)] = 8500,
  [SMALL_STATE(164)] = 8536,
  [SMALL_STATE(165)] = 8572,
  [SMALL_STATE(166)] = 8608,
  [SMALL_STATE(167)] = 8644,
  [SMALL_STATE(168)] = 8680,
  [SMALL_STATE(169)] = 8716,
  [SMALL_STATE(170)] = 8752,
  [SMALL_STATE(171)] = 8788,
  [SMALL_STATE(172)] = 8824,
  [SMALL_STATE(173)] = 8863,
  [SMALL_STATE(174)] = 8900,
  [SMALL_STATE(175)] = 8937,
  [SMALL_STATE(176)] = 8976,
  [SMALL_STATE(177)] = 9015,
  [SMALL_STATE(178)] = 9054,
  [SMALL_STATE(179)] = 9093,
  [SMALL_STATE(180)] = 9132,
  [SMALL_STATE(181)] = 9167,
  [SMALL_STATE(182)] = 9204,
  [SMALL_STATE(183)] = 9243,
  [SMALL_STATE(184)] = 9277,
  [SMALL_STATE(185)] = 9311,
  [SMALL_STATE(186)] = 9347,
  [SMALL_STATE(187)] = 9381,
  [SMALL_STATE(188)] = 9415,
  [SMALL_STATE(189)] = 9449,
  [SMALL_STATE(190)] = 9483,
  [SMALL_STATE(191)] = 9517,
  [SMALL_STATE(192)] = 9551,
  [SMALL_STATE(193)] = 9585,
  [SMALL_STATE(194)] = 9621,
  [SMALL_STATE(195)] = 9655,
  [SMALL_STATE(196)] = 9689,
  [SMALL_STATE(197)] = 9725,
  [SMALL_STATE(198)] = 9758,
  [SMALL_STATE(199)] = 9791,
  [SMALL_STATE(200)] = 9824,
  [SMALL_STATE(201)] = 9857,
  [SMALL_STATE(202)] = 9890,
  [SMALL_STATE(203)] = 9923,
  [SMALL_STATE(204)] = 9956,
  [SMALL_STATE(205)] = 9989,
  [SMALL_STATE(206)] = 10022,
  [SMALL_STATE(207)] = 10055,
  [SMALL_STATE(208)] = 10088,
  [SMALL_STATE(209)] = 10141,
  [SMALL_STATE(210)] = 10174,
  [SMALL_STATE(211)] = 10207,
  [SMALL_STATE(212)] = 10240,
  [SMALL_STATE(213)] = 10273,
  [SMALL_STATE(214)] = 10306,
  [SMALL_STATE(215)] = 10339,
  [SMALL_STATE(216)] = 10372,
  [SMALL_STATE(217)] = 10405,
  [SMALL_STATE(218)] = 10438,
  [SMALL_STATE(219)] = 10471,
  [SMALL_STATE(220)] = 10504,
  [SMALL_STATE(221)] = 10537,
  [SMALL_STATE(222)] = 10570,
  [SMALL_STATE(223)] = 10603,
  [SMALL_STATE(224)] = 10636,
  [SMALL_STATE(225)] = 10669,
  [SMALL_STATE(226)] = 10702,
  [SMALL_STATE(227)] = 10735,
  [SMALL_STATE(228)] = 10768,
  [SMALL_STATE(229)] = 10801,
  [SMALL_STATE(230)] = 10834,
  [SMALL_STATE(231)] = 10867,
  [SMALL_STATE(232)] = 10900,
  [SMALL_STATE(233)] = 10933,
  [SMALL_STATE(234)] = 10986,
  [SMALL_STATE(235)] = 11019,
  [SMALL_STATE(236)] = 11052,
  [SMALL_STATE(237)] = 11105,
  [SMALL_STATE(238)] = 11138,
  [SMALL_STATE(239)] = 11171,
  [SMALL_STATE(240)] = 11204,
  [SMALL_STATE(241)] = 11237,
  [SMALL_STATE(242)] = 11270,
  [SMALL_STATE(243)] = 11303,
  [SMALL_STATE(244)] = 11336,
  [SMALL_STATE(245)] = 11369,
  [SMALL_STATE(246)] = 11402,
  [SMALL_STATE(247)] = 11435,
  [SMALL_STATE(248)] = 11468,
  [SMALL_STATE(249)] = 11521,
  [SMALL_STATE(250)] = 11554,
  [SMALL_STATE(251)] = 11587,
  [SMALL_STATE(252)] = 11620,
  [SMALL_STATE(253)] = 11653,
  [SMALL_STATE(254)] = 11686,
  [SMALL_STATE(255)] = 11719,
  [SMALL_STATE(256)] = 11764,
  [SMALL_STATE(257)] = 11805,
  [SMALL_STATE(258)] = 11850,
  [SMALL_STATE(259)] = 11895,
  [SMALL_STATE(260)] = 11940,
  [SMALL_STATE(261)] = 11977,
  [SMALL_STATE(262)] = 12019,
  [SMALL_STATE(263)] = 12061,
  [SMALL_STATE(264)] = 12099,
  [SMALL_STATE(265)] = 12141,
  [SMALL_STATE(266)] = 12183,
  [SMALL_STATE(267)] = 12221,
  [SMALL_STATE(268)] = 12246,
  [SMALL_STATE(269)] = 12271,
  [SMALL_STATE(270)] = 12308,
  [SMALL_STATE(271)] = 12347,
  [SMALL_STATE(272)] = 12372,
  [SMALL_STATE(273)] = 12397,
  [SMALL_STATE(274)] = 12434,
  [SMALL_STATE(275)] = 12459,
  [SMALL_STATE(276)] = 12496,
  [SMALL_STATE(277)] = 12521,
  [SMALL_STATE(278)] = 12553,
  [SMALL_STATE(279)] = 12585,
  [SMALL_STATE(280)] = 12609,
  [SMALL_STATE(281)] = 12633,
  [SMALL_STATE(282)] = 12657,
  [SMALL_STATE(283)] = 12689,
  [SMALL_STATE(284)] = 12713,
  [SMALL_STATE(285)] = 12737,
  [SMALL_STATE(286)] = 12769,
  [SMALL_STATE(287)] = 12801,
  [SMALL_STATE(288)] = 12833,
  [SMALL_STATE(289)] = 12865,
  [SMALL_STATE(290)] = 12897,
  [SMALL_STATE(291)] = 12924,
  [SMALL_STATE(292)] = 12957,
  [SMALL_STATE(293)] = 12992,
  [SMALL_STATE(294)] = 13025,
  [SMALL_STATE(295)] = 13058,
  [SMALL_STATE(296)] = 13091,
  [SMALL_STATE(297)] = 13120,
  [SMALL_STATE(298)] = 13153,
  [SMALL_STATE(299)] = 13179,
  [SMALL_STATE(300)] = 13211,
  [SMALL_STATE(301)] = 13237,
  [SMALL_STATE(302)] = 13263,
  [SMALL_STATE(303)] = 13295,
  [SMALL_STATE(304)] = 13327,
  [SMALL_STATE(305)] = 13353,
  [SMALL_STATE(306)] = 13379,
  [SMALL_STATE(307)] = 13411,
  [SMALL_STATE(308)] = 13443,
  [SMALL_STATE(309)] = 13475,
  [SMALL_STATE(310)] = 13507,
  [SMALL_STATE(311)] = 13529,
  [SMALL_STATE(312)] = 13560,
  [SMALL_STATE(313)] = 13591,
  [SMALL_STATE(314)] = 13614,
  [SMALL_STATE(315)] = 13645,
  [SMALL_STATE(316)] = 13674,
  [SMALL_STATE(317)] = 13703,
  [SMALL_STATE(318)] = 13724,
  [SMALL_STATE(319)] = 13745,
  [SMALL_STATE(320)] = 13766,
  [SMALL_STATE(321)] = 13797,
  [SMALL_STATE(322)] = 13828,
  [SMALL_STATE(323)] = 13849,
  [SMALL_STATE(324)] = 13869,
  [SMALL_STATE(325)] = 13889,
  [SMALL_STATE(326)] = 13911,
  [SMALL_STATE(327)] = 13926,
  [SMALL_STATE(328)] = 13945,
  [SMALL_STATE(329)] = 13972,
  [SMALL_STATE(330)] = 13991,
  [SMALL_STATE(331)] = 14008,
  [SMALL_STATE(332)] = 14033,
  [SMALL_STATE(333)] = 14050,
  [SMALL_STATE(334)] = 14077,
  [SMALL_STATE(335)] = 14102,
  [SMALL_STATE(336)] = 14119,
  [SMALL_STATE(337)] = 14144,
  [SMALL_STATE(338)] = 14165,
  [SMALL_STATE(339)] = 14182,
  [SMALL_STATE(340)] = 14199,
  [SMALL_STATE(341)] = 14218,
  [SMALL_STATE(342)] = 14243,
  [SMALL_STATE(343)] = 14268,
  [SMALL_STATE(344)] = 14287,
  [SMALL_STATE(345)] = 14308,
  [SMALL_STATE(346)] = 14329,
  [SMALL_STATE(347)] = 14344,
  [SMALL_STATE(348)] = 14363,
  [SMALL_STATE(349)] = 14378,
  [SMALL_STATE(350)] = 14405,
  [SMALL_STATE(351)] = 14424,
  [SMALL_STATE(352)] = 14441,
  [SMALL_STATE(353)] = 14468,
  [SMALL_STATE(354)] = 14487,
  [SMALL_STATE(355)] = 14504,
  [SMALL_STATE(356)] = 14521,
  [SMALL_STATE(357)] = 14542,
  [SMALL_STATE(358)] = 14559,
  [SMALL_STATE(359)] = 14576,
  [SMALL_STATE(360)] = 14597,
  [SMALL_STATE(361)] = 14614,
  [SMALL_STATE(362)] = 14635,
  [SMALL_STATE(363)] = 14654,
  [SMALL_STATE(364)] = 14671,
  [SMALL_STATE(365)] = 14692,
  [SMALL_STATE(366)] = 14719,
  [SMALL_STATE(367)] = 14740,
  [SMALL_STATE(368)] = 14767,
  [SMALL_STATE(369)] = 14786,
  [SMALL_STATE(370)] = 14805,
  [SMALL_STATE(371)] = 14832,
  [SMALL_STATE(372)] = 14851,
  [SMALL_STATE(373)] = 14870,
  [SMALL_STATE(374)] = 14889,
  [SMALL_STATE(375)] = 14914,
  [SMALL_STATE(376)] = 14935,
  [SMALL_STATE(377)] = 14954,
  [SMALL_STATE(378)] = 14971,
  [SMALL_STATE(379)] = 14990,
  [SMALL_STATE(380)] = 15009,
  [SMALL_STATE(381)] = 15026,
  [SMALL_STATE(382)] = 15045,
  [SMALL_STATE(383)] = 15072,
  [SMALL_STATE(384)] = 15089,
  [SMALL_STATE(385)] = 15108,
  [SMALL_STATE(386)] = 15127,
  [SMALL_STATE(387)] = 15148,
  [SMALL_STATE(388)] = 15167,
  [SMALL_STATE(389)] = 15184,
  [SMALL_STATE(390)] = 15203,
  [SMALL_STATE(391)] = 15224,
  [SMALL_STATE(392)] = 15243,
  [SMALL_STATE(393)] = 15265,
  [SMALL_STATE(394)] = 15287,
  [SMALL_STATE(395)] = 15309,
  [SMALL_STATE(396)] = 15331,
  [SMALL_STATE(397)] = 15353,
  [SMALL_STATE(398)] = 15375,
  [SMALL_STATE(399)] = 15397,
  [SMALL_STATE(400)] = 15419,
  [SMALL_STATE(401)] = 15441,
  [SMALL_STATE(402)] = 15463,
  [SMALL_STATE(403)] = 15485,
  [SMALL_STATE(404)] = 15507,
  [SMALL_STATE(405)] = 15531,
  [SMALL_STATE(406)] = 15553,
  [SMALL_STATE(407)] = 15575,
  [SMALL_STATE(408)] = 15597,
  [SMALL_STATE(409)] = 15619,
  [SMALL_STATE(410)] = 15635,
  [SMALL_STATE(411)] = 15657,
  [SMALL_STATE(412)] = 15679,
  [SMALL_STATE(413)] = 15701,
  [SMALL_STATE(414)] = 15723,
  [SMALL_STATE(415)] = 15745,
  [SMALL_STATE(416)] = 15767,
  [SMALL_STATE(417)] = 15789,
  [SMALL_STATE(418)] = 15807,
  [SMALL_STATE(419)] = 15829,
  [SMALL_STATE(420)] = 15850,
  [SMALL_STATE(421)] = 15871,
  [SMALL_STATE(422)] = 15892,
  [SMALL_STATE(423)] = 15909,
  [SMALL_STATE(424)] = 15930,
  [SMALL_STATE(425)] = 15947,
  [SMALL_STATE(426)] = 15970,
  [SMALL_STATE(427)] = 15987,
  [SMALL_STATE(428)] = 16004,
  [SMALL_STATE(429)] = 16027,
  [SMALL_STATE(430)] = 16048,
  [SMALL_STATE(431)] = 16065,
  [SMALL_STATE(432)] = 16082,
  [SMALL_STATE(433)] = 16103,
  [SMALL_STATE(434)] = 16120,
  [SMALL_STATE(435)] = 16137,
  [SMALL_STATE(436)] = 16154,
  [SMALL_STATE(437)] = 16171,
  [SMALL_STATE(438)] = 16192,
  [SMALL_STATE(439)] = 16209,
  [SMALL_STATE(440)] = 16232,
  [SMALL_STATE(441)] = 16253,
  [SMALL_STATE(442)] = 16270,
  [SMALL_STATE(443)] = 16293,
  [SMALL_STATE(444)] = 16316,
  [SMALL_STATE(445)] = 16333,
  [SMALL_STATE(446)] = 16350,
  [SMALL_STATE(447)] = 16367,
  [SMALL_STATE(448)] = 16384,
  [SMALL_STATE(449)] = 16401,
  [SMALL_STATE(450)] = 16418,
  [SMALL_STATE(451)] = 16435,
  [SMALL_STATE(452)] = 16452,
  [SMALL_STATE(453)] = 16469,
  [SMALL_STATE(454)] = 16486,
  [SMALL_STATE(455)] = 16503,
  [SMALL_STATE(456)] = 16520,
  [SMALL_STATE(457)] = 16537,
  [SMALL_STATE(458)] = 16551,
  [SMALL_STATE(459)] = 16569,
  [SMALL_STATE(460)] = 16583,
  [SMALL_STATE(461)] = 16597,
  [SMALL_STATE(462)] = 16611,
  [SMALL_STATE(463)] = 16625,
  [SMALL_STATE(464)] = 16639,
  [SMALL_STATE(465)] = 16653,
  [SMALL_STATE(466)] = 16671,
  [SMALL_STATE(467)] = 16685,
  [SMALL_STATE(468)] = 16699,
  [SMALL_STATE(469)] = 16713,
  [SMALL_STATE(470)] = 16727,
  [SMALL_STATE(471)] = 16741,
  [SMALL_STATE(472)] = 16755,
  [SMALL_STATE(473)] = 16769,
  [SMALL_STATE(474)] = 16783,
  [SMALL_STATE(475)] = 16803,
  [SMALL_STATE(476)] = 16817,
  [SMALL_STATE(477)] = 16837,
  [SMALL_STATE(478)] = 16851,
  [SMALL_STATE(479)] = 16865,
  [SMALL_STATE(480)] = 16879,
  [SMALL_STATE(481)] = 16893,
  [SMALL_STATE(482)] = 16907,
  [SMALL_STATE(483)] = 16925,
  [SMALL_STATE(484)] = 16939,
  [SMALL_STATE(485)] = 16953,
  [SMALL_STATE(486)] = 16973,
  [SMALL_STATE(487)] = 16993,
  [SMALL_STATE(488)] = 17007,
  [SMALL_STATE(489)] = 17021,
  [SMALL_STATE(490)] = 17035,
  [SMALL_STATE(491)] = 17049,
  [SMALL_STATE(492)] = 17063,
  [SMALL_STATE(493)] = 17077,
  [SMALL_STATE(494)] = 17095,
  [SMALL_STATE(495)] = 17109,
  [SMALL_STATE(496)] = 17129,
  [SMALL_STATE(497)] = 17143,
  [SMALL_STATE(498)] = 17163,
  [SMALL_STATE(499)] = 17177,
  [SMALL_STATE(500)] = 17191,
  [SMALL_STATE(501)] = 17205,
  [SMALL_STATE(502)] = 17219,
  [SMALL_STATE(503)] = 17233,
  [SMALL_STATE(504)] = 17253,
  [SMALL_STATE(505)] = 17267,
  [SMALL_STATE(506)] = 17285,
  [SMALL_STATE(507)] = 17299,
  [SMALL_STATE(508)] = 17313,
  [SMALL_STATE(509)] = 17327,
  [SMALL_STATE(510)] = 17341,
  [SMALL_STATE(511)] = 17355,
  [SMALL_STATE(512)] = 17369,
  [SMALL_STATE(513)] = 17383,
  [SMALL_STATE(514)] = 17397,
  [SMALL_STATE(515)] = 17411,
  [SMALL_STATE(516)] = 17425,
  [SMALL_STATE(517)] = 17445,
  [SMALL_STATE(518)] = 17465,
  [SMALL_STATE(519)] = 17479,
  [SMALL_STATE(520)] = 17491,
  [SMALL_STATE(521)] = 17505,
  [SMALL_STATE(522)] = 17519,
  [SMALL_STATE(523)] = 17533,
  [SMALL_STATE(524)] = 17547,
  [SMALL_STATE(525)] = 17561,
  [SMALL_STATE(526)] = 17575,
  [SMALL_STATE(527)] = 17595,
  [SMALL_STATE(528)] = 17609,
  [SMALL_STATE(529)] = 17629,
  [SMALL_STATE(530)] = 17643,
  [SMALL_STATE(531)] = 17657,
  [SMALL_STATE(532)] = 17671,
  [SMALL_STATE(533)] = 17689,
  [SMALL_STATE(534)] = 17707,
  [SMALL_STATE(535)] = 17727,
  [SMALL_STATE(536)] = 17747,
  [SMALL_STATE(537)] = 17761,
  [SMALL_STATE(538)] = 17781,
  [SMALL_STATE(539)] = 17795,
  [SMALL_STATE(540)] = 17809,
  [SMALL_STATE(541)] = 17823,
  [SMALL_STATE(542)] = 17837,
  [SMALL_STATE(543)] = 17857,
  [SMALL_STATE(544)] = 17871,
  [SMALL_STATE(545)] = 17885,
  [SMALL_STATE(546)] = 17905,
  [SMALL_STATE(547)] = 17919,
  [SMALL_STATE(548)] = 17939,
  [SMALL_STATE(549)] = 17953,
  [SMALL_STATE(550)] = 17971,
  [SMALL_STATE(551)] = 17985,
  [SMALL_STATE(552)] = 17999,
  [SMALL_STATE(553)] = 18019,
  [SMALL_STATE(554)] = 18039,
  [SMALL_STATE(555)] = 18053,
  [SMALL_STATE(556)] = 18067,
  [SMALL_STATE(557)] = 18081,
  [SMALL_STATE(558)] = 18095,
  [SMALL_STATE(559)] = 18113,
  [SMALL_STATE(560)] = 18127,
  [SMALL_STATE(561)] = 18145,
  [SMALL_STATE(562)] = 18159,
  [SMALL_STATE(563)] = 18173,
  [SMALL_STATE(564)] = 18187,
  [SMALL_STATE(565)] = 18207,
  [SMALL_STATE(566)] = 18221,
  [SMALL_STATE(567)] = 18235,
  [SMALL_STATE(568)] = 18249,
  [SMALL_STATE(569)] = 18263,
  [SMALL_STATE(570)] = 18277,
  [SMALL_STATE(571)] = 18291,
  [SMALL_STATE(572)] = 18305,
  [SMALL_STATE(573)] = 18319,
  [SMALL_STATE(574)] = 18333,
  [SMALL_STATE(575)] = 18347,
  [SMALL_STATE(576)] = 18361,
  [SMALL_STATE(577)] = 18381,
  [SMALL_STATE(578)] = 18395,
  [SMALL_STATE(579)] = 18409,
  [SMALL_STATE(580)] = 18427,
  [SMALL_STATE(581)] = 18441,
  [SMALL_STATE(582)] = 18455,
  [SMALL_STATE(583)] = 18469,
  [SMALL_STATE(584)] = 18483,
  [SMALL_STATE(585)] = 18497,
  [SMALL_STATE(586)] = 18511,
  [SMALL_STATE(587)] = 18531,
  [SMALL_STATE(588)] = 18545,
  [SMALL_STATE(589)] = 18559,
  [SMALL_STATE(590)] = 18573,
  [SMALL_STATE(591)] = 18590,
  [SMALL_STATE(592)] = 18605,
  [SMALL_STATE(593)] = 18616,
  [SMALL_STATE(594)] = 18631,
  [SMALL_STATE(595)] = 18642,
  [SMALL_STATE(596)] = 18659,
  [SMALL_STATE(597)] = 18674,
  [SMALL_STATE(598)] = 18689,
  [SMALL_STATE(599)] = 18702,
  [SMALL_STATE(600)] = 18717,
  [SMALL_STATE(601)] = 18732,
  [SMALL_STATE(602)] = 18749,
  [SMALL_STATE(603)] = 18762,
  [SMALL_STATE(604)] = 18777,
  [SMALL_STATE(605)] = 18792,
  [SMALL_STATE(606)] = 18807,
  [SMALL_STATE(607)] = 18824,
  [SMALL_STATE(608)] = 18841,
  [SMALL_STATE(609)] = 18855,
  [SMALL_STATE(610)] = 18869,
  [SMALL_STATE(611)] = 18881,
  [SMALL_STATE(612)] = 18895,
  [SMALL_STATE(613)] = 18909,
  [SMALL_STATE(614)] = 18923,
  [SMALL_STATE(615)] = 18934,
  [SMALL_STATE(616)] = 18943,
  [SMALL_STATE(617)] = 18954,
  [SMALL_STATE(618)] = 18965,
  [SMALL_STATE(619)] = 18976,
  [SMALL_STATE(620)] = 18987,
  [SMALL_STATE(621)] = 18998,
  [SMALL_STATE(622)] = 19007,
  [SMALL_STATE(623)] = 19016,
  [SMALL_STATE(624)] = 19027,
  [SMALL_STATE(625)] = 19036,
  [SMALL_STATE(626)] = 19045,
  [SMALL_STATE(627)] = 19056,
  [SMALL_STATE(628)] = 19067,
  [SMALL_STATE(629)] = 19076,
  [SMALL_STATE(630)] = 19087,
  [SMALL_STATE(631)] = 19096,
  [SMALL_STATE(632)] = 19107,
  [SMALL_STATE(633)] = 19118,
  [SMALL_STATE(634)] = 19127,
  [SMALL_STATE(635)] = 19138,
  [SMALL_STATE(636)] = 19149,
  [SMALL_STATE(637)] = 19158,
  [SMALL_STATE(638)] = 19169,
  [SMALL_STATE(639)] = 19180,
  [SMALL_STATE(640)] = 19191,
  [SMALL_STATE(641)] = 19202,
  [SMALL_STATE(642)] = 19211,
  [SMALL_STATE(643)] = 19222,
  [SMALL_STATE(644)] = 19231,
  [SMALL_STATE(645)] = 19242,
  [SMALL_STATE(646)] = 19253,
  [SMALL_STATE(647)] = 19264,
  [SMALL_STATE(648)] = 19275,
  [SMALL_STATE(649)] = 19286,
  [SMALL_STATE(650)] = 19297,
  [SMALL_STATE(651)] = 19308,
  [SMALL_STATE(652)] = 19319,
  [SMALL_STATE(653)] = 19330,
  [SMALL_STATE(654)] = 19341,
  [SMALL_STATE(655)] = 19352,
  [SMALL_STATE(656)] = 19363,
  [SMALL_STATE(657)] = 19374,
  [SMALL_STATE(658)] = 19385,
  [SMALL_STATE(659)] = 19396,
  [SMALL_STATE(660)] = 19407,
  [SMALL_STATE(661)] = 19418,
  [SMALL_STATE(662)] = 19429,
  [SMALL_STATE(663)] = 19440,
  [SMALL_STATE(664)] = 19451,
  [SMALL_STATE(665)] = 19462,
  [SMALL_STATE(666)] = 19473,
  [SMALL_STATE(667)] = 19484,
  [SMALL_STATE(668)] = 19495,
  [SMALL_STATE(669)] = 19506,
  [SMALL_STATE(670)] = 19517,
  [SMALL_STATE(671)] = 19528,
  [SMALL_STATE(672)] = 19539,
  [SMALL_STATE(673)] = 19550,
  [SMALL_STATE(674)] = 19561,
  [SMALL_STATE(675)] = 19572,
  [SMALL_STATE(676)] = 19583,
  [SMALL_STATE(677)] = 19594,
  [SMALL_STATE(678)] = 19605,
  [SMALL_STATE(679)] = 19616,
  [SMALL_STATE(680)] = 19627,
  [SMALL_STATE(681)] = 19638,
  [SMALL_STATE(682)] = 19649,
  [SMALL_STATE(683)] = 19660,
  [SMALL_STATE(684)] = 19671,
  [SMALL_STATE(685)] = 19682,
  [SMALL_STATE(686)] = 19693,
  [SMALL_STATE(687)] = 19704,
  [SMALL_STATE(688)] = 19715,
  [SMALL_STATE(689)] = 19724,
  [SMALL_STATE(690)] = 19733,
  [SMALL_STATE(691)] = 19742,
  [SMALL_STATE(692)] = 19753,
  [SMALL_STATE(693)] = 19764,
  [SMALL_STATE(694)] = 19775,
  [SMALL_STATE(695)] = 19786,
  [SMALL_STATE(696)] = 19795,
  [SMALL_STATE(697)] = 19806,
  [SMALL_STATE(698)] = 19817,
  [SMALL_STATE(699)] = 19826,
  [SMALL_STATE(700)] = 19837,
  [SMALL_STATE(701)] = 19848,
  [SMALL_STATE(702)] = 19859,
  [SMALL_STATE(703)] = 19870,
  [SMALL_STATE(704)] = 19879,
  [SMALL_STATE(705)] = 19890,
  [SMALL_STATE(706)] = 19899,
  [SMALL_STATE(707)] = 19910,
  [SMALL_STATE(708)] = 19921,
  [SMALL_STATE(709)] = 19930,
  [SMALL_STATE(710)] = 19941,
  [SMALL_STATE(711)] = 19950,
  [SMALL_STATE(712)] = 19959,
  [SMALL_STATE(713)] = 19968,
  [SMALL_STATE(714)] = 19977,
  [SMALL_STATE(715)] = 19988,
  [SMALL_STATE(716)] = 19999,
  [SMALL_STATE(717)] = 20010,
  [SMALL_STATE(718)] = 20019,
  [SMALL_STATE(719)] = 20030,
  [SMALL_STATE(720)] = 20041,
  [SMALL_STATE(721)] = 20052,
  [SMALL_STATE(722)] = 20063,
  [SMALL_STATE(723)] = 20074,
  [SMALL_STATE(724)] = 20085,
  [SMALL_STATE(725)] = 20096,
  [SMALL_STATE(726)] = 20107,
  [SMALL_STATE(727)] = 20118,
  [SMALL_STATE(728)] = 20129,
  [SMALL_STATE(729)] = 20140,
  [SMALL_STATE(730)] = 20151,
  [SMALL_STATE(731)] = 20160,
  [SMALL_STATE(732)] = 20169,
  [SMALL_STATE(733)] = 20178,
  [SMALL_STATE(734)] = 20187,
  [SMALL_STATE(735)] = 20196,
  [SMALL_STATE(736)] = 20205,
  [SMALL_STATE(737)] = 20214,
  [SMALL_STATE(738)] = 20223,
  [SMALL_STATE(739)] = 20232,
  [SMALL_STATE(740)] = 20241,
  [SMALL_STATE(741)] = 20250,
  [SMALL_STATE(742)] = 20259,
  [SMALL_STATE(743)] = 20268,
  [SMALL_STATE(744)] = 20277,
  [SMALL_STATE(745)] = 20286,
  [SMALL_STATE(746)] = 20295,
  [SMALL_STATE(747)] = 20304,
  [SMALL_STATE(748)] = 20313,
  [SMALL_STATE(749)] = 20322,
  [SMALL_STATE(750)] = 20331,
  [SMALL_STATE(751)] = 20340,
  [SMALL_STATE(752)] = 20349,
  [SMALL_STATE(753)] = 20358,
  [SMALL_STATE(754)] = 20367,
  [SMALL_STATE(755)] = 20376,
  [SMALL_STATE(756)] = 20385,
  [SMALL_STATE(757)] = 20394,
  [SMALL_STATE(758)] = 20403,
  [SMALL_STATE(759)] = 20412,
  [SMALL_STATE(760)] = 20423,
  [SMALL_STATE(761)] = 20432,
  [SMALL_STATE(762)] = 20443,
  [SMALL_STATE(763)] = 20454,
  [SMALL_STATE(764)] = 20465,
  [SMALL_STATE(765)] = 20476,
  [SMALL_STATE(766)] = 20487,
  [SMALL_STATE(767)] = 20498,
  [SMALL_STATE(768)] = 20509,
  [SMALL_STATE(769)] = 20518,
  [SMALL_STATE(770)] = 20529,
  [SMALL_STATE(771)] = 20538,
  [SMALL_STATE(772)] = 20549,
  [SMALL_STATE(773)] = 20560,
  [SMALL_STATE(774)] = 20571,
  [SMALL_STATE(775)] = 20582,
  [SMALL_STATE(776)] = 20593,
  [SMALL_STATE(777)] = 20604,
  [SMALL_STATE(778)] = 20615,
  [SMALL_STATE(779)] = 20626,
  [SMALL_STATE(780)] = 20637,
  [SMALL_STATE(781)] = 20648,
  [SMALL_STATE(782)] = 20659,
  [SMALL_STATE(783)] = 20670,
  [SMALL_STATE(784)] = 20681,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(784),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(606),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(779),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 2, .production_id = 27),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 2, .production_id = 27),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 4, .production_id = 40),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 4, .production_id = 40),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 3, .production_id = 40),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 3, .production_id = 40),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(532),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(273),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(312),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(233),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(419),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(295),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_block, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(309),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(566),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(439),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(302),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__target_block, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(586),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(776),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(567),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(258),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(356),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(42),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(777),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(489),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(25),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(262),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 3, .production_id = 27),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 3, .production_id = 27),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(558),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(275),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(314),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(208),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(432),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(293),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(306),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(559),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(442),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(303),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(547),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(629),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(561),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(257),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(359),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(47),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(652),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(562),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(15),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(261),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(390),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(49),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(344),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(48),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2, .production_id = 5),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2, .production_id = 5),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 5, .production_id = 18),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 5, .production_id = 18),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(736),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(66),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_command, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_command, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(634),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 2),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_command, 2),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_command, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_command, 4, .production_id = 5),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_command, 4, .production_id = 5),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_command, 3, .production_id = 5),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_command, 3, .production_id = 5),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(733),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(112),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(703),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(155),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 3, .production_id = 5),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3, .production_id = 5),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(67),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(705),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(108),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 29),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 29),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 4, .production_id = 19),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 4, .production_id = 19),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_ref, 2, .production_id = 3),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_ref, 2, .production_id = 3),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 2, .production_id = 22),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 2, .production_id = 22),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 30),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 30),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 44),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 44),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 42),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 4, .production_id = 42),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 43),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 43),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_command, 3),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_command, 3),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(693),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_command, 2),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_command, 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_command, 4, .production_id = 5),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_command, 4, .production_id = 5),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_command, 5, .production_id = 15),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_command, 5, .production_id = 15),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_locally_command, 2),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_locally_command, 2),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2, .production_id = 23),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2, .production_id = 23),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 17),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 17),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_command, 6, .production_id = 20),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_command, 6, .production_id = 20),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_command, 3, .production_id = 24),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_command, 3, .production_id = 24),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_dockerfile_command, 3, .production_id = 26),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_dockerfile_command, 3, .production_id = 26),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 3, .production_id = 28),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 3, .production_id = 28),
  [596] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(152),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(149),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait_command, 3),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wait_command, 3),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_command, 4, .production_id = 31),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_command, 4, .production_id = 31),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 4, .production_id = 32),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_command, 4, .production_id = 32),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_dockerfile_command, 4, .production_id = 34),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_dockerfile_command, 4, .production_id = 34),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 4, .production_id = 35),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_git_clone_command, 4, .production_id = 35),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 4, .production_id = 36),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 4, .production_id = 36),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 41),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 4, .production_id = 41),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait_command, 4),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wait_command, 4),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_docker_command, 4),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_docker_command, 4),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 5, .production_id = 45),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_command, 5, .production_id = 45),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 5, .production_id = 47),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_git_clone_command, 5, .production_id = 47),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 5, .production_id = 48),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 5, .production_id = 48),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_command, 5, .production_id = 19),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_command, 5, .production_id = 19),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 5, .production_id = 49),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 5, .production_id = 49),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 50),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 5, .production_id = 50),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 51),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 5, .production_id = 51),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_command, 5, .production_id = 19),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_command, 5, .production_id = 19),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_docker_command, 5, .production_id = 5),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_docker_command, 5, .production_id = 5),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 6, .production_id = 3),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 6, .production_id = 3),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 9, .production_id = 61),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 9, .production_id = 61),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 8, .production_id = 62),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 8, .production_id = 62),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 6, .production_id = 54),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 6, .production_id = 54),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 6, .production_id = 55),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 6, .production_id = 55),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 6),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 6),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 3),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 3),
  [718] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(150),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 58),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 58),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 7),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 7),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 7, .production_id = 59),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 7, .production_id = 59),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 7, .production_id = 60),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 7, .production_id = 60),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 7),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 7),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 58),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 58),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 7),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 7),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 61),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 61),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(272),
  [814] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(695),
  [817] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(625),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(768),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(279),
  [836] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(698),
  [839] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(615),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [858] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(560),
  [861] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(269),
  [864] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(784),
  [867] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(606),
  [870] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(495),
  [873] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(779),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(771),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(768),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4),
  [892] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(354),
  [895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(710),
  [898] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(712),
  [901] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(730),
  [904] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(713),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(717),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chown, 3, .production_id = 10),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chown, 3, .production_id = 10),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(706),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_platform, 3, .production_id = 10),
  [932] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_platform, 3, .production_id = 10),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(737),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(738),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_secret, 3, .production_id = 10),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_secret, 3, .production_id = 10),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount, 3, .production_id = 10),
  [954] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount, 3, .production_id = 10),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [968] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(724),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4),
  [973] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(621),
  [976] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(360),
  [979] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(622),
  [982] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(624),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1003] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 46), SHIFT_REPEAT(326),
  [1006] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 46), SHIFT_REPEAT(737),
  [1009] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 46), SHIFT_REPEAT(738),
  [1012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 46),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4),
  [1038] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(628),
  [1041] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(760),
  [1044] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(630),
  [1047] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(688),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4),
  [1074] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(621),
  [1077] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(409),
  [1080] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(622),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [1085] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 4),
  [1087] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(641),
  [1090] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(636),
  [1093] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(422),
  [1096] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(633),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 2),
  [1101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 3, .production_id = 2),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 1, .production_id = 33),
  [1107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 21),
  [1109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [1125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [1135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sep, 3, .production_id = 10),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 5, .production_id = 57),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [1153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [1159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [1161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [1165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 1, .production_id = 1),
  [1169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 8, .production_id = 63),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 1, .production_id = 1),
  [1177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4),
  [1179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(417),
  [1182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [1188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(368),
  [1191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [1193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [1195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 25), SHIFT_REPEAT(771),
  [1198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 25), SHIFT_REPEAT(600),
  [1201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 25), SHIFT_REPEAT(609),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compose, 3, .production_id = 10),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6, .production_id = 2),
  [1216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 6, .production_id = 2),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pull, 3, .production_id = 10),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [1224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 2),
  [1228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 5, .production_id = 2),
  [1230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 3, .production_id = 10),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [1236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [1238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [1286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [1288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4),
  [1298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(510),
  [1301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(768),
  [1304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 1, .production_id = 1),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [1332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [1334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [1344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [1346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [1348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [1352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cache_command_repeat1, 1, .production_id = 1),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 1, .production_id = 1),
  [1364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(700),
  [1366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [1368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(761),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(635),
  [1376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [1382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4),
  [1384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(643),
  [1387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(593),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [1394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [1396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [1402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 1, .production_id = 1),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 1, .production_id = 1),
  [1406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(715),
  [1408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [1410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(701),
  [1412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [1414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [1416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [1418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [1424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [1426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [1428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_target, 3, .production_id = 10),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_target, 3, .production_id = 10),
  [1432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_file, 3, .production_id = 10),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_file, 3, .production_id = 10),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [1444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 3),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [1448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sharing, 3),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sharing, 3),
  [1452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_build_arg, 5, .production_id = 53),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_build_arg, 5, .production_id = 53),
  [1456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_do_command_repeat1, 2, .production_id = 4),
  [1460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_do_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(598),
  [1463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [1465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [1467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [1469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [1471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [1473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [1481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [1483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [1485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [1487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [1491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [1499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_try_command_repeat1, 2, .production_id = 56),
  [1501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_try_command_repeat1, 2, .production_id = 56), SHIFT_REPEAT(375),
  [1504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [1508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [1510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [1512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [1526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [1528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [1530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [1532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [1534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [1550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [1552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [1554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [1558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 39),
  [1560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 39), SHIFT_REPEAT(292),
  [1563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 39),
  [1565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [1575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [1577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [1579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 1, .production_id = 1),
  [1581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [1585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [1587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [1591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [1593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_earthfile_ref, 1),
  [1595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [1597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [1599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [1601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [1605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [1613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [1615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [1617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [1619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4),
  [1625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(602),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [1638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [1640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [1642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [1648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [1654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [1656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [1662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [1668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [1670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [1674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [1684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [1686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [1692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [1694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [1696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [1698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [1700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [1702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [1704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [1706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [1708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [1710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [1712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [1714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [1716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [1722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [1724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [1726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [1728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [1730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [1732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [1734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [1736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 5),
  [1744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 5),
  [1746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [1748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [1750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_command_repeat1, 2, .production_id = 4),
  [1752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(613),
  [1755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 3, .production_id = 10),
  [1757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3, .production_id = 10),
  [1759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_do_command_repeat1, 1, .production_id = 1),
  [1761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 6),
  [1763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 6),
  [1765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 21),
  [1767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2),
  [1769] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2), SHIFT_REPEAT(601),
  [1772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 1, .production_id = 1),
  [1774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact, 3),
  [1776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact, 3),
  [1778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_block, 1, .production_id = 37),
  [1780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_block, 1, .production_id = 37),
  [1782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 38),
  [1784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 38),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_try_command_repeat1, 1, .production_id = 52),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_command_repeat1, 1, .production_id = 1),
  [1802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_command_repeat1, 1, .production_id = 1),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [1814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [1816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [1818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [1820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [1828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(728),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [1838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(722),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [1860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [1862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(772),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [1956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [1980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [1982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [1994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [1996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(763),
  [1998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [2000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [2002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [2010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [2022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(603),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [2028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [2034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [2036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [2038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [2040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [2042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [2044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [2046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [2048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [2050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [2052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [2054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [2056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(664),
  [2058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(668),
  [2060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [2062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [2064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(672),
  [2066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(673),
  [2068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [2070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(675),
  [2072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [2074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [2076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [2078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(679),
  [2080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [2082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [2084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(682),
  [2086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(683),
  [2088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [2090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(685),
  [2092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(686),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [2096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(729),
  [2098] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [2100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [2102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [2112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [2114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [2116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [2120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [2124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [2126] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [2138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
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
