#include <iostream> //cout, endl
using namespace std;

class Student {
private:
	int nHakbun;
	string sName;

	//������: ��ü�� �����Ǹ� �ڵ����� ȣ��Ǵ� �Լ�
	//��ȯ���� �������� �ʴ´�.
public:
	Student();
	void show();
};

int main(void) {
	Student stu;
	stu.show();
	return 0;
}

Student::Student() {
	nHakbun = 1234;
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

void Student::show() {
	cout << "�й��� " << nHakbun << "�Դϴ�" << endl;
	cout << "�̸��� " << sName << "�Դϴ�" << endl;
}