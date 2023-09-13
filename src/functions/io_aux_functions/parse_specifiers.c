#include "../s21_string.h"

const char* parse_specifiers(const char* ptr, lexeme_p_t* token) {
  const char* result = s21_NULL;
  switch (*ptr) {
    case 'c':
      token->specifier = 'c';
      result = ptr;
      break;
    case 'd':
      token->specifier = 'd';
      result = ptr;
      break;
    case 'i':
      token->specifier = 'i';
      result = ptr;
      break;
    case 'e':
      token->specifier = 'e';
      result = ptr;
      break;
    case 'E':
      token->specifier = 'E';
      result = ptr;
      break;
    case 'f':
      token->specifier = 'f';
      result = ptr;
      break;
    case 'g':
      token->specifier = 'g';
      result = ptr;
      break;
    case 'G':
      token->specifier = 'G';
      result = ptr;
      break;
    case 'o':
      token->specifier = 'o';
      result = ptr;
      break;
    case 's':
      token->specifier = 's';
      result = ptr;
      break;
    case 'u':
      token->specifier = 'u';
      result = ptr;
      break;
    case 'x':
      token->specifier = 'x';
      result = ptr;
      break;
    case 'X':
      token->specifier = 'X';
      result = ptr;
      break;
    case 'p':
      token->specifier = 'p';
      result = ptr;
      break;
    case 'n':
      token->specifier = 'n';
      result = ptr;
      break;
    case '%':
      token->specifier = '%';
      result = ptr;
      break;
  }
  return result;
}