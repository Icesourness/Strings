#include "../s21_string.h"

void s21_itoa_pos(char* result, int num) {
  char reversed[10000];
  char* p_reversed = reversed;
  if (num == 0) *p_reversed++ = '0';  // если число = 0
  for (; num != 0; p_reversed++) {    // любое другое число
    *p_reversed = (num % 10 + 48);
    num /= 10;
  }
  *p_reversed = '\0';
  /* получение результата (разворот строки) */
  reverse_str(reversed, result);
}