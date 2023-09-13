#include "../s21_string.h"

char* s21_u10toa(char* output, unsigned int num, lexeme_p_t* token) {
  if (num == 0 && token->precision == 0) return --output;
  char reversed[10000];
  char* p_reversed = reversed;
  if (num == 0) *p_reversed++ = '0';
  for (; num != 0; p_reversed++) {
    *p_reversed = (num % 10 + 48);
    num /= 10;
  }
  *p_reversed = '\0';
  char pre_result[10000];
  /* получение результата (разворот строки) */
  reverse_str(reversed, pre_result);
  s21_size_t len = s21_strlen(pre_result);
  int count_zeros = (token->precision - s21_strlen(pre_result));
  if (count_zeros > 0) len += count_zeros;
  if (token->zero) {
    /* занос пробелов в выход до числа */
    width_empty_before(&output, len, token);
    /* занос нулей в выход по точности или по ширине*/
    width_or_precision_0_before(&output, len, count_zeros, token);
  } else {
    /* занос пробелов в выход до числа */
    width_empty_before(&output, len, token);
    /* занос нулей в выход по точности */
    precision_0_before(&output, count_zeros, token);
  }
  /* занос чистого числа в выход */
  out(&output, pre_result);
  /* занос пробелов в выход после числа */
  minus_check(&output, len, token);
  return --output;
}