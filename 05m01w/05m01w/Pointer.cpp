#include <iostream>
using namespace std;

void abc_0504_1(const char* p) {
	/* 안됨 */
	//p[0] = 'E';

	char temp[10] = "DEF";
	p = temp;
}

void abc_0504_1(char* const p) {
	p[0] = 'E';

	/* 안됨 */
	//char temp[10] = "DEF";
	//p = temp;
}

int main_0504_1() {
	int a = 1;
	int b = 2;
	const int* const p = &a;

	/* 둘 다 안됨 */
	//*p = 2; // const int*
	//p = &b; // const p

	const char name[10] = "ABC";
	abc_0504_1(name);

	return 0;
}