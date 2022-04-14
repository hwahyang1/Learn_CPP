#include <iostream>
#include <iomanip>
using namespace std;

int main_0414_9() {
	int a = 10000;

	cout << setw(8) << a << endl;
	cout << setw(10) << a << endl;

	// 정렬 (형식 플래그)
	cout << right << setw(10) << a << "." << endl;
	cout << left << setw(10) << a << "." << endl;

	// 부동소수점 유효 자리 설정
	double b = 3.123497;
	cout << setiosflags(ios::fixed);
	cout << setprecision(2) << b << endl; // 2자릿수
	cout << setw(10) << setprecision(3) << b << endl; // 10칸 확보 후 3자릿수
	cout << setw(10) << setprecision(2) << b << endl; // 10칸 확보 후 2자릿수
	cout << setw(10) << setprecision(2) << setfill('0') << b << endl; // 10칸 확보 후 2자릿수, 빈자리는 0으로

	// 진법 변경 (변경 후 지속됨)
	int num = 100;
	cout << "8진: " << oct << num << endl;
	cout << "16진: " << hex << num << endl;
	cout << "10진: " << dec << num << endl;

	return 0;
}