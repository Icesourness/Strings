#include "tests.h"

// MEMCHR ////////////////////////////////////////////////////////////
START_TEST(test_memchr) {
  char *str1 = "123456";
  char c1 = '4';
  ck_assert_ptr_eq(s21_memchr(str1, c1, 6), memchr(str1, c1, 6));
  ck_assert_ptr_eq(s21_memchr(str1, c1, 0), memchr(str1, c1, 0));
  ck_assert_ptr_eq(s21_memchr(str1, c1, 1), memchr(str1, c1, 1));
  char *str2 = "123456";
  char c2 = '\0';
  ck_assert_ptr_eq(s21_memchr(str2, c2, 6), memchr(str2, c2, 6));
  ck_assert_ptr_eq(s21_memchr(str2, c2, 7), memchr(str2, c2, 7));
  char *str3 = "h";
  char c3 = 'h';
  ck_assert_ptr_eq(s21_memchr(str3, c3, 6), memchr(str3, c3, 6));
  char *str4 = "bebra";
  char c4 = '/';
  ck_assert_ptr_eq(s21_memchr(str4, c4, 6), memchr(str4, c4, 6));
  char *str5 = "";
  char c5 = '\0';
  ck_assert_ptr_eq(s21_memchr(str5, c5, 6), memchr(str5, c5, 6));
  char *str6 = "             ";
  char c6 = ' ';
  ck_assert_ptr_eq(s21_memchr(str6, c6, 6), memchr(str6, c6, 6));
  char *str7 = "abc\0def";
  char c7 = '\0';
  ck_assert_ptr_eq(s21_memchr(str7, c7, 6), memchr(str7, c7, 6));
}
END_TEST

// MEMCMP ////////////////////////////////////////////////////////////
START_TEST(test_memcmp) {
  char *str1_1 = "123456";
  char *str1_2 = "1234";
  ck_assert_int_eq(s21_memcmp(str1_1, str1_2, 0), memcmp(str1_1, str1_2, 0));
  ck_assert_int_eq(s21_memcmp(str1_1, str1_2, 4), memcmp(str1_1, str1_2, 4));
  ck_assert_int_eq(s21_memcmp(str1_1, str1_2, 4), memcmp(str1_1, str1_2, 4));
  char *str2_1 = "1234";
  char *str2_2 = "123456";
  ck_assert_int_eq(s21_memcmp(str2_1, str2_2, 4), memcmp(str2_1, str2_2, 4));
  char *str3_1 = "1234";
  char *str3_2 = "\0";
  ck_assert_int_eq(s21_memcmp(str3_1, str3_2, 1), memcmp(str3_1, str3_2, 1));
  ck_assert_int_eq(s21_memcmp(str3_1, str3_2, 0), memcmp(str3_1, str3_2, 0));
  char *str4_1 = "123\04";
  char *str4_2 = "123\0";
  ck_assert_int_eq(s21_memcmp(str4_1, str4_2, 3), memcmp(str4_1, str4_2, 3));
  ck_assert_int_eq(s21_memcmp(str4_1, str4_2, 4), memcmp(str4_1, str4_2, 4));
  char *str5_1 = "abc";
  char *str5_2 = "abC";
  ck_assert_int_eq(s21_memcmp(str5_1, str5_2, 3), memcmp(str5_1, str5_2, 3));
  char *str6_1 = "abc";
  char *str6_2 = "";
  ck_assert_int_eq(s21_memcmp(str6_1, str6_2, 1), memcmp(str6_1, str6_2, 1));
  char *str7_1 = "";
  char *str7_2 = "";
  ck_assert_int_eq(s21_memcmp(str7_1, str7_2, 5), memcmp(str7_1, str7_2, 5));
  char *str8_1 = "";
  char *str8_2 = "abc";
  ck_assert_int_eq(s21_memcmp(str8_1, str8_2, 0), memcmp(str8_1, str8_2, 0));
  ck_assert_int_eq(s21_memcmp(str8_1, str8_2, 1), memcmp(str8_1, str8_2, 1));
}
END_TEST

// MEMCPY ////////////////////////////////////////////////////////////
START_TEST(test_memcpy) {
  char str1_1[6] = "12345";
  char str1_2[] = "  ";
  ck_assert_str_eq(s21_memcpy(str1_1, str1_2, 2), memcpy(str1_1, str1_2, 2));
  ck_assert_str_eq(s21_memcpy(str1_1, str1_2, 1), memcpy(str1_1, str1_2, 1));
  ck_assert_str_eq(s21_memcpy(str1_1, str1_2, 0), memcpy(str1_1, str1_2, 0));
  char str2_1[10] = "     ";
  char str2_2[] = "avc";
  ck_assert_str_eq(s21_memcpy(str2_1, str2_2, 3), memcpy(str2_1, str2_2, 3));
  ck_assert_str_eq(s21_memcpy(str2_1, str2_2, 4), memcpy(str2_1, str2_2, 4));
  char str3_1[10] = "000456";
  char str3_2[] = "123";
  ck_assert_str_eq(s21_memcpy(str3_1, str3_2, 4), memcpy(str3_1, str3_2, 4));
  char str4_1[10] = "aaaaaaa";
  char str4_2[] = "\0\0";
  ck_assert_str_eq(s21_memcpy(str4_1, str4_2, 2), memcpy(str4_1, str4_2, 2));
  char str5_1[5] = "";
  char str5_2[] = "123456";
  ck_assert_str_eq(s21_memcpy(str5_1, str5_2, 2), memcpy(str5_1, str5_2, 2));
  ck_assert_str_eq(s21_memcpy(str5_1, str5_2, 6), memcpy(str5_1, str5_2, 6));
  char str6_1[10] = "0000000";
  char str6_2[] = "12\034";
  ck_assert_str_eq(s21_memcpy(str6_1, str6_2, 5), memcpy(str6_1, str6_2, 5));
  char str7_1[10] = "0000000";
  char str7_2[] = "12\n3\t";
  ck_assert_str_eq(s21_memcpy(str7_1, str7_2, 6), memcpy(str7_1, str7_2, 6));
}
END_TEST

// MEMSET ////////////////////////////////////////////////////////////
START_TEST(test_memset) {
  char str1_1[] = "abcdef";
  char str1_2[] = "abcdef";
  int n1 = 0;
  ck_assert_str_eq(memset(str1_1, '*', n1), s21_memset(str1_2, '*', n1));
  char str2_1[] = "abcdef";
  char str2_2[] = "abcdef";
  int n2 = 5;
  ck_assert_str_eq(memset(str2_1, '*', n2), s21_memset(str2_2, '*', n2));
  char str3_1[] = "abcdef";
  char str3_2[] = "abcdef";
  int n3 = 6;
  ck_assert_str_eq(memset(str3_1, '*', n3), s21_memset(str3_2, '*', n3));
  char str4_1[10] = "";
  char str4_2[10] = "";
  int n4 = 6;
  ck_assert_str_eq(memset(str4_1, '*', n4), s21_memset(str4_2, '*', n4));
}
END_TEST

// STRNCAT ///////////////////////////////////////////////////////////
START_TEST(test_strncat) {
  char str1_1[10] = "abc";
  char str1_2[10] = "abc";
  char str1_3[] = "def";
  int n1 = 1;
  ck_assert_str_eq(strncat(str1_1, str1_3, n1),
                   s21_strncat(str1_2, str1_3, n1));
  char str2_1[10] = "ab\nc";
  char str2_2[10] = "ab\nc";
  char str2_3[] = "def";
  int n2 = 1;
  ck_assert_str_eq(strncat(str2_1, str2_3, n2),
                   s21_strncat(str2_2, str2_3, n2));
  char str3_1[10] = "ab\0c";
  char str3_2[10] = "ab\0c";
  char str3_3[] = "def";
  int n3 = 1;
  ck_assert_str_eq(strncat(str3_1, str3_3, n3),
                   s21_strncat(str3_2, str3_3, n3));
  char str4_1[9] = "abc";
  char str4_2[9] = "abc";
  char str4_3[] = "de\0f";
  int n4 = 1;
  ck_assert_str_eq(strncat(str4_1, str4_3, n4),
                   s21_strncat(str4_2, str4_3, n4));
  char str5_1[9] = " ";
  char str5_2[9] = " ";
  char str5_3[] = " ";
  int n5 = 0;
  ck_assert_str_eq(strncat(str5_1, str5_3, n5),
                   s21_strncat(str5_2, str5_3, n5));
  char str6_1[9] = " ";
  char str6_2[9] = " ";
  char str6_3[] = " ";
  int n6 = 3;
  ck_assert_str_eq(strncat(str6_1, str6_3, n6),
                   s21_strncat(str6_2, str6_3, n6));
  char str7_1[10] = "abc";
  char str7_2[10] = "abc";
  char str7_3[] = "def";
  int n7 = 3;
  ck_assert_str_eq(strncat(str7_1, str7_3, n7),
                   s21_strncat(str7_2, str7_3, n7));
}
END_TEST

// STRCHR ////////////////////////////////////////////////////////////
START_TEST(test_strchr) {
  char str1[] = "abc";
  int n1 = 'a';
  ck_assert_ptr_eq(strchr(str1, n1), s21_strchr(str1, n1));
  char str2[] = "abc";
  int n2 = 'd';
  ck_assert_ptr_eq(strchr(str2, n2), s21_strchr(str2, n2));
  char str3[] = "abc";
  int n3 = '1';
  ck_assert_ptr_eq(strchr(str3, n3), s21_strchr(str3, n3));
  char str4[] = "abc";
  int n = '\\';
  ck_assert_ptr_eq(strchr(str4, n), s21_strchr(str4, n));
  char str5[] = "";
  int n5 = 'a';
  ck_assert_ptr_eq(strchr(str5, n5), s21_strchr(str5, n5));

  char str6[] = " ";
  int n6 = 'a';
  ck_assert_ptr_eq(strchr(str6, n6), s21_strchr(str6, n6));
  char str7[] = " ";
  int n7 = ' ';
  ck_assert_ptr_eq(strchr(str7, n7), s21_strchr(str7, n7));
  char str8[] = " ";
  int n8 = '\\';
  ck_assert_ptr_eq(strchr(str8, n8), s21_strchr(str8, n8));
  char str9[] = "021";
  int n9 = '0';
  ck_assert_ptr_eq(strchr(str9, n9), s21_strchr(str9, n9));
  char str10[] = "ab\nc";
  int n10 = '\n';
  ck_assert_ptr_eq(strchr(str10, n10), s21_strchr(str10, n10));
}
END_TEST

// STRNCMP ///////////////////////////////////////////////////////////
START_TEST(test_strncmp) {
  char str1_1[] = "abc";
  char str1_2[] = "abc";
  ck_assert_int_eq(s21_strncmp(str1_1, str1_2, 1), strncmp(str1_1, str1_2, 1));
  ck_assert_int_eq(s21_strncmp(str1_1, str1_2, 2), strncmp(str1_1, str1_2, 2));
  ck_assert_int_eq(s21_strncmp(str1_1, str1_2, 3), strncmp(str1_1, str1_2, 3));
  ck_assert_int_eq(s21_strncmp(str1_1, str1_2, 4), strncmp(str1_1, str1_2, 4));
  char str2_1[] = "Abc";
  char str2_2[] = "abc";
  ck_assert_int_eq(s21_strncmp(str2_1, str2_2, 1), strncmp(str2_1, str2_2, 1));
  char str3_1[] = "aBc";
  char str3_2[] = "abc";
  ck_assert_int_eq(s21_strncmp(str3_1, str3_2, 1), strncmp(str3_1, str3_2, 1));
  ck_assert_int_eq(s21_strncmp(str3_1, str3_2, 2), strncmp(str3_1, str3_2, 2));
  ck_assert_int_eq(s21_strncmp(str3_1, str3_2, 3), strncmp(str3_1, str3_2, 3));
  char str4_1[] = "";
  char str4_2[] = "";
  ck_assert_int_eq(s21_strncmp(str4_1, str4_2, 1), strncmp(str4_1, str4_2, 1));
  ck_assert_int_eq(s21_strncmp(str4_1, str4_2, 0), strncmp(str4_1, str4_2, 0));
  char str5_1[] = "   ";
  char str5_2[] = "   ";
  ck_assert_int_eq(s21_strncmp(str5_1, str5_2, 3), strncmp(str5_1, str5_2, 3));
  char str6_1[] = "   ";
  char str6_2[] = "  a";
  ck_assert_int_eq(s21_strncmp(str6_1, str6_2, 1), strncmp(str6_1, str6_2, 1));
  ck_assert_int_eq(s21_strncmp(str6_1, str6_2, 2), strncmp(str6_1, str6_2, 2));
  ck_assert_int_eq(s21_strncmp(str6_1, str6_2, 3), strncmp(str6_1, str6_2, 3));
  char str7_1[] = "";
  char str7_2[] = "\0";
  ck_assert_int_eq(s21_strncmp(str7_1, str7_2, 1), strncmp(str7_1, str7_2, 1));
  ck_assert_int_eq(s21_strncmp(str7_1, str7_2, 2), strncmp(str7_1, str7_2, 2));
  char str8_1[] = "abcd";
  char str8_2[] = "abc";
  ck_assert_int_eq(s21_strncmp(str8_1, str8_2, 1), strncmp(str8_1, str8_2, 1));
  ck_assert_int_eq(s21_strncmp(str8_1, str8_2, 3), strncmp(str8_1, str8_2, 3));
  ck_assert_int_eq(s21_strncmp(str8_1, str8_2, 4), strncmp(str8_1, str8_2, 4));
}
END_TEST

// STRNCPY ///////////////////////////////////////////////////////////
START_TEST(test_strncpy) {
  char str1_1[6] = "12345";
  char str1_2[] = "  ";
  ck_assert_str_eq(s21_strncpy(str1_1, str1_2, 2), strncpy(str1_1, str1_2, 2));
  ck_assert_str_eq(s21_strncpy(str1_1, str1_2, 1), strncpy(str1_1, str1_2, 1));
  char str2_1[10] = "     ";
  char str2_2[] = "avc";
  ck_assert_str_eq(s21_strncpy(str2_1, str2_2, 3), strncpy(str2_1, str2_2, 3));
  ck_assert_str_eq(s21_strncpy(str2_1, str2_2, 4), strncpy(str2_1, str2_2, 4));
  char str3_1[10] = "000456";
  char str3_2[] = "123";
  ck_assert_str_eq(s21_strncpy(str3_1, str3_2, 4), strncpy(str3_1, str3_2, 4));
  char str4_1[10] = "aaaaaaa";
  char str4_2[] = "\0\0";
  ck_assert_str_eq(s21_strncpy(str4_1, str4_2, 2), strncpy(str4_1, str4_2, 2));
  char str5_1[5] = "";
  char str5_2[] = "123456";
  ck_assert_str_eq(s21_strncpy(str5_1, str5_2, 2), strncpy(str5_1, str5_2, 2));
  ck_assert_str_eq(s21_strncpy(str5_1, str5_2, 6), strncpy(str5_1, str5_2, 6));
  char str6_1[10] = "0000000";
  char str6_2[] = "12\034";
  ck_assert_str_eq(s21_strncpy(str6_1, str6_2, 5), strncpy(str6_1, str6_2, 5));
  char str7_1[10] = "0000000";
  char str7_2[] = "12\n3\t";
  ck_assert_str_eq(s21_strncpy(str7_1, str7_2, 6), strncpy(str7_1, str7_2, 6));
}
END_TEST

// STRCSPN ///////////////////////////////////////////////////////////
START_TEST(test_strcspn) {
  char str1_1[] = "abc";
  char str1_2[] = "abc";
  ck_assert_int_eq(strcspn(str1_1, str1_2), s21_strcspn(str1_1, str1_2));
  char str2_1[] = "Abc";
  char str2_2[] = "abc";
  ck_assert_int_eq(strcspn(str2_1, str2_2), s21_strcspn(str2_1, str2_2));
  char str3_1[] = "abc";
  char str3_2[] = "Abc";
  ck_assert_int_eq(strcspn(str3_1, str3_2), s21_strcspn(str3_1, str3_2));
  char str4_1[] = "abC";
  char str4_2[] = "abc";
  ck_assert_int_eq(strcspn(str4_1, str4_2), s21_strcspn(str4_1, str4_2));
  char str5_1[] = "abc";
  char str5_2[] = "a b c";
  ck_assert_int_eq(strcspn(str5_1, str5_2), s21_strcspn(str5_1, str5_2));
  char str6_1[] = "";
  char str6_2[] = "abc";
  ck_assert_int_eq(strcspn(str6_1, str6_2), s21_strcspn(str6_1, str6_2));
  char str7_1[] = "abc";
  char str7_2[] = "";
  ck_assert_int_eq(strcspn(str7_1, str7_2), s21_strcspn(str7_1, str7_2));
  char str8_1[] = "9087";
  char str8_2[] = "657";
  ck_assert_int_eq(strcspn(str8_1, str8_2), s21_strcspn(str8_1, str8_2));
  char str9_1[] = "";
  char str9_2[] = "";
  ck_assert_int_eq(strcspn(str9_1, str9_2), s21_strcspn(str9_1, str9_2));
  char str10_1[] = " ";
  char str10_2[] = " ";
  ck_assert_int_eq(strcspn(str10_1, str10_2), s21_strcspn(str10_1, str10_2));
  char str11_1[] = "ab12";
  char str11_2[] = "12ab";
  ck_assert_int_eq(strcspn(str11_1, str11_2), s21_strcspn(str11_1, str11_2));
}
END_TEST

// STRERROR
START_TEST(test_strerror) {
  int i = 0;
  ck_assert_str_eq(strerror(i + 1), s21_strerror(i + 1));
  ck_assert_str_eq(strerror(i + 2), s21_strerror(i + 2));
  ck_assert_str_eq(strerror(i + 3), s21_strerror(i + 3));
  ck_assert_str_eq(strerror(i + 4), s21_strerror(i + 4));
  ck_assert_str_eq(strerror(i + 5), s21_strerror(i + 5));
  ck_assert_str_eq(strerror(i + 6), s21_strerror(i + 6));
  ck_assert_str_eq(strerror(-1), s21_strerror(-1));
}
END_TEST

// STRLEN ////////////////////////////////////////////////////////////
START_TEST(test_strlen) {
  char *str1 = "";
  ck_assert_int_eq(s21_strlen(str1), strlen(str1));
  char *str2 = " ";
  ck_assert_int_eq(s21_strlen(str2), strlen(str2));
  char *str3 = "bebra";
  ck_assert_int_eq(s21_strlen(str3), strlen(str3));
  char *str4 = "bebra\0";
  ck_assert_int_eq(s21_strlen(str4), strlen(str4));
  char *str5 = "bebra\n";
  ck_assert_int_eq(s21_strlen(str5), strlen(str5));
  char *str6 = "bebra\0123567";
  ck_assert_int_eq(s21_strlen(str6), strlen(str6));
  char *str7 = "\0";
  ck_assert_int_eq(s21_strlen(str7), strlen(str7));
  char *str8 = "1\n2\t3";
  ck_assert_int_eq(s21_strlen(str8), strlen(str8));
}
END_TEST

// STRPBRK ///////////////////////////////////////////////////////////
START_TEST(test_strpbrk) {
  char str1_1[] = "abcdefghiklmnop";
  char str1_2[] = "abcd";
  ck_assert_ptr_eq(s21_strpbrk(str1_1, str1_2), strpbrk(str1_1, str1_2));
  char str2_1[] = "this is a test";
  char str2_2[] = "abc";
  ck_assert_ptr_eq(strpbrk(str2_1, str2_2), s21_strpbrk(str2_1, str2_2));
  char str3_1[] = "abc";
  char str3_2[] = "ccc";
  ck_assert_ptr_eq(strpbrk(str3_1, str3_2), s21_strpbrk(str3_1, str3_2));
  char str4_1[] = "abc123";
  char str4_2[] = "123";
  ck_assert_ptr_eq(strpbrk(str4_1, str4_2), s21_strpbrk(str4_1, str4_2));
  char str5_1[] = "abglk1erw233c";
  char str5_2[] = "321";
  ck_assert_ptr_eq(strpbrk(str5_1, str5_2), s21_strpbrk(str5_1, str5_2));
  char str6_1[] = "ab\nc";
  char str6_2[] = "\n";
  ck_assert_ptr_eq(strpbrk(str6_1, str6_2), s21_strpbrk(str6_1, str6_2));
  char str7_1[] = "a8yuoiytu5u6rtyfkguhubc";
  char str7_2[] = "123i6t5";
  ck_assert_ptr_eq(strpbrk(str7_1, str7_2), s21_strpbrk(str7_1, str7_2));
  char str8_1[] = "abc";
  char str8_2[] = "";
  ck_assert_ptr_eq(strpbrk(str8_1, str8_2), s21_strpbrk(str8_1, str8_2));
  char str9_1[] = " ";
  char str9_2[] = "abc";
  ck_assert_ptr_eq(strpbrk(str9_1, str9_2), s21_strpbrk(str9_1, str9_2));
  char str10_1[] = "";
  char str10_2[] = "";
  ck_assert_ptr_eq(strpbrk(str10_1, str10_2), s21_strpbrk(str10_1, str10_2));
  char str11_1[] = " ";
  char str11_2[] = " ";
  ck_assert_ptr_eq(strpbrk(str11_1, str11_2), s21_strpbrk(str11_1, str11_2));
}
END_TEST

// strrchr ///////////////////////////////////////////////////////////
START_TEST(test_strrchr) {
  char str1[] = "abc";
  int n1 = 'a';
  ck_assert_ptr_eq(strrchr(str1, n1), s21_strrchr(str1, n1));
  char str2[] = "abc";
  int n2 = 'd';
  ck_assert_ptr_eq(strrchr(str2, n2), s21_strrchr(str2, n2));
  char str3[] = "abc";
  int n3 = '1';
  ck_assert_ptr_eq(strrchr(str3, n3), s21_strrchr(str3, n3));
  char str4[] = "abc";
  int n4 = '\\';
  ck_assert_ptr_eq(strrchr(str4, n4), s21_strrchr(str4, n4));
  char str5[] = "";
  int n5 = 'a';
  ck_assert_ptr_eq(strrchr(str5, n5), s21_strrchr(str5, n5));
  char str6[] = " ";
  int n6 = 'a';
  ck_assert_ptr_eq(strrchr(str6, n6), s21_strrchr(str6, n6));
  char str7[] = " ";
  int n7 = ' ';
  ck_assert_ptr_eq(strrchr(str7, n7), s21_strrchr(str7, n7));
  char str8[] = " ";
  int n8 = '\\';
  ck_assert_ptr_eq(strrchr(str8, n8), s21_strrchr(str8, n8));
  char str9[] = "021";
  int n9 = '0';
  ck_assert_ptr_eq(strrchr(str9, n9), s21_strrchr(str9, n9));
  char str10[] = "ab\nc";
  int n10 = 'a';
  ck_assert_ptr_eq(strrchr(str10, n10), s21_strrchr(str10, n10));
  char str11[] = "ab\nc";
  int n11 = '\n';
  ck_assert_ptr_eq(strrchr(str11, n11), s21_strrchr(str11, n11));
  char str12[] = "abc";
  int n12 = '\0';
  ck_assert_ptr_eq(strrchr(str12, n12), s21_strrchr(str12, n12));
  char str13[] = "";
  int n13 = '\0';
  ck_assert_ptr_eq(strrchr(str13, n13), s21_strrchr(str13, n13));
  char str14[] = "";
  int n14 = '\\';
  ck_assert_ptr_eq(strrchr(str14, n14), s21_strrchr(str14, n14));
  char str15[] = "\\";
  int n15 = '\\';
  ck_assert_ptr_eq(strrchr(str15, n15), s21_strrchr(str15, n15));
}
END_TEST

// STRSTR ////////////////////////////////////////////////////////////
START_TEST(test_strstr) {
  char str1_1[] = "abc";
  char str1_2[] = "abc";
  ck_assert_ptr_eq(strstr(str1_1, str1_2), s21_strstr(str1_1, str1_2));
  char str2_1[] = "Abc";
  char str2_2[] = "abc";
  ck_assert_ptr_eq(strstr(str2_1, str2_2), s21_strstr(str2_1, str2_2));
  char str3_1[] = "ABC";
  char str3_2[] = "abc";
  ck_assert_ptr_eq(strstr(str3_1, str3_2), s21_strstr(str3_1, str3_2));
  char str4_1[] = "abc";
  char str4_2[] = "ABC";
  ck_assert_ptr_eq(strstr(str4_1, str4_2), s21_strstr(str4_1, str4_2));
  char str5_1[] = "a b c";
  char str5_2[] = "abc";
  ck_assert_ptr_eq(strstr(str5_1, str5_2), s21_strstr(str5_1, str5_2));
  char str6_1[] = "";
  char str6_2[] = "abc";
  ck_assert_ptr_eq(strstr(str6_1, str6_2), s21_strstr(str6_1, str6_2));
  char str7_1[] = "abc";
  char str7_2[] = "";
  ck_assert_ptr_eq(strstr(str7_1, str7_2), s21_strstr(str7_1, str7_2));
  char str8_1[] = "";
  char str8_2[] = "";
  ck_assert_ptr_eq(strstr(str8_1, str8_2), s21_strstr(str8_1, str8_2));
  char str9_1[] = " ";
  char str9_2[] = " ";
  ck_assert_ptr_eq(strstr(str9_1, str9_2), s21_strstr(str9_1, str9_2));
  char str10_1[] = "123";
  char str10_2[] = "321";
  ck_assert_ptr_eq(strstr(str10_1, str10_2), s21_strstr(str10_1, str10_2));
  char str11_1[] = "a\0b12";
  char str11_2[] = "12ab";
  ck_assert_ptr_eq(strstr(str11_1, str11_2), s21_strstr(str11_1, str11_2));
  char str12_1[] = "ab12";
  char str12_2[] = "12\0ab";
  ck_assert_ptr_eq(strstr(str12_1, str12_2), s21_strstr(str12_1, str12_2));
  char str13_1[] = "\0";
  char str13_2[] = "\0";
  ck_assert_ptr_eq(strstr(str13_1, str13_2), s21_strstr(str13_1, str13_2));
  char str14_1[] = "";
  char str14_2[] = "1\02ab";
  ck_assert_ptr_eq(strstr(str14_1, str14_2), s21_strstr(str14_1, str14_2));
}
END_TEST

// STRTOK ////////////////////////////////////////////////////////////
START_TEST(test_strtok) {
  char str1_1[] = "123";
  char str1_3[] = "123";
  char str1_2[] = "3";
  ck_assert_str_eq(strtok(str1_1, str1_2), s21_strtok(str1_3, str1_2));
  char str2_1[] = "123";
  char str2_3[] = "123";
  char str2_2[] = "2";
  ck_assert_str_eq(strtok(str2_1, str2_2), s21_strtok(str2_3, str2_2));
  char str3_1[] = "123";
  char str3_3[] = "123";
  char str3_2[] = "1";
  ck_assert_str_eq(strtok(str3_1, str3_2), s21_strtok(str3_3, str3_2));
  char str4_1[] = "122";
  char str4_3[] = "122";
  char str4_2[] = "2";
  ck_assert_str_eq(strtok(str4_1, str4_2), s21_strtok(str4_3, str4_2));
  char str5_1[] = "223";
  char str5_3[] = "223";
  char str5_2[] = "2";
  ck_assert_str_eq(strtok(str5_1, str5_2), s21_strtok(str5_3, str5_2));
  char str6_1[] = "1112233";
  char str6_3[] = "1112233";
  char str6_2[] = "3";
  ck_assert_str_eq(strtok(str6_1, str6_2), s21_strtok(str6_3, str6_2));
  char str7_1[] = "1112233";
  char str7_3[] = "1112233";
  char str7_2[] = "2";
  ck_assert_str_eq(strtok(str7_1, str7_2), s21_strtok(str7_3, str7_2));
  char str8_1[] = "123";
  char str8_3[] = "123";
  char str8_2[] = "4";
  ck_assert_str_eq(strtok(str8_1, str8_2), s21_strtok(str8_3, str8_2));
  char str9_1[] = "1\023";
  char str9_3[] = "1\023";
  char str9_2[] = "2";
  strtok(str9_1, str9_2);
  strtok(NULL, str9_2);
  s21_strtok(str9_3, str9_2);
  s21_strtok(NULL, str9_2);
  ck_assert_str_eq(str9_1, str9_3);
  char str10_1[] = "ababa";
  char str10_3[] = "ababa";
  char str10_2[] = "b";
  strtok(str10_1, str10_2);
  strtok(NULL, str10_2);
  s21_strtok(str10_3, str10_2);
  s21_strtok(NULL, str10_2);
  ck_assert_str_eq(str10_1, str10_3);
  char str11_1[] = "ababa";
  char str11_3[] = "ababa";
  char str11_2[] = "a";
  strtok(str11_1, str11_2);
  strtok(NULL, str11_2);
  s21_strtok(str11_3, str11_2);
  s21_strtok(NULL, str11_2);
  ck_assert_str_eq(str11_1, str11_3);
  char str12_1[] = "0987654546789";
  char str12_3[] = "0987654546789";
  char str12_2[] = "5";
  strtok(str12_1, str12_2);
  strtok(NULL, str12_2);
  char *str12_4 = strtok(NULL, str12_2);
  s21_strtok(str12_3, str12_2);
  s21_strtok(NULL, str12_2);
  char *str12_5 = s21_strtok(NULL, str12_2);
  ck_assert_str_eq(str12_4, str12_5);
}
END_TEST

// TO_UPPER //////////////////////////////////////////////////////////
START_TEST(test_to_upper) {  // чистить память
  char str1_1[] = "abc";
  char *str1_2 = s21_to_upper(str1_1);
  ck_assert_str_eq(str1_2, "ABC");
  free(str1_2);
  char str2_1[] = "aBc";
  char *str2_2 = s21_to_upper(str2_1);
  ck_assert_str_eq(str2_2, "ABC");
  free(str2_2);
  char str3_1[] = "123";
  char *str3_2 = s21_to_upper(str3_1);
  ck_assert_str_eq(str3_2, "123");
  free(str3_2);
  char str4_1[] = "123abc";
  char *str4_2 = s21_to_upper(str4_1);
  ck_assert_str_eq(str4_2, "123ABC");
  free(str4_2);
  char str5_1[] = ".,/.,/.,";
  char *str5_2 = s21_to_upper(str5_1);
  ck_assert_str_eq(str5_2, ".,/.,/.,");
  free(str5_2);
  char str6_1[] = " ";
  char *str6_2 = s21_to_upper(str6_1);
  ck_assert_str_eq(str6_2, " ");
  free(str6_2);
  char str7_1[] = "";
  char *str7_2 = s21_to_upper(str7_1);
  ck_assert_str_eq(str7_2, "");
  free(str7_2);
  char str8_1[] = "x1x1\0x1";
  char *str8_2 = s21_to_upper(str8_1);
  ck_assert_str_eq(str8_2, "X1X1\0X1");
  free(str8_2);
}
END_TEST

// TO_LOWER //////////////////////////////////////////////////////////
START_TEST(test_to_lower) {  // чистить память
  char str1_1[] = "ABC";
  char *str1_2 = s21_to_lower(str1_1);
  ck_assert_str_eq(str1_2, "abc");
  free(str1_2);
  char str2_1[] = "AbC";
  char *str2_2 = s21_to_lower(str2_1);
  ck_assert_str_eq(str2_2, "abc");
  free(str2_2);
  char str3_1[] = "123";
  char *str3_2 = s21_to_lower(str3_1);
  ck_assert_str_eq(str3_2, "123");
  free(str3_2);
  char str4_1[] = "123ABC";
  char *str4_2 = s21_to_lower(str4_1);
  ck_assert_str_eq(str4_2, "123abc");
  free(str4_2);
  char str5_1[] = ".,/.,/.,";
  char *str5_2 = s21_to_lower(str5_1);
  ck_assert_str_eq(str5_2, ".,/.,/.,");
  free(str5_2);
  char str6_1[] = " ";
  char *str6_2 = s21_to_lower(str6_1);
  ck_assert_str_eq(str6_2, " ");
  free(str6_2);
  char str7_1[] = "";
  char *str7_2 = s21_to_lower(str7_1);
  ck_assert_str_eq(str7_2, "");
  free(str7_2);
  char str8_1[] = "X1X1\0X1";
  char *str8_2 = s21_to_lower(str8_1);
  ck_assert_str_eq(str8_2, "x1x1\0x1");
  free(str8_2);
}
END_TEST

// INSERT ////////////////////////////////////////////////////////////
START_TEST(test_insert) {
  char str1_1[] = "abc";
  char str1_2[] = "def";
  int n1 = 3;
  char *str1_3 = s21_insert(str1_1, str1_2, n1);
  ck_assert_str_eq(str1_3, "abcdef");
  free(str1_3);
  char str2_1[] = "abc";
  char str2_2[] = "def";
  int n2 = 2;
  char *str2_3 = s21_insert(str2_1, str2_2, n2);
  ck_assert_str_eq(str2_3, "abdefc");
  free(str2_3);
  char str3_1[] = "abc";
  char str3_2[] = "def";
  int n3 = 1;
  char *str3_3 = s21_insert(str3_1, str3_2, n3);
  ck_assert_str_eq(str3_3, "adefbc");
  free(str3_3);
  char str4_1[] = "abc";
  char str4_2[] = "def";
  int n4 = 0;
  char *str4_3 = s21_insert(str4_1, str4_2, n4);
  ck_assert_str_eq(str4_3, "defabc");
  free(str4_3);
  char str5_1[] = "abcdefghijkl1234567890";
  char str5_2[] = "BEBRA";
  int n5 = 5;
  char *str5_3 = s21_insert(str5_1, str5_2, n5);
  ck_assert_str_eq(str5_3, "abcdeBEBRAfghijkl1234567890");
  free(str5_3);
  char str6_1[] = "123";
  char str6_2[] = "";
  int n6 = 0;
  char *str6_3 = s21_insert(str6_1, str6_2, n6);
  ck_assert_str_eq(str6_3, "123");
  free(str6_3);
  char str7_1[] = "123";
  char str7_2[] = "";
  int n7 = 1;
  char *str7_3 = s21_insert(str7_1, str7_2, n7);
  ck_assert_str_eq(str7_3, "123");
  free(str7_3);
  char str8_1[] = "123";
  char str8_2[] = "";
  int n8 = 3;
  char *str8_3 = s21_insert(str8_1, str8_2, n8);
  ck_assert_str_eq(str8_3, "123");
  free(str8_3);
  char str9_1[] = "123";
  char str9_2[] = "";
  int n9 = 3;
  char *str9_3 = s21_insert(str9_1, str9_2, n9);
  ck_assert_str_eq(str9_3, "123");
  free(str9_3);
  char str10_1[] = "";
  char str10_2[] = "123";
  int n10 = 1;
  char *str10_3 = s21_insert(str10_1, str10_2, n10);
  ck_assert_pstr_eq(str10_3, s21_NULL);
  free(str10_3);
  char str11_1[] = "";
  char str11_2[] = "abc";
  int n11 = 0;
  char *str11_3 = s21_insert(str11_1, str11_2, n11);
  ck_assert_str_eq(str11_3, "abc");
  free(str11_3);
  char str12_1[] = "";
  char str12_2[] = "";
  int n12 = 3;
  char *str12_3 = s21_insert(str12_1, str12_2, n12);
  ck_assert_pstr_eq(str12_3, s21_NULL);
  free(str12_3);
  char str13_1[] = "";
  char str13_2[] = "";
  int n13 = 0;
  char *str13_3 = s21_insert(str13_1, str13_2, n13);
  ck_assert_str_eq(str13_3, "");
  free(str13_3);
  char str14_1[] = "123";
  char str14_2[] = "\0";
  int n14 = 0;
  char *str14_3 = s21_insert(str14_1, str14_2, n14);
  ck_assert_str_eq(str14_3, "123");
  free(str14_3);
}
END_TEST

// TRIM //////////////////////////////////////////////////////////////
START_TEST(test_trim) {
  char str1_1[] = "ABCDEFGHIJKLMNOPQRS";
  char str1_2[] = "ABC";
  char *str1_3 = s21_trim(str1_1, str1_2);
  ck_assert_str_eq(str1_3, "DEFGHIJKLMNOPQRS");
  free(str1_3);
  char str2_1[] = "ABCDEFGHIabcABCPQRS";
  char str2_2[] = "ABC";
  char *str2_3 = s21_trim(str2_1, str2_2);
  ck_assert_str_eq(str2_3, "DEFGHIabcABCPQRS");
  free(str2_3);
  char str3_1[] = "ABCDEFGHIabcABCPQRSABC";
  char str3_2[] = "ABC";
  char *str3_3 = s21_trim(str3_1, str3_2);
  ck_assert_str_eq(str3_3, "DEFGHIabcABCPQRS");
  free(str3_3);
  char str4_1[] = "ABCDEFGHIabcABCPQRSabc";
  char str4_2[] = "ABC";
  char *str4_3 = s21_trim(str4_1, str4_2);
  ck_assert_str_eq(str4_3, "DEFGHIabcABCPQRSabc");
  free(str4_3);
  char str5_1[] = "ABC123ABC456ABC";
  char str5_2[] = "ABC";
  char *str5_3 = s21_trim(str5_1, str5_2);
  ck_assert_str_eq(str5_3, "123ABC456");
  free(str5_3);
  char str6_1[] = "abc123abc456a1bc";
  char str6_2[] = "ab2c";
  char *str6_3 = s21_trim(str6_1, str6_2);
  ck_assert_str_eq(str6_3, "123abc456a1");
  free(str6_3);
  char str7_1[] = "11222333444aaaBaabaA53332244445677Babab7878998";
  char str7_2[] = "aBbA12c";
  char *str7_3 = s21_trim(str7_1, str7_2);
  ck_assert_str_eq(str7_3, "333444aaaBaabaA53332244445677Babab7878998");
  free(str7_3);
  char str8_1[] = "11222333444aaaBaabaA53332244445677Babab7878998";
  char str8_2[] = "4aB37bA897c";
  char *str8_3 = s21_trim(str8_1, str8_2);
  ck_assert_str_eq(str8_3, "11222333444aaaBaabaA533322444456");
  free(str8_3);
  char str9_1[] = "11222333444aaaBaabaA53332244445677Babab7878998";
  char str9_2[] = "4223aB437bA189117c";
  char *str9_3 = s21_trim(str9_1, str9_2);
  ck_assert_str_eq(str9_3, "533322444456");
  free(str9_3);
  char str10_1[] = "";
  char str10_2[] = "12345";
  char *str10_3 = s21_trim(str10_1, str10_2);
  ck_assert_str_eq(str10_3, "");
  free(str10_3);
  char str11_1[] = "12345";
  char str11_2[] = " ";
  char *str11_3 = s21_trim(str11_1, str11_2);
  ck_assert_str_eq(str11_3, "12345");
  free(str11_3);
  char str12_1[] = "12345";
  char str12_2[] = "";
  char *str12_3 = s21_trim(str12_1, str12_2);
  ck_assert_str_eq(str12_3, "12345");
  free(str12_3);
  char str13_1[] = " ";
  char str13_2[] = " ";
  char *str13_3 = s21_trim(str13_1, str13_2);
  ck_assert_str_eq(str13_3, "");
  free(str13_3);
  char str14_1[] = "a231546yutiljkhgtyre565786oiu;jlkhb12";
  char str14_2[] = "12333333333333333333333333333333333abmmmmmm";
  char *str14_3 = s21_trim(str14_1, str14_2);
  ck_assert_str_eq(str14_3, "546yutiljkhgtyre565786oiu;jlkh");
  free(str14_3);
  char str15_1[] = "   123   ";
  char str15_2[] = "               ";
  char *str15_3 = s21_trim(str15_1, str15_2);
  ck_assert_str_eq(str15_3, "123");
  free(str15_3);
}
END_TEST

Suite *example_create() {
  Suite *suite = suite_create("TEST BASE + BONUS");

  TCase *tcase_memchr = tcase_create("MEMCHR");
  tcase_add_test(tcase_memchr, test_memchr);
  suite_add_tcase(suite, tcase_memchr);

  TCase *tcase_memcmp = tcase_create("MEMCMP");
  tcase_add_test(tcase_memcmp, test_memcmp);
  suite_add_tcase(suite, tcase_memcmp);

  TCase *tcase_memcpy = tcase_create("MEMCPY");
  tcase_add_test(tcase_memcpy, test_memcpy);
  suite_add_tcase(suite, tcase_memcpy);

  TCase *tcase_memset = tcase_create("MEMSET");
  tcase_add_test(tcase_memset, test_memset);
  suite_add_tcase(suite, tcase_memset);

  TCase *tcase_strncat = tcase_create("STRNCAT");
  tcase_add_test(tcase_strncat, test_strncat);
  suite_add_tcase(suite, tcase_strncat);

  TCase *tcase_strchr = tcase_create("STRCHR");
  tcase_add_test(tcase_strchr, test_strchr);
  suite_add_tcase(suite, tcase_strchr);

  TCase *tcase_strncmp = tcase_create("STRNCMP");
  tcase_add_test(tcase_strncmp, test_strncmp);
  suite_add_tcase(suite, tcase_strncmp);

  TCase *tcase_strncpy = tcase_create("STRNCPY");
  tcase_add_test(tcase_strncpy, test_strncpy);
  suite_add_tcase(suite, tcase_strncpy);

  TCase *tcase_strcspn = tcase_create("STRCSPN");
  tcase_add_test(tcase_strcspn, test_strcspn);
  suite_add_tcase(suite, tcase_strcspn);

  TCase *tcase_strerror = tcase_create("STRERROR");
  tcase_add_test(tcase_strerror, test_strerror);
  suite_add_tcase(suite, tcase_strerror);

  TCase *tcase_strlen = tcase_create("STRLEN");
  tcase_add_test(tcase_strlen, test_strlen);
  suite_add_tcase(suite, tcase_strlen);

  TCase *tcase_strpbrk = tcase_create("STRPBRK");
  tcase_add_test(tcase_strpbrk, test_strpbrk);
  suite_add_tcase(suite, tcase_strpbrk);

  TCase *tcase_strrchr = tcase_create("STRRCHR");
  tcase_add_test(tcase_strchr, test_strrchr);
  suite_add_tcase(suite, tcase_strrchr);

  TCase *tcase_strstr = tcase_create("STRSTR");
  tcase_add_test(tcase_strstr, test_strstr);
  suite_add_tcase(suite, tcase_strstr);

  TCase *tcase_strtok = tcase_create("STRTOK");
  tcase_add_test(tcase_strtok, test_strtok);
  suite_add_tcase(suite, tcase_strtok);

  TCase *tcase_to_upper = tcase_create("TO_UPPER");
  tcase_add_test(tcase_to_upper, test_to_upper);
  suite_add_tcase(suite, tcase_to_upper);

  TCase *tcase_to_lower = tcase_create("TO_LOWER");
  tcase_add_test(tcase_to_lower, test_to_lower);
  suite_add_tcase(suite, tcase_to_lower);

  TCase *tcase_insert = tcase_create("INSERT");
  tcase_add_test(tcase_insert, test_insert);
  suite_add_tcase(suite, tcase_insert);

  TCase *tcase_trim = tcase_create("TRIM");
  tcase_add_test(tcase_trim, test_trim);
  suite_add_tcase(suite, tcase_trim);

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