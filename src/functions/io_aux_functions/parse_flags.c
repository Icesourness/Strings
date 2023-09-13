#include "../s21_string.h"

const char* parse_flags(const char* ptr, lexeme_p_t* token) {
  for (; (*ptr == '-') || (*ptr == '+') || (*ptr == ' ') || (*ptr == '#') ||
         (*ptr == '0');
       ptr++) {
    switch (*ptr) {
      case '-':
        token->minus = 1;
        break;
      case '+':
        token->plus = 1;
        break;
      case ' ':
        token->space = 1;
        break;
      case '#':
        token->hashtag = 1;
        break;
      case '0':
        token->zero = 1;
        break;
    }
  }
  return ptr;
}