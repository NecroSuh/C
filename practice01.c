#include <stdio.h>
int main() {
	int input;
	printf("값을 입력하세요.: ");
	scanf("%d", &input);
	printf("입력값: %d\n\n", input);

	int n1, n2, n3;
	printf("3개의 정수를 입력하세요.: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("첫번째 값: %d\n", n1);
	printf("두번째 값: %d\n", n2);
	printf("세번째 값: %d\n\n", n3);

	char c = 'A';
	printf("%c\n", c);


	return 0;
}