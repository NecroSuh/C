#include <stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b))

int main() {
	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);
	printf("%d��(��) �� ū �� �Դϴ�.\n", MAX(num1, num2));
	return 0;
}