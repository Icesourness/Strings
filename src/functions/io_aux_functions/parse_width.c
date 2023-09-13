#include "../s21_string.h"

const char* parse_width(const char* ptr, va_list* arguments,
                        lexeme_p_t* token) {
  char width[10000];
  char* width_ptr = width;
  for (; (*ptr == '*') || ('0' <= *ptr && *ptr <= '9'); ptr++, width_ptr++) {
    if (*ptr == '*') {
      token->width = va_arg(*arguments, int);
      return ++ptr;
    } else
      *width_ptr = *ptr;
  }
  if (*width) {
    *(width_ptr) = '\0';
    token->width = s21_atoi_pos(width);
  }
  return ptr;
}