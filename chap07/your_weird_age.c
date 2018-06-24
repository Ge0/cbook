#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int age; // Do not initialize age yet.
	printf("You are %d yeard old!\n", age);
	age = 28; // Now we know the right age.
	printf("My bad, you are %d yeard old!!\n", age);
	return EXIT_SUCCESS;
}
