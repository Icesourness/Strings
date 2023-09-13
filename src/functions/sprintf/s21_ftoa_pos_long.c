#include "../s21_string.h"

void s21_ftoa_pos_long(char* result, long double num, lexeme_p_t* token) {
  int accuracy = 6;  // установка дефолтной точности e-6
  /* установка недефолтной точности, если таковая есть*/
  if (token->precision != -1) accuracy = token->precision;
  /* получение целой и дробной частей */
  long double before_point = (trunc(num));
  long double after_point = ceil((num - trunc(num)) * pow(10, accuracy) - 0.5);
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
      for (int i = accuracy; (after_point >= 1) || i != 0; result++, i--) {
        *result = ((int)fmod(after_point, 10.0) + 48);
        after_point /= 10.0;
        if (i == 1) {
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