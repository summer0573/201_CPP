#include <iostream> //cout, endl
#include <stdio.h> //printf ���
#include <string.h> //strcmp ���
#include <string> //std::string Ŭ���� ���
using namespace std;

int main(void) {
	char cl[] = "aaa", cj[] = "aaa", ck[] = "abc";
	printf("%d\n", strcmp(cl, cj) == 0); //���� ����
	printf("%d\n", strcmp(cl, cj) < 0); //������ aaa -> abc

	string cppl = "aaa", cppj = "aaa", appk = "abc";
	cout << (cppl == cppj) << endl; //���� ����
	cout << (cppl < cppj) << endl; //������ aaa -> abc

	return 0;
}