#include <iostream>
using namespace std;

int& RefRetFuncOne_0513_5(int& ref) {
	ref++;
	return ref;
}

int RefRetFuncTwo_0513_5(int& ref) {
	ref++;
	return ref;
}

void ConstRetFunc_0513_5(const int& ref) {
	cout << ref << endl;
}

int main_0513_5() {
	int num1 = 1;

	ConstRetFunc_0513_5(num1);
	ConstRetFunc_0513_5(7);

	cout << endl;

	int& num2 = RefRetFuncOne_0513_5(num1); // &num2 == num1
	int num3 = RefRetFuncOne_0513_5(num1); // 값만 받

	int num4 = RefRetFuncTwo_0513_5(num1);
	//int& num5 = RefRetFuncTwo_0513_5(num1); // 있을 수 없는 일 (함수 끝나면 변수들이 날아가는데 그걸 참조로 받으면 -> ??????????)

	num1++;

	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;
	cout << num4 << endl;

	return 0;
}