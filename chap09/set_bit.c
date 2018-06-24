#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned char value = 45;
	value |= 0x10;

	printf("value = %d.\n", value);

	return EXIT_SUCCESS;
}

