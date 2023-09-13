#include <math.h>
#include <stdio.h>

#include "../s21_string.h"

unsigned int s21_ato16_pos(char* num) {
  int amp = 1;
  unsigned int result = 0;
  if (s21_strlen(num)) {
    for (s21_size_t i = s21_strlen(num); i > 0; i--, amp *= 16) {
      int res;
      if (('A' <= num[i - 1]) && (num[i - 1] <= 'F'))
        res = num[i - 1] - 55;
      else if (('a' <= num[i - 1]) && (num[i - 1] <= 'f'))
        res = num[i - 1] - 87;
      else
        res = num[i - 1] - 48;
      result += res * amp;
    }
  }
  return result;
}