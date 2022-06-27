#include <iostream>
using namespace std;

int main_0627_1() {
	auto a1 = 3;

	cout << [a1]() { return a1 + 1; }() << endl;
	cout << [&a1](auto i) { a1 = i; return a1; }(11) << endl; // 되도록 참조로 안받는게 안전함

	cout << endl;

	int level = 9;

	cout << boolalpha;
	cout << [level]() -> bool { if (level > 10) return true; return false; }() << endl;

	cout << endl;

	cout << []() -> string { return "Hello World"; } () << endl;

	cout << endl;

	int number;
	cin >> number;

	cout << [number]() mutable -> int { return number += 10; }() << endl;
	
	return 0;
}