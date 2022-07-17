#include <stdio.h>
#include <time.h>

int level;
int arrayFish[6];
int* cursor;

void initData();
void printfFishes();
void decreaseWater(long elapsedTime);

int main() {
	long startTime = 0;
	long totalElapsedTime = 0;
	long prevElapsedTime = 0;

	int num = 0;
	initData();

	cursor = arrayFish;	// cursor[0] ..cursor[1] ..

	startTime = clock();	// 현재 시간을 millisecond (1000분의 1초0 단위로 반환
	while (1) {
		printfFishes();
		printf("몇 번 어항에 물을 주시겠어요?: ");
		scanf("%d", &num);

		if (num < 1 || num>6) {
			printf("\n입력값이 잘목되었습니다.\n");
			continue;
		}

		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("총 경과 시간 : %ld 초\n", totalElapsedTime);

		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근 경과 시간 : %ld 초\n", prevElapsedTime);

		decreaseWater(prevElapsedTime);

		if (cursor[num - 1] <= 0) {
			printf("%d 번 물고기는 이미 죽었습니다.. 물을 주지 않습니다.\n", num);
		}
		else if (cursor[num - 1] + 1 <= 100) {
			printf("%d 번 어항에 물을 줍니다.\n\n", num);
			cursor[num - 1] += 1;	// cursor[num - 1] = cursor[num - 1] + 1
		}

		if (totalElapsedTime / 20 > level - 1) {
			level++;	// level : 1 -> level : 2 -> level : 3
			printf(" *** 축 레벨업! 기존 %d 레벨에서 %d 레벨로 업그레이드 ***\n\n", level - 1, level);

			if (level == 5) {
				printf("\n\n축하합니다. 최고 레벨을 달성하였습니다. 게임을 종료합니다.\n\n");
				exit(0);
			}
		}

		if (checkFishAlive() == 0) {
			printf("모든 물고기가... ㅠㅠ\n");
			exit(0);
		}
		else {
			printf("물고기가 아직 살아있어요!\n");
		}
		prevElapsedTime = totalElapsedTime;


	}


	return 0;
}

void initData() {
	level = 1;
	for (int i = 0; i < 6; i++) {
		arrayFish[i] = 100;
	}
}

void printfFishes() {
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++) {
		printf("  %3d ", arrayFish[i]);
	}
	printf("\n\n");
}

void decreaseWater(long elapsedTime) {
	for (int i = 0; i < 6; i++) {
		arrayFish[i] -= (level * 3 * (int)elapsedTime);	// 3 난이도 조절을 위한 값
		if (arrayFish[i] < 0) {
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive() {
	for (int i = 0; i < 6; i++) {
		if (arrayFish[i] > 0)
			return 1;	// 참 True
	}
	return 0;
}