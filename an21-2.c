#include <stdio.h>
#include <string.h>

int ConvToInt(char c) {
	static int diff = 1 - '1';	// ��� ���� n�� ���� 'n'�� ���� �����ϴ�.
	return c + diff;
}

int main() {
	char str[50];
	int len, i;
	int sum = 0;

	printf("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);

	for (i = 0; i < len; i++) {
		if ('1' <= str[i] && str[i] <= '9') {
			sum += ConvToInt(str[i]);
		}
	}
	printf("������ �� ��: %d\n", sum);

	return 0;
}