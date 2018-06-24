#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int age = 28; // Initializing the age
	char first_letter = 'G'; // My first name starts with a 'G'.
	printf(
		"You are %d years old and your name starts with a %c!\n",
		age,
		first_letter
	);
	return EXIT_SUCCESS;
}

