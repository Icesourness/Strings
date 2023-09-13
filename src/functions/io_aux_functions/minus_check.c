#include "../s21_string.h"

void minus_check(char** output, int len, lexeme_p_t* token) {
  if (token->specifier == 's') {
    if (token->minus) {
      for (int i = 0; i < (token->width - len); (*output)++, i++)
        **output = ' ';
    }
  } else {
    if (token->minus) {
      if ((token->width > token->precision) && token->width != -1) {
        for (int i = 0; i < (token->width - len); (*output)++, i++)
          **output = ' ';
      }
    }
  }
}