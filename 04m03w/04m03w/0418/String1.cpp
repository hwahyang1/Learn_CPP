#include <iostream>
using namespace std;

int main_0418_1() {
	// C
	char ch1 = 'A';
	char ch2 = 'Z';
	char ch3 = 'a';
	char ch4 = 'z';
	char ch5 = '0';
	char ch6 = '9';
	char str[10] = "ABC";
	const char* pData = "ABC";

	cout << ch1 << " : " << (int)ch1 << endl;
	cout << ch2 << " : " << (int)ch2 << endl;
	cout << ch3 << " : " << (int)ch3 << endl;
	cout << ch4 << " : " << (int)ch4 << endl;
	cout << ch5 << " : " << (int)ch5 << endl;
	cout << ch6 << " : " << (int)ch6 << endl;
	cout << str << endl;
	cout << pData << endl;

	// C++
	string s = "ABC";

	cout << s << endl;

	return 0;
}