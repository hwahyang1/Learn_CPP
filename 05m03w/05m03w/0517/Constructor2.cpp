#include <iostream>
using namespace std;

class ClassA_0517_3 {
	int m, n;
public:
	ClassA_0517_3(int a) {
		m = a;
	}
	ClassA_0517_3(int a, int b) { // 얘도 오버로딩 됨
		m = a;
		n = b;
	}
};

int main_0517_3() {
	ClassA_0517_3 x(5);
	ClassA_0517_3 x2(10, 4);

	return 0;
}