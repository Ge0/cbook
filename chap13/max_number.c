#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int keep_going = 1;
	unsigned int max_number = 0; // The maximum number among the user's
	unsigned int number; // The number that the user inputs

	while (keep_going) {
		printf("Enter a number: ");
		scanf("%u", &number);

		printf("You have typed: %u\n", number);

		// Compare the actual number with the maximum number
		if (number > max_number) {
			// If the actual number is above the maximum number,
			// update the maximum number
			max_number = number;
		}

		printf("Do you want to input another number ? (1=Yes/0=No) ");
		scanf("%d", &keep_going);
	}

	printf("The maximum number is: %u\n", max_number);

	return EXIT_SUCCESS;
}
