#include "../s21_string.h"

void out(char** output, char* str) {
  for (; *str != '\0'; (*output)++, str++) **output = *str;
}