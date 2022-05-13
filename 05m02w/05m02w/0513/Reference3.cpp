#include <iostream>
using namespace std;

int& increment_0513_6(int& val) {
	val++;
	return val;
}

int& function_0513_6() {
	int val = 10;
	return val;
}

int main_0513_6() {
	int n = 10;
	int& ref1 = increment_0513_6(n);
	cout << "n: " << n << endl;
	cout << "ref1: " << ref1 << endl;

	cout << endl;

	int& ref2 = function_0513_6(); // 안되긴 하는데 실행은 됨
	cout << ref2 << endl;

	return 0;
}