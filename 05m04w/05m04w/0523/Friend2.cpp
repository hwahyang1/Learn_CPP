#include <iostream>
using namespace std;

class MyClass_0523_2 {
	int num = 0;
public:
	MyClass_0523_2() {};
	MyClass_0523_2(int a) :num(a) {};
	void Show() { cout << num << endl; }

	MyClass_0523_2 AddOnePrefix() {
		++this->num;
		return *this; // ++num
	}
	MyClass_0523_2 AddOnePostfix() {
		MyClass_0523_2 temp;
		temp = *this;
		++this->num;
		return temp; // num++
	}

	/* 위 함수를 friend 함수로 옮긴 버전 */
	friend MyClass_0523_2& AddOnePrefix(MyClass_0523_2& obj);
	friend MyClass_0523_2 AddOnePostfix(MyClass_0523_2& obj);
};
MyClass_0523_2& AddOnePrefix(MyClass_0523_2& obj) {
	++obj.num;
	return obj;
}
MyClass_0523_2 AddOnePostfix(MyClass_0523_2& obj) {
	MyClass_0523_2 temp;
	temp = obj;
	++obj.num;
	return temp;
}

int main_0523_2() {
	MyClass_0523_2 x(10), y(10);
	MyClass_0523_2 z;

	cout << "---- 선행처리 ----" << endl;
	z = AddOnePrefix(x);
	z.Show();
	x.Show();

	cout << endl;

	cout << "---- 후행처리 ----" << endl;
	z = AddOnePostfix(y);
	z.Show();
	y.Show();

	return 0;
}