#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declare randint
int randint(int min, int max);
int game(int multiplication_table);

int main(void) {
	srand(time(NULL)); // Don't forger to initialize the seed.

	// Pick a random multiplication table for our incoming game:
	int table = randint(2, 9);

	game(table);

	return EXIT_SUCCESS;
}

// Define randint
int randint(int min, int max) {
	return (rand() % (max-min+1)) + min;
}

int game(int table) {
	int score = 0;
	int multiple;
	int answer;

	for (int i = 0; i < 5; i++) {
		multiple = randint(1, 10);
		printf("%d x %d = ", table, multiple);
		scanf("%d", &answer);

		if (answer == table * multiple) {
			score++;
		}
	}

	return score;
}
