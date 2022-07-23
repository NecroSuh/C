#include <stdio.h>

struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;
};

int main() {
	char* name = "블아";
	int year = 2017;
	int price = 50;
	char* company = "넥슨";

	char* name2 = "쿠키런";
	int year2 = 2017;
	int price2 = 100;
	char* company2 = "카카오";

	// 구조체 사용
	struct GameInfo gameInfo1;
	gameInfo1.name = "블아";
	gameInfo1.year = 2017;
	gameInfo1.price = 50;
	gameInfo1.company = "넥슨";

	printf("-- 게임 출시 정보 --\n");
	printf(" 게임명   : %s\n", gameInfo1.name);
	printf(" 발매년도 : %d\n", gameInfo1.year);
	printf(" 가격     : %d\n", gameInfo1.price);
	printf(" 제작사   : %s\n", gameInfo1.company);

	struct GameInfo gameInfo2 = { "쿠키런",2017,100,"카카오" };
	printf("-- 게임 출시 정보 --\n");
	printf(" 게임명   : %s\n", gameInfo2.name);
	printf(" 발매년도 : %d\n", gameInfo2.year);
	printf(" 가격     : %d\n", gameInfo2.price);
	printf(" 제작사   : %s\n", gameInfo2.company);

	struct GameInfo gameArray[2] = {
		{"블아", 2017, 50, "넥슨"},
		{"쿠키런", 2017, 100, "카카오"}
	};

	struct GameInfo* gamePtr;
	gamePtr = &gameInfo1;
	printf("\n\n-- 게임 출시 정보 --\n");
	printf(" 게임명   : %s\n", gamePtr->name);
	printf(" 발매년도 : %d\n", gamePtr->year);
	printf(" 가격     : %d\n", gamePtr->price);
	printf(" 제작사   : %s\n", gamePtr->company);

	return 0;
}