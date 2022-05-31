#include <iostream>
using namespace std;

class C2004_0531_5 { // 컨셉: 아무튼 2004년에 만든 클래스
public:
	virtual void OnFunc() {
		cout << "C2004 OnFunc" << endl;
	}
	void C2004Func() {
		OnFunc(); // called by framework (가상함수 호출), 미래에 만들어질 함수를 호출함.
		cout << "C2004Func" << endl;
	}
};

class C2020_0531_5 :public C2004_0531_5 { // 컨셉: 아무튼 2020년에 만든 클래스
public:
	void OnFunc() {
		cout << "C2020 OnFunc" << endl;
	}
	void C2020Func() {
		C2004_0531_5::C2004Func(); // 가상함수 호출시점을 알고서 써야함!!
		cout << "C2020Func" << endl;
	}
};

int main_0531_5() {
	C2020_0531_5* p2020 = new C2020_0531_5();
	C2004_0531_5* p2004 = p2020;

	// 아랫부분 못씀

	return 0;
}