#include <iostream>
using namespace std;

int main_0513_8() {
	int a = 10;
	int b(10); // 같음 (CPP), 함수와 혼동 가능성 있음
	int c{ 10 }; // 같음 (CPP)
	auto d(10); // 얘도 됨

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;

	return 0;
}