#include <iostream>
using namespace std;

class MyClass_0525_1 {
	int a;
public:
	MyClass_0525_1() {
		cout << "기본 생성자 호출!" << endl;
	}
	MyClass_0525_1(const MyClass_0525_1& obj) { // 복사 생성자, 얘도 물론 자동생성임
		cout << "복사 생성자 호출!" << endl;
	}
};

int main_0525_1() {
	MyClass_0525_1 A;
	MyClass_0525_1 B1(A);
	MyClass_0525_1 B2 = A;
	MyClass_0525_1 B3 = MyClass_0525_1(A);
	MyClass_0525_1* B4 = new MyClass_0525_1(A);

	return 0;
}