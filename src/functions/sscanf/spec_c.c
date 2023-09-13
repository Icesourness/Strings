#include "../s21_string.h"

char* spec_c(char* str, int* ch, int* sscanf_counter) {
  *ch = *str;
  (*sscanf_counter)++;
  return str;
}