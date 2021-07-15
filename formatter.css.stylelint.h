{
    "ignoreFiles": [
        "./src/webhint-theme/source/components/highlight/default.min.css",
        "src/webhint-theme/formatter/**/*",
        "src/webhint-theme/source/core/css/scan/*"
    ],
    "rules": {
        "at-rule-empty-line-before": ["always", {
            "except": ["blockless-after-blockless", "first-nested"],
            "ignore": ["after-comment"]
        }],
        "at-rule-semicolon-newline-after": "always",
        "block-closing-brace-newline-after": "always",
        "block-closing-brace-newline-before": "always-multi-line",
        "block-closing-brace-space-before": "always-single-line",
        "block-no-empty": true,
        "block-opening-brace-newline-after": "always-multi-line",
        "block-opening-brace-space-after": "always-single-line",
        "block-opening-brace-space-before": "always",
        "color-hex-case": "lower",
        "color-hex-length": "short",
        "color-named": "never",
        "color-no-invalid-hex": true,
        "comment-empty-line-before": ["always", {
            "ignore": ["stylelint-commands"]
        }],
        "comment-whitespace-inside": "always",
        "declaration-bang-space-after": "never",
        "declaration-bang-space-before": "always",
        "declaration-block-no-shorthand-property-overrides": true,
        "declaration-block-semicolon-newline-after": "always-multi-line",
        "declaration-block-semicolon-space-after": "always-single-line",
        "declaration-block-semicolon-space-before": "never",
        "declaration-block-single-line-max-declarations": 1,
        "declaration-block-trailing-semicolon": "always",
        "declaration-colon-newline-after": "always-multi-line",
        "declaration-colon-space-after": "always-single-line",
        "declaration-colon-space-before": "never",
        "function-blacklist": ["rgb", "rgba"],
        "function-calc-no-unspaced-operator": true,
        "function-comma-newline-after": "always-multi-line",
        "function-comma-space-after": "always-single-line",
        "function-comma-space-before": "never",
        "function-linear-gradient-no-nonstandard-direction": null,
        "function-max-empty-lines": 0,
        "function-parentheses-newline-inside": "always-multi-line",
        "function-parentheses-space-inside": "never-single-line",
        "function-url-quotes": "always",
        "function-whitespace-after": "always",
        "length-zero-no-unit": true,
        "max-empty-lines": 2,
        "media-feature-colon-space-after": "always",
        "media-feature-colon-space-before": "never",
        "media-feature-range-operator-space-after": "always",
        "media-feature-range-operator-space-before": "always",
        "media-query-list-comma-newline-after": "always-multi-line",
        "media-query-list-comma-space-after": "always-single-line",
        "media-query-list-comma-space-before": "never",
        "media-feature-parentheses-space-inside": "never",
        "no-eol-whitespace": true,
        "no-invalid-double-slash-comments": true,
        "no-missing-end-of-source-newline": null,
        "number-leading-zero": "never",
        "number-max-precision": 3,
        "number-no-trailing-zeros": true,
        "rule-empty-line-before": ["always-multi-line", {
            "ignore": ["after-comment"]
        }],
        "selector-combinator-space-after": "always",
        "selector-combinator-space-before": "always",
        "selector-list-comma-newline-after": "always-multi-line",
        "selector-list-comma-space-before": "never",
        "selector-pseudo-element-colon-notation": "double",
        "selector-type-case": "lower",
        "string-quotes": "double",
        "time-min-milliseconds": 100,
        "unit-no-unknown": true,
        "value-list-comma-newline-after": "always-multi-line",
        "value-list-comma-space-after": "always-single-line",
        "value-list-comma-space-before": "never"
    }
}