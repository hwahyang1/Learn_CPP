#include <iostream>
using namespace std;

int main_0427_7() {
	// 1부터 100까지 담기
	int arr1[100];

	for (int i = 0; i < 100; i++) {
		arr1[i] = i + 1;
	}

	for (auto now : arr1) {
		cout << now << " ";
	}

	cout << endl << endl;

	// 배열에 5 2.35 365 담기
	double arr2[] = { 5, 2.35, 365 };

	for (auto now : arr2) {
		cout << now << " ";
	}

	cout << endl << endl;

	// 아래 배열의 두번째 값 출력
	int arr3[5] = { 1, 2, 3, 4, 5 };

	cout << arr3[1] << endl;

	cout << endl;

	// 아래 배열의 바이트 수, 길이(개수) 출력
	int arr4[3] = { 1, 2, 3 };

	cout << sizeof(arr4) << endl;
	cout << sizeof(arr4) / sizeof(int) << endl;

	cout << endl;

	// 출력값 ?
	char str1[] = "Hello";
	cout << sizeof(str1) / sizeof(char) << endl; // 널문자 포함해서 6개

	cout << endl;

	// 아래 문자열을 담기 위한 배열을 선언 후 순서대로 출력
	// seoul busan sejong
	const char* str2[] = { "seoul", "busan", "sejong" };

	for (auto now : str2) {
		cout << now << " ";
	}

	return 0;
}