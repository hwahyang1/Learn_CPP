#include <iostream>
using namespace std;

int main_0427_6() {
	char str1[6/*문자열 길이는 널문자 포함해야 함!*/] = "HELLO";
	string str2 = "HELLO";

	cout << str1 << endl;
	cout << str2 << endl;

	cout << endl;

	char str[10];
	scanf_s("%d", str/*애초에 얘가 포인터라 & 안붙여도 됨*/);

	return 0;
}