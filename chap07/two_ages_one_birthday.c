#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int age_of_geoffrey = 28;
	int age_of_brandon = age_of_geoffrey;

	printf("Geoffrey's %d yeard old.\n", age_of_geoffrey);
	printf("Brandon's %d years old.\n", age_of_brandon);

	// Geoffrey's now 29 years old:
	age_of_geoffrey = 29;

	printf("Geoffrey's now %d years old!\n", age_of_geoffrey);
	printf("Brandon is still %d years old!\n", age_of_brandon);

	return EXIT_SUCCESS;
}
