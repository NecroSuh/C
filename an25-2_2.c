#include <stdio.h>
#include <stdlib.h>

int main() {
	int arrlen = 5;	// �ʱ� �迭 ����
	int idx = 0;	// ���� �ε���
	int i;
	int* arr = (int*)malloc(sizeof(int) * arrlen);

	while (1) {
		printf("���� �Է�: ");
		scanf("%d", &arr[idx]);
		if (arr[idx] == -1)	// �Է��� ���Ḧ �˻�
			break;

		if (arrlen == idx + 1) {	// �迭�� Ȯ�� �ʿ伺 �˻�
			arrlen += 3;
			arr = (int*)realloc(arr, sizeof(int) * arrlen);
		}
		idx++;
	}
	for (i = 0; i < idx; i++) {
		printf("%d ", arr[i]);
	}
	free(arr);
	return 0;
}