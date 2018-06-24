#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned int age = 21;
	int a = 5;

	printf("a = %d\n", a);

	if (age >= 18 || a++) {
		printf("You are major.\n");
	} else {
		printf("You are minor.\n");
	}

	printf("a = %d\n", a);

	return EXIT_SUCCESS;
}

