#include <iostream>
using namespace std;

int main_0429_4() {
	// 배열 요소 중 최대값 구하기
	int aList1[5] = { 30, 40, 10, 50, 20 };

	/*int maxNum = 0;
	for (int i = 0; i < 5; i++) {
		if (aList1[i] > maxNum) maxNum = aList1[i];
	}
	cout << "최대값: " << maxNum << endl;*/

	for (int i = 1; i < 5; ++i) {
		if (aList1[i] > aList1[0]) {
			aList1[0] = aList1[i];
		}
	}
	cout << "최대값: " << aList1[0] << endl;

	cout << endl;

	// 배열 요소 중 최소값 구하기
	int aList2[5] = { 30, 40, 10, 50, 20 };

	/*int minNum = 1000;
	for (int i = 0; i < 5; i++) {
		if (aList2[i] < minNum) minNum = aList2[i];
	}
	cout << "최소값: " << minNum << endl;*/

	/*for (int i = 1; i < 5; ++i) {
		if (aList2[i] < aList2[0]) {
			aList2[0] = aList2[i];
		}
	}
	cout << "최소값: " << aList2[0] << endl;*/

	int nTmp = 0;
	for (int i = 1; i < 5; ++i) {
		if (aList2[i] < aList2[0]) {
			nTmp = aList2[0];
			aList2[0] = aList2[i];
			aList2[i] = nTmp;
		}
	}
	cout << "최소값: " << aList2[0] << endl;

	cout << endl;

	// 내림차순 정렬
	int aList3[5] = { 30, 40, 10, 50, 20 };

	nTmp = 0;
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4 - i; j++) {
			if (aList3[j] < aList3[j + 1]) {
				nTmp = aList3[j];
				aList3[j] = aList3[j + 1];
				aList3[j + 1] = nTmp;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		cout << aList3[i] << " ";
	}
	cout << endl;

	// 오름차순 정렬
	nTmp = 0;
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4 - i; j++) {
			if (aList3[j] > aList3[j + 1]) {
				nTmp = aList3[j];
				aList3[j] = aList3[j + 1];
				aList3[j + 1] = nTmp;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		cout << aList3[i] << " ";
	}
	cout << endl;

	return 0;
}