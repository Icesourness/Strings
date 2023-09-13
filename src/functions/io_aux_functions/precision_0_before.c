#include "../s21_string.h"

void precision_0_before(char** output, int count_zeros, lexeme_p_t* token) {
  if (token->precision != -1) {
    for (int i = 0; i < (count_zeros); (*output)++, i++) **output = '0';
  }
}
