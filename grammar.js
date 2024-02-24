module.exports = grammar({
    name: 'earthfile',
    extras: ($) => [/\s+/, "\\\n"],
    rules: {
        // source_file: ($) => repeat(seq(choice($._command, $.comment), "\n")),
        // _command: ($) =>
        //     choice(
        //         $.from_instruction,
        //     ),
        version_command: $ => seq(
            'VERSION',
            field('feature', repeat($.earthly_feature)),
            field('version', $.earthly_version),
        ),
        earthly_version: $ => /[0-9]+\.[0-9]+/,
        earthly_feature: $ => /--[a-zA-Z0-9\-]+/,
    }
});
