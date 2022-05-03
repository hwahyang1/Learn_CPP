#include <iostream>
#include "Util.h"
using namespace std;

int main_0503_1() {
	foo_0503_1_1();

	cout << num_0503_1_1 << endl;

	static int num1 = 0; // 전역변수처럼 쓰는 지역변수

	register int num2 = 0; // CPU 레지스터에 저장

	return 0;
}