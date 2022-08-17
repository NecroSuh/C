#include <stdio.h>
#include <string.h>

int main() {
	char str1[20];
	char str2[20];
	char str3[40];

	printf("첫 번째 문자열 입력: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;	// \n 문자의 삭제

	printf("두 번째 문자열 입력: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;	// \n 문자의 삭제

	strcpy(str3, str1);
	strcat(str3, str2);
	printf("조합의 결과: %s\n", str3);

	return 0;
}