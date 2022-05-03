#include <iostream>
using namespace std;

void Absolute_0503_5(int* num) {
	if (*num < 0) *num = -*num;
}

void Absolute_0503_5(int& num) {
	if (num < 0) num = -num;
}

int main_0503_5() {
	// 포인터와 참조변수를 활용하여 절댓값 반환 함수 작성.

	int a = -1;
	Absolute_0503_5(&a); // 포인터 사용
	cout << a << endl;

	a = -1;
	Absolute_0503_5(a); // 참조변수 사용
	cout << a << endl;
}
