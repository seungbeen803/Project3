#include<stdio.h>
#define SIZE 10
main() {
	int s[SIZE] = { 12, 3, 19, 6, 18, 8, 12, 4, 1, 19 };
	int i, minimum; //i�� ÷��

	minimum = s[0];

	for (i = 1; i < SIZE; i++) {
		if (s[i] < minimum)
			minimum = s[i];
	}
	printf("�ּҰ��� %d�Դϴ�.\n", minimum);
	system("pause");
}