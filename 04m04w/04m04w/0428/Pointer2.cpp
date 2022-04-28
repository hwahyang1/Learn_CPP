#include <iostream>
using namespace std;

int main_0428_3() {
	char array2[5] = { '1', '2', '3', '4', '5' };
	for (size_t i = 0; i < 5; i++) {
		cout << array2[i] << endl;
	}

	cout << endl << endl;

	char array3[6] = "12345";
	cout << array3 << endl;

	cout << endl;

	const char* str = "hello";
	cout << str << endl;
	const char* strs[3] = { "aaa", "bbb", "ccc" }; // 놀랍게도 배열

	cout << endl;

	string str2 = "hello";
	string array4[3] = { "aaa", "bbb", "ccc" };

	for (size_t i = 0; i < 3; i++)
	{
		cout << array4[i] << " ";
	}

	cout << endl;

	return 0;
}