#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int array[10];
	int sum = 0;
	double avg = 0;
	srand(time(NULL));

	for (int i = 0; i < sizeof(array)/sizeof(int); i++) {
		array[i] = (rand() % 100) + 1; //�� ����
		printf("%d ", array[i]);
		sum += array[i]; //��
	}

	avg = (double) sum / 10; //���

	printf("\n");
	printf("�� : % d\n", sum);
	printf("��� : %lf", avg);

	return 0;
}