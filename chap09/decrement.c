#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a = 5;

	// Here, we are post-decrementing, so "a = 5" will be printed.
	printf("a = %d\n", a--);

	// After the instruction above, a is decremented, so it equals to 4.
	printf("My bad! a = %d\n", a);

	// because of the pre-decrement operator, "a = 3" will be printed:
	printf("And now, a = %d\n", --a);

	return EXIT_SUCCESS;
}

