#include <iostream>
#include <string>

using namespace std;

class Person {
public:
	string name;
	int hakbun;
	Person(string na, int ha) {
		name = na;
		hakbun = ha;
	}
	void printShow() {
		cout << "�̸� : " << name << endl;
		cout << "�й� : " << hakbun << endl;
	}
};

class Student : public Person {
public:
	string university;
	Student(string nn, int hh, string uu) 
		: Person(nn, hh), university(uu)
	{

	}
	void printShow() {
		cout << "�̸� : " << name << endl;
		cout << "�й� : " << hakbun << endl;
		cout << "���� : " << university << endl;
	}
};

int main(void) {
	Student s = Student("JHJ", 2111, "�߾Ӵ�");
	s.printShow();

	return 0;
}