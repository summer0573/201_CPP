#include <iostream>
#include <string.h>
using namespace std;

class CBox {
//private:
//	double width;

public:
	double width;
};

class ChildBox : CBox {
public : 
	void setwidth(double w) {
		width = w;
	}
};

/*
private : �� - Ŭ���� ���ο����� ���� �����ϸ� Ŭ���� �ܺο����� ������ �� �����Ƿ� ������ ������ ���δ�.
Ŭ������ ������ �� ����Ʈ�� ���� �ȴ�.
protected : �� - Ŭ������ ����, ��� ���迡 �ִ� Ŭ���������� ������ �� �ִ�.
public  : �� - ��𿡼��� �����Ӱ� ������ �� ������ �ܺο��� ���� ����� ������ �� �����Ƿ� ������ ������
���̸� �ȵȴ�.
*/