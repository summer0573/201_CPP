#include <iostream>
#include <string.h>

using namespace std;

class student {
private:
	int nHakbun;
	char* sName;

public:
	//������ : ��ü�� �����Ǹ� �ڵ����� ȣ��Ǵ� �Լ�
	//��ȯ���� �������� �ʴ´�.
	student();
	student(int Hakbun, const char* Name);
	student(const student& rhs);
	~student();
	student& operator=(const student& rhs);

	void show();

};

student::student() {


}
//��������� �ʱ�ȭ �� �� ������ ����
//const�� ������ ������ ������ ��������� �� �� �ִ�

student::student(int Hakbun, const char* Name)
	:nHakbun(Hakbun) //�������(�Ű�����)
{
	cout << "Student �Ϲݻ����� ȣ��." << endl;
	int len = strlen(Name) + 1; //�ζ����� �ϳ� �߰�, ������ ���� �ľ�
	sName = new char[len];		//������ŭ �޸� �Ҵ�
	strcpy(sName, Name);
}

//���� �ۼ� ���ص� �����Ϸ��� �˾Ƽ� ������ִ�
//���������
student::student(const student& rhs)
	:nHakbun(rhs.nHakbun), sName(rhs.sName)
{
	cout << "Student �Ϲݻ����� ȣ��." << endl;
	int len = strlen(rhs.sName) + 1; //�ζ����� �ϳ� �߰�, ������ ���� �ľ�
	sName = new char[len];		//������ŭ �޸� �Ҵ�
	strcpy(sName, rhs.sName);
}

student :: ~student()
{
	delete[]sName;
	cout << "Student �Ҹ��� ȣ��." << endl;
}

void student::show() {
	cout << "�й���" << nHakbun << "�Դϴ�" << endl;
	cout << "�̸���" << sName << "�Դϴ�" << endl << endl;
}

//���Կ����� �����ε�
student& student::operator=(const student& rhs)
{
	nHakbun = rhs.nHakbun;

	cout << "Student ���Կ����� ȣ��." << endl;
	int len = strlen(rhs.sName) + 1; //�ζ����� �ϳ� �߰�, ������ ���� �ľ�
	sName = new char[len];		//������ŭ �޸� �Ҵ�
	strcpy(sName, rhs.sName);

	return *this;
}

class highSchoolStudent : public student {
public:
	highSchoolStudent(int Hakbun,const char* Name, bool isD)
		: student(Hakbun, Name), isDormitory(isD)
	{
		cout << "HighSchoolStudent ������ ȣ��" << endl;
	}


	~highSchoolStudent() {
		cout << "HighSchoolStudent �Ҹ��� ȣ��." << endl;
	}


private :
	bool isDormitory;
};

int main(void) {

	highSchoolStudent hss = highSchoolStudent(2111, "JHJ", true);
	hss.show();

	return 0;
}