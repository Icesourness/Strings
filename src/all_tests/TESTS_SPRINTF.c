#include "tests.h"

// %i %d /////////////////////////////////////////////////////////////
START_TEST(test_sprintf_1) {
  char str1[100];
  char str2[100];
  char *str3 = "";
  ck_assert_int_eq(sprintf(str1, str3, 0), s21_sprintf(str2, str3));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_2) {
  char str1[100];
  char str2[100];
  char *str3 = "123";
  ck_assert_int_eq(sprintf(str1, str3, 0), s21_sprintf(str2, str3));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_297) {
  char str1[100];
  char str2[100];
  char *str3 = "%0i";
  ck_assert_int_eq(sprintf(str1, str3, 0), s21_sprintf(str2, str3, 0));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_3) {
  char str1[100];
  char str2[100];
  char *str3 = "%i";
  int n = 1;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_281) {
  char str1[100];
  char str2[100];
  char *str3 = "%hi";
  int n = 1;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_282) {
  char str1[100];
  char str2[100];
  char *str3 = "%li";
  int n = 1;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_283) {
  char str1[100];
  char str2[100];
  char *str3 = "%hd";
  int n = 1;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_284) {
  char str1[100];
  char str2[100];
  char *str3 = "%ld";
  int n = 1;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_4) {
  char str1[100];
  char str2[100];
  char *str3 = "%i!";
  int n = 1;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_5) {
  char str1[100];
  char str2[100];
  char *str3 = "%i!";
  int n = 10;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_6) {
  char str1[100];
  char str2[100];
  char *str3 = "123 %i 456";
  int n = -5;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_7) {
  char str1[100];
  char str2[100];
  char *str3 = "   %i   ";
  int n = -15;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_8) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+i***";
  int n = 15;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_9) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+i***";
  int n = -15;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_10) {
  char str1[100];
  char str2[100];
  char *str3 = "***% i***";
  int n = 15;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_11) {
  char str1[100];
  char str2[100];
  char *str3 = "***% i***";
  int n = -15;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_12) {
  char str1[100];
  char str2[100];
  char *str3 = "***%-i***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_13) {
  char str1[100];
  char str2[100];
  char *str3 = "***%0i***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_14) {
  char str1[100];
  char str2[100];
  char *str3 = "***%#i***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_15) {
  char str1[100];
  char str2[100];
  char *str3 = "***%5i***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_16) {
  char str1[100];
  char str2[100];
  char *str3 = "***%-5i***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_17) {
  char str1[100];
  char str2[100];
  char *str3 = "***%5i***";
  int n = -123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_18) {
  char str1[100];
  char str2[100];
  char *str3 = "***%-5i***";
  int n = -123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_19) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+-5i***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_20) {
  char str1[100];
  char str2[100];
  char *str3 = "***% -5i***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_21) {
  char str1[100];
  char str2[100];
  char *str3 = "***%.5i***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_22) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+.5i***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_23) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+-.5i***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_24) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+-.5i***";
  int n = -123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_25) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+-.5i***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_26) {
  char str1[100];
  char str2[100];
  char *str3 = "***% -.5i***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_27) {
  char str1[100];
  char str2[100];
  char *str3 = "***%10.5i***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_28) {
  char str1[100];
  char str2[100];
  char *str3 = "***%-10.5i***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_29) {
  char str1[100];
  char str2[100];
  char *str3 = "***%010.5i***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_30) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+010.5i***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_31) {
  char str1[100];
  char str2[100];
  char *str3 = "***%.0i***";
  int n = 0;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_32) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+0i***";
  int n = 0;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_33) {
  char str1[100];
  char str2[100];
  char *str3 = "***%0i***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_34) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+-010.15i***%i";
  int n = 123;
  int m = -321;
  ck_assert_int_eq(sprintf(str1, str3, n, m), s21_sprintf(str2, str3, n, m));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_35) {
  char str1[100];
  char str2[100];
  char *str3 = "%+- 0#10.15i%+- 0#10.15i";
  int n = 123;
  int m = -321;
  ck_assert_int_eq(sprintf(str1, str3, n, m), s21_sprintf(str2, str3, n, m));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_36) {
  char str1[100];
  char str2[100];
  char *str3 = "%+- 0#9.8i%+- 0#10.5i";
  int n = 123;
  int m = -321;
  ck_assert_int_eq(sprintf(str1, str3, n, m), s21_sprintf(str2, str3, n, m));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_37) {
  char str1[100];
  char str2[100];
  char *str3 = "%%+- 0#9.8i%+- 0#10.5i";
  int n = 123;
  int m = -321;
  ck_assert_int_eq(sprintf(str1, str3, n, m), s21_sprintf(str2, str3, n, m));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_38) {
  char str1[100];
  char str2[100];
  int n_str1 =
      sprintf(str1, "|%i| |% i| |%+i| |%i| |%-5i| |%5i| |%+5i| |%5i|\n", 12, 12,
              12, -12, 12, 12, 12, -12);
  int n_str2 =
      s21_sprintf(str2, "|%i| |% i| |%+i| |%i| |%-5i| |%5i| |%+5i| |%5i|\n", 12,
                  12, 12, -12, 12, 12, 12, -12);
  ck_assert_int_eq(n_str1, n_str2);
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

// %o ////////////////////////////////////////////////////////////////
START_TEST(test_sprintf_39) {
  char str1[100];
  char str2[100];
  char *str3 = "%o";
  int n = 1;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_285) {
  char str1[100];
  char str2[100];
  char *str3 = "%ho";
  int n = 1;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_286) {
  char str1[100];
  char str2[100];
  char *str3 = "%lo";
  int n = 1;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_40) {
  char str1[100];
  char str2[100];
  char *str3 = "%o!";
  int n = 1;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_41) {
  char str1[100];
  char str2[100];
  char *str3 = "%o!";
  int n = 10;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_42) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+o***";
  int n = 15;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_43) {
  char str1[100];
  char str2[100];
  char *str3 = "***% o***";
  int n = 15;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_44) {
  char str1[100];
  char str2[100];
  char *str3 = "***%-o***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_45) {
  char str1[100];
  char str2[100];
  char *str3 = "***%0o***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_46) {
  char str1[100];
  char str2[100];
  char *str3 = "***%#o***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_47) {
  char str1[100];
  char str2[100];
  char *str3 = "***%5o***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_48) {
  char str1[100];
  char str2[100];
  char *str3 = "***%-5o***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_49) {
  char str1[100];
  char str2[100];
  char *str3 = "***%-5o***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_50) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+-5o***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_51) {
  char str1[100];
  char str2[100];
  char *str3 = "***% -5o***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_52) {
  char str1[100];
  char str2[100];
  char *str3 = "***%.5o***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_53) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+.5o***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_54) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+-.5o***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_55) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+-.5o***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_56) {
  char str1[100];
  char str2[100];
  char *str3 = "***% -.5o***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_57) {
  char str1[100];
  char str2[100];
  char *str3 = "***%10.5o***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_58) {
  char str1[100];
  char str2[100];
  char *str3 = "***%-10.5o***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_59) {
  char str1[100];
  char str2[100];
  char *str3 = "***%010.5o***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_60) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+010.5o***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_61) {
  char str1[100];
  char str2[100];
  char *str3 = "***%.0o***";
  int n = 0;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_62) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+0o***";
  int n = 0;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_63) {
  char str1[100];
  char str2[100];
  char *str3 = "***%0o***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_64) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+-010.15o***%o";
  int n = 123;
  int m = 321;
  ck_assert_int_eq(sprintf(str1, str3, n, m), s21_sprintf(str2, str3, n, m));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_65) {
  char str1[100];
  char str2[100];
  char *str3 = "%+- 0#10.15o%+- 0#10.15o";
  int n = 123;
  int m = 321;
  ck_assert_int_eq(sprintf(str1, str3, n, m), s21_sprintf(str2, str3, n, m));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_66) {
  char str1[100];
  char str2[100];
  char *str3 = "%+- 0#9.8o%+- 0#10.5o";
  int n = 123;
  int m = 321;
  ck_assert_int_eq(sprintf(str1, str3, n, m), s21_sprintf(str2, str3, n, m));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_67) {
  char str1[100];
  char str2[100];
  char *str3 = "%%+- 0#9.8o%+- 0#10.5o";
  int n = 123;
  int m = 321;
  ck_assert_int_eq(sprintf(str1, str3, n, m), s21_sprintf(str2, str3, n, m));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_68) {
  char str1[100];
  char str2[100];
  char *str3 = "%#o";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_69) {
  char str1[100];
  char str2[100];
  char *str3 = "%.*o";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, n), s21_sprintf(str2, str3, 10, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_70) {
  char str1[100];
  char str2[100];
  char *str3 = "%*o";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, n), s21_sprintf(str2, str3, 10, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_71) {
  char str1[100];
  char str2[100];
  char *str3 = "%*i";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, n), s21_sprintf(str2, str3, 10, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_72) {
  char str1[100];
  char str2[100];
  char *str3 = "%.*i";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, n), s21_sprintf(str2, str3, 10, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_73) {
  char str1[100];
  char str2[100];
  char *str3 = "%*.i";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, n), s21_sprintf(str2, str3, 10, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_74) {
  char str1[100];
  char str2[100];
  char *str3 = "%*.*i";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, 5, n),
                   s21_sprintf(str2, str3, 10, 5, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_75) {
  char str1[100];
  char str2[100];
  char *str3 = "%*.*o";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, 5, n),
                   s21_sprintf(str2, str3, 10, 5, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_76) {
  char str1[100];
  char str2[100];
  char *str3 = "%#+-*.*o";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, 5, n),
                   s21_sprintf(str2, str3, 10, 5, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_77) {
  char str1[100];
  char str2[100];
  char *str3 = "%o";
  int n = -123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

// %u ////////////////////////////////////////////////////////////////
START_TEST(test_sprintf_78) {
  char str1[100];
  char str2[100];
  char *str3 = "%u";
  int n = 1;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_287) {
  char str1[100];
  char str2[100];
  char *str3 = "%hu";
  int n = 1;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_288) {
  char str1[100];
  char str2[100];
  char *str3 = "%lu";
  int n = 1;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_79) {
  char str1[100];
  char str2[100];
  char *str3 = "%u!";
  int n = 1;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_80) {
  char str1[100];
  char str2[100];
  char *str3 = "%u!";
  int n = 10;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_81) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+u***";
  int n = 15;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_82) {
  char str1[100];
  char str2[100];
  char *str3 = "***% u***";
  int n = 15;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_83) {
  char str1[100];
  char str2[100];
  char *str3 = "***%-u***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_84) {
  char str1[100];
  char str2[100];
  char *str3 = "***%0u***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_85) {
  char str1[100];
  char str2[100];
  char *str3 = "***%#u***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_86) {
  char str1[100];
  char str2[100];
  char *str3 = "***%5u***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_87) {
  char str1[100];
  char str2[100];
  char *str3 = "***%-5u***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_88) {
  char str1[100];
  char str2[100];
  char *str3 = "***%-5u***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_89) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+-5u***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_90) {
  char str1[100];
  char str2[100];
  char *str3 = "***% -5u***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_91) {
  char str1[100];
  char str2[100];
  char *str3 = "***%.5u***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_92) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+.5u***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_93) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+-.5u***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_94) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+-.5u***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_95) {
  char str1[100];
  char str2[100];
  char *str3 = "***% -.5u***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_96) {
  char str1[100];
  char str2[100];
  char *str3 = "***%10.5u***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_97) {
  char str1[100];
  char str2[100];
  char *str3 = "***%-10.5u***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_98) {
  char str1[100];
  char str2[100];
  char *str3 = "***%010.5u***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_99) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+010.5u***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_100) {
  char str1[100];
  char str2[100];
  char *str3 = "***%.0u***";
  int n = 0;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_101) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+0u***";
  int n = 0;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_102) {
  char str1[100];
  char str2[100];
  char *str3 = "***%0u***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_103) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+-010.15u***%u";
  int n = 123;
  int m = 321;
  ck_assert_int_eq(sprintf(str1, str3, n, m), s21_sprintf(str2, str3, n, m));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_104) {
  char str1[100];
  char str2[100];
  char *str3 = "%+- 0#10.15u%+- 0#10.15u";
  int n = 123;
  int m = 321;
  ck_assert_int_eq(sprintf(str1, str3, n, m), s21_sprintf(str2, str3, n, m));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_105) {
  char str1[100];
  char str2[100];
  char *str3 = "%+- 0#9.8u%+- 0#10.5u";
  int n = 123;
  int m = 321;
  ck_assert_int_eq(sprintf(str1, str3, n, m), s21_sprintf(str2, str3, n, m));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_106) {
  char str1[100];
  char str2[100];
  char *str3 = "%%+- 0#9.8u%+- 0#10.5u";
  int n = 123;
  int m = 321;
  ck_assert_int_eq(sprintf(str1, str3, n, m), s21_sprintf(str2, str3, n, m));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_107) {
  char str1[100];
  char str2[100];
  char *str3 = "%#u";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_108) {
  char str1[100];
  char str2[100];
  char *str3 = "%.*u";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, n), s21_sprintf(str2, str3, 10, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_109) {
  char str1[100];
  char str2[100];
  char *str3 = "%*u";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, n), s21_sprintf(str2, str3, 10, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_110) {
  char str1[100];
  char str2[100];
  char *str3 = "%*u";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, n), s21_sprintf(str2, str3, 10, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_111) {
  char str1[100];
  char str2[100];
  char *str3 = "%.*u";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, n), s21_sprintf(str2, str3, 10, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_112) {
  char str1[100];
  char str2[100];
  char *str3 = "%*.u";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, n), s21_sprintf(str2, str3, 10, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_113) {
  char str1[100];
  char str2[100];
  char *str3 = "%*.*u";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, 5, n),
                   s21_sprintf(str2, str3, 10, 5, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_114) {
  char str1[100];
  char str2[100];
  char *str3 = "%#+-*.*u";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, 5, n),
                   s21_sprintf(str2, str3, 10, 5, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_115) {
  char str1[100];
  char str2[100];
  char *str3 = "%u";
  int n = -123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

// %x %X /////////////////////////////////////////////////////////////
START_TEST(test_sprintf_116) {
  char str1[100];
  char str2[100];
  char *str3 = "%x";
  int n = 1;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_289) {
  char str1[100];
  char str2[100];
  char *str3 = "%hx";
  int n = 1;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_290) {
  char str1[100];
  char str2[100];
  char *str3 = "%lx";
  int n = 1;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_291) {
  char str1[100];
  char str2[100];
  char *str3 = "%X";
  int n = 1;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_292) {
  char str1[100];
  char str2[100];
  char *str3 = "%hX";
  int n = 1;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_293) {
  char str1[100];
  char str2[100];
  char *str3 = "%lX";
  int n = 1;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_117) {
  char str1[100];
  char str2[100];
  char *str3 = "%x!";
  int n = 1;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_118) {
  char str1[100];
  char str2[100];
  char *str3 = "%x!";
  int n = 10;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_119) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+x***";
  int n = 15;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_120) {
  char str1[100];
  char str2[100];
  char *str3 = "***% x***";
  int n = 15;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_121) {
  char str1[100];
  char str2[100];
  char *str3 = "***%-x***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_122) {
  char str1[100];
  char str2[100];
  char *str3 = "***%0x***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_123) {
  char str1[100];
  char str2[100];
  char *str3 = "***%#x***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_296) {
  char str1[100];
  char str2[100];
  char *str3 = "***%#X***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_124) {
  char str1[100];
  char str2[100];
  char *str3 = "***%5x***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_125) {
  char str1[100];
  char str2[100];
  char *str3 = "***%-5x***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_126) {
  char str1[100];
  char str2[100];
  char *str3 = "***%-5x***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_127) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+-5x***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_128) {
  char str1[100];
  char str2[100];
  char *str3 = "***% -5x***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_129) {
  char str1[100];
  char str2[100];
  char *str3 = "***%.5x***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_130) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+.5x***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_131) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+-.5x***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_132) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+-.5x***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_133) {
  char str1[100];
  char str2[100];
  char *str3 = "***% -.5x***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_134) {
  char str1[100];
  char str2[100];
  char *str3 = "***%10.5x***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_135) {
  char str1[100];
  char str2[100];
  char *str3 = "***%-10.5x***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_136) {
  char str1[100];
  char str2[100];
  char *str3 = "***%010.5x***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_137) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+010.5x***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_138) {
  char str1[100];
  char str2[100];
  char *str3 = "***%.0x***";
  int n = 0;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_139) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+0x***";
  int n = 0;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_140) {
  char str1[100];
  char str2[100];
  char *str3 = "***%0x***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_141) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+-010.15x***%x";
  int n = 123;
  int m = 321;
  ck_assert_int_eq(sprintf(str1, str3, n, m), s21_sprintf(str2, str3, n, m));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_142) {
  char str1[100];
  char str2[100];
  char *str3 = "%+- 0#10.15x%+- 0#10.15x";
  int n = 123;
  int m = 321;
  ck_assert_int_eq(sprintf(str1, str3, n, m), s21_sprintf(str2, str3, n, m));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_143) {
  char str1[100];
  char str2[100];
  char *str3 = "%+- 0#9.8x%+- 0#10.5x";
  int n = 123;
  int m = 321;
  ck_assert_int_eq(sprintf(str1, str3, n, m), s21_sprintf(str2, str3, n, m));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_144) {
  char str1[100];
  char str2[100];
  char *str3 = "%%+- 0#9.8x%+- 0#10.5x";
  int n = 123;
  int m = 321;
  ck_assert_int_eq(sprintf(str1, str3, n, m), s21_sprintf(str2, str3, n, m));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_145) {
  char str1[100];
  char str2[100];
  char *str3 = "%#x";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_146) {
  char str1[100];
  char str2[100];
  char *str3 = "%.*x";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, n), s21_sprintf(str2, str3, 10, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_147) {
  char str1[100];
  char str2[100];
  char *str3 = "%*x";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, n), s21_sprintf(str2, str3, 10, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_148) {
  char str1[100];
  char str2[100];
  char *str3 = "%*x";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, n), s21_sprintf(str2, str3, 10, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_149) {
  char str1[100];
  char str2[100];
  char *str3 = "%.*x";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, n), s21_sprintf(str2, str3, 10, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_150) {
  char str1[100];
  char str2[100];
  char *str3 = "%*.x";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, n), s21_sprintf(str2, str3, 10, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_151) {
  char str1[100];
  char str2[100];
  char *str3 = "%*.*x";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, 5, n),
                   s21_sprintf(str2, str3, 10, 5, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_152) {
  char str1[100];
  char str2[100];
  char *str3 = "%#+-*.*x";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, 5, n),
                   s21_sprintf(str2, str3, 10, 5, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_153) {
  char str1[100];
  char str2[100];
  char *str3 = "%x";
  int n = -123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

// %p ////////////////////////////////////////////////////////////////
START_TEST(test_sprintf_154) {
  char str1[100];
  char str2[100];
  char *str3 = "%p";
  int n = 0;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_155) {
  char str1[100];
  char str2[100];
  char *str3 = "%p";
  int n = 1;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_156) {
  char str1[100];
  char str2[100];
  char *str3 = "%p!";
  int n = 1;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_157) {
  char str1[100];
  char str2[100];
  char *str3 = "%p!";
  int n = 10;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_158) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+p***";
  int n = 15;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_159) {
  char str1[100];
  char str2[100];
  char *str3 = "***% p***";
  int n = 15;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_160) {
  char str1[100];
  char str2[100];
  char *str3 = "***%-p***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_161) {
  char str1[100];
  char str2[100];
  char *str3 = "***%0p***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_162) {
  char str1[100];
  char str2[100];
  char *str3 = "***%#p***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_163) {
  char str1[100];
  char str2[100];
  char *str3 = "***%5p***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_164) {
  char str1[100];
  char str2[100];
  char *str3 = "***%-5p***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_165) {
  char str1[100];
  char str2[100];
  char *str3 = "***%-5p***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_166) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+-5p***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_167) {
  char str1[100];
  char str2[100];
  char *str3 = "***% -5p***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_168) {
  char str1[100];
  char str2[100];
  char *str3 = "***%.5p***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_169) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+.5p***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_170) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+-.5p***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_171) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+-.5p***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_172) {
  char str1[100];
  char str2[100];
  char *str3 = "***% -.5p***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_173) {
  char str1[100];
  char str2[100];
  char *str3 = "***%10.5p***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_174) {
  char str1[100];
  char str2[100];
  char *str3 = "***%-10.5p***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_175) {
  char str1[100];
  char str2[100];
  char *str3 = "***%010.5p***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_176) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+010.5p***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_177) {
  char str1[100];
  char str2[100];
  char *str3 = "***%.0p***";
  int n = 0;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_178) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+0p***";
  int n = 0;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_179) {
  char str1[100];
  char str2[100];
  char *str3 = "***%0p***";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_180) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+-010.15p***%p";
  int n = 123;
  int m = 321;
  ck_assert_int_eq(sprintf(str1, str3, n, m), s21_sprintf(str2, str3, n, m));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_181) {
  char str1[100];
  char str2[100];
  char *str3 = "%+- 0#10.15p%+- 0#10.15p";
  int n = 123;
  int m = 321;
  ck_assert_int_eq(sprintf(str1, str3, n, m), s21_sprintf(str2, str3, n, m));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_182) {
  char str1[100];
  char str2[100];
  char *str3 = "%+- 0#9.8p%+- 0#10.5p";
  int n = 123;
  int m = 321;
  ck_assert_int_eq(sprintf(str1, str3, n, m), s21_sprintf(str2, str3, n, m));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_183) {
  char str1[100];
  char str2[100];
  char *str3 = "%%+- 0#9.8p%+- 0#10.5p";
  int n = 123;
  int m = 321;
  ck_assert_int_eq(sprintf(str1, str3, n, m), s21_sprintf(str2, str3, n, m));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_184) {
  char str1[100];
  char str2[100];
  char *str3 = "%#p";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_185) {
  char str1[100];
  char str2[100];
  char *str3 = "%.*p";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, n), s21_sprintf(str2, str3, 10, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_186) {
  char str1[100];
  char str2[100];
  char *str3 = "%*p";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, n), s21_sprintf(str2, str3, 10, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_187) {
  char str1[100];
  char str2[100];
  char *str3 = "%*p";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, n), s21_sprintf(str2, str3, 10, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_188) {
  char str1[100];
  char str2[100];
  char *str3 = "%.*p";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, n), s21_sprintf(str2, str3, 10, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_189) {
  char str1[100];
  char str2[100];
  char *str3 = "%*.p";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, n), s21_sprintf(str2, str3, 10, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_190) {
  char str1[100];
  char str2[100];
  char *str3 = "%*.*p";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, 5, n),
                   s21_sprintf(str2, str3, 10, 5, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_191) {
  char str1[100];
  char str2[100];
  char *str3 = "%#+-*.*p";
  int n = 123;
  ck_assert_int_eq(sprintf(str1, str3, 10, 5, n),
                   s21_sprintf(str2, str3, 10, 5, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_192) {
  char str1[100];
  char str2[100];
  char *str3 = "%p";
  int n = -123;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

// %f ////////////////////////////////////////////////////////////////
START_TEST(test_sprintf_193) {
  char str1[100];
  char str2[100];
  char *str3 = "";
  ck_assert_int_eq(sprintf(str1, str3, 123.456),
                   s21_sprintf(str2, str3, 123.456));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_194) {
  char str1[100];
  char str2[100];
  char *str3 = "123.456";
  ck_assert_int_eq(sprintf(str1, str3, 123.456),
                   s21_sprintf(str2, str3, 123.456));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_195) {
  char str1[100];
  char str2[100];
  char *str3 = "%f";
  float n = 123.456;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_295) {
  char str1[100];
  char str2[100];
  char *str3 = "%Lf";
  float n = (123.456L);
  sprintf(str1, str3, n);
  s21_sprintf(str2, str3, n);
  ck_assert_int_eq(0, 0);
}
END_TEST

START_TEST(test_sprintf_196) {
  char str1[100];
  char str2[100];
  char *str3 = "%f!";
  float n = 123.456;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_197) {
  char str1[100];
  char str2[100];
  char *str3 = "%f%f%f%f%f!";
  float n1 = 0;
  float n2 = 0.0;
  float n3 = 1.0;
  float n4 = 1.;
  float n5 = 0.;
  ck_assert_int_eq(sprintf(str1, str3, n1, n2, n3, n4, n5),
                   s21_sprintf(str2, str3, n1, n2, n3, n4, n5));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_198) {
  char str1[100];
  char str2[100];
  char *str3 = "123 %f 456";
  float n = -123.456;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_199) {
  char str1[100];
  char str2[100];
  char *str3 = "   %f   ";
  float n = -15;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_200) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+f***";
  float n = 0.11111111111;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_201) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+f***";
  float n = -0.11111111111;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_202) {
  char str1[100];
  char str2[100];
  char *str3 = "***% f***";
  float n = 99999999999.9999999999;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_203) {
  char str1[100];
  char str2[100];
  char *str3 = "%0f | %10f | %.10f | %010f";
  float n1 = 123.456;
  ck_assert_int_eq(sprintf(str1, str3, n1, n1, n1, n1),
                   s21_sprintf(str2, str3, n1, n1, n1, n1));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_204) {
  char str1[100];
  char str2[100];
  char *str3 = "%0f | %10f | %.10f | %010f";
  float n1 = 123.456;
  ck_assert_int_eq(sprintf(str1, str3, n1, n1, n1, n1),
                   s21_sprintf(str2, str3, n1, n1, n1, n1));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_205) {
  char str1[100];
  char str2[100];
  char *str3 = "%+-0 #15.15f";
  float n1 = 123.456;
  ck_assert_int_eq(sprintf(str1, str3, n1), s21_sprintf(str2, str3, n1));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_206) {
  char str1[100];
  char str2[100];
  char *str3 = "%+-0 #30.15f";
  float n1 = 0.0000000123;
  ck_assert_int_eq(sprintf(str1, str3, n1), s21_sprintf(str2, str3, n1));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_207) {
  char str1[100];
  char str2[100];
  char *str3 = "%+-0 #15.20f";
  float n1 = 0.0000000123;
  ck_assert_int_eq(sprintf(str1, str3, n1), s21_sprintf(str2, str3, n1));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_208) {
  char str1[100];
  char str2[100];
  char *str3 = "%+-0 #15.20f";
  float n1 = -0.0000000123;
  ck_assert_int_eq(sprintf(str1, str3, n1), s21_sprintf(str2, str3, n1));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_209) {
  char str1[100];
  char str2[100];
  char *str3 = "%+-0 #30.15f";
  float n1 = -0.0000000123;
  ck_assert_int_eq(sprintf(str1, str3, n1), s21_sprintf(str2, str3, n1));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_210) {
  char str1[100];
  char str2[100];
  char *str3 = "%+-0 #30.15f%15.*f";
  float n1 = -0.0000000123;
  float n2 = 1234.5678;
  ck_assert_int_eq(sprintf(str1, str3, n1, 0, n2),
                   s21_sprintf(str2, str3, n1, 0, n2));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_211) {
  char str1[100];
  char str2[100];
  char *str3 = "%+-0 #*.15f%15.*f";
  float n1 = -0.0000000123;
  float n2 = 1234.5678;
  ck_assert_int_eq(sprintf(str1, str3, 10, n1, 0, n2),
                   s21_sprintf(str2, str3, 10, n1, 0, n2));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

// %e %E /////////////////////////////////////////////////////////////
START_TEST(test_sprintf_212) {
  char str1[100];
  char str2[100];
  char *str3 = "%e";
  float n = 123.456;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_294) {
  char str1[100];
  char str2[100];
  char *str3 = "%E";
  float n = 123.456;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_213) {
  char str1[100];
  char str2[100];
  char *str3 = "%e!";
  float n = 123.456;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_214) {
  char str1[100];
  char str2[100];
  char *str3 = "%e%e%e%e%e!";
  float n1 = 0;
  float n2 = 0.0;
  float n3 = 1.0;
  float n4 = 1.;
  float n5 = 0.;
  ck_assert_int_eq(sprintf(str1, str3, n1, n2, n3, n4, n5),
                   s21_sprintf(str2, str3, n1, n2, n3, n4, n5));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_215) {
  char str1[100];
  char str2[100];
  char *str3 = "123 %e 456";
  float n = -123.456;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_216) {
  char str1[100];
  char str2[100];
  char *str3 = "   %e   ";
  float n = -15;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_217) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+e***";
  float n = 0.11111111111;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_218) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+e***";
  float n = -0.11111111111;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_220) {
  char str1[100];
  char str2[100];
  char *str3 = "%0e | %10e | %.10e | %010e";
  float n1 = 123.456;
  ck_assert_int_eq(sprintf(str1, str3, n1, n1, n1, n1),
                   s21_sprintf(str2, str3, n1, n1, n1, n1));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_221) {
  char str1[100];
  char str2[100];
  char *str3 = "%0e | %10e | %.10e | %010e";
  float n1 = 123.456;
  ck_assert_int_eq(sprintf(str1, str3, n1, n1, n1, n1),
                   s21_sprintf(str2, str3, n1, n1, n1, n1));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_222) {
  char str1[100];
  char str2[100];
  char *str3 = "%+-0 #15.15e";
  float n1 = 123.456;
  ck_assert_int_eq(sprintf(str1, str3, n1), s21_sprintf(str2, str3, n1));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_223) {
  char str1[100];
  char str2[100];
  char *str3 = "%+-0 #30.15e";
  float n1 = 0.0000000123;
  ck_assert_int_eq(sprintf(str1, str3, n1), s21_sprintf(str2, str3, n1));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_224) {
  char str1[100];
  char str2[100];
  char *str3 = "%+-0 #30.15e";
  float n1 = 0.0000000123;
  ck_assert_int_eq(sprintf(str1, str3, n1), s21_sprintf(str2, str3, n1));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_225) {
  char str1[100];
  char str2[100];
  char *str3 = "%+-0 #30.15e";
  float n1 = -0.0000123;
  ck_assert_int_eq(sprintf(str1, str3, n1), s21_sprintf(str2, str3, n1));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_226) {
  char str1[100];
  char str2[100];
  char *str3 = "%+-0 #30.15e";
  float n1 = -0.0000000123;
  ck_assert_int_eq(sprintf(str1, str3, n1), s21_sprintf(str2, str3, n1));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_227) {
  char str1[100];
  char str2[100];
  char *str3 = "%+-0 #30.15e%15.*e";
  float n1 = -0.0000000123;
  float n2 = 1234.5678;
  ck_assert_int_eq(sprintf(str1, str3, n1, 0, n2),
                   s21_sprintf(str2, str3, n1, 0, n2));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_228) {
  char str1[100];
  char str2[100];
  char *str3 = "%+-0 #*.15e%15.*e";
  float n1 = -0.0000000123;
  float n2 = 1234.5678;
  ck_assert_int_eq(sprintf(str1, str3, 10, n1, 0, n2),
                   s21_sprintf(str2, str3, 10, n1, 0, n2));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

// %g %G /////////////////////////////////////////////////////////////
START_TEST(test_sprintf_229) {
  char str1[100];
  char str2[100];
  char *str3 = "%g";
  float n = 123.456;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_230) {
  char str1[100];
  char str2[100];
  char *str3 = "%g!";
  float n = 123.456;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_231) {
  char str1[100];
  char str2[100];
  char *str3 = "%g%g%g%g%g!";
  float n1 = 0;
  float n2 = 0.0;
  float n3 = 1.0;
  float n4 = 1.;
  float n5 = 0.;
  ck_assert_int_eq(sprintf(str1, str3, n1, n2, n3, n4, n5),
                   s21_sprintf(str2, str3, n1, n2, n3, n4, n5));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_232) {
  char str1[100];
  char str2[100];
  char *str3 = "123 %g 456";
  float n = -123.456;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_233) {
  char str1[100];
  char str2[100];
  char *str3 = "   %g   ";
  float n = -15;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_234) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+g***";
  float n = 0.11111111111;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_235) {
  char str1[100];
  char str2[100];
  char *str3 = "***%+g***";
  float n = -0.11111111111;
  ck_assert_int_eq(sprintf(str1, str3, n), s21_sprintf(str2, str3, n));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_237) {
  char str1[100];
  char str2[100];
  char *str3 = "%0g | %10g | %.10g | %010g";
  float n1 = 123.456;
  ck_assert_int_eq(sprintf(str1, str3, n1, n1, n1, n1),
                   s21_sprintf(str2, str3, n1, n1, n1, n1));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_238) {
  char str1[100];
  char str2[100];
  char *str3 = "%0g | %10g | %.10g | %010g";
  float n1 = 123.456;
  ck_assert_int_eq(sprintf(str1, str3, n1, n1, n1, n1),
                   s21_sprintf(str2, str3, n1, n1, n1, n1));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_239) {
  char str1[100];
  char str2[100];
  char *str3 = "%+-0 #15.15g";
  float n1 = 123.456;
  ck_assert_int_eq(sprintf(str1, str3, n1), s21_sprintf(str2, str3, n1));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_240) {
  char str1[100];
  char str2[100];
  char *str3 = "%+-0 #30.15g";
  float n1 = 0.0000000123;
  ck_assert_int_eq(sprintf(str1, str3, n1), s21_sprintf(str2, str3, n1));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_241) {
  char str1[100];
  char str2[100];
  char *str3 = "%+0 #30.15g";
  float n1 = 0.0000000123;
  ck_assert_int_eq(sprintf(str1, str3, n1), s21_sprintf(str2, str3, n1));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_242) {
  char str1[100];
  char str2[100];
  char *str3 = "%+-0 #30.15g";
  float n1 = -0.0000123;
  ck_assert_int_eq(sprintf(str1, str3, n1), s21_sprintf(str2, str3, n1));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_243) {
  char str1[100];
  char str2[100];
  char *str3 = "%+0 #30.15g";
  float n1 = -0.0000000123;
  ck_assert_int_eq(sprintf(str1, str3, n1), s21_sprintf(str2, str3, n1));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_244) {
  char str1[100];
  char str2[100];
  char *str3 = "%+-0 #30.15g%15.*g";
  float n1 = -0.0000000123;
  float n2 = 1234.5678;
  ck_assert_int_eq(sprintf(str1, str3, n1, 0, n2),
                   s21_sprintf(str2, str3, n1, 0, n2));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_245) {
  char str1[100];
  char str2[100];
  char *str3 = "%+-0 #*.15g%15.*g";
  float n1 = -0.0000000123;
  float n2 = 1234.5678;
  ck_assert_int_eq(sprintf(str1, str3, 10, n1, 0, n2),
                   s21_sprintf(str2, str3, 10, n1, 0, n2));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_246) {
  char str1[100];
  char str2[100];
  char *str3 = "%#30.15G";
  float n1 = 123.0000;
  ck_assert_int_eq(sprintf(str1, str3, n1), s21_sprintf(str2, str3, n1));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_247) {
  char str1[100];
  char str2[100];
  char *str3 = "%#30.15G";
  float n1 = 123.1000;
  ck_assert_int_eq(sprintf(str1, str3, n1), s21_sprintf(str2, str3, n1));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_248) {
  char str1[100];
  char str2[100];
  char *str3 = "%#+30.0G";
  float n1 = 123.1000;
  ck_assert_int_eq(sprintf(str1, str3, n1), s21_sprintf(str2, str3, n1));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

// %c %s /////////////////////////////////////////////////////////////
START_TEST(test_sprintf_249) {
  char str1[100];
  char str2[100];
  char *str3 = "%c";
  char c = 'c';
  ck_assert_int_eq(sprintf(str1, str3, c), s21_sprintf(str2, str3, c));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_250) {
  char str1[100];
  char str2[100];
  char *str3 = "%c!";
  char c = 'c';
  ck_assert_int_eq(sprintf(str1, str3, c), s21_sprintf(str2, str3, c));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_251) {
  char str1[100];
  char str2[100];
  char *str3 = "%10c";
  char c = 'c';
  ck_assert_int_eq(sprintf(str1, str3, c), s21_sprintf(str2, str3, c));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_252) {
  char str1[100];
  char str2[100];
  char *str3 = "%.10c";
  char c = 'c';
  ck_assert_int_eq(sprintf(str1, str3, c), s21_sprintf(str2, str3, c));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_253) {
  char str1[100];
  char str2[100];
  char *str3 = "%10.10c";
  char c = 'c';
  ck_assert_int_eq(sprintf(str1, str3, c), s21_sprintf(str2, str3, c));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_254) {
  char str1[100];
  char str2[100];
  char *str3 = "%-10.10c";
  char c = 'c';
  ck_assert_int_eq(sprintf(str1, str3, c), s21_sprintf(str2, str3, c));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_255) {
  char str1[100];
  char str2[100];
  char *str3 = "%-10c";
  char c = 'c';
  ck_assert_int_eq(sprintf(str1, str3, c), s21_sprintf(str2, str3, c));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_256) {
  char str1[100];
  char str2[100];
  char *str3 = "%-.10c";
  char c = 'c';
  ck_assert_int_eq(sprintf(str1, str3, c), s21_sprintf(str2, str3, c));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_257) {
  char str1[100];
  char str2[100];
  char *str3 = "%-5.3c%c%c%c%c Hello! ABOBA";
  ck_assert_int_eq(sprintf(str1, str3, 'c', 'a', 'b', 'b'),
                   s21_sprintf(str2, str3, 'c', 'a', 'b', 'b'));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_258) {
  char str1[100];
  char str2[100];
  char *str3 = "%+- 0#c";
  char c = 'c';
  ck_assert_int_eq(sprintf(str1, str3, c), s21_sprintf(str2, str3, c));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_259) {
  char str1[100];
  char str2[100];
  char *str3 = "%+- 0#10.5c";
  char c = 'c';
  ck_assert_int_eq(sprintf(str1, str3, c), s21_sprintf(str2, str3, c));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_260) {
  char str1[100];
  char str2[100];
  char *str3 = "%+- 0#5.10c";
  char c = 'c';
  ck_assert_int_eq(sprintf(str1, str3, c), s21_sprintf(str2, str3, c));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_261) {
  char str1[100];
  char str2[100];
  char *str3 = "%+- 0#5.5c";
  char c = 'c';
  ck_assert_int_eq(sprintf(str1, str3, c), s21_sprintf(str2, str3, c));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_262) {
  char str1[100];
  char str2[100];
  char *str3 = "%+- 0#5.0c";
  char c = 'c';
  ck_assert_int_eq(sprintf(str1, str3, c), s21_sprintf(str2, str3, c));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_263) {
  char str1[100];
  char str2[100];
  char *str3 = "%+- 0#0.5c";
  char c = 'c';
  ck_assert_int_eq(sprintf(str1, str3, c), s21_sprintf(str2, str3, c));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_264) {
  char str1[100];
  char str2[100];
  char *str3 = "%+- 0#0.0c";
  char c = 'c';
  ck_assert_int_eq(sprintf(str1, str3, c), s21_sprintf(str2, str3, c));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_265) {
  char str1[100];
  char str2[100];
  char *str3 = "%s";
  char *s = "TEST";
  ck_assert_int_eq(sprintf(str1, str3, s), s21_sprintf(str2, str3, s));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_266) {
  char str1[100];
  char str2[100];
  char *str3 = "%s!";
  char *s = "TEST";
  ck_assert_int_eq(sprintf(str1, str3, s), s21_sprintf(str2, str3, s));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_267) {
  char str1[100];
  char str2[100];
  char *str3 = "%10s";
  char *s = "TEST";
  ck_assert_int_eq(sprintf(str1, str3, s), s21_sprintf(str2, str3, s));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_268) {
  char str1[100];
  char str2[100];
  char *str3 = "%.10s";
  char *s = "TEST";
  ck_assert_int_eq(sprintf(str1, str3, s), s21_sprintf(str2, str3, s));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_269) {
  char str1[100];
  char str2[100];
  char *str3 = "%10.10s";
  char *s = "TEST";
  ck_assert_int_eq(sprintf(str1, str3, s), s21_sprintf(str2, str3, s));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_270) {
  char str1[100];
  char str2[100];
  char *str3 = "%-10.10s";
  char *s = "TEST";
  ck_assert_int_eq(sprintf(str1, str3, s), s21_sprintf(str2, str3, s));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_271) {
  char str1[100];
  char str2[100];
  char *str3 = "%-10s";
  char *s = "TEST";
  ck_assert_int_eq(sprintf(str1, str3, s), s21_sprintf(str2, str3, s));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_272) {
  char str1[100];
  char str2[100];
  char *str3 = "%-.10s";
  char *s = "TEST";
  ck_assert_int_eq(sprintf(str1, str3, s), s21_sprintf(str2, str3, s));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_273) {
  char str1[100];
  char str2[100];
  char *str3 = "%-5.3s%s%s%s%s Hello! ABOBA";
  ck_assert_int_eq(sprintf(str1, str3, "ab", "cd", "ef", "gh"),
                   s21_sprintf(str2, str3, "ab", "cd", "ef", "gh"));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_274) {
  char str1[100];
  char str2[100];
  char *str3 = "%+- 0#s";
  char *s = "TEST";
  ck_assert_int_eq(sprintf(str1, str3, s), s21_sprintf(str2, str3, s));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_275) {
  char str1[100];
  char str2[100];
  char *str3 = "%+- 0#10.5s";
  char *s = "TEST";
  ck_assert_int_eq(sprintf(str1, str3, s), s21_sprintf(str2, str3, s));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_276) {
  char str1[100];
  char str2[100];
  char *str3 = "%+- 0#5.10s";
  char *s = "TEST";
  ck_assert_int_eq(sprintf(str1, str3, s), s21_sprintf(str2, str3, s));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_277) {
  char str1[100];
  char str2[100];
  char *str3 = "%+- 0#5.5s";
  char *s = "TEST";
  ck_assert_int_eq(sprintf(str1, str3, s), s21_sprintf(str2, str3, s));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_278) {
  char str1[100];
  char str2[100];
  char *str3 = "%+- 0#5.0s";
  char *s = "TEST";
  ck_assert_int_eq(sprintf(str1, str3, s), s21_sprintf(str2, str3, s));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_279) {
  char str1[100];
  char str2[100];
  char *str3 = "%+- 0#0.5s";
  char *s = "TEST";
  ck_assert_int_eq(sprintf(str1, str3, s), s21_sprintf(str2, str3, s));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf_280) {
  char str1[100];
  char str2[100];
  char *str3 = "%+- 0#0.0s";
  char *s = "TEST";
  ck_assert_int_eq(sprintf(str1, str3, s), s21_sprintf(str2, str3, s));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

Suite *example_create() {
  Suite *suite = suite_create("TEST_SPRINTF");
  // %i %d
  TCase *tcase_sprintf = tcase_create("SPRINTF");
  tcase_add_test(tcase_sprintf, test_sprintf_1);
  tcase_add_test(tcase_sprintf, test_sprintf_2);
  tcase_add_test(tcase_sprintf, test_sprintf_3);
  tcase_add_test(tcase_sprintf, test_sprintf_4);
  tcase_add_test(tcase_sprintf, test_sprintf_5);
  tcase_add_test(tcase_sprintf, test_sprintf_6);
  tcase_add_test(tcase_sprintf, test_sprintf_7);
  tcase_add_test(tcase_sprintf, test_sprintf_8);
  tcase_add_test(tcase_sprintf, test_sprintf_9);
  tcase_add_test(tcase_sprintf, test_sprintf_10);
  tcase_add_test(tcase_sprintf, test_sprintf_11);
  tcase_add_test(tcase_sprintf, test_sprintf_12);
  tcase_add_test(tcase_sprintf, test_sprintf_13);
  tcase_add_test(tcase_sprintf, test_sprintf_14);
  tcase_add_test(tcase_sprintf, test_sprintf_15);
  tcase_add_test(tcase_sprintf, test_sprintf_16);
  tcase_add_test(tcase_sprintf, test_sprintf_17);
  tcase_add_test(tcase_sprintf, test_sprintf_18);
  tcase_add_test(tcase_sprintf, test_sprintf_19);
  tcase_add_test(tcase_sprintf, test_sprintf_20);
  tcase_add_test(tcase_sprintf, test_sprintf_21);
  tcase_add_test(tcase_sprintf, test_sprintf_22);
  tcase_add_test(tcase_sprintf, test_sprintf_23);
  tcase_add_test(tcase_sprintf, test_sprintf_24);
  tcase_add_test(tcase_sprintf, test_sprintf_25);
  tcase_add_test(tcase_sprintf, test_sprintf_26);
  tcase_add_test(tcase_sprintf, test_sprintf_27);
  tcase_add_test(tcase_sprintf, test_sprintf_28);
  tcase_add_test(tcase_sprintf, test_sprintf_29);
  tcase_add_test(tcase_sprintf, test_sprintf_30);
  tcase_add_test(tcase_sprintf, test_sprintf_31);
  tcase_add_test(tcase_sprintf, test_sprintf_32);
  tcase_add_test(tcase_sprintf, test_sprintf_33);
  tcase_add_test(tcase_sprintf, test_sprintf_34);
  tcase_add_test(tcase_sprintf, test_sprintf_35);
  tcase_add_test(tcase_sprintf, test_sprintf_36);
  tcase_add_test(tcase_sprintf, test_sprintf_37);
  tcase_add_test(tcase_sprintf, test_sprintf_38);
  // %o
  tcase_add_test(tcase_sprintf, test_sprintf_39);
  tcase_add_test(tcase_sprintf, test_sprintf_40);
  tcase_add_test(tcase_sprintf, test_sprintf_41);
  tcase_add_test(tcase_sprintf, test_sprintf_42);
  tcase_add_test(tcase_sprintf, test_sprintf_43);
  tcase_add_test(tcase_sprintf, test_sprintf_44);
  tcase_add_test(tcase_sprintf, test_sprintf_45);
  tcase_add_test(tcase_sprintf, test_sprintf_46);
  tcase_add_test(tcase_sprintf, test_sprintf_47);
  tcase_add_test(tcase_sprintf, test_sprintf_48);
  tcase_add_test(tcase_sprintf, test_sprintf_49);
  tcase_add_test(tcase_sprintf, test_sprintf_50);
  tcase_add_test(tcase_sprintf, test_sprintf_51);
  tcase_add_test(tcase_sprintf, test_sprintf_52);
  tcase_add_test(tcase_sprintf, test_sprintf_53);
  tcase_add_test(tcase_sprintf, test_sprintf_54);
  tcase_add_test(tcase_sprintf, test_sprintf_55);
  tcase_add_test(tcase_sprintf, test_sprintf_56);
  tcase_add_test(tcase_sprintf, test_sprintf_57);
  tcase_add_test(tcase_sprintf, test_sprintf_58);
  tcase_add_test(tcase_sprintf, test_sprintf_59);
  tcase_add_test(tcase_sprintf, test_sprintf_60);
  tcase_add_test(tcase_sprintf, test_sprintf_61);
  tcase_add_test(tcase_sprintf, test_sprintf_62);
  tcase_add_test(tcase_sprintf, test_sprintf_63);
  tcase_add_test(tcase_sprintf, test_sprintf_64);
  tcase_add_test(tcase_sprintf, test_sprintf_65);
  tcase_add_test(tcase_sprintf, test_sprintf_66);
  tcase_add_test(tcase_sprintf, test_sprintf_67);
  tcase_add_test(tcase_sprintf, test_sprintf_68);
  tcase_add_test(tcase_sprintf, test_sprintf_69);
  tcase_add_test(tcase_sprintf, test_sprintf_70);
  tcase_add_test(tcase_sprintf, test_sprintf_71);
  tcase_add_test(tcase_sprintf, test_sprintf_72);
  tcase_add_test(tcase_sprintf, test_sprintf_73);
  tcase_add_test(tcase_sprintf, test_sprintf_74);
  tcase_add_test(tcase_sprintf, test_sprintf_75);
  tcase_add_test(tcase_sprintf, test_sprintf_76);
  tcase_add_test(tcase_sprintf, test_sprintf_77);
  tcase_add_test(tcase_sprintf, test_sprintf_78);
  tcase_add_test(tcase_sprintf, test_sprintf_79);
  tcase_add_test(tcase_sprintf, test_sprintf_80);
  tcase_add_test(tcase_sprintf, test_sprintf_81);
  tcase_add_test(tcase_sprintf, test_sprintf_82);
  tcase_add_test(tcase_sprintf, test_sprintf_83);
  tcase_add_test(tcase_sprintf, test_sprintf_84);
  tcase_add_test(tcase_sprintf, test_sprintf_85);
  tcase_add_test(tcase_sprintf, test_sprintf_86);
  tcase_add_test(tcase_sprintf, test_sprintf_87);
  tcase_add_test(tcase_sprintf, test_sprintf_88);
  tcase_add_test(tcase_sprintf, test_sprintf_89);
  tcase_add_test(tcase_sprintf, test_sprintf_90);
  tcase_add_test(tcase_sprintf, test_sprintf_91);
  tcase_add_test(tcase_sprintf, test_sprintf_92);
  tcase_add_test(tcase_sprintf, test_sprintf_93);
  tcase_add_test(tcase_sprintf, test_sprintf_94);
  tcase_add_test(tcase_sprintf, test_sprintf_95);
  tcase_add_test(tcase_sprintf, test_sprintf_96);
  tcase_add_test(tcase_sprintf, test_sprintf_97);
  tcase_add_test(tcase_sprintf, test_sprintf_98);
  tcase_add_test(tcase_sprintf, test_sprintf_99);
  tcase_add_test(tcase_sprintf, test_sprintf_100);
  tcase_add_test(tcase_sprintf, test_sprintf_101);
  tcase_add_test(tcase_sprintf, test_sprintf_102);
  tcase_add_test(tcase_sprintf, test_sprintf_103);
  tcase_add_test(tcase_sprintf, test_sprintf_104);
  tcase_add_test(tcase_sprintf, test_sprintf_105);
  tcase_add_test(tcase_sprintf, test_sprintf_106);
  tcase_add_test(tcase_sprintf, test_sprintf_107);
  tcase_add_test(tcase_sprintf, test_sprintf_108);
  tcase_add_test(tcase_sprintf, test_sprintf_109);
  tcase_add_test(tcase_sprintf, test_sprintf_110);
  tcase_add_test(tcase_sprintf, test_sprintf_111);
  tcase_add_test(tcase_sprintf, test_sprintf_112);
  tcase_add_test(tcase_sprintf, test_sprintf_113);
  tcase_add_test(tcase_sprintf, test_sprintf_114);
  tcase_add_test(tcase_sprintf, test_sprintf_115);
  tcase_add_test(tcase_sprintf, test_sprintf_116);
  // %x %X
  tcase_add_test(tcase_sprintf, test_sprintf_117);
  tcase_add_test(tcase_sprintf, test_sprintf_118);
  tcase_add_test(tcase_sprintf, test_sprintf_119);
  tcase_add_test(tcase_sprintf, test_sprintf_120);
  tcase_add_test(tcase_sprintf, test_sprintf_121);
  tcase_add_test(tcase_sprintf, test_sprintf_122);
  tcase_add_test(tcase_sprintf, test_sprintf_123);
  tcase_add_test(tcase_sprintf, test_sprintf_124);
  tcase_add_test(tcase_sprintf, test_sprintf_125);
  tcase_add_test(tcase_sprintf, test_sprintf_126);
  tcase_add_test(tcase_sprintf, test_sprintf_127);
  tcase_add_test(tcase_sprintf, test_sprintf_128);
  tcase_add_test(tcase_sprintf, test_sprintf_129);
  tcase_add_test(tcase_sprintf, test_sprintf_130);
  tcase_add_test(tcase_sprintf, test_sprintf_131);
  tcase_add_test(tcase_sprintf, test_sprintf_132);
  tcase_add_test(tcase_sprintf, test_sprintf_133);
  tcase_add_test(tcase_sprintf, test_sprintf_134);
  tcase_add_test(tcase_sprintf, test_sprintf_135);
  tcase_add_test(tcase_sprintf, test_sprintf_136);
  tcase_add_test(tcase_sprintf, test_sprintf_137);
  tcase_add_test(tcase_sprintf, test_sprintf_138);
  tcase_add_test(tcase_sprintf, test_sprintf_139);
  tcase_add_test(tcase_sprintf, test_sprintf_140);
  tcase_add_test(tcase_sprintf, test_sprintf_141);
  tcase_add_test(tcase_sprintf, test_sprintf_142);
  tcase_add_test(tcase_sprintf, test_sprintf_143);
  tcase_add_test(tcase_sprintf, test_sprintf_144);
  tcase_add_test(tcase_sprintf, test_sprintf_145);
  tcase_add_test(tcase_sprintf, test_sprintf_146);
  tcase_add_test(tcase_sprintf, test_sprintf_147);
  tcase_add_test(tcase_sprintf, test_sprintf_148);
  tcase_add_test(tcase_sprintf, test_sprintf_149);
  tcase_add_test(tcase_sprintf, test_sprintf_150);
  tcase_add_test(tcase_sprintf, test_sprintf_151);
  tcase_add_test(tcase_sprintf, test_sprintf_152);
  tcase_add_test(tcase_sprintf, test_sprintf_153);
  // %p
  tcase_add_test(tcase_sprintf, test_sprintf_154);
  tcase_add_test(tcase_sprintf, test_sprintf_155);
  tcase_add_test(tcase_sprintf, test_sprintf_156);
  tcase_add_test(tcase_sprintf, test_sprintf_157);
  tcase_add_test(tcase_sprintf, test_sprintf_158);
  tcase_add_test(tcase_sprintf, test_sprintf_159);
  tcase_add_test(tcase_sprintf, test_sprintf_160);
  tcase_add_test(tcase_sprintf, test_sprintf_161);
  tcase_add_test(tcase_sprintf, test_sprintf_162);
  tcase_add_test(tcase_sprintf, test_sprintf_163);
  tcase_add_test(tcase_sprintf, test_sprintf_164);
  tcase_add_test(tcase_sprintf, test_sprintf_165);
  tcase_add_test(tcase_sprintf, test_sprintf_166);
  tcase_add_test(tcase_sprintf, test_sprintf_167);
  tcase_add_test(tcase_sprintf, test_sprintf_168);
  tcase_add_test(tcase_sprintf, test_sprintf_169);
  tcase_add_test(tcase_sprintf, test_sprintf_170);
  tcase_add_test(tcase_sprintf, test_sprintf_171);
  tcase_add_test(tcase_sprintf, test_sprintf_172);
  tcase_add_test(tcase_sprintf, test_sprintf_173);
  tcase_add_test(tcase_sprintf, test_sprintf_174);
  tcase_add_test(tcase_sprintf, test_sprintf_175);
  tcase_add_test(tcase_sprintf, test_sprintf_176);
  tcase_add_test(tcase_sprintf, test_sprintf_177);
  tcase_add_test(tcase_sprintf, test_sprintf_178);
  tcase_add_test(tcase_sprintf, test_sprintf_179);
  tcase_add_test(tcase_sprintf, test_sprintf_180);
  tcase_add_test(tcase_sprintf, test_sprintf_181);
  tcase_add_test(tcase_sprintf, test_sprintf_182);
  tcase_add_test(tcase_sprintf, test_sprintf_183);
  tcase_add_test(tcase_sprintf, test_sprintf_184);
  tcase_add_test(tcase_sprintf, test_sprintf_185);
  tcase_add_test(tcase_sprintf, test_sprintf_186);
  tcase_add_test(tcase_sprintf, test_sprintf_187);
  tcase_add_test(tcase_sprintf, test_sprintf_188);
  tcase_add_test(tcase_sprintf, test_sprintf_189);
  tcase_add_test(tcase_sprintf, test_sprintf_190);
  tcase_add_test(tcase_sprintf, test_sprintf_191);
  tcase_add_test(tcase_sprintf, test_sprintf_192);
  // %f
  tcase_add_test(tcase_sprintf, test_sprintf_193);
  tcase_add_test(tcase_sprintf, test_sprintf_194);
  tcase_add_test(tcase_sprintf, test_sprintf_195);
  tcase_add_test(tcase_sprintf, test_sprintf_196);
  tcase_add_test(tcase_sprintf, test_sprintf_197);
  tcase_add_test(tcase_sprintf, test_sprintf_198);
  tcase_add_test(tcase_sprintf, test_sprintf_199);
  tcase_add_test(tcase_sprintf, test_sprintf_200);
  tcase_add_test(tcase_sprintf, test_sprintf_201);
  tcase_add_test(tcase_sprintf, test_sprintf_202);
  tcase_add_test(tcase_sprintf, test_sprintf_203);
  tcase_add_test(tcase_sprintf, test_sprintf_204);
  tcase_add_test(tcase_sprintf, test_sprintf_205);
  tcase_add_test(tcase_sprintf, test_sprintf_206);
  tcase_add_test(tcase_sprintf, test_sprintf_207);
  tcase_add_test(tcase_sprintf, test_sprintf_208);
  tcase_add_test(tcase_sprintf, test_sprintf_209);
  tcase_add_test(tcase_sprintf, test_sprintf_210);
  tcase_add_test(tcase_sprintf, test_sprintf_211);
  // %e %E
  tcase_add_test(tcase_sprintf, test_sprintf_212);
  tcase_add_test(tcase_sprintf, test_sprintf_213);
  tcase_add_test(tcase_sprintf, test_sprintf_214);
  tcase_add_test(tcase_sprintf, test_sprintf_215);
  tcase_add_test(tcase_sprintf, test_sprintf_216);
  tcase_add_test(tcase_sprintf, test_sprintf_217);
  tcase_add_test(tcase_sprintf, test_sprintf_218);
  tcase_add_test(tcase_sprintf, test_sprintf_220);
  tcase_add_test(tcase_sprintf, test_sprintf_221);
  tcase_add_test(tcase_sprintf, test_sprintf_222);
  tcase_add_test(tcase_sprintf, test_sprintf_223);
  tcase_add_test(tcase_sprintf, test_sprintf_224);
  tcase_add_test(tcase_sprintf, test_sprintf_225);
  tcase_add_test(tcase_sprintf, test_sprintf_226);
  tcase_add_test(tcase_sprintf, test_sprintf_227);
  tcase_add_test(tcase_sprintf, test_sprintf_228);
  // %g %G
  tcase_add_test(tcase_sprintf, test_sprintf_229);
  tcase_add_test(tcase_sprintf, test_sprintf_230);
  tcase_add_test(tcase_sprintf, test_sprintf_231);
  tcase_add_test(tcase_sprintf, test_sprintf_232);
  tcase_add_test(tcase_sprintf, test_sprintf_233);
  tcase_add_test(tcase_sprintf, test_sprintf_234);
  tcase_add_test(tcase_sprintf, test_sprintf_235);
  tcase_add_test(tcase_sprintf, test_sprintf_237);
  tcase_add_test(tcase_sprintf, test_sprintf_238);
  tcase_add_test(tcase_sprintf, test_sprintf_239);
  tcase_add_test(tcase_sprintf, test_sprintf_240);
  tcase_add_test(tcase_sprintf, test_sprintf_241);
  tcase_add_test(tcase_sprintf, test_sprintf_242);
  tcase_add_test(tcase_sprintf, test_sprintf_243);
  tcase_add_test(tcase_sprintf, test_sprintf_244);
  tcase_add_test(tcase_sprintf, test_sprintf_245);
  tcase_add_test(tcase_sprintf, test_sprintf_246);
  tcase_add_test(tcase_sprintf, test_sprintf_247);
  tcase_add_test(tcase_sprintf, test_sprintf_248);
  // %c %s
  tcase_add_test(tcase_sprintf, test_sprintf_249);
  tcase_add_test(tcase_sprintf, test_sprintf_250);
  tcase_add_test(tcase_sprintf, test_sprintf_251);
  tcase_add_test(tcase_sprintf, test_sprintf_252);
  tcase_add_test(tcase_sprintf, test_sprintf_253);
  tcase_add_test(tcase_sprintf, test_sprintf_254);
  tcase_add_test(tcase_sprintf, test_sprintf_255);
  tcase_add_test(tcase_sprintf, test_sprintf_256);
  tcase_add_test(tcase_sprintf, test_sprintf_257);
  tcase_add_test(tcase_sprintf, test_sprintf_258);
  tcase_add_test(tcase_sprintf, test_sprintf_259);
  tcase_add_test(tcase_sprintf, test_sprintf_260);
  tcase_add_test(tcase_sprintf, test_sprintf_261);
  tcase_add_test(tcase_sprintf, test_sprintf_262);
  tcase_add_test(tcase_sprintf, test_sprintf_263);
  tcase_add_test(tcase_sprintf, test_sprintf_264);
  tcase_add_test(tcase_sprintf, test_sprintf_265);
  tcase_add_test(tcase_sprintf, test_sprintf_266);
  tcase_add_test(tcase_sprintf, test_sprintf_267);
  tcase_add_test(tcase_sprintf, test_sprintf_268);
  tcase_add_test(tcase_sprintf, test_sprintf_269);
  tcase_add_test(tcase_sprintf, test_sprintf_270);
  tcase_add_test(tcase_sprintf, test_sprintf_271);
  tcase_add_test(tcase_sprintf, test_sprintf_272);
  tcase_add_test(tcase_sprintf, test_sprintf_273);
  tcase_add_test(tcase_sprintf, test_sprintf_274);
  tcase_add_test(tcase_sprintf, test_sprintf_275);
  tcase_add_test(tcase_sprintf, test_sprintf_276);
  tcase_add_test(tcase_sprintf, test_sprintf_277);
  tcase_add_test(tcase_sprintf, test_sprintf_278);
  tcase_add_test(tcase_sprintf, test_sprintf_279);
  tcase_add_test(tcase_sprintf, test_sprintf_280);

  tcase_add_test(tcase_sprintf, test_sprintf_281);
  tcase_add_test(tcase_sprintf, test_sprintf_282);
  tcase_add_test(tcase_sprintf, test_sprintf_283);
  tcase_add_test(tcase_sprintf, test_sprintf_284);
  tcase_add_test(tcase_sprintf, test_sprintf_285);
  tcase_add_test(tcase_sprintf, test_sprintf_286);
  tcase_add_test(tcase_sprintf, test_sprintf_287);
  tcase_add_test(tcase_sprintf, test_sprintf_288);
  tcase_add_test(tcase_sprintf, test_sprintf_289);
  tcase_add_test(tcase_sprintf, test_sprintf_290);
  tcase_add_test(tcase_sprintf, test_sprintf_291);
  tcase_add_test(tcase_sprintf, test_sprintf_292);
  tcase_add_test(tcase_sprintf, test_sprintf_293);
  tcase_add_test(tcase_sprintf, test_sprintf_294);
  tcase_add_test(tcase_sprintf, test_sprintf_295);
  tcase_add_test(tcase_sprintf, test_sprintf_296);
  tcase_add_test(tcase_sprintf, test_sprintf_297);
  suite_add_tcase(suite, tcase_sprintf);

  return suite;
}

int main() {
  Suite *s = example_create();
  SRunner *runner = srunner_create(s);

  srunner_run_all(runner, CK_NORMAL);
  int count = srunner_ntests_failed(runner);
  srunner_free(runner);
  return (count == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}