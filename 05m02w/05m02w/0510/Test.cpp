#include <iostream>
using namespace std;

bool StrCompare_0510_1(const char* str1, const char* str2) {
	while (*str1) {
		if (*str1 != *str2) {
			return false;
		}
		str1++;
		str2++;
	}
	if (*str2 == '\0') {
		return true;
	}
	return false;
}

int StrCopy_0510_1(char* dest, char* src) {
	while (*src) {
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';
	return true;
}

int main_0510_1() {
	int aList[3][4] = {
		{ 10, 20, 30, 40 },
		{ 50, 60, 70, 80 },
		{ 90, 100, 110, 120 }
	};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << aList[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;

	const char str1[10] = "hello1";
	const char str2[10] = "hello2";

	bool rt = StrCompare_0510_1(str1, str2);
	cout << rt << endl;

	return 0;
}