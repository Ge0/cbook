#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned int age;

	printf("How old are you? ");
	scanf("%u", &age);

	printf("You are %u years old!\n", age);

	return EXIT_SUCCESS;
}

