/* eslint-disable max-len */
module.exports = grammar({
  name: 'pyf',

  // Didn't feel like making a regex to parse recursive brackets
  // so *instead* I learned how to make a basic parser in C
  externals: ($) => [$.interpolation_content],

  rules: {
    pyf_string: ($) =>
      repeat(
          choice($.interpolation, $.escaped_string_content, $.string_content),
      ),
    interpolation: ($) =>
      seq('{', $.interpolation_content, optional($.format_specifier), '}'),
    format_specifier: ($) =>
      seq(
          ':',
          choice(
              seq(optional('#'), $.representation),
              repeat1(choice($.padding, $.grouping, $.rounding)),
          ),
      ),
    grouping: ($) => seq(/[_,]/, optional($.representation)),
    padding: ($) =>
      seq(
          optional($.padding_character),
          choice('<', '>', '^', '='),
          $.value,
          optional($.representation),
      ),
    rounding: ($) => seq(optional(field('prefix_character', $.padding_character)), '.', $.value, optional($.representation)),
    representation: (_) => /[bcdeEfFgGnosxX%]/,
    padding_character: (_) => /[^:<>^=]/,
    value: ($) =>
      choice(field('number', /\d+/), field('arbitrary', $.interpolation)),
    escaped_string_content: (_) => /\\[^{}]/,
    string_content: (_) => /[^{}\\]+/,
  },
});
