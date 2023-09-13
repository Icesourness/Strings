#include "../s21_string.h"

void s21_eftoa_pos(char* result, double num, int* e, char* e_sign,
                   lexeme_p_t* token) {
  int accuracy = 6;  // установка дефолтной точности e-6
  /* установка недефолтной точности, если таковая есть*/
  if (token->precision != -1) accuracy = token->precision;
  /* поиск значения е и его знака */
  if ((0 < num) && (num < 1)) {
    for (; trunc(num) < 1.0; num *= 10.0, (*e)++)
      ;
    *e_sign = '-';
  } else
    for (; num >= 10.0; num /= 10.0, (*e)++)
      ;
  /* получение целой и дробной частей */
  double before_point = (trunc(num));
  double after_point = ceil((num - trunc(num)) * pow(10, accuracy) - 0.5);
  if (token->specifier == 'g' || token->specifier == 'G')
    after_point = ceil((num - trunc(num)) * pow(10, accuracy - 1) - 0.5);
  if (num < 1)
    after_point = ceil((num - trunc(num)) * pow(10, accuracy + (*e)) - 0.5);
  if (accuracy == 0) {
    before_point = round(num);
    after_point = 0.0;
  }
  /* занос числа в строку, когда оно >= 1 */
  if (num >= 1.0) {
    /* если дробная часть = 0 */
    if (after_point == 0) {
      for (int i = 0; i < accuracy; result++, i++) {
        *result = '0';
      }
      if (!token->hashtag) {
        if (accuracy) *result++ = '.';
      } else
        *result++ = '.';
    } else {
      /* если дробная часть != 0 */
      for (int i = 0; (after_point >= 1); result++, i++) {
        *result = ((int)fmod(after_point, 10.0) + 48);
        after_point /= 10.0;
        if (i == accuracy - 1) {
          *(++result) = '.';
        }
      }
    }
    for (int i = 0; before_point >= 1; result++, i++) {
      *result = ((int)fmod(before_point, 10.0) + 48);
      before_point /= 10.0;
    }
  } else {
    /* занос числа в строку, когда (0 <= оно < 1) */
    for (int i = 0; i < accuracy; result++, i++) {
      *result = ((int)fmod(after_point, 10.0) + 48);
      after_point /= 10.0;
    }
    *(result++) = '.';
    *(result++) = '0';
  }
  *result = '\0';
}