#include "../s21_string.h"

char* s21_x16toa_short(char* output, unsigned short num, lexeme_p_t* token) {
  if (num == 0 && token->precision == 0) return --output;
  char reversed[10000];
  char* p_reversed = reversed;
  if (num == 0) *p_reversed++ = '0';
  for (; num != 0; p_reversed++) {
    switch (num % 16) {
      case 10:
        if (token->specifier == 'x')
          *p_reversed = 'a';
        else if (token->specifier == 'X')
          *p_reversed = 'A';
        break;
      case 11:
        if (token->specifier == 'x')
          *p_reversed = 'b';
        else if (token->specifier == 'X')
          *p_reversed = 'B';
        break;
      case 12:
        if (token->specifier == 'x')
          *p_reversed = 'c';
        else if (token->specifier == 'X')
          *p_reversed = 'C';
        break;
      case 13:
        if (token->specifier == 'x')
          *p_reversed = 'd';
        else if (token->specifier == 'X')
          *p_reversed = 'D';
        break;
      case 14:
        if (token->specifier == 'x')
          *p_reversed = 'e';
        else if (token->specifier == 'X')
          *p_reversed = 'E';
        break;
      case 15:
        if (token->specifier == 'x')
          *p_reversed = 'f';
        else if (token->specifier == 'X')
          *p_reversed = 'F';
        break;
      default:
        *p_reversed = (num % 16 + 48);
    }
    num /= 16;
  }
  *p_reversed = '\0';
  char pre_result[10000];
  /* получение результата (разворот строки) */
  reverse_str(reversed, pre_result);
  s21_size_t len = s21_strlen(pre_result);
  int count_zeros = (token->precision - s21_strlen(pre_result));
  if (count_zeros > 0) len += count_zeros;
  if (token->hashtag) len += 2;
  if (token->zero) {
    /* занос пробелов в выход до числа */
    width_empty_before(&output, len, token);
    /* занос 0x или 0X в выход*/
    hash_check(&output, token);
    /* занос нулей в выход по точности или по ширине*/
    width_or_precision_0_before(&output, len, count_zeros, token);
  } else {
    /* занос пробелов в выход до числа */
    width_empty_before(&output, len, token);
    /* занос 0x или 0X в выход*/
    hash_check(&output, token);
    /* занос нулей в выход по точности */
    precision_0_before(&output, count_zeros, token);
  }
  /* занос чистого числа в выход */
  out(&output, pre_result);
  /* занос пробелов в выход после числа */
  minus_check(&output, len, token);
  return --output;
}