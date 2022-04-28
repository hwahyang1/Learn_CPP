#include <iostream>
using namespace std;

int main_0427_1() {
	// 문자 입력 받아 A-Z 사이면 "대문자" 출력
	char ch;

	cout << "문자를 입력하세요: ";
	cin >> ch;

	if (ch >= 'A' && ch <= 'Z') {
		cout << "대문자" << endl;
	}

	cout << endl;

	// 입력 받은 문자가 대문자면 소문자, 소문자면 대문자로

	cout << "문자를 입력하세요: ";
	cin >> ch;

	if (ch >= 'A' && ch <= 'Z') {
		cout << (char)(ch + 32) << endl; // 수업에서 진행 한 방식
		cout << (char)tolower(ch) << endl;
	}
	else if (ch >= 'a' && ch <= 'z') {
		cout << (char)(ch - 32) << endl; // 수업에서 진행 한 방식
		cout << (char)toupper(ch) << endl;
	}

	return 0;
}