#include <stdio.h>

void p(int num);

int main() {
	int num = 2;
	// printf("num�� %d �Դϴ�.\n", num);	// 2
	p(num);

	num = num + 3;	// num += 3
	// printf("num�� %d �Դϴ�.\n", num);	// 5
	p(num);

	num -= 1;
	// printf("num�� %d �Դϴ�.\n", num);	// 4
	p(num);

	num *= 3;
	// printf("num�� %d �Դϴ�.\n", num);	// 12
	p(num);

	num /= 6;
	// printf("num�� %d �Դϴ�.\n", num);	// 2
	p(num);

	return 0;
}

void p(int num) {
	printf("num�� %d �Դϴ�.\n", num);
}

// ���ް�: 66
// �Լ�: �� + 4
// ��ȯ��: ?
/* ��ȯ�� �Լ��̸�(���ް�) {

}*/