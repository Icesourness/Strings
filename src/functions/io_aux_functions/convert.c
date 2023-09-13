#include "../s21_string.h"

char* convert(char* str, va_list* arguments, lexeme_p_t* token) {
  char* result = s21_NULL;
  switch (token->specifier) {
    case 'i':
      if (token->length == 'h')
        result = s21_itoa_short(str, va_arg(*arguments, int), token);
      else if (token->length == 'l')
        result = s21_itoa_long(str, va_arg(*arguments, long), token);
      else
        result = s21_itoa(str, va_arg(*arguments, int), token);
      break;
    case 'd':
      if (token->length == 'h')
        result = s21_itoa_short(str, va_arg(*arguments, int), token);
      else if (token->length == 'l')
        result = s21_itoa_long(str, va_arg(*arguments, long), token);
      else
        result = s21_itoa(str, va_arg(*arguments, int), token);
      break;
    case 'o':
      if (token->length == 'h')
        result = s21_o8toa_short(str, va_arg(*arguments, unsigned), token);
      else if (token->length == 'l')
        result = s21_o8toa_long(str, va_arg(*arguments, unsigned), token);
      else
        result = s21_o8toa(str, va_arg(*arguments, unsigned int), token);
      break;
    case 'u':
      if (token->length == 'h')
        result = s21_u10toa_short(str, va_arg(*arguments, unsigned), token);
      else if (token->length == 'l')
        result = s21_u10toa_long(str, va_arg(*arguments, unsigned), token);
      else
        result = s21_u10toa(str, va_arg(*arguments, unsigned int), token);
      break;
    case 'x':
      if (token->length == 'h')
        result = s21_x16toa_short(str, va_arg(*arguments, unsigned), token);
      else if (token->length == 'l')
        result = s21_x16toa_long(str, va_arg(*arguments, unsigned), token);
      else
        result = s21_x16toa(str, va_arg(*arguments, unsigned int), token);
      break;
    case 'X':
      if (token->length == 'h')
        result = s21_x16toa_short(str, va_arg(*arguments, unsigned), token);
      else if (token->length == 'l')
        result = s21_x16toa_long(str, va_arg(*arguments, unsigned), token);
      else
        result = s21_x16toa(str, va_arg(*arguments, unsigned int), token);
      break;
    case 'p':
      result = s21_ptoa(str, va_arg(*arguments, long long int), token);
      break;
    case 'f':
      if (token->length == 'L')
        result = s21_ftoa_long(str, va_arg(*arguments, long double), token);
      else
        result = s21_ftoa(str, va_arg(*arguments, double), token);
      break;
    case 'e':
      if (token->length == 'L')
        result = s21_eftoa_long(str, va_arg(*arguments, long double), token);
      else
        result = s21_eftoa(str, va_arg(*arguments, double), token);
      break;
    case 'E':
      if (token->length == 'L')
        result = s21_eftoa_long(str, va_arg(*arguments, long double), token);
      else
        result = s21_eftoa(str, va_arg(*arguments, double), token);
      break;
    case 'g':
      if (token->length == 'L')
        result = s21_gtoa_long(str, va_arg(*arguments, long double), token);
      else
        result = s21_gtoa(str, va_arg(*arguments, double), token);
      break;
    case 'G':
      if (token->length == 'L')
        result = s21_gtoa_long(str, va_arg(*arguments, long double), token);
      else
        result = s21_gtoa(str, va_arg(*arguments, double), token);
      break;
    case 'c':
      result = s21_ctoa(str, arguments, token);
      break;
    case 's':
      if (token->length == 'l')
        result = s21_awtoa(str, arguments, token);
      else
        result = s21_atoa(str, va_arg(*arguments, char*), token);
      break;
  }
  return result;
}