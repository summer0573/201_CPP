#include <iostream> //cout, endl
using namespace std;

/*
class Student {
private:
	int nHakbun;
	string sName;

	//������: ��ü�� �����Ǹ� �ڵ����� ȣ��Ǵ� �Լ�
	//��ȯ���� �������� �ʴ´�.
public:
	Student();
	Student(int Hakbun, string eName);
	void show();
};

Student::Student() {
	this->nHakbun = 1234;
	this->sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}
	
	Student::Student(int hakbum, string mane){
		//:noboolalpha, sBame(mane);
}

Student::Student(int Hakbun, string eName) {
	this -> nHakbun = Hakbun;
	this -> sName = eName;
}

void Student::show() {
	cout << "�й��� " << nHakbun << "�Դϴ�" << endl;
	cout << "�̸��� " << sName << "�Դϴ�" << endl << endl;
}
*/


int main(void) {
	/*
	Student stu1 = Student();
	stu1.show();

	Student stu2 = Student(2111,"JHJ");
	stu2.show();
	*/

	int* ptr1 = new int;
	*ptr1 = 20;

	cout << *ptr1 << endl;

	delete ptr1;
	return 0;
}