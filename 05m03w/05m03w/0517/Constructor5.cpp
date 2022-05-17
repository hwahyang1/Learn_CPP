#include <iostream>
using namespace std;

class ClassA_0517_6 {
public:
	void ShowYourName() { cout << "ClassA" << endl; }
};

class ClassB_0517_6 {
	ClassA_0517_6& ref;
	const int& num;

public:
	ClassB_0517_6(ClassA_0517_6& r, const int& n) :ref(r), num(n) {
		cout << "ClassB" << endl;
	}
	void ShowYourName() {
		ref.ShowYourName();
		cout << "and I ref num " << num << endl;
	}
};

int main_0517_6() {
	ClassA_0517_6 a;
	ClassB_0517_6 x(a, 1);

	x.ShowYourName();

	return 0;
}