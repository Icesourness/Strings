CFLAGS = -std=c11 -Wall -Wextra 
GFLAGS = -fprofile-arcs -ftest-coverage
FILES = ./functions/base+bonus_functions/*.c ./functions/io_aux_functions/*.c ./functions/sprintf/*.c ./functions/sscanf/*.c

OS=$(shell uname)

ifeq (${OS}, Darwin)
	LIBS = -L. -lcheck
else
	LIBS = -L. -lcheck -lm -lsubunit
endif

all: gcov_report

test: s21_string.a ./all_tests/TESTS.c ./all_tests/TESTS_SPRINTF.c ./all_tests/TESTS_SSCANF.c
	gcc $(CFLAGS) ./all_tests/TESTS.c -o tests $(LIBS) s21_string.a
	gcc $(CFLAGS) ./all_tests/TESTS_SPRINTF.c -o tests_sprintf $(LIBS) s21_string.a
	gcc $(CFLAGS) ./all_tests/TESTS_SSCANF.c -o tests_sscanf $(LIBS) s21_string.a
	./tests
	./tests_sprintf
	./tests_sscanf

gcov_report: $(FILES) all_tests/TESTS.c
	gcc $(CFLAGS) $(GFLAGS) -c $(FILES)
	ar crs s21_string.a *.o
	gcc $(CFLAGS) -c all_tests/*.c
	gcc $(GFLAGS) TESTS.o -o tests $(LIBS) s21_string.a
	gcc $(GFLAGS) TESTS_SPRINTF.o -o tests_sprintf $(LIBS) s21_string.a
	gcc $(GFLAGS) TESTS_SSCANF.o -o tests_sscanf $(LIBS) s21_string.a
	./tests
	./tests_sprintf
	./tests_sscanf
	lcov -t "a.out" -o REPORT.info -c -d .
	genhtml -o html REPORT.info
	open html/index.html

s21_string.a: $(FILES)
	gcc $(CFLAGS) -c $(FILES)
	ar crs s21_string.a *.o
	rm -f tests ./*.o

clean:
	rm -f tests tests_sprintf tests_sscanf ./*.o ./*.a report *.gcda *.gcno *info 
	rm -rf html

check:
	clang-format -style=Google -n ./all_tests/*.c ./all_tests/*.h ./functions/base+bonus_functions/*.c ./functions/io_aux_functions/*.c ./functions/sscanf/*.c

clang:
	clang-format -style=Google -i ./all_tests/*.c ./all_tests/*.h ./functions/*.h ./functions/base+bonus_functions/*.c ./functions/io_aux_functions/*.c ./functions/sscanf/*.c