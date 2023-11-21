all: clean s21_math s21_math.a
	
s21_math:	main.o s21_math.a
	gcc -Wall -Wextra -Werror main.o s21_math.a -o main -lm

main.o: main.c
	gcc -O -c -Wall -Wextra -Werror main.c

s21_math.a: 
	gcc -Wall -Wextra -Werror s21_math.c -O -c
	ar rcs s21_math.a s21_math.o

test: s21_math.a s21_math
	gcc -fprofile-arcs -ftest-coverage -Wall -Wextra -Werror s21_math_test.h s21_math_test.c s21_cos_test.c  s21_math.a -lcheck -lm -lrt -lpthread -o test 
	chmod +x test
	./test

gcov_report: clean test
	gcov -b -c  test-s21_math_test.gcno
	lcov --directory . --capture --output-file coverage.info
	genhtml coverage.info --output-directory coverage


clean:
	rm -rf main *.a *.o *gcno *.gcda s21_math_test *.gcov ./coverage *.info test