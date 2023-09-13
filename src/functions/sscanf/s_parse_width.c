#include "../s21_string.h"

const char* s_parse_width(const char* ptr, lexeme_p_t* token) {
  char width[10000];
  char* width_ptr = width;
  for (; (*ptr == '*') || ('0' <= *ptr && *ptr <= '9'); ptr++, width_ptr++) {
    if (*ptr != '*')
      *width_ptr = *ptr;
    else if (*ptr == '*')
      token->width = -2;
  }
  if (*width) {
    *(width_ptr) = '\0';
    token->width = s21_atoi_pos(width);
  }
  return ptr;
}