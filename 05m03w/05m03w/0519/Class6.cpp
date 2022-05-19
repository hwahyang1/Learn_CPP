#include <iostream>
using namespace std;

// 클래스 상호 참조 해결 방법
// 0. 그냥 이런 구조를 만들지 않는다. 정신건강에 매우 좋다.
// 1. 전방선언을 하면 되긴 하는데, foo(...)애서 포인터로 받아야함. 아래 코드 참조
// 2. 헤더로 분리하기. 강의 녹화본 참고..

class A_0519_8;

class B_0519_8 {
public:
	B_0519_8() {
		cout << "B_0519_8()" << endl;
	}

	void foo(A_0519_8* a) {}
};

class A_0519_8 {
public:
	A_0519_8() {
		cout << "A_0519_8()" << endl;
	}
	void foo(B_0519_8 b) {}
};

int main_0519_8() {

	return 0;
}