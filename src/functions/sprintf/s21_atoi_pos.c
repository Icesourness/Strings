#include "../s21_string.h"

int s21_atoi_pos(const char* num) {
  int amp = 1;
  int result = 0;
  if (s21_strlen(num)) {
    s21_size_t i = s21_strlen(num) - 1;
    for (; i > 0; i--, amp *= 10) result += (num[i] - 48) * amp;
    result += (num[i] - 48) * (amp);
  }
  return result;
}