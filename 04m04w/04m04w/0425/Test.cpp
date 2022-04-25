#include <iostream>
using namespace std;

int main_0425_1() {
	// 입력한 숫자의 평균을 구하기 (0보다 작은 수 입력 시 종료)
	double total = 0;
	double avg = 0;
	int count = 0;
	int num = 0;

	cout << "입력한 수의 평균을 구합니다." << endl << "수를 엔터로 구분 후, 음수를 입력하세요." << endl << endl;

	while (true) {
		cin >> num;

		if (num < 0) break;
		
		total += num;
		count++;
		avg = total / count;
	}

	cout << "총합: " << total << " (총 " << count << "개)" << endl;
	cout << "평균: " << avg << endl;

	cout << endl;

	// 반복적으로 숫자를 입력받아 더한 값을 출력 (0을 입력 시 종료)
	int sum = 0;
	count = 0;
	num = 0;

	cout << "입력한 수의 합을 구합니다." << endl << "수를 엔터로 구분 후, 0을 입력하세요." << endl << endl;

	while (true)
	{
		cin >> num;

		if (num == 0) break;

		count++;
		sum += num;
	}

	cout << "총합: " << sum << endl;

	return 0;
}