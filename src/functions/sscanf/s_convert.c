#include "../s21_string.h"

char* s_convert(char* str, va_list* arguments, int* sscanf_counter,
                lexeme_p_t* token) {
  char* result = s21_NULL;
  switch (token->specifier) {
    case 'i':
      if (token->width == -2)
        result = spec_i_empty(str, token);
      else
        result = spec_i(str, va_arg(*arguments, int*), sscanf_counter, token);
      break;
    case 'd':
      if (token->width == -2)
        result = spec_i_empty(str, token);
      else
        result = spec_i(str, va_arg(*arguments, int*), sscanf_counter, token);
      break;
    case 'o':
      if (token->width == -2)
        result = spec_o_empty(str, token);
      else
        result = spec_o(str, va_arg(*arguments, unsigned int*), sscanf_counter,
                        token);
      break;
    case 'u':
      if (token->width == -2)
        result = spec_u_empty(str, token);
      else
        result = spec_u(str, va_arg(*arguments, unsigned int*), sscanf_counter,
                        token);
      break;
    case 'p':
      if (token->width == -2)
        result = spec_p_empty(str, token);
      else
        result = spec_p(str, va_arg(*arguments, unsigned int*), sscanf_counter,
                        token);
      break;
    case 'x':
      if (token->width == -2)
        result = spec_p_empty(str, token);
      else
        result = spec_p(str, va_arg(*arguments, unsigned int*), sscanf_counter,
                        token);
      break;
    case 'X':
      if (token->width == -2)
        result = spec_p_empty(str, token);
      else
        result = spec_p(str, va_arg(*arguments, unsigned int*), sscanf_counter,
                        token);
      break;
    case 'f':
      if (token->width == -2)
        result = spec_f_empty(str, token);
      else
        result = spec_f(str, va_arg(*arguments, float*), sscanf_counter, token);
      break;
    case 'e':
      if (token->width == -2)
        result = spec_e_empty(str, token);
      else
        result = spec_e(str, va_arg(*arguments, float*), sscanf_counter, token);
      break;
    case 'E':
      if (token->width == -2)
        result = spec_e_empty(str, token);
      else
        result = spec_e(str, va_arg(*arguments, float*), sscanf_counter, token);
      break;
    case 'g':
      if (token->width == -2)
        result = spec_e_empty(str, token);
      else
        result = spec_e(str, va_arg(*arguments, float*), sscanf_counter, token);
      break;
    case 'G':
      if (token->width == -2)
        result = spec_e_empty(str, token);
      else
        result = spec_e(str, va_arg(*arguments, float*), sscanf_counter, token);
      break;
    case 'c':
      if (token->width == -2)
        result = str;
      else
        result = spec_c(str, va_arg(*arguments, int*), sscanf_counter);
      break;
    case 's':
      if (token->width == -2)
        result = spec_s_empty(str, token);
      else
        result = spec_s(str, va_arg(*arguments, char*), sscanf_counter, token);
      break;
  }
  return result;
}