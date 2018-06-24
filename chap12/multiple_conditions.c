#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned int age;
	printf("How old are you? ");
	scanf("%d", &age);

	printf("You are %d years old!\n", age);
	if (age < 5) {
		printf("You are a kid!\n");
	} else if (age < 18) {
		printf("You are minor.\n");
	} else {
		printf("You are major.\n");
	}

	return EXIT_SUCCESS;
}
