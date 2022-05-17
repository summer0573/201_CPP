#include <iostream> //cout, endl
#include <string.h> //strcpy() ���
using namespace std;


class Student {
private:
	int nHakbun;
	const char* sName;

	//������: ��ü�� �����Ǹ� �ڵ����� ȣ��Ǵ� �Լ�
	//��ȯ���� �������� �ʴ´�.
public:
	Student();
	Student(int Hakbun, const char* eName);
	void show();
};

	Student::Student()
	{
	}
	Student::Student(int Hakbun, const char* Name)
		// ��ü������ ���ÿ� ������� �ʱ�ȭ // �������(�Ű�����)
		// const/������ ��������� ����� �� �ִ�.
		: nHakbun(Hakbun)
	{
		cout << "�Ϲݻ����� ȣ��" << endl;
		int len = strlen(Name) + 1;
		sName = new char[len];
		strcpy(sName, Name);
	}
	void Student::show(void)
	{
		cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
		cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;

	}

int main(void) {

	Student stu1 = Student(2111, "JHJ");
	stu1.show();
	return 0;
}