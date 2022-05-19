#include <iostream>
using namespace std;

class CTest_0519_4 {
	int num;
public:
	CTest_0519_4() :num(0) {
		cout << "address = " << this << endl;
	}
	CTest_0519_4(int n) :num(n) {

	}
	CTest_0519_4& ShowData() {
		cout << num << endl;
		return *this;
	}
	CTest_0519_4* GetPointer() { return this; }
};

int main_0519_4() {
	CTest_0519_4 x;

	return 0;
}