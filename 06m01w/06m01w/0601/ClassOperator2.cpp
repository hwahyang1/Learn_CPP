#include <iostream>
using namespace std;

class Myclass_0601_5 {
	int num = 0;
public:
	int Get() { return num; }
	void Set(int a) { num = a; }

	Myclass_0601_5 operator+(Myclass_0601_5 rightHand);
	Myclass_0601_5 operator-(const Myclass_0601_5& rightHand) const;
	Myclass_0601_5 operator-() const;
};

// 연산자 오버로딩: + (x + y)
Myclass_0601_5 Myclass_0601_5::operator+(Myclass_0601_5 rightHand) {
	Myclass_0601_5 res;
	res.num = this->num + rightHand.num;
	return res;
}
// 연산자 오버로딩: - (x - y)
Myclass_0601_5 Myclass_0601_5::operator-(const Myclass_0601_5& rightHand) const {
	Myclass_0601_5 res;
	res.num = this->num - rightHand.num;
	return res;
}
// 연산자 오버로딩: 음수처리 (x = -x)
Myclass_0601_5 Myclass_0601_5::operator-() const {
	Myclass_0601_5 res;
	res.num = -num;
	return res;
}

int main_0601_5() {
	Myclass_0601_5 x;
	x.Set(1);
	Myclass_0601_5 y;
	Myclass_0601_5 z;

	z = x + y;
	cout << z.Get() << endl;

	z = x - y;
	cout << z.Get() << endl;

	z = y - x;
	cout << z.Get() << endl;

	return 0;
}