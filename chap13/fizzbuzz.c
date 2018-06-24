/*
 * fizzbuzz.c: one of the simplest job interview exercices.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	for (int number = 1; number <= 100; number++) {
		if (number % 3 == 0 && number % 5 == 0) {
			printf("FizzBuzz\n");
		} else if (number % 3 == 0) {
			printf("Fizz\n");
		} else if (number % 5 == 0) {
			printf("Buzz\n");
		} else {
			printf("%d\n", number);
		}
	}
	return EXIT_SUCCESS;
}
