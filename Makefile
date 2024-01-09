CFLAGS=-Wall -Wextra -Werror -std=gnu11
TESTS=s21_math_test.c
POSIX=-D_POSIX_C_SOURCE=200809L
COVER=--coverage

all: clean s21_math.a
	gcc $(CFLAGS) $(POSIX) main.c s21_math.a -lm -o main

s21_math.a: 
	gcc $(CFLAGS) s21_math.c -c
	ar rc s21_math.a s21_math.o
	ranlib s21_math.a

test: clean s21_math.a
	gcc $(CFLAGS) $(TESTS) -c
	ar rc s21_math_test.a s21_math_test.o
	ranlib s21_math_test.a
	gcc $(COVER) $(CFLAGS) -o test s21_math.a s21_math_test.a s21_math.c -lcheck -lm
	chmod +x test
	./test

gcov_report: clean test
	gcov *.gcda
	gcovr
	gcovr --html-details -o report.html


clean:
	rm -rf main *.a *.o *gcno *.gcda s21_math_test *.gcov ./coverage *.info test *.gch *.html *.css

	