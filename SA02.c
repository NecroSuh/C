#include <stdio.h>

struct person {
	char name[20];
	char phoneNum[20];
	int age;
};

int main() {
	struct person arr[3] = {
		{"�̽±�","010-0000-0001",21},
		{"������","010-0000-0002",28},
		{"��ȣ��","010-0000-0003",35}
	};

	int i;
	for (i = 0; i < 3; i++)
		printf("%s %s %d\n", arr[i].name, arr[i].phoneNum, arr[i].age);

	return 0;
}