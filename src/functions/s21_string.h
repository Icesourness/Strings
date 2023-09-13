#include <math.h>
#include <stdarg.h>
#include <stdlib.h>
#include <wchar.h>

#define s21_NULL ((void*)0)

typedef long unsigned s21_size_t;
typedef struct {
  short int minus;
  short int plus;
  short int space;
  short int hashtag;
  short int zero;
  int precision;
  int width;
  char length;
  char specifier;
} lexeme_p_t;

// typedef struct {
//   int width;
//   char length;
//   char specifier;
// } lexeme_s_t;

//   SPRINTF functions
int s21_sprintf(char* str, const char* format, ...);
const char* parse_flags(const char*, lexeme_p_t*);
const char* parse_width(const char*, va_list*, lexeme_p_t*);
const char* parse_precision(const char*, va_list*, lexeme_p_t*);
const char* parse_length(const char*, lexeme_p_t*);
const char* parse_specifiers(const char*, lexeme_p_t*);
char* convert(char*, va_list*, lexeme_p_t*);
void reverse_str(char* str1, char* str2);
void sign_check(char** output, char sign, lexeme_p_t* token);
void minus_check(char** output, int len, lexeme_p_t* token);
void hash_check(char** output, lexeme_p_t* token);
void width_empty_before(char** output, int len, lexeme_p_t* token);
void width_0_before(char** output, int len, lexeme_p_t* token);
void precision_0_before(char** output, int count_zeros, lexeme_p_t* token);
void width_or_precision_0_before(char**, int len, int count_zeros, lexeme_p_t*);
void out(char** output, char* str);
void reverse_g_str(char* str1, char* str2, lexeme_p_t*);

//   SSCANF functions
int s21_sscanf(char* str, const char* format, ...);
char* s_convert(char* str, va_list* arguments, int*, lexeme_p_t* token);
char* spec_i(char* str, int*, int*, lexeme_p_t* token);
char* spec_i_empty(char* str, lexeme_p_t* token);
char* spec_o(char* str, unsigned int*, int*, lexeme_p_t* token);
char* spec_o_empty(char* str, lexeme_p_t* token);
char* spec_u(char* str, unsigned int*, int*, lexeme_p_t* token);
char* spec_u_empty(char* str, lexeme_p_t* token);
char* spec_p(char* str, unsigned int*, int*, lexeme_p_t* token);
char* spec_p_empty(char* str, lexeme_p_t* token);
char* spec_f(char* str, float*, int*, lexeme_p_t* token);
char* spec_f_empty(char* str, lexeme_p_t* token);
char* spec_e(char* str, float* num, int* sscanf_counter, lexeme_p_t* token);
char* spec_e_empty(char* str, lexeme_p_t* token);
char* spec_c(char* str, int* num, int* sscanf_counter);
char* spec_s(char* str, char* string, int* sscanf_counter, lexeme_p_t* token);
char* spec_s_empty(char* str, lexeme_p_t* token);

unsigned int s21_ato8_pos(char* str);
unsigned int s21_ato10_pos(char* num);
unsigned int s21_ato16_pos(char* num);
double s21_atof_pos(char* num);
const char* s_parse_width(const char* ptr, lexeme_p_t*);

//  STDLIB functions for IO functions
int s21_atoi_pos(const char*);

char* s21_itoa(char* str, int num, lexeme_p_t* token);
char* s21_itoa_short(char*, short, lexeme_p_t*);
char* s21_itoa_long(char* str, long, lexeme_p_t*);
void s21_itoa_pos(char*, int);
void s21_itoa_pos_short(char* result, short num);
void s21_itoa_pos_long(char* result, long num);

char* s21_o8toa(char*, unsigned, lexeme_p_t*);
char* s21_o8toa_short(char*, unsigned short int, lexeme_p_t*);
char* s21_o8toa_long(char*, unsigned long int, lexeme_p_t*);

char* s21_u10toa(char*, unsigned, lexeme_p_t*);
char* s21_u10toa_short(char* str, unsigned short int, lexeme_p_t*);
char* s21_u10toa_long(char* str, unsigned long int, lexeme_p_t*);

char* s21_x16toa(char*, unsigned, lexeme_p_t*);
char* s21_x16toa_short(char* str, unsigned short int, lexeme_p_t*);
char* s21_x16toa_long(char* str, unsigned long num, lexeme_p_t*);

char* s21_ptoa(char* str, long long int num, lexeme_p_t* token);

char* s21_ftoa(char*, double, lexeme_p_t*);
char* s21_ftoa_long(char*, long double num, lexeme_p_t*);
void s21_ftoa_pos(char* result, double num, lexeme_p_t* token);
void s21_ftoa_pos_long(char* result, long double num, lexeme_p_t* token);

char* s21_eftoa(char*, double, lexeme_p_t*);
char* s21_eftoa_long(char*, long double, lexeme_p_t*);
void s21_eftoa_pos(char* result, double num, int* e, char*, lexeme_p_t* token);
void s21_eftoa_pos_long(char*, long double num, int*, char*, lexeme_p_t*);

char* s21_gtoa(char*, double, lexeme_p_t*);
char* s21_gtoa_long(char*, long double, lexeme_p_t*);

void s21_gftoa_pos(char* result, double num, s21_size_t, lexeme_p_t*);
void s21_gftoa_pos_long(char* result, long double num, s21_size_t, lexeme_p_t*);

char* s21_geftoa(char* output, double num, lexeme_p_t* token);
char* s21_geftoa_long(char* output, long double num, lexeme_p_t* token);

char* s21_ctoa(char* str, va_list*, lexeme_p_t*);
char* s21_atoa(char*, char*, lexeme_p_t*);
char* s21_awtoa(char*, va_list* argument, lexeme_p_t*);

//  base + bonus functions
s21_size_t s21_strlen(const char* str);
int s21_memcmp(const void* str1, const void* str2, s21_size_t n);
int s21_strncmp(const char* str1, const char* str2, s21_size_t n);
char* s21_strchr(const char* str, int c);
char* s21_strncat(char* dest, const char* src, s21_size_t n);
char* s21_strrchr(const char* str, int c);
char* s21_strncpy(char* dest, const char* src, s21_size_t n);
char* s21_strpbrk(const char* str1, const char* str2);
char* s21_strstr(const char* haystack, const char* needle);
char* s21_strtok(char* str, const char* delim);
char* s21_strerror(int errnum);
void* s21_memset(void* dest, int c, s21_size_t n);
void* s21_memchr(const void* str, int c, s21_size_t n);
void* s21_memcpy(void* dest, const void* src, s21_size_t n);
s21_size_t s21_strcspn(const char* str1, const char* str2);
s21_size_t s21_strspn(const char* str1, const char* str2);
void* s21_to_upper(const char* str);
void* s21_to_lower(const char* str);
void* s21_insert(const char* src, const char* str, size_t start_index);
void* s21_trim(const char* src, const char* trim_chars);