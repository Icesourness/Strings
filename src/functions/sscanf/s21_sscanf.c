#include "../s21_string.h"

int s21_sscanf(char* str, const char* format, ...) {
  unsigned int n_counter = 0;  // спецификатор %n
  if (*str == '\0') return -1;
  int sscanf_counter = 0;
  va_list arguments;
  va_start(arguments, format);
  for (; (*format != '\0') && (*str != '\0'); format++, str++) {
    while (*format == ' ') format++;
    lexeme_p_t token = {};
    token.width = -1;
    if (*format == '%') {
      format++;
      if (*(format) == 'n') {  // спецификатор %n
        *(va_arg(arguments, int*)) = n_counter;
      } else {
        format = s_parse_width(format, &token);
        format = parse_length(format, &token);
        format = parse_specifiers(format, &token);
        if (token.specifier != 'c') {
          while (*str == ' ') {
            str++;
            n_counter++;
          }
        }
        str = s_convert(str, &arguments, &sscanf_counter, &token);
        if (str == s21_NULL) break;
      }
    }
    n_counter++;
  }
  va_end(arguments);
  return sscanf_counter;
}