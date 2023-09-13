#include "../s21_string.h"

char* spec_s_empty(char* str, lexeme_p_t* token) {
  char* begin = str;
  if (token->width > 0) {
    for (int i = 0; (str[i] > 32) && (i < token->width); i++, begin++)
      ;
  } else {
    for (int i = 0; (str[i] > 32); i++, begin++)
      ;
  }
  return --begin;
}