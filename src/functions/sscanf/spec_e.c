#include "../s21_string.h"

char* spec_e(char* str, float* num, int* sscanf_counter, lexeme_p_t* token) {
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
  while (*str != ' ' && *str != '\0') str++;

  int new_width = token->width - sign_status;

  char new_str[10000];
  char* p_new = new_str;
  if (token->width > 0) {
    for (int i = 0; (i < new_width) && (*begin != ' ' && *begin != '\0'); i++)
      *p_new++ = *begin++;
  } else {
    for (int i = 0; (*begin != ' ' && *begin != '\0'); i++) *p_new++ = *begin++;
  }
  *p_new = '\0';
  p_new = new_str;

  char num_s[10000];
  char* p_num_s = num_s;
  for (int i = 0; (('0' <= *p_new && *p_new <= '9') || *p_new == '.'); i++) {
    *p_num_s++ = *p_new++;
  }
  *p_num_s = '\0';

  int exp = 0;
  short int exp_sign = 1;
  if (*p_new == 'e' || *p_new == 'E') {
    if (*(++p_new) == '-') {
      exp_sign = -1;
    }
  }
  p_new++;
  char exp_s[10000];
  char* p_exp_s = exp_s;
  while ('0' <= *p_new && *p_new <= '9') *p_exp_s++ = *p_new++;
  *p_exp_s = '\0';
  exp = s21_atoi_pos(exp_s);
  float pre_num = s21_atof_pos(num_s);
  if (*num_s != '\0') {
    if (exp_sign > 0) {
      *num = sign * pre_num * pow(10, exp);
    } else {
      *num = sign * pre_num / pow(10, exp);
    }
    result = --str;
    (*sscanf_counter)++;
  }

  return result;
}