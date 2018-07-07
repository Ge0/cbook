#include <stdio.h>
#include <stdlib.h>

// Here: declare the function prototype
void print_info(unsigned int age, int is_vaccinated);

int main(void) {
	unsigned int age1 = 28;
	int is_vaccinated1 = 1;

	unsigned int age2 = 13;
	int is_vaccinated2 = 0;

	print_info(age1, is_vaccinated1);
	print_info(age2, is_vaccinated2);

	return EXIT_SUCCESS;
}

// Then: write the function body
void print_info(unsigned int age, int is_vaccinated) {
	printf("You are %u years old.\n", age);

	if (is_vaccinated) {
		printf("You are vaccinated.\n");
	} else {
		printf("You are not vaccinated.\n");
	}
	putchar('\n');
}
