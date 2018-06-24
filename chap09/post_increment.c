#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a = 5;
	printf("a = %d\n", a++);
	// From here, a has been post-incremented.
	printf("Actually, a = %d\n", a);
	return EXIT_SUCCESS;
}
