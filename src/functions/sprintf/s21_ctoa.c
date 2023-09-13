#include "../s21_string.h"

char* s21_ctoa(char* output, va_list* argument, lexeme_p_t* token) {
  token->precision = 1;
  /* занос пробелов в выход до символа */
  width_empty_before(&output, 1, token);
  if (token->length == 'l') {
    wchar_t c = va_arg(*argument, wchar_t);
    /* занос чистого символа в выход */
    int count = wcstombs(output, &c, 512);
    output += count;
  } else {
    /* занос чистого символа в выход */
    *output++ = va_arg(*argument, int);
  }
  /* занос пробелов в выход после символа */
  minus_check(&output, 1, token);
  return --output;
}