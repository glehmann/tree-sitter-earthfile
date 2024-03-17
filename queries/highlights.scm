(string_array "," @punctuation.delimiter)
(string_array ["[" "]"] @punctuation.bracket)

[
    "ARG"
    "AS LOCAL"
    "AS"
    "BUILD"
    "CACHE"
    "CMD"
    "COPY"
    "DO"
    "ENTRYPOINT"
    "ENV"
    "FROM"
    "FROM DOCKERFILE"
    "FUNCTION"
    "GIT CLONE"
    "HOST"
    "IMPORT"
    "LABEL"
    "LET"
    "PROJECT"
    "RUN"
    "SAVE ARTIFACT"
    "SAVE IMAGE"
    "SET"
    "USER"
    "VERSION"
    "VOLUME"
    "WITH DOCKER"
    "WORKDIR"
] @keyword

[
    "ELSE"
    "ELSE IF"
    "END"
    "FINALLY"
    "FOR"
    "IF"
    "IMPORT"
    "IN"
    "TRY"
] @keyword.control

[
    (comment)
    (line_continuation_comment)
] @comment

(line_continuation) @operator

(function_ref) @function

[
    (target_ref)
    (target_artifact)
    (image_spec)
] @module

(target (identifier) @module)

[
  (double_quoted_string)
  (single_quoted_string)
] @string
(unquoted_string) @string.special

(variable) @variable
(expansion ["$" "{" "}"] @punctuation.special)
(build_arg) @variable

[
    option: (_)
] @type

(path) @function.parameter

option: (_ "=" @operator)
(build_arg "=" @operator)
(arg_command "=" @operator)
(env_command "=" @operator)
(label "=" @operator)
(set_command "=" @operator)
(let_command "=" @operator)
