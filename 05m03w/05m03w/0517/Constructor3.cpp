#include <iostream>
using namespace std;

class SimpleClass_0517_4 {
	int num1;
	int num2;
public:
	SimpleClass_0517_4() : num1(0), num2(0) {
		
	}
	SimpleClass_0517_4(int a, int b = 0) : num1(a), num2(b) {

	}
	void Show() const;
};

void SimpleClass_0517_4::Show() const {
	cout << num1 << " " << num2 << endl;
}

int main_0517_4() {
	SimpleClass_0517_4 sc1;
	sc1.Show();

	SimpleClass_0517_4 sc2(1, 2);
	sc2.Show();

	SimpleClass_0517_4 sc3(1);
	sc3.Show();

	return 0;
}