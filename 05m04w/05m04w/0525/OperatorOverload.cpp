#include <iostream>
using namespace std;

class MyClass_0525_3 {
	int num = 0;
public:
	int Get() { return num; }
	void Set(int a) { num = a; }

	MyClass_0525_3 operator+/*operator 키워드 + 정의하고 싶은 연산자*/(MyClass_0525_3 rightHand);
	MyClass_0525_3 operator-(MyClass_0525_3 rightHand);
};

MyClass_0525_3 MyClass_0525_3::operator+(MyClass_0525_3 rightHand) {
	MyClass_0525_3 res;
	res.num = this->num + rightHand.num;
	return res;
}
MyClass_0525_3 MyClass_0525_3::operator-(MyClass_0525_3 rightHand) {
	MyClass_0525_3 res;
	res.num = this->num - rightHand.num;
	return res;
}

int main_0525_3() {
	MyClass_0525_3 x;
	x.Set(1);

	MyClass_0525_3 y;
	y.Set(2);

	MyClass_0525_3 z1 = x + y; // 당연히 미리 정의되어 있을 리가 없음, 클래스 내에서 operator 키워드로 정의 필요
	//MyClass_0525_3 z1 = x.operator+(y); // 내부 해석
	cout << "x + y: " << z1.Get() << endl;

	MyClass_0525_3 z2 = x - y;
	cout << "x - y: " << z2.Get() << endl;

	return 0;
}