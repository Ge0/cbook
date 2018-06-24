#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a = 5;
	printf("a = %d\n", a);

	a += 3; // a = a + 3
	printf("a = %d\n", a);

	a -= 2; // a = a - 2
	printf("a = %d\n", a);

	a *= 4; // a = a * 4
	printf("a = %d\n", a);

	a /= 12;
	printf("a = %d\n", a);

	return EXIT_SUCCESS;
}

