#include <iostream>
using namespace std;

void SwapByRef2_0513_7(int& val1, int& val2) {
	int temp = val2;
	val2 = val1;
	val1 = temp;
}

int main_0513_7() {
	int val1 = 10;
	int val2 = 20;

	SwapByRef2_0513_7(val1, val2);
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;

	return 0;
}