#include <stdio.h>
#include <stdlib.h>

void get_and_print_age(void);

int main(void) {
	get_and_print_age();
	printf("You are %u years old!\n", age); // Error: age does not exist.
	return EXIT_SUCCESS;
}

void get_and_print_age(void) {
	unsigned int age;
	printf("How old are you? ");
	scanf("%u", &age);
	printf("You are %u years old.\n");
}
