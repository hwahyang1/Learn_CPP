#include <iostream>
#include <algorithm> // sort에 필요
using namespace std;

bool Compare_0519_5(int a, int b) {
	return a > b;
}

int main_0519_5() {
	int a[10] = { 9, 3, 5, 4, 1, 10, 8, 6, 7, 2 };
	std::sort(a, a + 10, Compare_0519_5);

	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}

	cout << endl;

	return 0;
}