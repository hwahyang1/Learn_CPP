#include <iostream>
using namespace std;

int main_0415_2() {
	char ch = 127;
	short n1 = 1000;
	int n2 = 1000000;
	long n3 = 100000000;
	long long n4 = 100000000;

	float f1 = 1.2f;
	double f2 = 1.2234232;

	bool bl = true;

	signed short num1 = 1;
	unsigned short num2 = 1;
	unsigned int num3 = 1;
	unsigned long num4 = 1;
	unsigned long long num5 = 1;

	cout << sizeof(char) << endl; // byte
	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl; // 환경에 따라 크기 변동 가능성
	cout << sizeof(__int32) << endl; // int 뒤에 숫자는 bit, 얘는 무조건 크기 고정
	cout << sizeof(long) << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(bool) << endl;

	// 자료형 알아서
	auto a = 1.2;
	auto b = 100;
	auto c = 'A';

	return 0;
}