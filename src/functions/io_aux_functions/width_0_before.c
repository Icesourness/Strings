#include "../s21_string.h"

void width_0_before(char** output, int len, lexeme_p_t* token) {
  if ((token->width != -1) && (!token->minus)) {
    for (int i = 0; i < (token->width - len); (*output)++, i++) **output = '0';
  }
}
