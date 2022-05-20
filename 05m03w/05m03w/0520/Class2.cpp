#include <iostream>
using namespace std;

class StaticTest_0520_2 {
	static int a;
	int b;
public:
	StaticTest_0520_2();
	static void SetA(int new_a);
	static int GetA();
};

int StaticTest_0520_2::a = 10;
StaticTest_0520_2::StaticTest_0520_2() {
	b = 20;
}
void StaticTest_0520_2::SetA(int new_a) { a = new_a; }
int StaticTest_0520_2::GetA() { return a; }

int main_0520_2() {
	cout << "StaticTest_0520_3::GetA() -> " << StaticTest_0520_2::GetA() << endl << endl;

	StaticTest_0520_2 s1, s2;
	s1.SetA(20);
	cout << "s1.GetA() -> " << s1.GetA() << endl;
	cout << "s2.GetA() -> " << s2.GetA() << endl;

	return 0;
}