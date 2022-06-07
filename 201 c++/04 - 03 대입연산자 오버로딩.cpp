#include <iostream>	// cout, endl ���
#include <string.h>	// strcpy() ���

using namespace std;

class Student
{
private:
	int nHakbun;
	char* sName;

public:
	// ������ : ��ü�� �����Ǹ� �ڵ����� ȣ��Ǵ� �Լ�
	// ��ȯ���� �������� �ʴ´�
	Student();
	Student(int Hakbun, const char* Name);
	Student(const Student& rhs);
	~Student();
	Student& operator=(const Student& rhs);

	void show();

};

Student::Student()
{
}

// ��������� �ʱ�ȭ �� �� ������ ����,
// const�� ������ ������ ������ ��������� �� �� �ִ�.
Student::Student(int Hakbun, const char* Name)
	: nHakbun(Hakbun)	// �������(�Ű�����)
{
	cout << "�Ϲݻ����� ȣ��." << endl;
	int len = strlen(Name) + 1;		// ������ ���� �ľ�
	sName = new char[len];			// ������ŭ �޸� �Ҵ�
	strcpy(sName, Name);
}

// ���� �ۼ� ���ص� �����Ϸ��� �˾Ƽ� ������ִ�
// ���������
Student::Student(const Student& rhs)
	:nHakbun(rhs.nHakbun), sName(rhs.sName)
{
}

Student::~Student()
{
	delete[]sName;
	cout << "�Ҹ��� ȣ��" << endl;
}

void Student::show()
{
	cout << "�й��� " << nHakbun << "�Դϴ�" << endl;
	cout << "�̸��� " << sName << "�Դϴ�" << endl << endl;
}

//���Կ����� �����ε�
Student& Student::operator=(const Student& rhs){
	nHakbun = rhs.nHakbun;

	cout << "�Ϲݻ����� ȣ��." << endl;
	int len = strlen(rhs.sName) + 1;		// ������ ���� �ľ�
	sName = new char[len];			// ������ŭ �޸� �Ҵ�
	strcpy(sName, rhs.sName);

	return *this;
}

int main(void)
{
	// "�Ϲݻ����� ȣ��" ���
	Student stu1 = Student(1111, "JHJ");
	Student stu3 = Student(2222, "JYP");
	stu1.show();

	// (1111, "JWP")�� �����. �Ϲݻ����� ȣ��X
	Student stu2 = stu1;
	stu2.show();

	stu1 = stu3;
	stu1.show();

	return 0;
}
