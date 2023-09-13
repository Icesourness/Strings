#include "../s21_string.h"

char* s21_gtoa_long(char* output, long double num, lexeme_p_t* token) {
  long double num_copy1 = num;  // копия с сохраненным знаком
  char sign;
  if (num < 0) {  // установка знака для дальнейшего использования
    sign = '-';
    num = num * (-1);
  } else
    sign = '+';
  long double num_copy3 = num;  // копия с положительным знаком
  int accuracy = 6;
  if (token->precision != -1) accuracy = token->precision;
  int e = 0;
  long double num_copy2 = num;  // копия с положительным знаком
  if ((0 < num_copy2) && (num_copy2 < 1)) {
    while (trunc(num_copy2) < 1.0) {
      num_copy2 *= 10.0;
      e++;
    }
    e *= (-1);
  } else {
    while (num_copy2 >= 10.0) {
      num_copy2 /= 10.0;
      e++;
    }
  }
  if (accuracy > e && e >= (-4)) {
    /* вид float */
    char reversed[10000];
    s21_ftoa_pos_long(reversed, num_copy3, token);
    char pre_result[10000];  // получение чистого числа
    char* p_pre = pre_result;
    reverse_g_str(reversed, pre_result, token);
    s21_size_t size_before = 0;
    while (*p_pre == '0') p_pre++;
    for (int i = 0; p_pre[i] != '.' && p_pre[i] != '\0'; i++) size_before++;
    s21_gftoa_pos_long(pre_result, num, size_before, token);
    reverse_g_str(pre_result, reversed, token);
    s21_size_t len = s21_strlen(reversed);
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
    out(&output, reversed);
    /* занос пробелов в выход после числа */
    minus_check(&output, len, token);
  } else {
    /* вид экспоненты */
    char reversed[10000];
    s21_geftoa_long(reversed, num_copy1, token);
    /* занос получившейся строки в выход */
    out(&output, reversed);
  }
  return --output;
}