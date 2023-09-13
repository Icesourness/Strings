#include "../s21_string.h"

char* spec_e_empty(char* str, lexeme_p_t* token) {
  while (*str == ' ') str++;
  char* result = s21_NULL;
  short int sign_status = 0;
  if (*str == '-') {
    sign_status = 1;
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

  p_new++;
  char exp_s[10000];
  char* p_exp_s = exp_s;
  while ('0' <= *p_new && *p_new <= '9') *p_exp_s++ = *p_new++;
  *p_exp_s = '\0';

  if (*num_s != '\0') {
    result = --str;
  }
  return result;
}