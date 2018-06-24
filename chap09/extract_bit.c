#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned char value = 214;
	int bit = (value >> 4) & 1;

	printf("%d's 5th bit equals to %d!\n", value, bit);

	return EXIT_SUCCESS;
}

