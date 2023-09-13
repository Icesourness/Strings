#include "../s21_string.h"

char* s21_geftoa_long(char* output, long double num, lexeme_p_t* token) {
  char sign;
  if (num < 0) {  // установка знака для дальнейшего использования
    sign = '-';
    num = num * (-1);
  } else
    sign = '+';
  int accuracy = 6;  // установка дефолтной точности e-6
  /* установка недефолтной точности, если таковая есть */
  if (token->precision != -1) accuracy = token->precision;
  /* поиск значения е и его знака */
  int e = 0;
  char e_sign = '+';
  char reversed[10000];
  s21_eftoa_pos_long(reversed, num, &e, &e_sign, token);
  char pre_result[10000];  // получение чистого числа
  reverse_g_str(reversed, pre_result, token);
  char* p_pre = pre_result;
  p_pre += (s21_strlen(pre_result));
  int new_acc = accuracy - (s21_strlen(pre_result));
  for (int i = 0; i < new_acc; i++, p_pre++) {
    *p_pre++ = '0';
  }
  *p_pre = '\0';
  char final_result[10000];
  char* p_final = final_result;
  p_pre = pre_result;
  *p_final++ = *p_pre++;
  if (!token->hashtag) {
    if (accuracy && token->precision != -1) *p_final++ = '.';
  } else
    *p_final++ = '.';
  for (int i = 0; i < (accuracy) && *p_pre != '\0'; i++, *p_pre++) {
    if (*p_pre != '.') *p_final++ = *p_pre;
  }
  if (token->specifier == 'g')
    *p_final++ = 'e';
  else if (token->specifier == 'G')
    *p_final++ = 'E';
  *p_final++ = e_sign;
  if (e == 0) {
    *(p_final++) = '0';
    *(p_final++) = '0';
    *p_final = '\0';
  } else if ((0 < e) && (e < 10)) {
    *(p_final++) = '0';
    s21_itoa_pos(p_final, e);
    for (; e % 10 != 0; e /= 10, p_final++)
      ;
    *p_final = '\0';
  } else {
    s21_itoa_pos(p_final, e);
    for (; e % 10 != 0; e /= 10, p_final++)
      ;
    *p_final = '\0';
  }
  s21_size_t len = s21_strlen(final_result);
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
  out(&output, final_result);
  /* занос пробелов в выход после числа */
  minus_check(&output, len, token);
  return --output;
}