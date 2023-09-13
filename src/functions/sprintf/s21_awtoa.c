#include "../s21_string.h"

char* s21_awtoa(char* output, va_list* arguments, lexeme_p_t* token) {
  char pre_result[10000];
  int count = wcstombs(pre_result, va_arg(*arguments, wchar_t*), 512);
  /* занос пробелов в выход до строки */
  width_empty_before(&output, count, token);
  /* занос чистой строки в выход */
  out(&output, pre_result);
  /* занос пробелов в выход после строки */
  minus_check(&output, count, token);
  return --output;
}