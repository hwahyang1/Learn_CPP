#include <iostream>
using namespace std;

int main_0513_4() {
	int num1 = 1024;

	int& num2 = num1;
	num2 = 100;

	cout << num1 << endl;
	cout << num2 << endl;
	cout << &num1 << endl;
	cout << &num2 << endl;

	cout << endl;
	
	int arr[3] = { 1, 3, 5 };
	//int& num3 = arr; // 안됨 (얘는 주소를 받는 애가 아님)
	int& num3 = arr[0];

	int num = 12;
	int* ptr = &num;
	//int& num4 = ptr; // 안됨 (얘는 주소를 받는 애가 아님)
	int& num4 = *ptr;

	int& ref = num;
	int* (&pref) = ptr; // &pref 참조자에 대한 포인터

	const int& refnum = 7; // 상수의 참조자가 가능, 매개변수를 넘겨받을 때 상수와 변수 모두 받을 수 있음 (수정은 못함)

	return 0;
}