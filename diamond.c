// This program create a diamond with spaces inside

#include <stdio.h>

int main() {
	int n = 5;

	// This part do the firs half of diamond
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= (n - 1); j++) {
			printf(" ");
		}
		for (int k = 1; k <= (2 * i - 1); k++) {
			printf("*");
			for (int l = 1; l <= (2 * i - 3); l++) {
				printf(" ");
			}
			if (k >= 2) {
				break;
			}
		}
		printf("\n");
	}

	//This part do the second half of diamond
	for (int i = (n - 1); i >= 1; i--) {
		for (int j = i; j <= (n - 1); j++) {
			printf(" ");
		}
		for (int k = 1; k <= (2 * i - 1); k++) {
			printf("*");
			for (int l = 1; l <= (2 * i - 3); l++) {
				printf(" ");
			}
			if (k >= 2) {
				break;
			}
		}
		printf("\n");
	}
	getchar();
	return 0;
}
