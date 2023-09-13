#include "../s21_string.h"

void hash_check(char** output, lexeme_p_t* token) {
  if (token->hashtag) {
    if (token->specifier == 'x') {
      **output = '0';
      (*output)++;
      **output = 'x';
      (*output)++;
    } else if (token->specifier == 'X') {
      **output = '0';
      (*output)++;
      **output = 'X';
      (*output)++;
    }
  }
}