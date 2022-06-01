#include <iostream>
using namespace std;

class Base_0531_3 {
	int num1;
protected:
	int num2;
public:
	int num3;

	Base_0531_3() :num1(1), num2(2), num3(3) {}
};

class Derived_0531_3 :protected/*상속된 애들의 제한자, public -> protected로 강등됨*/ Base_0531_3 {

};

int main_0531_3() {
	Derived_0531_3 drv;
	//cout << drv.num3 << endl; // Derived로 넘어가는 과정에서 protected로 강등되어버림

	return 0;
}