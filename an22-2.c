#include <stdio.h>

struct employee {
	char name[20];
	char pid[20];
	int salary;
};

int main() {
	struct employee arr[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("�̸� : ");
		scanf("%s", arr[i].name);
		printf("�ֹι�ȣ : ");
		scanf("%s", arr[i].pid);
		printf("�޿� : ");
		scanf("%d", &arr[i].salary);
	}

	for (i = 0; i < 3; i++) {
		printf("�̸� :%s\n", arr[i].name);
		printf("�ֹι�ȣ : %s\n", arr[i].pid);
		printf("�޿� : %d\n", arr[i].salary);
	}
	return 0;
}