#include <iostream>
using namespace std;

int main_0427_4() {
	// 배열 선언 후 1 2 3 4 5로 초기화 -> 출력
	int array1[] = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; i++) {
		cout << array1[i] << " ";
	}

	cout << endl << endl;

	// 배열 10개 선언 후 2 4 6 8 10 12 14 16 18 20 할당
	int array2[10];
	for (int i = 0; i < 10; i++) {
		array2[i] = (i + 1) * 2;
	}
	for (int i = 0; i < 10; i++) {
		cout << array2[i] << " ";
	}

	cout << endl;

	return 0;
}