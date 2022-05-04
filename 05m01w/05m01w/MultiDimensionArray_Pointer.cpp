#include <iostream>
using namespace std;

int main_0504_2() {
	int arr1[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	//int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // 얘도 같음

	cout << arr1[0][1] << endl;
	cout << arr1[1][0] << endl;

	cout << endl;

	cout << sizeof(arr1) / sizeof(arr1[0]) << endl; // 앞
	cout << sizeof(arr1[0]) / sizeof(int) << endl; // 뒤
	cout << sizeof(arr1[0]) / sizeof(arr1[0][0]) << endl; // 뒤

	cout << endl;

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++) {
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}

	int(*p)[3] = arr1; // int arr1[][3]

	return 0;
}