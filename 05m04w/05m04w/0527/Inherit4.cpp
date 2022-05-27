#include <iostream>
using namespace std;

class CBase_0527_4 {
public:
	CBase_0527_4() {}
	void Func() { cout << "CBase Func()" << endl; }
};

class CDerived_0527_4 :public CBase_0527_4 {
public:
	CDerived_0527_4() {}
	void Func() { cout << "CDerived Func()" << endl; }
};

int main_0527_4() {
	// 업캐스팅은 암시적 변환 가능 (메모리 용량이 큰 쪽에서 -> 작은 쪽으로)
	CBase_0527_4* base = new CDerived_0527_4();
	base->Func();

	// 다운캐스팅은 암시적 변환 불가능 (메모리 용량이 작은 쪽에서 -> 큰 쪽으로), 되도록 아래 코드처럼 업캐스팅 된것만 다운캐스팅 하기.
	CDerived_0527_4* derived = (CDerived_0527_4*) base;
	derived->Func();

	return 0;
}