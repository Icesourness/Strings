#include "../s21_string.h"

const char* parse_precision(const char* ptr, va_list* arguments,
                            lexeme_p_t* token) {
  char precision[8000];
  char* precision_ptr = precision;
  if (*ptr != '.') {
    token->precision = -1;
    return ptr;
  } else
    ptr++;
  for (; (*ptr == '*') || ('0' <= *ptr && *ptr <= '9');
       ptr++, precision_ptr++) {
    if (*ptr == '*') {
      token->precision = va_arg(*arguments, int);
      return ++ptr;
    } else if ('0' <= *ptr || *ptr <= '9')
      *precision_ptr = *ptr;
    else
      token->precision = -1;
  }
  *precision_ptr = '\0';
  token->precision = s21_atoi_pos(precision);
  return ptr;
}