#include <iostream>
using namespace std;

int main_0427_3() {
	srand((unsigned int)time(NULL));

	int arr[5];

	for (int i = 0; i < 5; i++) {
		arr[i] = rand();
	}

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}

	cout << endl << endl;

	char arrCh[3];
	arrCh[0] = 'A';
	arrCh[1] = 'B';
	arrCh[2] = 'C';

	for (int i = 0; i < 3; i++) {
		cout << arrCh[i];
	}

	cout << endl << endl;

	int array1[3] = { 1, 2, 3 };

	for (int i = 0; i < 3; i++) {
		cout << array1[i] << " ";
	}

	cout << endl << endl;

	int array2[3] = { 1, 2 };

	for (int i = 0; i < 3; i++) {
		cout << array2[i] << " ";
	}

	cout << endl << endl;

	int array3[] = { 1, 2, 3, 4 };

	for (int i = 0; i < 4; i++) {
		cout << array3[i] << " ";
	}

	return 0;
}