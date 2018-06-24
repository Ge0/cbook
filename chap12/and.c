#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned int age;
	unsigned int is_vaccinated;

	printf("How old are you? ");
	scanf("%u", &age);
	printf("Are you vaccinated? (1 = yes/0 = no) ");
	scanf("%u", &is_vaccinated);

	if (age >= 18 && is_vaccinated) {
		printf("You are major and vaccinated!\n");
	} else {
		printf("Sorry! You must be major AND vaccinated!\n");
	}

	return EXIT_SUCCESS;
}

