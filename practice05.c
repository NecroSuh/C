#include <stdio.h>
int main() {
	for (int i = 0; i <= 30; i++) {
		if (i >= 6) {
			printf("������ �л��� ���� ������\n\n");
			break;
		}
		printf("%d �� �л��� ���� ��ǥ �غ� �ϼ���.\n", i);
	}

	for (int i = 1; i <= 30; i++) {
		if (i >= 6 && i <= 10) {
			if (i == 7) {
				printf("%d �� �л��� �Ἦ�Դϴ�.\n", i);
				continue;
			}
			printf("%d �� �л��� ���� ��ǥ �غ� �ϼ���.\n", i);
		}
	}
	return 0;
}