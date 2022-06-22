#include <iostream>
#include <tuple>
using namespace std;

tuple<int, int> Div_0622_1(int a, int b) {
	return make_tuple(a / b, a % b);
}

int main_0622_1() {
	// pair의 확장판, structure의 개선 버전이라 봐도 될듯
	tuple<int, double> my_tp = make_tuple(1, 2.5);
	tuple<int, double, string> my_tp2 = make_tuple(1, 2.5, "abc");

	//get<0>(my_tp); // tuple이 가지고 있는 0번째 element를 반환해라!
	cout << get<0>(my_tp2) << endl;
	cout << get<1>(my_tp2) << endl;
	cout << get<2>(my_tp2) << endl;

	// C++17 이후 추가된 기능
	auto [level, exp] = my_tp;
	cout << level << "\t" << exp << endl;

	cout << endl;

	auto [a, b] = Div_0622_1(10, 5);
	cout << a << "\t" << b;

	return 0;
}