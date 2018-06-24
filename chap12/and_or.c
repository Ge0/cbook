#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a = 5;
	int b = 5;
	int c = 5;
	int d = 5;

	// Demonstrate how && and || behave:
	0 && ++a;
	1 && ++b;
	0 || ++c;
	1 || ++d;

	printf("a b c d = %d %d %d %d \n", a, b, c, d);

	return EXIT_SUCCESS;
}
