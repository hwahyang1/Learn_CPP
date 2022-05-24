#include <iostream>
using namespace std;

int main_0524_2() {
	int Array[] = { 9, 7, 5, 3, 1 };

	for (auto now : Array) {
		cout << now << " ";
	}
	cout << endl;

	char Array2[14] = { "Hello World" };
	cout << Array2 << endl;

	cout << endl;

	int* DArray{ new int[5] { 9, 7, 5, 3, 1 } };

	for (int i = 0; i < 5; i++) {
		cout << DArray[i] << " ";
	}
	cout << endl;

	char* DArray2{ new char[14] { "Hello World" } };
	cout << DArray2 << endl;
	
	return 0;
}