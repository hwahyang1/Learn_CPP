#include <iostream>
using namespace std;

int main_0420_2() {
	char input;
	cin >> input;

	int a = (int)'a';
	int z = (int)'z';

	if (input >= a && input <= z) {
		cout << "소문자입니다" << endl;
	}

	return 0;
}