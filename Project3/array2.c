#include<stdio.h>

int main() {
	int score[3] = { 80, 100, 95 };
	for (int i = 0; i < 3; i++) {
		printf("score�� ũ��� %d\n", sizeof(score));//4����Ʈ*3=12
		printf("score[%d]�� ũ��� %d\n\n", i, sizeof(score[i]));//4
	}
	printf("score�� ������ %d\n", sizeof(score)/sizeof(score[0])); //12/4=3
	system("pause");
}