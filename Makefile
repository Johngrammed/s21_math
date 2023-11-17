all: s21_math s21_math.a
	
s21_math:	main.o s21_math.a
	gcc -Wall -Wextra -Werror -std=c11 main.o s21_math.a -o main -lm

main.o: main.c
	gcc -O -c -Wall -Wextra -Werror -std=c11 main.c

s21_math.a: 
	gcc -Wall -Wextra -Werror s21_math.c -std=c11 -O -c
	ar rcs s21_math.a s21_math.o

clean:
	rm -f main *.a *.o