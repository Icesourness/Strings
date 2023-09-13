#include "../s21_string.h"

char* spec_s(char* str, char* string, int* sscanf_counter, lexeme_p_t* token) {
  if (*str <= 32) (*sscanf_counter) = -1;
  char* begin = str;
  if (token->width > 0) {
    for (int i = 0; (str[i] > 32) && (i < token->width); i++, begin++) {
      string[i] = str[i];
    }
  } else {
    for (int i = 0; (str[i] > 32); i++, begin++) string[i] = str[i];
  }
  if (*string) (*sscanf_counter)++;
  return --begin;
}