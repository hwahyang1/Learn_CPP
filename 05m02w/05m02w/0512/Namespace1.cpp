#include <iostream>

namespace AAA_0512_4 {
	void func1() {

	}

	void func2() {

	}
}

namespace BBB_0512_4 {
	void func1() {

	}

	void func2() {

	}
}

/*namespace AAA {
	namespace BBB {
		namespace CCC {
			int num1;
			int num2;
		}
	}
}*/

namespace MyUtill_0512_4 {
	namespace MySpace1 {
		int number1;
		void Func1(void);
	}
	namespace MySpace2 {
		int number2;
		void Func2(void);
	}
}

int main_0512_4() {
	AAA_0512_4::/*범위지정 연산자*/func1();
	BBB_0512_4::func2();

	MyUtill_0512_4::MySpace1::number1 = 0;

	using namespace MyUtill_0512_4::MySpace2;
	number2 = 1;

	namespace MyUtillSpace = MyUtill_0512_4::MySpace1;
	MyUtillSpace::number1 = 1;

	return 0;
}