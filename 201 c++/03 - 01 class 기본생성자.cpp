#include <iostream> //cout, endl
using namespace std;

class Student {
private:
	int nHakbun;
	string sName;

	//������: ��ü�� �����Ǹ� �ڵ����� ȣ��Ǵ� �Լ�
	//��ȯ���� �������� �ʴ´�.
public:
	Student() {
		nHakbun = 1234;
		sName = "�̻��";
		cout << "�й��� ��ϵǾ����ϴ�." << endl;
	}
	//�Ʒ��� ���� �����ڸ� �����Ϸ��� �������
	//Student() {}
};

int main(void) {
	Student stu;
	return 0;
}