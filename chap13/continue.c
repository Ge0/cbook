#include <stdio.h>
#include <stdlib.h>


int main(void) {
	for(int i = 0; i < 10; i++) {
		if (i == 5) {
			continue;
		}

		printf("%d\n", i);
	}
	return EXIT_SUCCESS;
}
