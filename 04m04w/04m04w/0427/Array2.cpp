#include <iostream>
using namespace std;

int main_0427_5() {
	int arr[3] = { 1, 2, 3 };

	cout << sizeof(int) << endl; // 자료형 byte
	cout << sizeof(arr) << endl; // (자료형 byte) * (배열 수) = 배열 byte

	cout << sizeof(arr) / sizeof(int) << endl; // 배열의 크기

	return 0;
}