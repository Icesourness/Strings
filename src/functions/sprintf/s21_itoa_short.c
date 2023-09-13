#include "../s21_string.h"

char* s21_itoa_short(char* output, short num, lexeme_p_t* token) {
  if (token->precision == 0 && num == 0) return --output;
  char sign;
  if (num < 0) {  // установка знака для дальнейшего использования
    sign = '-';
    num = num * (-1);
  } else
    sign = '+';
  char pre_result[10000];  // получение чистого числа
  s21_itoa_pos_short(pre_result, num);
  s21_size_t len = s21_strlen(pre_result);
  if (token->width > 0) {
    if (sign == '-' || token->plus || token->space) len++;
  }
  int count_zeros = (token->precision - s21_strlen(pre_result));
  if (count_zeros > 0) len += count_zeros;
  if (token->zero) {
    /* занос пробелов в выход до числа */
    width_empty_before(&output, len, token);
    /* занос знака */
    sign_check(&output, sign, token);
    /* занос нулей в выход по точности или по ширине*/
    width_or_precision_0_before(&output, len, count_zeros, token);
  } else {
    /* занос пробелов в выход до числа */
    width_empty_before(&output, len, token);
    /* занос знака */
    sign_check(&output, sign, token);
    /* занос нулей в выход по точности */
    precision_0_before(&output, count_zeros, token);
  }
  /* занос чистого числа в выход */
  out(&output, pre_result);
  /* занос пробелов в выход после числа */
  minus_check(&output, len, token);
  return --output;
}