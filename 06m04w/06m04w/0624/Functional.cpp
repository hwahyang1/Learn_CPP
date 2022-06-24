#include <iostream>
#include <functional> // 함수 객체 라이브러리
using namespace std;

int Add_0624_3(int a, int b) { return a + b; }

struct AddObj_0624_3 {
	int operator()(int a, int b) { return a + b; }
};

int main_0624_3() {
	// 함수 객체 (특정 형식의 코드를 정의) -> Lambda식에서 auto를 남발해서 생기는 문제 해결
	function<int(int, int)> f2 = Add_0624_3;
	function<int(int, int)> f3 = [](int a, int b) { return a + b; };
	function<int(int, int)> f4 = AddObj_0624_3();

	cout << f2(3, 4) << endl;
	cout << f3(3, 8) << endl;
	cout << f4(4, 8) << endl;

	return 0;
}