#include <iostream>
using namespace std;

class Base_0527_3 {
	int num1;
public:
	//Base_0527_3() {} // 일반적으로 얘 없으면 자식 클래스가 못굴러감(내부에서는 얘를 호출함). 아니면 호출 대상을 명시해주던가.
	Base_0527_3(int n) :num1(n) {}

	void Show() {
		cout << num1 << endl;
	}
};

class Derived_0527_3 :public Base_0527_3 {
	int num2;
public:
	Derived_0527_3(int n) :Base_0527_3(n)/*호출할 생성자를 명시*/, num2(n) {}

	void Show() {
		Base_0527_3::Show();
		cout << num2 << endl;
	}
};

int main_0527_3() {
	Derived_0527_3 obj(1);
	obj.Show();

	return 0;
}