#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned char a = 182;
	unsigned char b = 86;
	unsigned char c = a ^ b;
	printf("c = %u\n", c);

	c ^= b; // Get back to a
	printf("c = %u\n", c);

	return EXIT_SUCCESS;
}

