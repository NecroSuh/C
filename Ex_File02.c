#include <stdio.h>

int main() {
	FILE* fp = fopen("mtstory.txt", "at");
	fputs("#��ܸԴ� ����: «��, ������\n", fp);
	fputs("#���: �౸\n", fp);
	fclose(fp);
	return 0;
}