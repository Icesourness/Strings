#include "../s21_string.h"

char* s21_ptoa(char* output, long long int num, lexeme_p_t* token) {
  char reversed[10000];
  char* p_reversed = reversed;
  if (num == 0) {                     // под вопросом
    s21_strncpy(output, "(nil)", 5);  // под вопросом
    output += 5;
    return --output;
  }
  for (; num != 0; p_reversed++) {
    switch (num % 16) {
      case 10:
        *p_reversed = 'a';
        break;
      case 11:
        *p_reversed = 'b';
        break;
      case 12:
        *p_reversed = 'c';
        break;
      case 13:
        *p_reversed = 'd';
        break;
      case 14:
        *p_reversed = 'e';
        break;
      case 15:
        *p_reversed = 'f';
        break;
      default:
        *p_reversed = (num % 16 + 48);
        break;
    }
    num /= 16;
  }
  *p_reversed = '\0';
  char pre_result[10000];
  reverse_str(reversed, pre_result);  // получение чистого числа
  s21_size_t len = s21_strlen(pre_result) + 2;
  if (token->width > 0) {
    if (token->plus || token->space) len++;
  }
  int count_zeros = (token->precision - s21_strlen(pre_result));
  if (count_zeros > 0) len += (count_zeros);
  if (token->zero) {
    /* занос пробелов в выход до числа */
    width_empty_before(&output, len, token);
    /* занос знака */
    sign_check(&output, '+', token);
    *output++ = '0';
    *output++ = 'x';
    /* занос нулей в выход по точности или по ширине*/
    width_or_precision_0_before(&output, len, count_zeros, token);
  } else {
    /* занос пробелов в выход до числа */
    width_empty_before(&output, len, token);
    /* занос знака */
    sign_check(&output, '+', token);
    *output++ = '0';
    *output++ = 'x';
    /* занос нулей в выход по точности */
    precision_0_before(&output, count_zeros, token);
  }
  /* занос чистого числа в выход */
  out(&output, pre_result);
  /* занос пробелов в выход после числа */
  minus_check(&output, len, token);
  return --output;
}