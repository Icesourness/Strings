#include "tests.h"

// %i %d /////////////////////////////////////////////////////////////
START_TEST(test_sscanf_1) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_2) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-0";
  char format[10000] = "%i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_3) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-3";
  char format[10000] = "%i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_4) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "30";
  char format[10000] = "%i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_5) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "300";
  char format[10000] = "%i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_6) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-30";
  char format[10000] = "%i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_7) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-300";
  char format[10000] = "%i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_8) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%0i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_9) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%1i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_10) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-0";
  char format[10000] = "%0i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_11) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-0";
  char format[10000] = "%1i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_12) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "3";
  char format[10000] = "%0i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_13) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "3";
  char format[10000] = "%1i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_14) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-3";
  char format[10000] = "%0i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_15) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-3";
  char format[10000] = "%1i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_16) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-0";
  char format[10000] = "%2i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_17) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%2i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_18) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "3";
  char format[10000] = "%2i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_19) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-3";
  char format[10000] = "%2i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_20) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-3";
  char format[10000] = "%3i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_21) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "3bebra";
  char format[10000] = "%i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_22) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "bebra3";
  char format[10000] = "%i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_23) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "";
  char format[10000] = "%i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_24) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = " ";
  char format[10000] = "%i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_25) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "300bebra";
  char format[10000] = "%i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_26) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-300bebra";
  char format[10000] = "%i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_27) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "300bebra";
  char format[10000] = "%5i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_28) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-300bebra";
  char format[10000] = "%5i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_29) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-300bebra";
  char format[10000] = "%2i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_30) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-300bebra";
  char format[10000] = "%3i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_31) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-bebra300";
  char format[10000] = "%i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_32) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-bebra300";
  char format[10000] = "%0i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_33) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-bebra300";
  char format[10000] = "%1i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_34) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-bebra300";
  char format[10000] = "%2i";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_35) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "3 3";
  char format[10000] = "%i%i";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_36) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "3      3";
  char format[10000] = "%i%i";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_37) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "3      3";
  char format[10000] = "%i %i";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_38) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "3      3";
  char format[10000] = "%i         %i";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_39) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "3      3";
  char format[10000] = "      %i         %i";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_40) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "3      3  ";
  char format[10000] = "%i %i";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_41) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  3      3   ";
  char format[10000] = "%i         %i";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_42) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  3      3   ";
  char format[10000] = "%i         %i";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_43) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  3      3   ";
  char format[10000] = "%1i %i";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_44) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  3      3   ";
  char format[10000] = "    %i       %i     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_45) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  3      3   ";
  char format[10000] = "    %1i       %1i     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_46) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  +3      +3   ";
  char format[10000] = "    %i       %i     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_47) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  +3      +3   ";
  char format[10000] = "    %1i       %1i     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_ne(n1_1, n2_1);
  ck_assert_int_ne(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_48) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  +3      +3   ";
  char format[10000] = "    %2i       %2i     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_49) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  +3      +3   ";
  char format[10000] = "    %3i       %3i     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_50) {
  int n1_1 = 1;
  int n2_1 = 1;
  char str[10000] = "  3      4   ";
  char format[10000] = "    %i       %*i     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1), s21_sscanf(str, format, &n2_1));
  ck_assert_int_eq(n1_1, n2_1);
}
END_TEST

START_TEST(test_sscanf_51) {
  int n1_2 = 2;
  int n2_2 = 2;
  char str[10000] = "  3      4   ";
  char format[10000] = "    %*i       %i     ";
  ck_assert_int_eq(sscanf(str, format, &n1_2), s21_sscanf(str, format, &n2_2));
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_52) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = 4;
  int n2_2 = 5;
  char str[10000] = "  +3      +3   ";
  char format[10000] = "    %-3i       %-3i     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_ne(n1_1, n2_1);
  ck_assert_int_ne(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_433) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = 4;
  int n2_2 = 5;
  char str[10000] = "  +3      +3   ";
  char format[10000] = "    %-3d       %-3d     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_ne(n1_1, n2_1);
  ck_assert_int_ne(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_434) {
  int n1_2 = 2;
  int n2_2 = 2;
  char str[10000] = "  3      4   ";
  char format[10000] = "    %*d       %d     ";
  ck_assert_int_eq(sscanf(str, format, &n1_2), s21_sscanf(str, format, &n2_2));
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

// %o ////////////////////////////////////////////////////////////////
START_TEST(test_sscanf_53) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_54) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-0";
  char format[10000] = "%o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_55) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-3";
  char format[10000] = "%o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_56) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "30";
  char format[10000] = "%o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_57) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "300";
  char format[10000] = "%o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_58) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-30";
  char format[10000] = "%o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_59) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-300";
  char format[10000] = "%o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_60) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%0o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_61) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%1o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_62) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-0";
  char format[10000] = "%0o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_63) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-0";
  char format[10000] = "%1o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_64) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "7";
  char format[10000] = "%0o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_65) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "7";
  char format[10000] = "%1o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_66) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-7";
  char format[10000] = "%0o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_67) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-7";
  char format[10000] = "%1o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_68) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-0";
  char format[10000] = "%2o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_69) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%2o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_70) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "7";
  char format[10000] = "%2o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_71) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-7";
  char format[10000] = "%2o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_72) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-79";
  char format[10000] = "%3o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_73) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "79bebra";
  char format[10000] = "%o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_74) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "bebra79";
  char format[10000] = "%o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_75) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "";
  char format[10000] = "%o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_76) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = " ";
  char format[10000] = "%o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_77) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "700bebra";
  char format[10000] = "%o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_78) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-700bebra";
  char format[10000] = "%o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_79) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "700bebra";
  char format[10000] = "%5o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_80) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-700bebra";
  char format[10000] = "%5o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_81) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-700bebra";
  char format[10000] = "%2o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_82) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-700bebra";
  char format[10000] = "%3o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_83) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-bebra700";
  char format[10000] = "%o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_84) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-bebra700";
  char format[10000] = "%0o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_85) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-bebra700";
  char format[10000] = "%1o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_86) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-bebra700";
  char format[10000] = "%2o";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_87) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "6 7";
  char format[10000] = "%o%o";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_88) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "6      7";
  char format[10000] = "%o%o";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_89) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "6      7";
  char format[10000] = "%o %o";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_90) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "6      7";
  char format[10000] = "%o         %o";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_91) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "6      7";
  char format[10000] = "      %o         %o";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_92) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "6      7  ";
  char format[10000] = "%o %o";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_93) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  6      7   ";
  char format[10000] = "%o         %o";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_94) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  6      7   ";
  char format[10000] = "%o         %o";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_95) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  6      7   ";
  char format[10000] = "%1o %o";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_96) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  6      7   ";
  char format[10000] = "    %o       %o     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_97) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  6      7   ";
  char format[10000] = "    %1o       %1o     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_98) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  +6      +7   ";
  char format[10000] = "    %o       %o     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_99) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  +6      +7   ";
  char format[10000] = "    %1o       %1o     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_ne(n1_1, n2_1);
  ck_assert_int_ne(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_100) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  +6      +7   ";
  char format[10000] = "    %2o       %2o     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_101) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  +6      +7   ";
  char format[10000] = "    %3o       %3o     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_102) {
  int n1_1 = 1;
  int n2_1 = 1;
  char str[10000] = "  6      7   ";
  char format[10000] = "    %o       %*o     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1), s21_sscanf(str, format, &n2_1));
  ck_assert_int_eq(n1_1, n2_1);
}
END_TEST

START_TEST(test_sscanf_103) {
  int n1_2 = 2;
  int n2_2 = 2;
  char str[10000] = "  6      7   ";
  char format[10000] = "    %*o       %o     ";
  ck_assert_int_eq(sscanf(str, format, &n1_2), s21_sscanf(str, format, &n2_2));
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_104) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = 4;
  int n2_2 = 5;
  char str[10000] = "  +6      +7   ";
  char format[10000] = "    %-3o       %-3o     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_ne(n1_1, n2_1);
  ck_assert_int_ne(n1_2, n2_2);
}
END_TEST

// %u ////////////////////////////////////////////////////////////////
START_TEST(test_sscanf_105) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_106) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-0";
  char format[10000] = "%u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_107) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-3";
  char format[10000] = "%u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_108) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "30";
  char format[10000] = "%u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_109) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "300";
  char format[10000] = "%u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_110) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-30";
  char format[10000] = "%u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_111) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-300";
  char format[10000] = "%u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_112) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%0u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_113) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%1u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_114) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-0";
  char format[10000] = "%0u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_115) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-0";
  char format[10000] = "%1u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_116) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "7";
  char format[10000] = "%0u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_117) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "7";
  char format[10000] = "%1u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_118) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-7";
  char format[10000] = "%0u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_119) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-7";
  char format[10000] = "%1u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_120) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-0";
  char format[10000] = "%2u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_121) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%2u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_122) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "7";
  char format[10000] = "%2u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_123) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-7";
  char format[10000] = "%2u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_124) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-79";
  char format[10000] = "%3u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_125) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "79bebra";
  char format[10000] = "%u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_126) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "bebra79";
  char format[10000] = "%u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_127) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "";
  char format[10000] = "%u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_128) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = " ";
  char format[10000] = "%u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_129) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "700bebra";
  char format[10000] = "%u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_130) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-700bebra";
  char format[10000] = "%u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_131) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "700bebra";
  char format[10000] = "%5u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_132) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-700bebra";
  char format[10000] = "%5u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_133) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-700bebra";
  char format[10000] = "%2u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_134) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-700bebra";
  char format[10000] = "%3u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_135) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-bebra700";
  char format[10000] = "%u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_136) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-bebra700";
  char format[10000] = "%0u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_137) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-bebra700";
  char format[10000] = "%1u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_138) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-bebra700";
  char format[10000] = "%2u";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_139) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "6 7";
  char format[10000] = "%u%u";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_140) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "6      7";
  char format[10000] = "%u%u";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_141) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "6      7";
  char format[10000] = "%u %u";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_142) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "6      7";
  char format[10000] = "%u         %u";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_143) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "6      7";
  char format[10000] = "      %u         %u";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_144) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "6      7  ";
  char format[10000] = "%u %u";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_145) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  6      7   ";
  char format[10000] = "%u         %u";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_146) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  6      7   ";
  char format[10000] = "%u         %u";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_147) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  6      7   ";
  char format[10000] = "%1u %u";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_148) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  6      7   ";
  char format[10000] = "    %u       %u     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_149) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  6      7   ";
  char format[10000] = "    %1u       %1u     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_150) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  +6      +7   ";
  char format[10000] = "    %u       %u     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_151) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  +6      +7   ";
  char format[10000] = "    %1u       %1u     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_ne(n1_1, n2_1);
  ck_assert_int_ne(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_152) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  +6      +7   ";
  char format[10000] = "    %2u       %2u     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_153) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  +6      +7   ";
  char format[10000] = "    %3u       %3u     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_154) {
  int n1_1 = 1;
  int n2_1 = 1;
  char str[10000] = "  6      7   ";
  char format[10000] = "    %u       %*u     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1), s21_sscanf(str, format, &n2_1));
  ck_assert_int_eq(n1_1, n2_1);
}
END_TEST

START_TEST(test_sscanf_155) {
  int n1_2 = 2;
  int n2_2 = 2;
  char str[10000] = "  6      7   ";
  char format[10000] = "    %*u       %u     ";
  ck_assert_int_eq(sscanf(str, format, &n1_2), s21_sscanf(str, format, &n2_2));
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_156) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = 4;
  int n2_2 = 5;
  char str[10000] = "  +6      +7   ";
  char format[10000] = "    %-3u       %-3u     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_ne(n1_1, n2_1);
  ck_assert_int_ne(n1_2, n2_2);
}
END_TEST

// %p ////////////////////////////////////////////////////////////////
START_TEST(test_sscanf_157) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_158) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-0";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_159) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-3";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_160) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "30";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_161) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "300";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_162) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-30";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_163) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-300";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_164) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%0p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_165) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%1p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_166) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-0";
  char format[10000] = "%0p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_167) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-0";
  char format[10000] = "%1p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_168) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "7";
  char format[10000] = "%0p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_169) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "7";
  char format[10000] = "%1p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_170) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-7";
  char format[10000] = "%0p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_171) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-7";
  char format[10000] = "%1p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_172) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-0";
  char format[10000] = "%2p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_173) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%2p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_174) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "7";
  char format[10000] = "%2p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_175) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-7";
  char format[10000] = "%2p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_176) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-79";
  char format[10000] = "%3p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_177) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "79bebra";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_178) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "bebra79";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_179) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_180) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = " ";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_181) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "700bebra";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_182) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-700bebra";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_183) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "700bebra";
  char format[10000] = "%5p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_184) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-700bebra";
  char format[10000] = "%5p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_185) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-700bebra";
  char format[10000] = "%2p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_186) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-700bebra";
  char format[10000] = "%3p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_187) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-bebra700";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_188) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-bebra700";
  char format[10000] = "%0p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_189) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-bebra700";
  char format[10000] = "%1p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_190) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-bebra700";
  char format[10000] = "%2p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_191) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "6 7";
  char format[10000] = "%p%p";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_192) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "6      7";
  char format[10000] = "%p%p";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_193) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "6      7";
  char format[10000] = "%p %p";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_194) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "6      7";
  char format[10000] = "%p         %p";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_195) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "6      7";
  char format[10000] = "      %p         %p";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_196) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "6      7  ";
  char format[10000] = "%p %p";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_197) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  6      7   ";
  char format[10000] = "%p         %p";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_198) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  6      7   ";
  char format[10000] = "%p         %p";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_199) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  6      7   ";
  char format[10000] = "%1p %p";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_200) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  6      7   ";
  char format[10000] = "    %p       %p     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_201) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  6      7   ";
  char format[10000] = "    %1p       %1p     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_202) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  +6      +7   ";
  char format[10000] = "    %p       %p     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_203) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  +6      +7   ";
  char format[10000] = "    %1p       %1p     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_ne(n1_1, n2_1);
  ck_assert_int_ne(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_204) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  +6      +7   ";
  char format[10000] = "    %2p       %2p     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_205) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  +6      +7   ";
  char format[10000] = "    %3p       %3p     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_206) {
  int n1_1 = 1;
  int n2_1 = 1;
  char str[10000] = "  6      7   ";
  char format[10000] = "    %p       %*p     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1), s21_sscanf(str, format, &n2_1));
  ck_assert_int_eq(n1_1, n2_1);
}
END_TEST

START_TEST(test_sscanf_207) {
  int n1_2 = 2;
  int n2_2 = 2;
  char str[10000] = "  6      7   ";
  char format[10000] = "    %*p       %p     ";
  ck_assert_int_eq(sscanf(str, format, &n1_2), s21_sscanf(str, format, &n2_2));
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_208) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = 4;
  int n2_2 = 5;
  char str[10000] = "  +6      +7   ";
  char format[10000] = "    %-3p       %-3p     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_ne(n1_1, n2_1);
  ck_assert_int_ne(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_209) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0x123456";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_210) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0x-123456";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_211) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "9x-123456";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_212) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "ax-123456";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_213) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "9876543210x-123456";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_214) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "09876543210x-123456";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_215) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0987x6543210x-123456";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_216) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "09870x6543210x-123456";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_217) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0x09870x6543210x-123456";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_218) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0x09870x6543210x-123456";
  char format[10000] = "%1p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_219) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0x09870x6543210x-123456";
  char format[10000] = "%2p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_220) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0x09870x6543210x-123456";
  char format[10000] = "%3p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_221) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0x09870x6543210x-123456";
  char format[10000] = "%4p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_222) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0x-123456";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_223) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0x+123456";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_224) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "1234567x+123456";
  char format[10000] = "%p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_225) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "1234567x+123456";
  char format[10000] = "%*p";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

// %x %X /////////////////////////////////////////////////////////////
START_TEST(test_sscanf_226) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_227) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-0";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_228) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-3";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_229) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "30";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_230) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "300";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_231) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-30";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_232) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-300";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_233) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%0x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_234) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%1x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_235) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-0";
  char format[10000] = "%0x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_236) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-0";
  char format[10000] = "%1x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_237) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "7";
  char format[10000] = "%0x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_238) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "7";
  char format[10000] = "%1x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_239) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-7";
  char format[10000] = "%0x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_240) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-7";
  char format[10000] = "%1x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_241) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-0";
  char format[10000] = "%2x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_242) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%2x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_243) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "7";
  char format[10000] = "%2x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_244) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-7";
  char format[10000] = "%2x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_245) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-79";
  char format[10000] = "%3x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_246) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "79bebra";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_247) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "bebra79";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_248) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_249) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = " ";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_250) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "700bebra";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_251) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-700bebra";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_252) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "700bebra";
  char format[10000] = "%5x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_253) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-700bebra";
  char format[10000] = "%5x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_254) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-700bebra";
  char format[10000] = "%2x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_255) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-700bebra";
  char format[10000] = "%3x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_256) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-bebra700";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_257) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-bebra700";
  char format[10000] = "%0x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_258) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-bebra700";
  char format[10000] = "%1x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_259) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "-bebra700";
  char format[10000] = "%2x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_260) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "6 7";
  char format[10000] = "%x%x";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_261) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "6      7";
  char format[10000] = "%x%x";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_262) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "6      7";
  char format[10000] = "%x %x";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_263) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "6      7";
  char format[10000] = "%x         %x";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_264) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "6      7";
  char format[10000] = "      %x         %x";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_265) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "6      7  ";
  char format[10000] = "%x %x";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_266) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  6      7   ";
  char format[10000] = "%x         %x";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_267) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  6      7   ";
  char format[10000] = "%x         %x";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_268) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  6      7   ";
  char format[10000] = "%1x %x";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_269) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  6      7   ";
  char format[10000] = "    %x       %x     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_270) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  6      7   ";
  char format[10000] = "    %1x       %1x     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_271) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  +6      +7   ";
  char format[10000] = "    %x       %x     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_272) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  +6      +7   ";
  char format[10000] = "    %1x       %1x     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_ne(n1_1, n2_1);
  ck_assert_int_ne(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_273) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  +6      +7   ";
  char format[10000] = "    %2x       %2x     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_274) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = -1;
  int n2_2 = -2;
  char str[10000] = "  +6      +7   ";
  char format[10000] = "    %3x       %3x     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_eq(n1_1, n2_1);
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_275) {
  int n1_1 = 1;
  int n2_1 = 1;
  char str[10000] = "  6      7   ";
  char format[10000] = "    %x       %*x     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1), s21_sscanf(str, format, &n2_1));
  ck_assert_int_eq(n1_1, n2_1);
}
END_TEST

START_TEST(test_sscanf_276) {
  int n1_2 = 2;
  int n2_2 = 2;
  char str[10000] = "  6      7   ";
  char format[10000] = "    %*x       %x     ";
  ck_assert_int_eq(sscanf(str, format, &n1_2), s21_sscanf(str, format, &n2_2));
  ck_assert_int_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_277) {
  int n1_1 = 1;
  int n1_2 = 2;
  int n2_1 = 4;
  int n2_2 = 5;
  char str[10000] = "  +6      +7   ";
  char format[10000] = "    %-3x       %-3x     ";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_int_ne(n1_1, n2_1);
  ck_assert_int_ne(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_278) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0x123456";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_279) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0x-123456";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_280) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "9x-123456";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_281) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "ax-123456";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_282) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "9876543210x-123456";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_283) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "09876543210x-123456";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_284) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0987x6543210x-123456";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_285) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "09870x6543210x-123456";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_286) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0x09870x6543210x-123456";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_287) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0x09870x6543210x-123456";
  char format[10000] = "%1x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_288) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0x09870x6543210x-123456";
  char format[10000] = "%2x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_289) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0x09870x6543210x-123456";
  char format[10000] = "%3x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_290) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0x09870x6543210x-123456";
  char format[10000] = "%4x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_291) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0x-123456";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_292) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "0x+123456";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_293) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "1234567x+123456";
  char format[10000] = "%x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_294) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "1234567x+123456";
  char format[10000] = "%*x";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_435) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "1234567x+123456";
  char format[10000] = "%X";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_436) {
  int n1 = 1;
  int n2 = 2;
  char str[10000] = "1234567x+123456";
  char format[10000] = "%*X";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_int_ne(n1, n2);
}
END_TEST

// %f ////////////////////////////////////////////////////////////////
START_TEST(test_sscanf_295) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_296) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "-0";
  char format[10000] = "%f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_297) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.";
  char format[10000] = "%f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_298) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.0";
  char format[10000] = "%f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_299) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "-0.";
  char format[10000] = "%f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_300) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "-0.0";
  char format[10000] = "%f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_301) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "1.";
  char format[10000] = "%f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_302) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "1.0";
  char format[10000] = "%f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_303) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "+1.0";
  char format[10000] = "%2f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_304) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "-1.0";
  char format[10000] = "%f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_305) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "1.1";
  char format[10000] = "%f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_306) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "-1.1";
  char format[10000] = "%f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_307) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%0f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_308) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%1f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_309) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.";
  char format[10000] = "%1f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_310) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.";
  char format[10000] = "%2f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_311) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.";
  char format[10000] = "%3f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_312) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.0";
  char format[10000] = "%2f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_313) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.0";
  char format[10000] = "%3f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_314) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "-0.0";
  char format[10000] = "%2f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_315) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "-0.0";
  char format[10000] = "%3f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_316) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "123.456";
  char format[10000] = "%f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_317) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "123.456";
  char format[10000] = "%3f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_318) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "123.456";
  char format[10000] = "%4f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_319) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "123.456";
  char format[10000] = "%5f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_320) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.00000001";
  char format[10000] = "%f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_321) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.00000001";
  char format[10000] = "%3f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_322) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.00000001";
  char format[10000] = "%4f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_323) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.00000001";
  char format[10000] = "%10f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_324) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "123.";
  char format[10000] = "%f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_325) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = ".123";
  char format[10000] = "%f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_326) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "-.123";
  char format[10000] = "%f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_327) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "-123.456";
  char format[10000] = "%0f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_328) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "123.899";
  char format[10000] = "%5f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_329) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "123.899";
  char format[10000] = "%6f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_330) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "+123.456";
  char format[10000] = "%f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_331) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "+123.456";
  char format[10000] = "%*f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_332) {
  float n1_1 = 1;
  float n1_2 = 2;
  float n2_1 = -1;
  float n2_2 = -2;
  char str[10000] = "12.45      67.89";
  char format[10000] = "%f %*f";
  ck_assert_int_eq(sscanf(str, format, &n1_1), s21_sscanf(str, format, &n2_1));
  ck_assert_float_eq(n1_1, n2_1);
  ck_assert_float_ne(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_333) {
  float n1_1 = 1;
  float n1_2 = 2;
  float n2_1 = -1;
  float n2_2 = -2;
  char str[10000] = "12.45      67.89";
  char format[10000] = "%*f         %f";
  ck_assert_int_eq(sscanf(str, format, &n1_2), s21_sscanf(str, format, &n2_2));
  ck_assert_float_ne(n1_1, n2_1);
  ck_assert_float_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_334) {
  float n1 = 1;
  float n2 = -1;
  char str[10000] = "12.45bebra";
  char format[10000] = "%f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_335) {
  float n1 = 1;
  float n2 = -1;
  char str[10000] = "bebra12.45";
  char format[10000] = "%f";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_ne(n1, n2);
}
END_TEST

START_TEST(test_sscanf_336) {
  float n1_1 = 1;
  float n1_2 = 2;
  float n2_1 = -1;
  float n2_2 = -2;
  char str[10000] = "666.666      000.000";
  char format[10000] = "      %f         %f";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_float_eq(n1_1, n2_1);
  ck_assert_float_eq(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_337) {
  float n1_1 = 1;
  float n1_2 = 2;
  float n2_1 = -1;
  float n2_2 = -2;
  char str[10000] = "666.666      1.1  ";
  char format[10000] = "%f %f";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_float_eq(n1_1, n2_1);
  ck_assert_float_eq(n1_2, n2_2);
}
END_TEST

// %e %E /////////////////////////////////////////////////////////////
START_TEST(test_sscanf_338) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_339) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "-0";
  char format[10000] = "%e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_340) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.";
  char format[10000] = "%e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_341) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.0";
  char format[10000] = "%e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_342) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "-0.";
  char format[10000] = "%e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_343) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "-0.0";
  char format[10000] = "%e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_344) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "1.";
  char format[10000] = "%e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_345) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "1.0";
  char format[10000] = "%e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_346) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "+1.0";
  char format[10000] = "%2e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_347) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "-1.0";
  char format[10000] = "%e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_348) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "1.1";
  char format[10000] = "%e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_349) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "-1.1";
  char format[10000] = "%e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_350) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%0e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_351) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%1e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_352) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.";
  char format[10000] = "%1e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_353) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.";
  char format[10000] = "%2e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_354) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.";
  char format[10000] = "%3e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_355) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.0";
  char format[10000] = "%2e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_356) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.0";
  char format[10000] = "%3e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_357) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "-0.0";
  char format[10000] = "%2e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_358) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "-0.0";
  char format[10000] = "%3e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_359) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "123.456";
  char format[10000] = "%e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_360) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "1.234563e+03";
  char format[10000] = "%e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_361) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "1.23456e+3";
  char format[10000] = "%e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_362) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "1.23456e-03";
  char format[10000] = "%e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_363) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "1.23456e-3";
  char format[10000] = "%e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_364) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "1.23456e+00";
  char format[10000] = "%e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_365) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "1.23456e+10";
  char format[10000] = "%e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_366) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "1.23456e-10";
  char format[10000] = "%e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_367) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "1.23456e-10";
  char format[10000] = "%10e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_368) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.23456e+05";
  char format[10000] = "%e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_369) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.23456e+05bebra";
  char format[10000] = "%e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_370) {
  float n1_1 = 1;
  float n1_2 = 2;
  float n2_1 = -1;
  float n2_2 = -2;
  char str[10000] = "0.23456e+05b12.456e-02";
  char format[10000] = "%e%e";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_float_eq(n1_1, n2_1);
  ck_assert_float_ne(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_372) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "12.456e+2";
  char format[10000] = "%e";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_373) {
  float n1_1 = 1;
  float n1_2 = 2;
  float n2_1 = -1;
  float n2_2 = -2;
  char str[10000] = "0.23456e+05 12.456e-02";
  char format[10000] = "%e";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_float_eq(n1_1, n2_1);
  ck_assert_float_ne(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_374) {
  float n1_1 = 1;
  float n1_2 = 2;
  float n2_1 = -1;
  float n2_2 = -2;
  char str[10000] = "0.23456e+05 12.456e-02";
  char format[10000] = "%e%e";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_float_eq(n1_1, n2_1);
  ck_assert_float_ne(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_375) {
  float n1_1 = 1;
  float n1_2 = 2;
  float n2_1 = -1;
  float n2_2 = -2;
  char str[10000] = "0.23456e+05 12.456e-02";
  char format[10000] = "%e    %e";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_float_eq(n1_1, n2_1);
  ck_assert_float_ne(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_376) {
  float n1_1 = 1;
  float n1_2 = 2;
  float n2_1 = -1;
  float n2_2 = -2;
  char str[10000] = "0.23456e+05 12.456e-02";
  char format[10000] = "%e    %*e";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_float_eq(n1_1, n2_1);
  ck_assert_float_ne(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_378) {
  float n1_1 = 1;
  float n1_2 = 2;
  float n2_1 = -1;
  float n2_2 = -2;
  char str[10000] = "0.23456e+05 12.456e-02";
  char format[10000] = "%*e    %*e";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_float_ne(n1_1, n2_1);
  ck_assert_float_ne(n1_2, n2_2);
}
END_TEST

// %c ////////////////////////////////////////////////////////////////
START_TEST(test_sscanf_379) {
  char c1 = 'a';
  char c2 = 'b';
  char str[10000] = "";
  char format[10000] = "%c";
  ck_assert_int_eq(sscanf(str, format, &c1), s21_sscanf(str, format, &c2));
  ck_assert_int_ne(c1, c2);
}
END_TEST

START_TEST(test_sscanf_380) {
  char c1 = 'a';
  char c2 = 'b';
  char str[10000] = " ";
  char format[10000] = "%c";
  ck_assert_int_eq(sscanf(str, format, &c1), 1);
  ck_assert_int_eq(s21_sscanf(str, format, &c2), 1);
  ck_assert_int_eq(c1, c2);
}
END_TEST

START_TEST(test_sscanf_381) {
  char c1 = 'a';
  char c2 = 'b';
  char str[10000] = "x";
  char format[10000] = "%c";
  ck_assert_int_eq(sscanf(str, format, &c1), 1);
  ck_assert_int_eq(s21_sscanf(str, format, &c2), 1);
  ck_assert_int_eq(c1, c2);
}
END_TEST

START_TEST(test_sscanf_382) {
  char c1 = 'a';
  char c2 = 'b';
  char str[10000] = "X";
  char format[10000] = "%c";
  ck_assert_int_eq(sscanf(str, format, &c1), 1);
  ck_assert_int_eq(s21_sscanf(str, format, &c2), 1);
  ck_assert_int_eq(c1, c2);
}
END_TEST

START_TEST(test_sscanf_383) {
  char c1 = 'a';
  char c2 = 'b';
  char str[10000] = ".";
  char format[10000] = "%c";
  ck_assert_int_eq(sscanf(str, format, &c1), 1);
  ck_assert_int_eq(s21_sscanf(str, format, &c2), 1);
  ck_assert_int_eq(c1, c2);
}
END_TEST

START_TEST(test_sscanf_384) {
  char c1 = 'a';
  char c2 = 'b';
  char str[10000] = " ";
  char format[10000] = "%c";
  ck_assert_int_eq(sscanf(str, format, &c1), 1);
  ck_assert_int_eq(s21_sscanf(str, format, &c2), 1);
  ck_assert_int_eq(c1, c2);
}
END_TEST

START_TEST(test_sscanf_385) {
  char c1_1 = 'a';
  char c1_2 = 'b';
  char c2_1 = 'c';
  char c2_2 = 'd';
  char str[10000] = "x y";
  char format[10000] = "%c%c";
  ck_assert_int_eq(sscanf(str, format, &c1_1, &c1_2), 2);
  ck_assert_int_eq(s21_sscanf(str, format, &c2_1, &c2_2), 2);
  ck_assert_int_eq(c1_1, c2_1);
  ck_assert_int_eq(c1_2, c2_2);
}
END_TEST

START_TEST(test_sscanf_386) {
  char c1_1 = 'a';
  char c1_2 = 'b';
  char c2_1 = 'c';
  char c2_2 = 'd';
  char str[10000] = "x      y";
  char format[10000] = "%c%c";
  ck_assert_int_eq(sscanf(str, format, &c1_1, &c1_2), 2);
  ck_assert_int_eq(s21_sscanf(str, format, &c2_1, &c2_2), 2);
  ck_assert_int_eq(c1_1, c2_1);
  ck_assert_int_eq(c1_2, c2_2);
}
END_TEST

START_TEST(test_sscanf_387) {
  char c1 = 'a';
  char c2 = 'b';
  char str[10000] = "X";
  char format[10000] = "%*c";
  ck_assert_int_eq(sscanf(str, format, &c1), 0);
  ck_assert_int_eq(s21_sscanf(str, format, &c2), 0);
  ck_assert_int_ne(c1, c2);
}
END_TEST

// %s ////////////////////////////////////////////////////////////////
START_TEST(test_sscanf_388) {
  char s1[100];
  char s2[100];
  char str[10000] = "";
  char format[10000] = "%s";
  ck_assert_int_eq(sscanf(str, format, s1), s21_sscanf(str, format, s2));
  ck_assert_str_eq(s1, s2);
}
END_TEST

START_TEST(test_sscanf_389) {
  char s1[100];
  char s2[100];
  char str[10000] = "   ";
  char format[10000] = "%s";
  ck_assert_int_eq(sscanf(str, format, s1), s21_sscanf(str, format, s2));
  ck_assert_str_eq(s1, s2);
}
END_TEST

START_TEST(test_sscanf_390) {
  char s1[100];
  char s2[100];
  char str[10000] = "abc";
  char format[10000] = "%s";
  ck_assert_int_eq(sscanf(str, format, s1), s21_sscanf(str, format, s2));
  ck_assert_str_eq(s1, s2);
}
END_TEST

START_TEST(test_sscanf_391) {
  char s1[100];
  char s2[100];
  char str[10000] = "bebra\nbebra";
  char format[10000] = "%s";
  ck_assert_int_eq(sscanf(str, format, s1), s21_sscanf(str, format, s2));
  ck_assert_str_eq(s1, s2);
}
END_TEST

START_TEST(test_sscanf_392) {
  char s1[100];
  char s2[100];
  char str[10000] = "bebra\febra";
  char format[10000] = "%s";
  ck_assert_int_eq(sscanf(str, format, s1), s21_sscanf(str, format, s2));
  ck_assert_str_eq(s1, s2);
}
END_TEST

START_TEST(test_sscanf_393) {
  char s1[100];
  char s2[100];
  char str[10000] = "1234567890";
  char format[10000] = "%*s";
  ck_assert_int_eq(sscanf(str, format, s1), s21_sscanf(str, format, s2));
  ck_assert_str_eq(s1, s2);
}
END_TEST

// %g %G /////////////////////////////////////////////////////////////
START_TEST(test_sscanf_394) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_395) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "-0";
  char format[10000] = "%g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_396) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.";
  char format[10000] = "%g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_397) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.0";
  char format[10000] = "%g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_398) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "-0.";
  char format[10000] = "%g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_399) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "-0.0";
  char format[10000] = "%g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_400) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "1.";
  char format[10000] = "%g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_401) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "1.0";
  char format[10000] = "%g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_402) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "+1.0";
  char format[10000] = "%2g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_403) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "-1.0";
  char format[10000] = "%g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_404) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "1.1";
  char format[10000] = "%g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_405) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "-1.1";
  char format[10000] = "%g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_406) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%0g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_407) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0";
  char format[10000] = "%1g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_408) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.";
  char format[10000] = "%1g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_409) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.";
  char format[10000] = "%2g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_410) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.";
  char format[10000] = "%3g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_411) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.0";
  char format[10000] = "%2g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_412) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.0";
  char format[10000] = "%3g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_413) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "-0.0";
  char format[10000] = "%2g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_414) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "-0.0";
  char format[10000] = "%3g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_415) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "123.456";
  char format[10000] = "%g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_416) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "1.234563e+03";
  char format[10000] = "%g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_417) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "1.23456e+3";
  char format[10000] = "%g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_418) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "1.23456e-03";
  char format[10000] = "%g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_419) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "1.23456e-3";
  char format[10000] = "%g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_420) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "1.23456e+00";
  char format[10000] = "%g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_421) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "1.23456e+10";
  char format[10000] = "%g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_422) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "1.23456e-10";
  char format[10000] = "%g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_423) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "1.23456e-10";
  char format[10000] = "%10g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_424) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.23456e+05";
  char format[10000] = "%g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_425) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "0.23456e+05bebra";
  char format[10000] = "%g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_426) {
  float n1_1 = 1;
  float n1_2 = 2;
  float n2_1 = -1;
  float n2_2 = -2;
  char str[10000] = "0.23456e+05b12.456e-02";
  char format[10000] = "%g%g";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_float_eq(n1_1, n2_1);
  ck_assert_float_ne(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_427) {
  float n1 = 1;
  float n2 = 2;
  char str[10000] = "12.456e+2";
  char format[10000] = "%g";
  ck_assert_int_eq(sscanf(str, format, &n1), s21_sscanf(str, format, &n2));
  ck_assert_float_eq(n1, n2);
}
END_TEST

START_TEST(test_sscanf_428) {
  float n1_1 = 1;
  float n1_2 = 2;
  float n2_1 = -1;
  float n2_2 = -2;
  char str[10000] = "0.23456e+05 12.456e-02";
  char format[10000] = "%g";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_float_eq(n1_1, n2_1);
  ck_assert_float_ne(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_429) {
  float n1_1 = 1;
  float n1_2 = 2;
  float n2_1 = -1;
  float n2_2 = -2;
  char str[10000] = "0.23456e+05 12.456e-02";
  char format[10000] = "%g%g";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_float_eq(n1_1, n2_1);
  ck_assert_float_ne(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_430) {
  float n1_1 = 1;
  float n1_2 = 2;
  float n2_1 = -1;
  float n2_2 = -2;
  char str[10000] = "0.23456e+05 12.456e-02";
  char format[10000] = "%g    %g";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_float_eq(n1_1, n2_1);
  ck_assert_float_ne(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_431) {
  float n1_1 = 1;
  float n1_2 = 2;
  float n2_1 = -1;
  float n2_2 = -2;
  char str[10000] = "0.23456e+05 12.456e-02";
  char format[10000] = "%g    %*g";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_float_eq(n1_1, n2_1);
  ck_assert_float_ne(n1_2, n2_2);
}
END_TEST

START_TEST(test_sscanf_432) {
  float n1_1 = 1;
  float n1_2 = 2;
  float n2_1 = -1;
  float n2_2 = -2;
  char str[10000] = "0.23456e+05 12.456e-02";
  char format[10000] = "%*g    %*g";
  ck_assert_int_eq(sscanf(str, format, &n1_1, &n1_2),
                   s21_sscanf(str, format, &n2_1, &n2_2));
  ck_assert_float_ne(n1_1, n2_1);
  ck_assert_float_ne(n1_2, n2_2);
}
END_TEST

Suite *example_create() {
  Suite *suite = suite_create("TEST_SSCANF");
  // %i %d
  TCase *tcase_sscanf = tcase_create("SSCANF");
  tcase_add_test(tcase_sscanf, test_sscanf_1);
  tcase_add_test(tcase_sscanf, test_sscanf_2);
  tcase_add_test(tcase_sscanf, test_sscanf_3);
  tcase_add_test(tcase_sscanf, test_sscanf_4);
  tcase_add_test(tcase_sscanf, test_sscanf_5);
  tcase_add_test(tcase_sscanf, test_sscanf_6);
  tcase_add_test(tcase_sscanf, test_sscanf_7);
  tcase_add_test(tcase_sscanf, test_sscanf_8);
  tcase_add_test(tcase_sscanf, test_sscanf_9);
  tcase_add_test(tcase_sscanf, test_sscanf_10);
  tcase_add_test(tcase_sscanf, test_sscanf_11);
  tcase_add_test(tcase_sscanf, test_sscanf_12);
  tcase_add_test(tcase_sscanf, test_sscanf_13);
  tcase_add_test(tcase_sscanf, test_sscanf_14);
  tcase_add_test(tcase_sscanf, test_sscanf_15);
  tcase_add_test(tcase_sscanf, test_sscanf_16);
  tcase_add_test(tcase_sscanf, test_sscanf_17);
  tcase_add_test(tcase_sscanf, test_sscanf_18);
  tcase_add_test(tcase_sscanf, test_sscanf_19);
  tcase_add_test(tcase_sscanf, test_sscanf_20);
  tcase_add_test(tcase_sscanf, test_sscanf_21);
  tcase_add_test(tcase_sscanf, test_sscanf_22);
  tcase_add_test(tcase_sscanf, test_sscanf_23);
  tcase_add_test(tcase_sscanf, test_sscanf_24);
  tcase_add_test(tcase_sscanf, test_sscanf_25);
  tcase_add_test(tcase_sscanf, test_sscanf_26);
  tcase_add_test(tcase_sscanf, test_sscanf_27);
  tcase_add_test(tcase_sscanf, test_sscanf_28);
  tcase_add_test(tcase_sscanf, test_sscanf_29);
  tcase_add_test(tcase_sscanf, test_sscanf_30);
  tcase_add_test(tcase_sscanf, test_sscanf_31);
  tcase_add_test(tcase_sscanf, test_sscanf_32);
  tcase_add_test(tcase_sscanf, test_sscanf_33);
  tcase_add_test(tcase_sscanf, test_sscanf_34);
  tcase_add_test(tcase_sscanf, test_sscanf_35);
  tcase_add_test(tcase_sscanf, test_sscanf_36);
  tcase_add_test(tcase_sscanf, test_sscanf_37);
  tcase_add_test(tcase_sscanf, test_sscanf_38);
  tcase_add_test(tcase_sscanf, test_sscanf_39);
  tcase_add_test(tcase_sscanf, test_sscanf_40);
  tcase_add_test(tcase_sscanf, test_sscanf_41);
  tcase_add_test(tcase_sscanf, test_sscanf_42);
  tcase_add_test(tcase_sscanf, test_sscanf_43);
  tcase_add_test(tcase_sscanf, test_sscanf_44);
  tcase_add_test(tcase_sscanf, test_sscanf_45);
  tcase_add_test(tcase_sscanf, test_sscanf_46);
  tcase_add_test(tcase_sscanf, test_sscanf_47);
  tcase_add_test(tcase_sscanf, test_sscanf_48);
  tcase_add_test(tcase_sscanf, test_sscanf_49);
  tcase_add_test(tcase_sscanf, test_sscanf_50);
  tcase_add_test(tcase_sscanf, test_sscanf_51);
  tcase_add_test(tcase_sscanf, test_sscanf_52);
  // %o
  tcase_add_test(tcase_sscanf, test_sscanf_53);
  tcase_add_test(tcase_sscanf, test_sscanf_54);
  tcase_add_test(tcase_sscanf, test_sscanf_55);
  tcase_add_test(tcase_sscanf, test_sscanf_56);
  tcase_add_test(tcase_sscanf, test_sscanf_57);
  tcase_add_test(tcase_sscanf, test_sscanf_58);
  tcase_add_test(tcase_sscanf, test_sscanf_59);
  tcase_add_test(tcase_sscanf, test_sscanf_60);
  tcase_add_test(tcase_sscanf, test_sscanf_61);
  tcase_add_test(tcase_sscanf, test_sscanf_62);
  tcase_add_test(tcase_sscanf, test_sscanf_63);
  tcase_add_test(tcase_sscanf, test_sscanf_64);
  tcase_add_test(tcase_sscanf, test_sscanf_65);
  tcase_add_test(tcase_sscanf, test_sscanf_66);
  tcase_add_test(tcase_sscanf, test_sscanf_67);
  tcase_add_test(tcase_sscanf, test_sscanf_68);
  tcase_add_test(tcase_sscanf, test_sscanf_69);
  tcase_add_test(tcase_sscanf, test_sscanf_70);
  tcase_add_test(tcase_sscanf, test_sscanf_71);
  tcase_add_test(tcase_sscanf, test_sscanf_72);
  tcase_add_test(tcase_sscanf, test_sscanf_73);
  tcase_add_test(tcase_sscanf, test_sscanf_74);
  tcase_add_test(tcase_sscanf, test_sscanf_75);
  tcase_add_test(tcase_sscanf, test_sscanf_76);
  tcase_add_test(tcase_sscanf, test_sscanf_77);
  tcase_add_test(tcase_sscanf, test_sscanf_78);
  tcase_add_test(tcase_sscanf, test_sscanf_79);
  tcase_add_test(tcase_sscanf, test_sscanf_80);
  tcase_add_test(tcase_sscanf, test_sscanf_81);
  tcase_add_test(tcase_sscanf, test_sscanf_82);
  tcase_add_test(tcase_sscanf, test_sscanf_83);
  tcase_add_test(tcase_sscanf, test_sscanf_84);
  tcase_add_test(tcase_sscanf, test_sscanf_85);
  tcase_add_test(tcase_sscanf, test_sscanf_86);
  tcase_add_test(tcase_sscanf, test_sscanf_87);
  tcase_add_test(tcase_sscanf, test_sscanf_88);
  tcase_add_test(tcase_sscanf, test_sscanf_89);
  tcase_add_test(tcase_sscanf, test_sscanf_90);
  tcase_add_test(tcase_sscanf, test_sscanf_91);
  tcase_add_test(tcase_sscanf, test_sscanf_92);
  tcase_add_test(tcase_sscanf, test_sscanf_93);
  tcase_add_test(tcase_sscanf, test_sscanf_94);
  tcase_add_test(tcase_sscanf, test_sscanf_95);
  tcase_add_test(tcase_sscanf, test_sscanf_96);
  tcase_add_test(tcase_sscanf, test_sscanf_97);
  tcase_add_test(tcase_sscanf, test_sscanf_98);
  tcase_add_test(tcase_sscanf, test_sscanf_99);
  tcase_add_test(tcase_sscanf, test_sscanf_100);
  tcase_add_test(tcase_sscanf, test_sscanf_101);
  tcase_add_test(tcase_sscanf, test_sscanf_102);
  tcase_add_test(tcase_sscanf, test_sscanf_103);
  tcase_add_test(tcase_sscanf, test_sscanf_104);
  // %u
  tcase_add_test(tcase_sscanf, test_sscanf_105);
  tcase_add_test(tcase_sscanf, test_sscanf_106);
  tcase_add_test(tcase_sscanf, test_sscanf_107);
  tcase_add_test(tcase_sscanf, test_sscanf_108);
  tcase_add_test(tcase_sscanf, test_sscanf_109);
  tcase_add_test(tcase_sscanf, test_sscanf_110);
  tcase_add_test(tcase_sscanf, test_sscanf_111);
  tcase_add_test(tcase_sscanf, test_sscanf_112);
  tcase_add_test(tcase_sscanf, test_sscanf_113);
  tcase_add_test(tcase_sscanf, test_sscanf_114);
  tcase_add_test(tcase_sscanf, test_sscanf_115);
  tcase_add_test(tcase_sscanf, test_sscanf_116);
  tcase_add_test(tcase_sscanf, test_sscanf_117);
  tcase_add_test(tcase_sscanf, test_sscanf_118);
  tcase_add_test(tcase_sscanf, test_sscanf_119);
  tcase_add_test(tcase_sscanf, test_sscanf_120);
  tcase_add_test(tcase_sscanf, test_sscanf_121);
  tcase_add_test(tcase_sscanf, test_sscanf_122);
  tcase_add_test(tcase_sscanf, test_sscanf_123);
  tcase_add_test(tcase_sscanf, test_sscanf_124);
  tcase_add_test(tcase_sscanf, test_sscanf_125);
  tcase_add_test(tcase_sscanf, test_sscanf_126);
  tcase_add_test(tcase_sscanf, test_sscanf_127);
  tcase_add_test(tcase_sscanf, test_sscanf_128);
  tcase_add_test(tcase_sscanf, test_sscanf_129);
  tcase_add_test(tcase_sscanf, test_sscanf_130);
  tcase_add_test(tcase_sscanf, test_sscanf_131);
  tcase_add_test(tcase_sscanf, test_sscanf_132);
  tcase_add_test(tcase_sscanf, test_sscanf_133);
  tcase_add_test(tcase_sscanf, test_sscanf_134);
  tcase_add_test(tcase_sscanf, test_sscanf_135);
  tcase_add_test(tcase_sscanf, test_sscanf_136);
  tcase_add_test(tcase_sscanf, test_sscanf_137);
  tcase_add_test(tcase_sscanf, test_sscanf_138);
  tcase_add_test(tcase_sscanf, test_sscanf_139);
  tcase_add_test(tcase_sscanf, test_sscanf_140);
  tcase_add_test(tcase_sscanf, test_sscanf_141);
  tcase_add_test(tcase_sscanf, test_sscanf_142);
  tcase_add_test(tcase_sscanf, test_sscanf_143);
  tcase_add_test(tcase_sscanf, test_sscanf_144);
  tcase_add_test(tcase_sscanf, test_sscanf_145);
  tcase_add_test(tcase_sscanf, test_sscanf_146);
  tcase_add_test(tcase_sscanf, test_sscanf_147);
  tcase_add_test(tcase_sscanf, test_sscanf_148);
  tcase_add_test(tcase_sscanf, test_sscanf_149);
  tcase_add_test(tcase_sscanf, test_sscanf_150);
  tcase_add_test(tcase_sscanf, test_sscanf_151);
  tcase_add_test(tcase_sscanf, test_sscanf_152);
  tcase_add_test(tcase_sscanf, test_sscanf_153);
  tcase_add_test(tcase_sscanf, test_sscanf_154);
  tcase_add_test(tcase_sscanf, test_sscanf_155);
  tcase_add_test(tcase_sscanf, test_sscanf_156);
  // %p
  tcase_add_test(tcase_sscanf, test_sscanf_157);
  tcase_add_test(tcase_sscanf, test_sscanf_158);
  tcase_add_test(tcase_sscanf, test_sscanf_159);
  tcase_add_test(tcase_sscanf, test_sscanf_160);
  tcase_add_test(tcase_sscanf, test_sscanf_161);
  tcase_add_test(tcase_sscanf, test_sscanf_162);
  tcase_add_test(tcase_sscanf, test_sscanf_163);
  tcase_add_test(tcase_sscanf, test_sscanf_164);
  tcase_add_test(tcase_sscanf, test_sscanf_165);
  tcase_add_test(tcase_sscanf, test_sscanf_166);
  tcase_add_test(tcase_sscanf, test_sscanf_167);
  tcase_add_test(tcase_sscanf, test_sscanf_168);
  tcase_add_test(tcase_sscanf, test_sscanf_169);
  tcase_add_test(tcase_sscanf, test_sscanf_170);
  tcase_add_test(tcase_sscanf, test_sscanf_171);
  tcase_add_test(tcase_sscanf, test_sscanf_172);
  tcase_add_test(tcase_sscanf, test_sscanf_173);
  tcase_add_test(tcase_sscanf, test_sscanf_174);
  tcase_add_test(tcase_sscanf, test_sscanf_175);
  tcase_add_test(tcase_sscanf, test_sscanf_176);
  tcase_add_test(tcase_sscanf, test_sscanf_177);
  tcase_add_test(tcase_sscanf, test_sscanf_178);
  tcase_add_test(tcase_sscanf, test_sscanf_179);
  tcase_add_test(tcase_sscanf, test_sscanf_180);
  tcase_add_test(tcase_sscanf, test_sscanf_181);
  tcase_add_test(tcase_sscanf, test_sscanf_182);
  tcase_add_test(tcase_sscanf, test_sscanf_183);
  tcase_add_test(tcase_sscanf, test_sscanf_184);
  tcase_add_test(tcase_sscanf, test_sscanf_185);
  tcase_add_test(tcase_sscanf, test_sscanf_186);
  tcase_add_test(tcase_sscanf, test_sscanf_187);
  tcase_add_test(tcase_sscanf, test_sscanf_188);
  tcase_add_test(tcase_sscanf, test_sscanf_189);
  tcase_add_test(tcase_sscanf, test_sscanf_190);
  tcase_add_test(tcase_sscanf, test_sscanf_191);
  tcase_add_test(tcase_sscanf, test_sscanf_192);
  tcase_add_test(tcase_sscanf, test_sscanf_193);
  tcase_add_test(tcase_sscanf, test_sscanf_194);
  tcase_add_test(tcase_sscanf, test_sscanf_195);
  tcase_add_test(tcase_sscanf, test_sscanf_196);
  tcase_add_test(tcase_sscanf, test_sscanf_197);
  tcase_add_test(tcase_sscanf, test_sscanf_198);
  tcase_add_test(tcase_sscanf, test_sscanf_199);
  tcase_add_test(tcase_sscanf, test_sscanf_200);
  tcase_add_test(tcase_sscanf, test_sscanf_201);
  tcase_add_test(tcase_sscanf, test_sscanf_202);
  tcase_add_test(tcase_sscanf, test_sscanf_203);
  tcase_add_test(tcase_sscanf, test_sscanf_204);
  tcase_add_test(tcase_sscanf, test_sscanf_205);
  tcase_add_test(tcase_sscanf, test_sscanf_206);
  tcase_add_test(tcase_sscanf, test_sscanf_207);
  tcase_add_test(tcase_sscanf, test_sscanf_208);
  tcase_add_test(tcase_sscanf, test_sscanf_209);
  tcase_add_test(tcase_sscanf, test_sscanf_210);
  tcase_add_test(tcase_sscanf, test_sscanf_211);
  tcase_add_test(tcase_sscanf, test_sscanf_212);
  tcase_add_test(tcase_sscanf, test_sscanf_213);
  tcase_add_test(tcase_sscanf, test_sscanf_214);
  tcase_add_test(tcase_sscanf, test_sscanf_215);
  tcase_add_test(tcase_sscanf, test_sscanf_216);
  tcase_add_test(tcase_sscanf, test_sscanf_217);
  tcase_add_test(tcase_sscanf, test_sscanf_218);
  tcase_add_test(tcase_sscanf, test_sscanf_219);
  tcase_add_test(tcase_sscanf, test_sscanf_220);
  tcase_add_test(tcase_sscanf, test_sscanf_221);
  tcase_add_test(tcase_sscanf, test_sscanf_222);
  tcase_add_test(tcase_sscanf, test_sscanf_223);
  tcase_add_test(tcase_sscanf, test_sscanf_224);
  tcase_add_test(tcase_sscanf, test_sscanf_225);
  // %x %X
  tcase_add_test(tcase_sscanf, test_sscanf_226);
  tcase_add_test(tcase_sscanf, test_sscanf_227);
  tcase_add_test(tcase_sscanf, test_sscanf_228);
  tcase_add_test(tcase_sscanf, test_sscanf_229);
  tcase_add_test(tcase_sscanf, test_sscanf_230);
  tcase_add_test(tcase_sscanf, test_sscanf_231);
  tcase_add_test(tcase_sscanf, test_sscanf_232);
  tcase_add_test(tcase_sscanf, test_sscanf_233);
  tcase_add_test(tcase_sscanf, test_sscanf_234);
  tcase_add_test(tcase_sscanf, test_sscanf_235);
  tcase_add_test(tcase_sscanf, test_sscanf_236);
  tcase_add_test(tcase_sscanf, test_sscanf_237);
  tcase_add_test(tcase_sscanf, test_sscanf_238);
  tcase_add_test(tcase_sscanf, test_sscanf_239);
  tcase_add_test(tcase_sscanf, test_sscanf_240);
  tcase_add_test(tcase_sscanf, test_sscanf_241);
  tcase_add_test(tcase_sscanf, test_sscanf_242);
  tcase_add_test(tcase_sscanf, test_sscanf_243);
  tcase_add_test(tcase_sscanf, test_sscanf_244);
  tcase_add_test(tcase_sscanf, test_sscanf_245);
  tcase_add_test(tcase_sscanf, test_sscanf_246);
  tcase_add_test(tcase_sscanf, test_sscanf_247);
  tcase_add_test(tcase_sscanf, test_sscanf_248);
  tcase_add_test(tcase_sscanf, test_sscanf_249);
  tcase_add_test(tcase_sscanf, test_sscanf_250);
  tcase_add_test(tcase_sscanf, test_sscanf_251);
  tcase_add_test(tcase_sscanf, test_sscanf_252);
  tcase_add_test(tcase_sscanf, test_sscanf_253);
  tcase_add_test(tcase_sscanf, test_sscanf_254);
  tcase_add_test(tcase_sscanf, test_sscanf_255);
  tcase_add_test(tcase_sscanf, test_sscanf_256);
  tcase_add_test(tcase_sscanf, test_sscanf_257);
  tcase_add_test(tcase_sscanf, test_sscanf_258);
  tcase_add_test(tcase_sscanf, test_sscanf_259);
  tcase_add_test(tcase_sscanf, test_sscanf_260);
  tcase_add_test(tcase_sscanf, test_sscanf_261);
  tcase_add_test(tcase_sscanf, test_sscanf_262);
  tcase_add_test(tcase_sscanf, test_sscanf_263);
  tcase_add_test(tcase_sscanf, test_sscanf_264);
  tcase_add_test(tcase_sscanf, test_sscanf_265);
  tcase_add_test(tcase_sscanf, test_sscanf_266);
  tcase_add_test(tcase_sscanf, test_sscanf_267);
  tcase_add_test(tcase_sscanf, test_sscanf_268);
  tcase_add_test(tcase_sscanf, test_sscanf_269);
  tcase_add_test(tcase_sscanf, test_sscanf_270);
  tcase_add_test(tcase_sscanf, test_sscanf_271);
  tcase_add_test(tcase_sscanf, test_sscanf_272);
  tcase_add_test(tcase_sscanf, test_sscanf_273);
  tcase_add_test(tcase_sscanf, test_sscanf_274);
  tcase_add_test(tcase_sscanf, test_sscanf_275);
  tcase_add_test(tcase_sscanf, test_sscanf_276);
  tcase_add_test(tcase_sscanf, test_sscanf_277);
  tcase_add_test(tcase_sscanf, test_sscanf_278);
  tcase_add_test(tcase_sscanf, test_sscanf_279);
  tcase_add_test(tcase_sscanf, test_sscanf_280);
  tcase_add_test(tcase_sscanf, test_sscanf_281);
  tcase_add_test(tcase_sscanf, test_sscanf_282);
  tcase_add_test(tcase_sscanf, test_sscanf_283);
  tcase_add_test(tcase_sscanf, test_sscanf_284);
  tcase_add_test(tcase_sscanf, test_sscanf_285);
  tcase_add_test(tcase_sscanf, test_sscanf_286);
  tcase_add_test(tcase_sscanf, test_sscanf_287);
  tcase_add_test(tcase_sscanf, test_sscanf_288);
  tcase_add_test(tcase_sscanf, test_sscanf_289);
  tcase_add_test(tcase_sscanf, test_sscanf_290);
  tcase_add_test(tcase_sscanf, test_sscanf_291);
  tcase_add_test(tcase_sscanf, test_sscanf_292);
  tcase_add_test(tcase_sscanf, test_sscanf_293);
  tcase_add_test(tcase_sscanf, test_sscanf_294);
  // %f
  tcase_add_test(tcase_sscanf, test_sscanf_295);
  tcase_add_test(tcase_sscanf, test_sscanf_296);
  tcase_add_test(tcase_sscanf, test_sscanf_297);
  tcase_add_test(tcase_sscanf, test_sscanf_298);
  tcase_add_test(tcase_sscanf, test_sscanf_299);
  tcase_add_test(tcase_sscanf, test_sscanf_300);
  tcase_add_test(tcase_sscanf, test_sscanf_301);
  tcase_add_test(tcase_sscanf, test_sscanf_302);
  tcase_add_test(tcase_sscanf, test_sscanf_303);
  tcase_add_test(tcase_sscanf, test_sscanf_304);
  tcase_add_test(tcase_sscanf, test_sscanf_305);
  tcase_add_test(tcase_sscanf, test_sscanf_306);
  tcase_add_test(tcase_sscanf, test_sscanf_307);
  tcase_add_test(tcase_sscanf, test_sscanf_308);
  tcase_add_test(tcase_sscanf, test_sscanf_309);
  tcase_add_test(tcase_sscanf, test_sscanf_310);
  tcase_add_test(tcase_sscanf, test_sscanf_311);
  tcase_add_test(tcase_sscanf, test_sscanf_312);
  tcase_add_test(tcase_sscanf, test_sscanf_313);
  tcase_add_test(tcase_sscanf, test_sscanf_314);
  tcase_add_test(tcase_sscanf, test_sscanf_315);
  tcase_add_test(tcase_sscanf, test_sscanf_316);
  tcase_add_test(tcase_sscanf, test_sscanf_317);
  tcase_add_test(tcase_sscanf, test_sscanf_318);
  tcase_add_test(tcase_sscanf, test_sscanf_319);
  tcase_add_test(tcase_sscanf, test_sscanf_320);
  tcase_add_test(tcase_sscanf, test_sscanf_321);
  tcase_add_test(tcase_sscanf, test_sscanf_322);
  tcase_add_test(tcase_sscanf, test_sscanf_323);
  tcase_add_test(tcase_sscanf, test_sscanf_324);
  tcase_add_test(tcase_sscanf, test_sscanf_325);
  tcase_add_test(tcase_sscanf, test_sscanf_326);
  tcase_add_test(tcase_sscanf, test_sscanf_327);
  tcase_add_test(tcase_sscanf, test_sscanf_328);
  tcase_add_test(tcase_sscanf, test_sscanf_329);
  tcase_add_test(tcase_sscanf, test_sscanf_330);
  tcase_add_test(tcase_sscanf, test_sscanf_331);
  tcase_add_test(tcase_sscanf, test_sscanf_332);
  tcase_add_test(tcase_sscanf, test_sscanf_333);
  tcase_add_test(tcase_sscanf, test_sscanf_334);
  tcase_add_test(tcase_sscanf, test_sscanf_335);
  tcase_add_test(tcase_sscanf, test_sscanf_336);
  tcase_add_test(tcase_sscanf, test_sscanf_337);
  // %e %E
  tcase_add_test(tcase_sscanf, test_sscanf_338);
  tcase_add_test(tcase_sscanf, test_sscanf_339);
  tcase_add_test(tcase_sscanf, test_sscanf_340);
  tcase_add_test(tcase_sscanf, test_sscanf_341);
  tcase_add_test(tcase_sscanf, test_sscanf_342);
  tcase_add_test(tcase_sscanf, test_sscanf_343);
  tcase_add_test(tcase_sscanf, test_sscanf_344);
  tcase_add_test(tcase_sscanf, test_sscanf_345);
  tcase_add_test(tcase_sscanf, test_sscanf_346);
  tcase_add_test(tcase_sscanf, test_sscanf_347);
  tcase_add_test(tcase_sscanf, test_sscanf_348);
  tcase_add_test(tcase_sscanf, test_sscanf_349);
  tcase_add_test(tcase_sscanf, test_sscanf_350);
  tcase_add_test(tcase_sscanf, test_sscanf_351);
  tcase_add_test(tcase_sscanf, test_sscanf_352);
  tcase_add_test(tcase_sscanf, test_sscanf_353);
  tcase_add_test(tcase_sscanf, test_sscanf_354);
  tcase_add_test(tcase_sscanf, test_sscanf_355);
  tcase_add_test(tcase_sscanf, test_sscanf_356);
  tcase_add_test(tcase_sscanf, test_sscanf_357);
  tcase_add_test(tcase_sscanf, test_sscanf_358);
  tcase_add_test(tcase_sscanf, test_sscanf_359);
  tcase_add_test(tcase_sscanf, test_sscanf_360);
  tcase_add_test(tcase_sscanf, test_sscanf_361);
  tcase_add_test(tcase_sscanf, test_sscanf_362);
  tcase_add_test(tcase_sscanf, test_sscanf_363);
  tcase_add_test(tcase_sscanf, test_sscanf_364);
  tcase_add_test(tcase_sscanf, test_sscanf_365);
  tcase_add_test(tcase_sscanf, test_sscanf_366);
  tcase_add_test(tcase_sscanf, test_sscanf_367);
  tcase_add_test(tcase_sscanf, test_sscanf_368);
  tcase_add_test(tcase_sscanf, test_sscanf_369);
  tcase_add_test(tcase_sscanf, test_sscanf_370);
  tcase_add_test(tcase_sscanf, test_sscanf_372);
  tcase_add_test(tcase_sscanf, test_sscanf_373);
  tcase_add_test(tcase_sscanf, test_sscanf_374);
  tcase_add_test(tcase_sscanf, test_sscanf_375);
  tcase_add_test(tcase_sscanf, test_sscanf_376);
  tcase_add_test(tcase_sscanf, test_sscanf_378);
  // %c
  tcase_add_test(tcase_sscanf, test_sscanf_379);
  tcase_add_test(tcase_sscanf, test_sscanf_380);
  tcase_add_test(tcase_sscanf, test_sscanf_381);
  tcase_add_test(tcase_sscanf, test_sscanf_382);
  tcase_add_test(tcase_sscanf, test_sscanf_383);
  tcase_add_test(tcase_sscanf, test_sscanf_384);
  tcase_add_test(tcase_sscanf, test_sscanf_385);
  tcase_add_test(tcase_sscanf, test_sscanf_386);
  tcase_add_test(tcase_sscanf, test_sscanf_387);
  // %s
  tcase_add_test(tcase_sscanf, test_sscanf_388);
  tcase_add_test(tcase_sscanf, test_sscanf_389);
  tcase_add_test(tcase_sscanf, test_sscanf_390);
  tcase_add_test(tcase_sscanf, test_sscanf_391);
  tcase_add_test(tcase_sscanf, test_sscanf_392);
  tcase_add_test(tcase_sscanf, test_sscanf_393);
  // %g
  tcase_add_test(tcase_sscanf, test_sscanf_394);
  tcase_add_test(tcase_sscanf, test_sscanf_395);
  tcase_add_test(tcase_sscanf, test_sscanf_396);
  tcase_add_test(tcase_sscanf, test_sscanf_397);
  tcase_add_test(tcase_sscanf, test_sscanf_398);
  tcase_add_test(tcase_sscanf, test_sscanf_399);
  tcase_add_test(tcase_sscanf, test_sscanf_400);
  tcase_add_test(tcase_sscanf, test_sscanf_401);
  tcase_add_test(tcase_sscanf, test_sscanf_402);
  tcase_add_test(tcase_sscanf, test_sscanf_403);
  tcase_add_test(tcase_sscanf, test_sscanf_404);
  tcase_add_test(tcase_sscanf, test_sscanf_405);
  tcase_add_test(tcase_sscanf, test_sscanf_406);
  tcase_add_test(tcase_sscanf, test_sscanf_407);
  tcase_add_test(tcase_sscanf, test_sscanf_408);
  tcase_add_test(tcase_sscanf, test_sscanf_409);
  tcase_add_test(tcase_sscanf, test_sscanf_410);
  tcase_add_test(tcase_sscanf, test_sscanf_411);
  tcase_add_test(tcase_sscanf, test_sscanf_412);
  tcase_add_test(tcase_sscanf, test_sscanf_413);
  tcase_add_test(tcase_sscanf, test_sscanf_414);
  tcase_add_test(tcase_sscanf, test_sscanf_415);
  tcase_add_test(tcase_sscanf, test_sscanf_416);
  tcase_add_test(tcase_sscanf, test_sscanf_417);
  tcase_add_test(tcase_sscanf, test_sscanf_418);
  tcase_add_test(tcase_sscanf, test_sscanf_419);
  tcase_add_test(tcase_sscanf, test_sscanf_420);
  tcase_add_test(tcase_sscanf, test_sscanf_421);
  tcase_add_test(tcase_sscanf, test_sscanf_422);
  tcase_add_test(tcase_sscanf, test_sscanf_423);
  tcase_add_test(tcase_sscanf, test_sscanf_424);
  tcase_add_test(tcase_sscanf, test_sscanf_425);
  tcase_add_test(tcase_sscanf, test_sscanf_426);
  tcase_add_test(tcase_sscanf, test_sscanf_427);
  tcase_add_test(tcase_sscanf, test_sscanf_428);
  tcase_add_test(tcase_sscanf, test_sscanf_429);
  tcase_add_test(tcase_sscanf, test_sscanf_430);
  tcase_add_test(tcase_sscanf, test_sscanf_431);
  tcase_add_test(tcase_sscanf, test_sscanf_432);
  tcase_add_test(tcase_sscanf, test_sscanf_433);
  tcase_add_test(tcase_sscanf, test_sscanf_434);
  tcase_add_test(tcase_sscanf, test_sscanf_435);
  tcase_add_test(tcase_sscanf, test_sscanf_436);
  suite_add_tcase(suite, tcase_sscanf);
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