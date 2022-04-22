#include <iostream>
using namespace std;

int main_0422_4() {
	int count = 0;
	char ch;
	
	while (cin.get(ch)) {
		cout.put(ch);
		count++;

		if (ch == '\n') break;
	}

	cout << "문자의 수 -> " << count << endl;

	cout << endl;

	for (int i = 0; i < 3; i++) {
		cout << i << " ";
	}

	cout << endl;

	int array1[5] = { 10, 20, 30, 40, 50 };
	for (size_t i = 0; i < 5; i++)
	{
		cout << array1[i] << " ";
	}

	cout << endl;

	for (auto a : array1) { // 범위기반
		cout << a << " ";
	}

	cout << endl << endl;

	for (int i = 0; i < 5; i++) {
		cout << "World ";
	}

	cout << endl;

	for (int i = 1; i <= 30; i++) {
		if (i % 2 == 0) cout << i<< " ";
	}

	cout << endl;

	int sum = 0;
	for (int i = 1; i <= 1000; i++) {
		sum += i;
	}
	cout << "결과: " << sum;

	cout << endl;

	int array2[5] = { 1, 2, 3, 4, 5 };
	for (auto now : array2) {
		cout << now << " ";
	}

	return 0;
}