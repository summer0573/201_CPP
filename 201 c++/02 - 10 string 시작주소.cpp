#include <iostream> //cout, endl
#include <stdio.h> //printf ���
#include <string> //std::string Ŭ���� ���
using namespace std;

int main(void) {
	char cl[10] = "aaa";
	printf("%d\n", cl); //aaa

	string cppl = "aaa";
	printf("%s\n", cppl.c_str()); //aaa
	cout << cppl.c_str() << endl; //aaa

	return 0;
}