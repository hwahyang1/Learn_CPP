#include <iostream>
using namespace std;

class MyClass_0518_1 {
public:
	int a = 0;

	MyClass_0518_1() {}
	MyClass_0518_1(int n) :a(n) {}
};

int main_0518_1() {
	MyClass_0518_1 myclass[3]; // 객체 배열
	myclass[0].a = 1;
	myclass[1].a = 2;
	myclass[2].a = 3;

	/*MyClass_0518_1 obj1 = {0};
	MyClass_0518_1 obj2 = { 1 };
	MyClass_0518_1 obj3 = { 2 };
	MyClass_0518_1 objList[3] = { obj1, obj2, obj3 };*/ // 안될건 없음
	MyClass_0518_1 objList[3] = { MyClass_0518_1(1), MyClass_0518_1(2), MyClass_0518_1(3) };

	cout << objList[1].a << endl;

	return 0;
}