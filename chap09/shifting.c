#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned int value = 86; // Unsigned reference number
	unsigned char value8; // 8-bit value.
	unsigned short value16; // 16-bit value

	value8 = value << 3;
	printf("value8 left shift = %u\n", value8);

	value8 = value >> 3;
	printf("value8 right shift = %u\n", value8);

	value16 = value << 3;
	printf("value16 left shift = %u\n", value16);

	value16 = value >> 3;
	printf("value16 right shift = %u\n", value16);

	return EXIT_SUCCESS;
}
