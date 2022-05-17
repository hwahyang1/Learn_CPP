#include <iostream>
using namespace std;

class ClassA_0517_2 {
	int m, n, o;
public:
	ClassA_0517_2():m(1), n(3)/*이렇게 초기화 가능*/ { // 생성자
		cout << "생성자" << endl;

		o = 0; // 보통 이렇게 초기화 용도로 사용
	}
	~ClassA_0517_2() { // 소멸자
		cout << "소멸자" << endl;
	}
};

int main_0517_2() {
	ClassA_0517_2 a;

	return 0;
}