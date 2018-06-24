#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char letter;
	
	printf("Type a letter: ");
	scanf("%c", &letter);

	switch (letter) {
	case 'A':
		printf("A like Albert.\n");
		break;
	case 'B':
		printf("B like Bernard.\n");
		break;
	case 'C':
		printf("C like Claude.\n");
		break;
	default:
		printf("%c\n", letter);
	}

	return EXIT_SUCCESS;
}
