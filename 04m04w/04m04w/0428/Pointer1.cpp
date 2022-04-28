#include <iostream>
using namespace std;

void add_0428_1(int* n) {
	*n = *n + 1;
}

int main_0428_1() {
	int num = 7;
	int* pnum = &num;

	*pnum = 5; // 역참조. pnum이 가지고 있는 주소의 변수(num)에 값을 넣음
	cout << num << endl;
	cout << *pnum << endl;

	add_0428_1(&num);

	cout << num << endl;

	cout << endl;

	int a = 1;
	int* p = &a;

	*p = 5;

	cout << a << endl;
	cout << sizeof(a) << endl;

	cout << endl;

	int* p1 = nullptr; // 주솟값 미지정

	return 0;
}