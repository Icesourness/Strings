#include "../s21_string.h"

int s21_sprintf(char* str, const char* format, ...) {
  char* p_str = str;
  va_list arguments;
  va_start(arguments, format);
  unsigned int n_counter = 0;  // спецификатор %n
  for (; *format != '\0'; format++, str++) {
    lexeme_p_t token = {};
    token.width = -1;
    token.precision = -1;
    if (*format == '%') {  // спецификатор %%
      format++;
      if (*(format) == '%') {
        *str = '%';
      } else if (*(format) == 'n') {  // спецификатор %n
        *(va_arg(arguments, int*)) = n_counter;
      } else {
        format = parse_flags(format, &token);
        format = parse_width(format, &arguments, &token);
        format = parse_precision(format, &arguments, &token);
        format = parse_length(format, &token);
        format = parse_specifiers(format, &token);
        str = convert(str, &arguments, &token);
      }
    } else
      *str = *(format);
    n_counter++;
  }
  *str = '\0';
  va_end(arguments);
  return s21_strlen(p_str);
}