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
	Student(int Hakbun, string eName);
	void show();
};

	Student::Student(void)
	{
		this->nHakbun = 1234;
		this->sName = "�̻��";
		cout << "�й��� ��ϵǾ����ϴ�." << endl;
	}
	Student::Student(int Hakbun, string Name)
		// ��ü������ ���ÿ� ������� �ʱ�ȭ // �������(�Ű�����)
		// const/������ ��������� ����� �� �ִ�.
		: nHakbun(Hakbun), sName(Name)
	{
		cout << "�й��� ��ϵǾ����ϴ�." << endl;
	}
	void Student::show(void)
	{
		cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
		cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;

	}

int main(void) {

	Student* stu2 = new Student[6];
	for (int i = 0; i < 6; i++) {
		stu2[i].show();
	}

	delete []stu2;

	return 0;
}