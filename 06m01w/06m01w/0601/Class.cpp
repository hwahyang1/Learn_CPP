#include <iostream>
using namespace std;

class A_0601_1 {
public:
	virtual void f1() {}
};

class B_0601_1 :public A_0601_1 {
public:
	virtual void f1() override final {}
};

class C_0601_1 final :public B_0601_1 {
public:
	//virtual void f1() override {} // 더 이상 override 불가능
};

//class D_0601_1 :public C_0601_1 {}; // 더 이상 상속 불가능