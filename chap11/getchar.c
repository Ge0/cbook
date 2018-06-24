#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int my_char;
	printf("Please type a char! ");
	my_char = getchar();
	printf("You have typed the char: %c!\n", my_char);
	return EXIT_SUCCESS;
}

