#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declare randint
int randint(int min, int max);

int main(void) {
	srand(time(NULL)); // Don't forger to initialize the seed.

	// Pick a random multiplication table for our incoming game:
	printf("Multiplication table: %d\n", randint(2, 9));
	return EXIT_SUCCESS;
}

// Define randint
int randint(int min, int max) {
	return (rand() % (max-min+1)) + min;
}
