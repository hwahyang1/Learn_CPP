#include <iostream>
using namespace std;

int main_0624_2() {
	//[](Args){ Code }(Input Args)
	[] { cout << "Hello World" << endl; }(); // 매개변수 없음
	[]() { cout << "Hello" << endl; }(); // 기본형
	[]() -> void { cout << "World" << endl; }(); // 반환값 있을 경우

	cout << endl;

	[](int x) { cout << x << endl; }(7);
	auto prn = [](int x) { cout << x << endl; }; // 변수에 담아서 쓰는 경우
	prn(2);

	cout << endl;

	//int res = [](int a) { if (a < 0) return -a; return a; }(-5); // 리턴 타입 지정 안해도 되긴 함
	int abs = [](int a) -> int { if (a < 0) return -a; return a; }(-5);
	cout << abs << endl;

	cout << endl;

	cout << [](int x) -> bool { return x % 2 == 0; } (6) << endl; // isEven

	cout << endl;

	auto add = [](int a, int b) -> int { return a + b; };
	cout << add(1, 2) << endl;

	// 놀랍게도 굴러가는 코드임 (버그 발생 / 아무 동작도 안함으로 보기 어려움)
	[]() {}();

	return 0;
}