#include <iostream>
#include <vector>
#include <regex> // Regular Expression
using namespace std;

int main_0705_1() {
	string s = "123";
	regex number("[0-9]+");

	if (regex_match(s, number)) {
		cout << "number" << endl;
	} else {
		cout << "not number" << endl;
	}

	cout << endl;

	vector<string> v = { "012", "345", "abc" };

	regex re("[0-9]{3}");

	for (const auto& n : v) {
		cout << n << ": " << boolalpha << regex_match(n, re) << endl;
	}

	cout << endl;

	string str1 = "aaa-bb";
	cout << str1.replace(0, 2, "zz") << endl;
	// string.replace(시작위치, 길이, 치환)

	return 0;
}