#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a = 15, b = 2;
	float c = a / b; // Won't get the right result: dividing two integers.

	float d = 15, e = 2;
	float f = d / e; // Much better!

	printf("c = %f and f = %f\n", c, f);
	return EXIT_SUCCESS;
}
