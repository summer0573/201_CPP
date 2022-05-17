#include <iostream> //cout, endl
#include <string.h> //strcpy() ���
using namespace std;


class Student {
private:
	int nHakbun;
	char* sName;

	//������: ��ü�� �����Ǹ� �ڵ����� ȣ��Ǵ� �Լ�
	//��ȯ���� �������� �ʴ´�.
public:
	Student();
	Student(int Hakbun, const char* Name);
	Student(const Student& rhs);
	~Student();

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
	// ���� �ۼ� ���ص� �����Ϸ��� �˾Ƽ� ������ִ� ���� ������
	Student::Student(const Student& rhs)
		:nHakbun(rhs.nHakbun), sName(rhs.sName)
	{
}

	Student :: ~Student()
	{
		delete[]sName;
		cout << "�Ҹ��� ȣ��" << endl;
	}

	void Student::show(void)
	{
		cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
		cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;

	}

int main(void) {
	//�Ϲݻ����� ȣ��
	Student stu1 = Student(2111, "JHJ");
	//(1111,"JHJ")
	Student stu2 = stu1;
	stu1.show();
	return 0;
}