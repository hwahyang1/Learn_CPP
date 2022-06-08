#include <iostream>
using namespace std;

template <typename T>
T Add_0607_3(T num1, T num2) {
	return num1 + num2;
}

int main_0607_3() {
	int a = Add_0607_3(1, 4);
	double b = Add_0607_3(1.5, 7.4);

	cout << a << endl;
	cout << b << endl;

	return 0;
}