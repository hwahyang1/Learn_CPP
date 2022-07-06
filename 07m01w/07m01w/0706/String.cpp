#include <iostream>
#include <locale>
using namespace std;

int main_0706_1() {
	const char* str1 = "ab가나";
	cout << str1[0] << endl;
	cout << str1[1] << endl;
	cout << str1[2] << endl;
	cout << str1[3] << endl;
	cout << strlen(str1) << endl;

	cout << endl;

	// 한국어는 ASCII Code에서 지원을 안함 => char* 쓰면은 똑바로 출력이 안될 수 있음 (윗줄 출력 참고)
	// 아래 방법으로 해결 가능
	setlocale(LC_ALL, "ko-KR");
	const wchar_t* str2 = L"ab가나";

	wcout << str2[0] << endl;
	wcout << str2[1] << endl;
	wcout << str2[2] << endl;
	wcout << str2[3] << endl;
	wcout << wcslen(str2) << endl;

	return 0;
}