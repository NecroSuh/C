#include <stdio.h>

struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;
};

int main() {
	char* name = "���";
	int year = 2017;
	int price = 50;
	char* company = "�ؽ�";

	char* name2 = "��Ű��";
	int year2 = 2017;
	int price2 = 100;
	char* company2 = "īī��";

	// ����ü ���
	struct GameInfo gameInfo1;
	gameInfo1.name = "���";
	gameInfo1.year = 2017;
	gameInfo1.price = 50;
	gameInfo1.company = "�ؽ�";

	printf("-- ���� ��� ���� --\n");
	printf(" ���Ӹ�   : %s\n", gameInfo1.name);
	printf(" �߸ų⵵ : %d\n", gameInfo1.year);
	printf(" ����     : %d\n", gameInfo1.price);
	printf(" ���ۻ�   : %s\n", gameInfo1.company);

	struct GameInfo gameInfo2 = { "��Ű��",2017,100,"īī��" };
	printf("-- ���� ��� ���� --\n");
	printf(" ���Ӹ�   : %s\n", gameInfo2.name);
	printf(" �߸ų⵵ : %d\n", gameInfo2.year);
	printf(" ����     : %d\n", gameInfo2.price);
	printf(" ���ۻ�   : %s\n", gameInfo2.company);

	struct GameInfo gameArray[2] = {
		{"���", 2017, 50, "�ؽ�"},
		{"��Ű��", 2017, 100, "īī��"}
	};

	struct GameInfo* gamePtr;
	gamePtr = &gameInfo1;
	printf("\n\n-- ���� ��� ���� --\n");
	printf(" ���Ӹ�   : %s\n", gamePtr->name);
	printf(" �߸ų⵵ : %d\n", gamePtr->year);
	printf(" ����     : %d\n", gamePtr->price);
	printf(" ���ۻ�   : %s\n", gamePtr->company);

	return 0;
}