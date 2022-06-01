/*#include <iostream>
using namespace std;

class Myclass_0601_4 {
public:
	int num = 0;
	Myclass_0601_4() {}
	Myclass_0601_4(int n) :num(n) {}

	Myclass_0601_4 operator+(const Myclass_0601_4& ref) {
		Myclass_0601_4 x(num + ref.num);
		return x;
	}

	Myclass_0601_4 operator-(const Myclass_0601_4& ref) {
		Myclass_0601_4 x(num - ref.num);
		return x;
	}

	friend ostream& operator<<(ostream& os, const Myclass_0601_4& ref);
};

ostream& operator<<(ostream& os, const Myclass_0601_4& ref) {
	os << ref.num << endl;
	return os;
}

int main_0601_4() {
	Myclass_0601_4 a(1);
	Myclass_0601_4 b(2);

	//int c = a.num + b.num;
	Myclass_0601_4 c1 = a + b;

	Myclass_0601_4 c2 = a - b;

	cout << a << endl;

	return 0;
}*/