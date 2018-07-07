/**
 * game_final.c: Check how well you know your multiplications.
 * Author: Geoffrey ROYER
 * Date: 2018-07-07
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declare randint
int randint(int min, int max);
int game(int multiplication_table);

int main(void) {
	srand(time(NULL)); // Don't forger to initialize the seed.

	// Declare our variables.
	int table;	
	int score;
	int play_again;

	do {

		// Pick a random multiplication table for our incoming game:
		table = randint(2, 9);

		// Launch the game
		score = game(table);

		printf("Your score is %d/5!\n", score);
		printf("Do you want to play again? (1=Yes/0=No) ");
		scanf("%d", &play_again);
	} while (play_again);

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
