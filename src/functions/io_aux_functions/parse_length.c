#include "../s21_string.h"

const char* parse_length(const char* ptr, lexeme_p_t* token) {
  for (; (*ptr == 'h') || (*ptr == 'l') || (*ptr == 'L'); ptr++) {
    switch (*ptr) {
      case 'h':
        token->length = 'h';
        break;
      case 'l':
        token->length = 'l';
        break;
      case 'L':
        token->length = 'L';
        break;
    }
  }
  return ptr;
}