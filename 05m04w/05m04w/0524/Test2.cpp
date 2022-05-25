#include <iostream>
using namespace std;

/* 슬슬 머리 터지는 중.. */

#define SizeX 4
#define SizeY 4

void ArrayPrint_0524_4(int Arr[SizeX][SizeY]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << " " << Arr[i][j];
		}
		cout << endl;
	}
}

void ArrayPtrPrint_0524_4(int* Arr[SizeX]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << " " << Arr[i][j];
		}
		cout << endl;
	}
}

int main_0524_4() {
	int Arr[SizeX][SizeY] = { 1, 1, 1, 1 };
	ArrayPrint_0524_4(Arr);

	int** ArrPtr;
	ArrPtr = new int* [SizeY];
	for (int i = 0; i < SizeY; i++) {
		ArrPtr[i] = new int[SizeX] {};
	}
	ArrayPtrPrint_0524_4(ArrPtr);

	return 0;
}