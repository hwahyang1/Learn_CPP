#include <iostream>
using namespace std;

int main_0510_2() {
	int num1 = 10, num2 = 20, num3 = 30, num4 = 40;
	int* arr1[4] = { &num1, &num2, &num3, &num4 }; // 포인터 배열

	int arr2d[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int(*parr)[4] = arr2d; // 배열 포인터

	return 0;
}