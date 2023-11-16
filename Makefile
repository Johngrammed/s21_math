all: s21_math
	
s21_math:
	gcc -Wall -Wextra -Werror s21_math.c main.c  -o main -lm

clean:
	rm main