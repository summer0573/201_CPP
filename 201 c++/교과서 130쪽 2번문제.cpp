#include <iostream>
using namespace std;

class CBank {
private : 
	string name;
	string account;
	int balance;

public:
	//������ �ۼ�
	//�ԱݵǴ� �ݾ��� ����ϴ� �Լ� �ۼ�
	CBank();
	CBank(string name2, string account2, int balance2);
	void Deposit();
};

CBank::CBank() {

}

void CBank::Deposit() {
	cout << "�̸� :" << name << endl;
	cout << "���¹�ȣ :" << account << endl;
	cout << "�ܾ� :" << balance << endl;
}

int main(void) {

	CBank a = CBank("������", "3021350428041", 190000);
	a.Deposit();

	return 0;
}