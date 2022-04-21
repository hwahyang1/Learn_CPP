#include <iostream>
using namespace std;

int main_0421_3() {
	int num = 0;

	while (num < 10)
	{
		cout << "Hello World" << endl;
		num++;
	}

	num = 0;

	while (true)
	{
		cout << "Hello World" << endl;
		num++;
		if (num > 10) break;
	}

	return 0;
}