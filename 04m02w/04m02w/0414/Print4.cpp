#include <iostream>
using namespace std;

int main_0414_8() {
	cout.put('S');
	cout.put('t').put('u');
	cout.put(100);
	cout.put(121.3);
	cout.put('\n');

	const char* str = "Apple";
	int len = strlen(str);
	cout.write(str, len);
	cout << endl;

	//cin.get(ch);

	return 0;
}