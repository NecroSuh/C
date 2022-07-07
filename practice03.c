#include <stdio.h>
int main() {
	for (int i = 2; i <= 9; i++){
		printf("%d´Ü °è»ê\n", i);
		for (int j = 1; j <= 9; j++) {
			printf(" %d * %d = %d\n", i, j, i * j);
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < 5; i++) {
		for(int j = i; j < 5 - 1; j++){
			printf("S");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}