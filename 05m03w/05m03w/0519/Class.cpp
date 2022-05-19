#include <iostream>
using namespace std;

class MyClass_0519_1 {
	int num = 0;
public:
	MyClass_0519_1(int a) :num(a) {}
	void Add() { ++num; }
	void Show() { cout << num << endl; }
};

MyClass_0519_1 FuncByValue(MyClass_0519_1 obj) {
	obj.Add();
	return obj;
}

MyClass_0519_1* FuncByAddress(MyClass_0519_1* obj) {
	obj->Add();
	return obj;
}

MyClass_0519_1& FuncByReference(MyClass_0519_1& obj) {
	obj.Add();
	return obj;
}

int main_0519_1() {
	MyClass_0519_1 x(1);
	x.Show();

	MyClass_0519_1* p = &x;
	p->Show();

	cout << endl;

	MyClass_0519_1 a = FuncByValue(x);
	a.Show();

	MyClass_0519_1* b = FuncByAddress(&x);
	b->Show();

	MyClass_0519_1 c = FuncByReference(x);
	c.Show();

	return 0;
}