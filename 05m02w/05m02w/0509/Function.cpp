#include <iostream>
using namespace std;

int Add1_0509_1(int num1, int num2) {
	return num1 + num2;
}
int Add2_0509_1(int num1 = 1, int num2 = 2) {
	return num1 + num2;
}
int Add3_0509_1(int num1 = 1, int num2 = 2);


void Print_0509_1(int number) {
	cout << "int: " << number << endl;
}
void Print_0509_1(double number) {
	cout << "double: " << number << endl;
}
void Print_0509_1(char* ch) {
	cout << "String: " << ch << endl;
}

int main_0509_1() {
	Print_0509_1(10);
	Print_0509_1(3.14);
	char name[] = "Hello! I'am Developers";
	Print_0509_1(name);

	cout << endl;

	cout << Add1_0509_1(3, 5) << endl;
	cout << Add2_0509_1() << endl;
	cout << Add2_0509_1(1) << endl;
	cout << Add2_0509_1(1, 2) << endl;
	cout << Add3_0509_1(1) << endl;

	return 0;
}

int Add3_0509_1(int num1, int num2) {
	return num1 + num2;
}