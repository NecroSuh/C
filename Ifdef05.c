#include <stdio.h>
#define STRING_JOB(A,B)	#A "�� ������  "#B "�Դϴ�."

int main() {
	printf("%s\n", STRING_JOB(�̵���, ������));
	printf("%s\n", STRING_JOB(�ѻ��, ��ɲ�));
	return 0;
}