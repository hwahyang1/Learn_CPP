#include <iostream>
using namespace std;

int main_0526_1() {
	int a/*L-Value (왼쪽에 올 수 있는것들)*/ = 0/*R-Value (L-Value가 아닌 나머지)*/;
	int& r = a; // L-Value 참조
	int&& rr = 1; // R-Value 참조

	return 0;
}