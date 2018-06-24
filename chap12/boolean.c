#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned int age;
	printf("How old are you? ");
	scanf("%u", &age);

	printf("age < 18 = %u\n", age < 18);

	return EXIT_SUCCESS;
}

