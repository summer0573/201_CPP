#include <iostream> //cout, endl
#include <stdio.h> //printf ���
#include <string.h> //strcmp ���
#include <string> //std::string Ŭ���� ���
using namespace std;

int main(void) {
	char cl[10] = "aaa";
	printf("%d\n", strlen(cl)); //3

	string cppl = "aaa";
	cout << cppl.size() << endl; //3
	cout << cppl.length() << endl; //.size()�� ���� ����

	return 0;
}