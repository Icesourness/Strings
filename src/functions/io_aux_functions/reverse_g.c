#include "../s21_string.h"

void reverse_g_str(char* str1, char* str2, lexeme_p_t* token) {
  if (!token->hashtag) {
    while (*str1 == '0') str1++;
    while (*str1 == '.') str1++;
  }
  for (s21_size_t i = 0; i < s21_strlen(str1); i++)
    str2[i] = str1[s21_strlen(str1) - 1 - i];
  str2[s21_strlen(str1)] = '\0';
}