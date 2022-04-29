#include <iostream>
using namespace std;

int main_0429_1() {
	int aList[5] = { 10, 20, 30, 40, 50 };
	
	aList[0] = 100;
	aList[1] = aList[0];
	aList[2] += aList[1];
	aList[3] = 200;
	aList[4] = aList[3] * 2;

	for (size_t i = 0; i < 5; i++)
	{
		cout << aList[i] << " ";
	}

	cout << endl << endl;

	char _arr1[6] = "apple";
	char _arr2[5] = { 'a', 'p', 'p', 'l', 'e' };

	return 0;
}