#include <iostream>
using namespace std;

//#define jegob(A) ((A)*(A))

//pre�����Ϸ��� ó��
//�ڷ����� ������� ����
//����� ����
//#define jegob(A) ((A) * (A))

//��ũ�� �Լ��� ������
//������ �Լ��� ȣ����� ������
//�����Ϸ��� ó��
inline int jegob(int a) {
	return a * a;
}

int main(void) {
	cout << jegob(3) << endl;
}