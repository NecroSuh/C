#include <stdio.h>

typedef struct point {
	int xpos;
	int ypos;
}Point;

void OrgSymTrans(Point* ptr){	// ������Ī
	ptr->xpos = (ptr->xpos) * -1;
	ptr->ypos = (ptr->ypos) * -1;
}

void ShowPosition(Point pos) {
	printf("[%d, %d]\n", pos.xpos, pos.ypos);
}

int main() {
	Point pos = { 7,-5 };
	OrgSymTrans(&pos);
	ShowPosition(pos);	// pos�� ���� ���� ��Ī�̵���Ų��.
	OrgSymTrans(&pos);
	ShowPosition(pos);	// pos�� ���� ���� ��Ī�̵���Ų��.

	return 0;
}