#include <iostream>
using namespace std;

class CBase_0531_4 {
	int baseNum = 0;
public:
	CBase_0531_4() {}
	virtual void Move() { cout << "CBase" << endl; }
};

class CDerived_0531_4 :public CBase_0531_4 {
	int derivNum = 0;
public:
	CDerived_0531_4() {}
	void Move() { cout << "CDerived" << endl; }
};

class CT_0531_4 : public CDerived_0531_4 {
public:
	CT_0531_4() {}
	void Move() { cout << "CT" << endl; }
};

int main_0531_4() {
	CBase_0531_4* base1 = new CDerived_0531_4();
	base1->Move();

	CBase_0531_4* base2 = new CT_0531_4();
	base2->Move();

	return 0;
}