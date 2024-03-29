#include <stdio.h>

typedef struct point {
	int xpos;
	int ypos;
}Point;

void OrgSymTrans(Point* ptr){	// 원점대칭
	ptr->xpos = (ptr->xpos) * -1;
	ptr->ypos = (ptr->ypos) * -1;
}

void ShowPosition(Point pos) {
	printf("[%d, %d]\n", pos.xpos, pos.ypos);
}

int main() {
	Point pos = { 7,-5 };
	OrgSymTrans(&pos);
	ShowPosition(pos);	// pos의 값을 원점 대칭이동시킨다.
	OrgSymTrans(&pos);
	ShowPosition(pos);	// pos의 값을 원점 대칭이동시킨다.

	return 0;
}