#include <iostream>
using namespace std;

class Point {
private:
	int mX;
	int mY;
public:
	Point(int mX, int mY); //������
	Point(void);

	//������ �����ε�
	Point operator+(const Point& rhs);

	void chul(void);

};

