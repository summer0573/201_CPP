#include <iostream>
#include <string.h>
using namespace std;

class Person { //����ϴ� Ŭ����
private: //��� ����
	string sName;
	int nAge;
public: //��� �Լ�
	Person();
	Person(string name, int age);
	void hi();
};

class Student : public Person{ //��� ���� Ŭ����
private :
	int nHakbun;
public:
	Student();
	Student(string name, int age, int kanbun);
	void study();
};

Student::Student() : Person() {
	nHakbun = 0;	
}

Student::Student(string name, int age, int hakbun)
	: Person(name, age), nHakbun(hakbun) {
	
}

void Student::study() {
	hi();
	cout << "�й� : " << nHakbun << endl;
}

Person::Person() {
	sName = "�͸�";
	nAge = 0;
}

Person::Person(string name, int age)
	:sName(name), nAge(age){
	}

void Person::hi() {
	cout <<"�̸� : " << sName << endl;
	cout <<"���� : " << nAge << endl;
}

int main(void) {

	Person per = Person("�̿뺹", 22);
	per.hi();

	cout << "--------------" << endl;

	Person* per2 = new Person("������", 18);
	per2 -> hi(); //������ new... �Ͻ�, ȭ��ǥ(->)�� hi ȣ��

	cout << "--------------" << endl;

	Person* per3 = new Person[5];
	per3[0].hi(); //�迭�Ͻ�, ��(.) ���� hi ȣ��

	cout << "--------------" << endl;

	Student stu2 = Student("������", 18, 2111);
	stu2.study();

	delete per2;
	delete[] per3;
	return 0;
}