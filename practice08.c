#include <stdio.h>
#include <time.h>
int main() {
	srand(time(NULL));
	int num = rand() % 100 + 1;	// 1 ~ 100 ������ ����
	printf("����: %d\n", num);
	int answer = 0;
	int chance = 5;
	while (chance > 0) {
		printf("���� ��ȸ %d �� \n", chance--);
		printf("���ڸ� ���纸����. (1~100): ");
		scanf("%d", &answer);

		if (answer > num) {
			printf("DOWN ��\n\n");
		}
		else if (answer < num) {
			printf("UP ��\n\n");
		}
		else if (answer == num) {
			printf("�����Դϴ�!!!\n\n");
			break;
		}
		else {
			printf("�� �� ���� ������ �߻��߽��ϴ�.\n\n");
		}
		if (chance == 0) {
			printf("��� ��ȸ�� �� ����ϼ̳׿�. �ƽ��� �����߽��ϴ�.\n");
			break;
		}
	}
	return 0;
}