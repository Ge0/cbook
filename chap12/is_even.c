#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number;
	printf("Please enter a number: ");
	scanf("%d", &number);
	if (number % 2 == 0) {
		printf("%d is even.\n", number);
	}
	return EXIT_SUCCESS;
}

