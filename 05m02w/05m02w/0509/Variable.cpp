#include <iostream>
using namespace std;

void Add_0509_2(int val);
int num; // 기본값 0

void SimpleFunc_0509_2() {
	static int num1 = 0;
	int num2 = 0;

	num1++, num2++;

	cout << num1 << " " << num2 << endl;
}

int main_0509_2() {
	printf("num: %d\n", num);

	Add_0509_2(3);
	printf("num: %d\n", num);
	num++;
	printf("num: %d\n", num);

	cout << endl;

	for (int i = 0; i < 3; i++)
	{
		SimpleFunc_0509_2();
	}

	return 0;
}

void Add_0509_2(int val) {
	num += val;
}