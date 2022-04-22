#include <iostream>
using namespace std;

int main_0422_2() {
	int height = 0 , weight = 0;

	cout << "키를 입력하세요: ";
	cin >> height;
	cout << "몸무게를 입력하세요: ";
	cin >> weight;

	if (height >= 190 || weight >= 100) {
		cout << "탑승 불가" << endl;
	}

	cout << endl;

	int x = 7, y = 1;
	int rt = 0;

	/* Original
	if (x > 5) {
		if (y > 2)
			rt = 1;
	}
	else
		rt = 2;
		*/

	if (x > 5 && y > 2)
		rt = 1;
	else if (x <= 5)
		rt = 2;

	cout << rt << endl;

	cout << endl;

	int nFee = 1000, nAge = 0;
	double nRate = 0.0;

	scanf_s("%d", &nAge);
	// 나이가 적을수록 거치는 조건문이 많아짐
	/*if (nAge >= 65) nRate = 0.0;
	else if (nAge >= 20) nRate = 1.0;
	else if (nAge >= 14) nRate = 0.75;
	else if (nAge >= 4) nRate = 0.5;
	else nRate = 0.0;*/

	// 최적화
	if (nAge < 14) {
		if (nAge < 4) nRate = 0.0;
		else nRate = 0.5;
	}
	else {
		if (nAge < 20) nRate = 0.75;
		else nRate = 1.0;
	}

	printf("최종요금: %d원\n", (int)(nFee * nRate));

	return 0;
}