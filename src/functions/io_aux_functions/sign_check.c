#include "../s21_string.h"

void sign_check(char** output, char sign, lexeme_p_t* token) {
  if (sign == '-') {
    **output = sign;
    (*output)++;
  } else {
    /* проверка флага space */
    if (token->space) {
      if (token->plus) {
        **output = sign;
        (*output)++;
      } else {
        **output = ' ';
        (*output)++;
      }
    } else {
      if (token->plus) {
        **output = sign;
        (*output)++;
      }
    }
  }
}