#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a = 45;
	char b = ~a;
	unsigned char c = ~a;
	printf("b = %d and c = %u\n", b, c);
	return EXIT_SUCCESS;
}

