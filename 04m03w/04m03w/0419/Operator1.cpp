#include <iostream>
using namespace std;

int main_0419_1() {
	int n1 = 1;
	int n2 = 2;

	cout << n1 + n2 << endl;
	cout << n1 - n2 << endl;
	cout << n1 * n2 << endl;
	cout << n1 / n2 << endl;
	cout << n1 % n2 << endl;

	cout << endl;

	int a = 0;
	cout << a++ << endl;
	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;

	cout << endl;

	int b = 0;
	cout << b-- << endl;
	cout << b << endl;
	cout << --b << endl;
	cout << b << endl;

	cout << endl;

	a = 0;
	b = 1;
	bool res = a > b;
	cout << res << endl;

	cout << endl;

	cout << (true || true) << endl;
	cout << (false || true) << endl;
	cout << (true || false) << endl;
	cout << (false || false) << endl;

	cout << endl;

	cout << (true && true) << endl;
	cout << (false && true) << endl;
	cout << (true && false) << endl;
	cout << (false && false) << endl;

	cout << endl;

	cout << (!true) << endl;
	cout << (!false) << endl;

	return 0;
}