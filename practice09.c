#include <stdio.h>

void p(int num);

int main() {
	int num = 2;
	// printf("num은 %d 입니다.\n", num);	// 2
	p(num);

	num = num + 3;	// num += 3
	// printf("num은 %d 입니다.\n", num);	// 5
	p(num);

	num -= 1;
	// printf("num은 %d 입니다.\n", num);	// 4
	p(num);

	num *= 3;
	// printf("num은 %d 입니다.\n", num);	// 12
	p(num);

	num /= 6;
	// printf("num은 %d 입니다.\n", num);	// 2
	p(num);

	return 0;
}

void p(int num) {
	printf("num은 %d 입니다.\n", num);
}

// 전달값: 66
// 함수: ㅁ + 4
// 반환형: ?
/* 반환형 함수이름(전달값) {

}*/