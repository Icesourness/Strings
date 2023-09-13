#include "../s21_string.h"

char* spec_f(char* str, float* num, int* sscanf_counter, lexeme_p_t* token) {
  while (*str == ' ') str++;
  char* result = s21_NULL;
  short int sign_status = 0;
  short int sign = 1;
  if (*str == '-') {
    sign_status = 1;
    sign = -1;
    str++;
  } else if (*str == '+') {
    sign_status = 1;
    str++;
  }
  char* begin = str;
  s21_size_t size = 0;
  int new_width = token->width - sign_status;
  if (token->width > 0)
    for (int i = 0;
         (i < new_width) && ((('0' <= *str) && (*str <= '9')) ||
                             (*str == '+') || (*str == '-') || (*str == '.'));
         i++) {
      str++;
      size++;
    }
  else {
    while ((('0' <= *str) && (*str <= '9')) || (*str == '+') || (*str == '-') ||
           (*str == '.')) {
      str++;
      size++;
    }
  }
  char num_s[size + 1];
  for (int i = 0; (*begin != '\0') && (*begin != ' '); i++, begin++)
    num_s[i] = *begin;
  num_s[size] = '\0';
  if (*num_s != '\0') {
    *num = sign * s21_atof_pos(num_s);
    result = --str;
    (*sscanf_counter)++;
  }
  return result;
}