#include<stdio.h>
#define STUDENTS 5
int main() {
	int score[STUDENTS];
	int i;

	score[0] = 90;
	score[1] = 80;
	score[2] = 70;
	score[3] = 100;
	score[4] = 95;
	for (i = 0; i < STUDENTS; i++) {
		printf("%d��° �л��� ������ %d�Դϴ�.\n", i, score[i]);
	}
	system("pause");
}