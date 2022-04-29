#include <iostream>
using namespace std;

void Func() {
	cout << "Hello World" << endl;
}

int Add(int a, int b) {
	//cout << a + b << endl;
	return a + b;
}

int main() {
	Func();
	Func();

	cout << Add(1, 2) << endl;
	cout << Add(2, 5) << endl;
	cout << Add(1, 1) << endl;

	return 0;
}