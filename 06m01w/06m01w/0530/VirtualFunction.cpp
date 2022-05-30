#include <iostream>
using namespace std;

class CBase_0530_1 {
public:
	CBase_0530_1() {}

	virtual void Func() { // 가상함수(가상테이블)
		cout << "CBase Func()" << endl;
	}
};

class CDerived_0530_1 : public CBase_0530_1 {
public:
	CDerived_0530_1() {}

	void Func() { // 가상함수를 Override한 함수는 자동으로 가상함수 처리됨
		cout << "CDerived Func()" << endl;
	}
};

int main_0530_1() {
	CDerived_0530_1 z;
	CBase_0530_1* p = &z;
	p->Func(); // 마지막 Override 된 함수 따라감

	return 0;
}