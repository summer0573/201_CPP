#include <stdio.h>

int main(void)
{
	int a, b, c = 0;
	a = ++c;	//C�� 1 �����ϰ� ���� a�� ����. c:1, a:1
	b = c++;	//b�� �����ϰ�, c�� 1���� b:1, c:2
	printf("%d %d %d \n", a, b, ++c);	//
}