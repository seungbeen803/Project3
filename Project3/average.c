#include<stdio.h>
#define STUDENTS 5 //STUDENTS 5��� ����  
int main() {
	int score[STUDENTS];
	int i, sum = 0;
	double avg;

	for (i = 0; i < STUDENTS; i++) {
		printf("������ �Է��Ͻÿ� : ");
		scanf("%d", &score[i]);
	}
	for (i = 0; i < STUDENTS; i++) {
		sum += score[i];
	}
	avg = (double)sum / STUDENTS;
	printf("����� %4.2f\n", avg);
	system("pause");
}