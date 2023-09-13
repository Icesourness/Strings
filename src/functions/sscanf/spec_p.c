#include <math.h>
#include <stdio.h>

#include "../s21_string.h"

char* spec_p(char* str, unsigned int* num, int* sscanf_counter,
             lexeme_p_t* token) {
  while (*str == ' ') str++;
  char* result = s21_NULL;
  if (*str == '\0') {
    *sscanf_counter = -1;
  }
  short int sign_status = 0;
  short int sign = 1;
  while (*str == ' ') str++;
  if (*str == '-') {
    sign_status = 1;
    sign = -1;
    str++;
  } else if (*str == '+') {
    sign_status = 1;
    str++;
  }
  while (*str == '0') str++;
  if (*(str - 1) == '0' && ((*str == 'x') || (*str == 'X'))) {
    sign_status += 2;
    str++;
    if ('0' > *str || (*str > '9' && *str < 65) || (*str > 70 && *str < 97) ||
        (*str > 102) || ((token->width > 0) && (token->width <= sign_status))) {
      *num = 0;
      (*sscanf_counter)++;
      while (*str != ' ' && *str != '\0') str++;
      return str;
    }
  } else if (*str == ' ' || *str == '\0')
    str--;

  char* begin = str;
  s21_size_t size = 0;
  int new_width = token->width - sign_status;
  if (token->width > 0)
    for (int i = 0; (i < new_width) && ((('0' <= *str) && (*str <= '9')) ||
                                        (('A' <= *str) && (*str <= 'F')) ||
                                        (('a' <= *str) && (*str <= 'f')) ||
                                        (*str == '+') || (*str == '-'));
         i++) {
      str++;
      size++;
    }
  else {
    while ((('0' <= *str) && (*str <= '9')) ||
           (('A' <= *str) && (*str <= 'F')) ||
           (('a' <= *str) && (*str <= 'f')) || (*str == '+') || (*str == '-')) {
      str++;
      size++;
    }
  }
  char num_s[size + 1];
  for (int i = 0; (*begin != '\0') && (*begin != ' '); i++, begin++)
    num_s[i] = *begin;
  num_s[size] = '\0';
  if (*num_s != '\0') {
    *num = sign * s21_ato16_pos(num_s);
    result = --str;
    (*sscanf_counter)++;
  }
  return result;
}