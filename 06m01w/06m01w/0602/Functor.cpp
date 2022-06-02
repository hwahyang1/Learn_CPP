#include <iostream>
using namespace std;

// 일부 코드는 ClassOperator2.cpp에서 가져옴
class Pos_0602_3 {
	int xpos, ypos;
public:
	Pos_0602_3(int x = 0, int y = 0) :xpos(x), ypos(y) { cout << "Pos 객체 생성" << endl; }
	~Pos_0602_3() { cout << "Pos 객체 소멸" << endl; }

	Pos_0602_3 operator+(const Pos_0602_3& pos) const { return Pos_0602_3(xpos + pos.xpos, ypos + pos.ypos); }

	friend ostream& operator<<(ostream& os, const Pos_0602_3& pos);
};
ostream& operator<<(ostream& os, const Pos_0602_3& pos) {
	cout << "[" << pos.xpos << ", " << pos.ypos << "]";
	return os;
}

class Adder_0602_3 {
public:
	/* 값 바꿀 일 없으면 const로 정의하는거 습관화!!*/
	int operator() (const int& a, const int& b) { return a + b; }
	double operator() (const double& a, const double& b) { return a + b; }

	Pos_0602_3 operator() (const Pos_0602_3& a, const Pos_0602_3& b) { return a + b; }
};

int main_0602_3() {
	Adder_0602_3 adder;
	cout << adder(1, 2) << endl;
	cout << adder(1.5, 2.2) << endl;

	cout << adder(Pos_0602_3(1, 2), Pos_0602_3(3, 5)) << endl;

	return 0;
}