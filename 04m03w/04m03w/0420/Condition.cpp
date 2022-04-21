#include <iostream>
using namespace std;

int main_0420_5() {
	int a = 1, b = 2;
	if (a == b) {
		printf("a와 b는 같다\n");
	}

	if (1/*=true*/) // 항상 실행
		printf("Hello \n"); // 한줄은 중괄호 생략 OK

	return 0;
}