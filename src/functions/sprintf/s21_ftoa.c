#include "../s21_string.h"

char* s21_ftoa(char* output, double num, lexeme_p_t* token) {
  char sign;
  if (num < 0) {  // установка знака для дальнейшего использования
    sign = '-';
    num = num * (-1);
  } else
    sign = '+';
  char reversed[10000];
  s21_ftoa_pos(reversed, num, token);
  char pre_result[10000];  // получение чистого числа
  reverse_str(reversed, pre_result);
  s21_size_t len = s21_strlen(pre_result);
  if (token->width > 0) {
    if (sign == '-' || token->plus || token->space) len++;
  }
  if (token->zero) {
    /* занос знака */
    sign_check(&output, sign, token);
    /* занос нулей в выход по ширине */
    width_0_before(&output, len, token);
  } else {
    /* занос пробелов в выход до числа */
    width_empty_before(&output, len, token);
    /* занос знака */
    sign_check(&output, sign, token);
  }
  /* занос чистого числа в выход */
  out(&output, pre_result);
  /* занос пробелов в выход после числа */
  minus_check(&output, len, token);
  return --output;
}