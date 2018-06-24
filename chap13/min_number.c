#include <limits.h> // For INT_MAX
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int keep_going = 1, min_number = INT_MAX, number;

	do {
		printf("Enter a number: ");
		scanf("%d", &number);

		if (number < min_number) {
			min_number = number;
		}

		printf("You have typed: %d\n", number);
		printf("Do you want to continue? (1=Yes/0=No) ");

		scanf("%d", &keep_going);
	} while (keep_going);

	printf("The minimum number is: %d\n", min_number);

	return EXIT_SUCCESS;
}
