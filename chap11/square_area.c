#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned int side;
	printf("What is the side of your square? ");
	scanf("%u", &side);

	printf("Its area is: %u!\n", side * side);
	return EXIT_SUCCESS;
}

