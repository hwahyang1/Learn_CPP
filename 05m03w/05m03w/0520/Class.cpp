#include <iostream>
using namespace std;

class StaticTest_0520_1 {
private:
	static int a; // 정적 멤버 변수
	int b = 1;
public:
	StaticTest_0520_1();
	static void Print(); // 정적 멤버 함수
};

int StaticTest_0520_1::a = 1; // 초기화는 밖에서만 가능

StaticTest_0520_1::StaticTest_0520_1() {
	a++;
	b++;
}

void StaticTest_0520_1::Print() {
	cout << a << endl;
	//cout << b << endl; // 이건 안됨 (C#과 동일)
}

int main_0520_1() {
	StaticTest_0520_1::Print(); // 이것도 됨

	StaticTest_0520_1 a;
	StaticTest_0520_1 b;
	StaticTest_0520_1 c;
	a.Print();

	return 0;
}