#include <iostream>
#include <functional>
using namespace std;

int main_0624_4() {
	cout << boolalpha; // 0 1 말고 true false로 출력

	auto isEven = [](int x) { return x % 2 == 0; };
	function<bool(int)> isEvenObj = isEven;

	cout << isEven(2) << endl;
	cout << isEvenObj(3) << endl;

	return 0;
}