
// scanner.c

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <tree_sitter/parser.h>

enum { 
  INTERPOLATION_CONTENT 
};

void *tree_sitter_pyf_external_scanner_create() { return NULL; }

void tree_sitter_pyf_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_pyf_external_scanner_serialize(void *payload,
                                                    char *buffer) {
  return 0;
}

void tree_sitter_pyf_external_scanner_deserialize(void *payload,
                                                  const char *buffer,
                                                  unsigned length) {}

bool tree_sitter_pyf_external_scanner_scan(void *payload, TSLexer *lexer,
                                           const bool *valid_symbols) {
  if (valid_symbols[INTERPOLATION_CONTENT]) {
    lexer->result_symbol = INTERPOLATION_CONTENT;
    int nesting = 0;
    while (!(nesting == 0 && (lexer->lookahead == '}' || lexer->lookahead == ':'))) {
      if (lexer->lookahead == '{') {
        nesting++;
      }
      if (lexer->lookahead == '}') {
        nesting--;
      }
      if (nesting <= -1 || lexer->lookahead == 0) {
        return false;
      }
      lexer->advance(lexer, false);
    }
    return true;
  }
  return false;
}
