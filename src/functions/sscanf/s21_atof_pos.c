#include "../s21_string.h"

double s21_atof_pos(char* num) {
  char* p_num = &num[s21_strlen(num)];
  char pre_result[10000];
  int j = 0;
  for (int i = 0; num[i] != '\0'; i++) {
    if (num[i] == '.')
      p_num = &num[i];
    else {
      pre_result[j] = num[i];
      j++;
    }
  }
  pre_result[j] = '\0';
  int after_point = 0;
  if (*p_num == '.') p_num++;
  while (*p_num++ != '\0') after_point++;
  float result = s21_atoi_pos(pre_result) / powl(10, after_point);
  return result;
}