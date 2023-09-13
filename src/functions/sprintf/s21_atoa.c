#include "../s21_string.h"

char* s21_atoa(char* output, char* arg, lexeme_p_t* token) {
  char pre_result[10000];
  char* p_pre = pre_result;
  for (int count = 0; *arg != '\0'; p_pre++, arg++, count++) {
    if (token->precision == count) break;
    *p_pre = *arg;
  }
  *p_pre = '\0';
  s21_size_t len = s21_strlen(pre_result);
  /* занос пробелов в выход до строки */
  width_empty_before(&output, len, token);
  /* занос чистой строки в выход */
  out(&output, pre_result);
  /* занос пробелов в выход после строки */
  minus_check(&output, len, token);
  return --output;
}