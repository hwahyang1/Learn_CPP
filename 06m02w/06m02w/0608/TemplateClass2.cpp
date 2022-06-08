#include <iostream>
using namespace std;

template <typename T1, typename T2>
class MySimple_0608_3 {
public:
	void WhoAreYou() {
		cout << "size of T1: " << sizeof(T1) << endl;
		cout << "size of T2: " << sizeof(T2) << endl;
		cout << "<typename T1, typename T2>" << endl;
	}
};

template <>
class MySimple_0608_3<int, double> { // 전체 특수화
public:
	void WhoAreYou() {
		cout << "size of int: " << sizeof(int) << endl;
		cout << "size of double: " << sizeof(double) << endl;
		cout << "<int, double>" << endl;
	}
};

template <typename T1>
class MySimple_0608_3<T1, double> { // 부분 특수화
public:
	void WhoAreYou() {
		cout << "size of T1: " << sizeof(T1) << endl;
		cout << "size of double: " << sizeof(double) << endl;
		cout << "<typename T1, double>" << endl;
	}
};

int main_0608_3() {
	MySimple_0608_3<char, double> obj1;
	obj1.WhoAreYou();

	MySimple_0608_3<int, long> obj2;
	obj2.WhoAreYou();

	MySimple_0608_3<int, double> obj3;
	obj3.WhoAreYou();

	return 0;
}