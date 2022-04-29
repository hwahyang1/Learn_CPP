#include <iostream>
using namespace std;

int main_0429_2() {
	char str[50] = "I like C programming";

	str[6] = '\0';
	printf("%s\n", str);
	str[1] = '\0';
	printf("%s\n", str);

	cout << endl;

	char arr1[] = "Hello";
	cout << sizeof(arr1) << endl; // 널문자 포함
	cout << strlen(arr1) << endl; // 널문자 제외

	cout << endl;

	char name[6];
	//name = "peter"; // 불가능 (얘는 주솟값이라)
	strcpy_s(name, "peter");

	/*wide char, 한국어 같은 유니코드는 한글자가 2byte라 그거 대응하는 용도*/
	wchar_t _str[80];
	/*wcscpy_s(str, L"Hello world from ");
	wcscat_s(str, L"wcscpy_s ");
	wcscat_s(str, L"and ");
	wcscat_s(str, _countof(str), L"wcscat_s!");*/

	const char* str1 = "Hello";
	const char* str2 = "hello";
	printf("strcmp(%s, %s)\t = %d\n", str1, str2, strcmp(str1, str2));

	if (strcmp(str1, str2) == 0) {
		printf("두 문자열은 같습니다.\n");
	}

	cout << endl;

	return 0;
}