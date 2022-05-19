#include <iostream>
using namespace std;

class CTest_0519_2 {
private:
	int num;
public:
	CTest_0519_2(int n) :num(n) { cout << "객체생성" << endl; }

	CTest_0519_2& Adder(int n) {
		num += n;
		return *this; // 객체 자체를 반환 (객체 주소의 역참조)
	}

	CTest_0519_2& ShowNumber() {
		cout << num << endl;
		return *this;
	}
};

int main_0519_2() {
	CTest_0519_2 obj(3);
	CTest_0519_2& ref = obj.Adder(2);
	obj.ShowNumber();
	ref.ShowNumber();

	ref.Adder(1).ShowNumber().Adder(2).ShowNumber(); // 이게뭐야


	return 0;
}