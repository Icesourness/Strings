#include <math.h>

#include "../s21_string.h"

unsigned int s21_ato10_pos(char* num) {
  int amp = 1;
  unsigned int result = 0;
  if (s21_strlen(num)) {
    s21_size_t i = s21_strlen(num) - 1;
    for (; i > 0; i--, amp *= 10) result += (num[i] - 48) * amp;
    result += (num[i] - 48) * (amp);
  }
  return result;
}