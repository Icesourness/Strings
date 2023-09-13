#include "../s21_string.h"

void width_or_precision_0_before(char** output, int len, int count_zeros,
                                 lexeme_p_t* token) {
  if (token->precision != -1) {
    for (int i = 0; i < count_zeros; (*output)++, i++) **output = '0';
  } else {
    if ((token->width != -1) && (!token->minus)) {
      for (int i = 0; i < (token->width - len); (*output)++, i++)
        **output = '0';
    }
  }
}