#include <stdio.h>


int main(void) {
	int array[10];
	int sum = 0;
	double avg = 0;

	for (int i = 0; i <= 10; i++) {
		array[i] = (rand() % 100 + 1); //�� ����
		sum += array[i]; //��
		printf("%d ", array[i]);
	}
	avg = sum / 10; //�迭

	printf("\n�� : %d, ��� : %1.f", sum, avg);

	return 0;
}