#include <stdio.h>
#include <string.h>

int main() {
	char str[20];
	printf("���� �Է�: ");
	scanf("%s", str);
	printf("%d\n", atoi(str));

	printf("�Ǽ� �Է�: ");
	scanf("%s", str);
	printf("%g\n", atof(str));

	return 0;
}