#include <stdio.h>
#include <stdlib.h>

// Declare the function prototype before using it:
int is_authorized(unsigned int age, int is_vaccinated);

int main(void) {
	unsigned int my_age;
	int am_i_vaccinated;

	printf("How old are you? ");
	scanf("%d", &my_age);

	printf("Are you vaccinated? (1=Yes/0=No) ");
	scanf("%d", &am_i_vaccinated);

	if (is_authorized(my_age, am_i_vaccinated)) {
		printf("Access granted.\n");
	} else {
		printf("Access denied.\n");
	}

	return EXIT_SUCCESS;
}

int is_authorized(unsigned int age, int is_vaccinated) {
	return age >= 18 && is_vaccinated;
}

