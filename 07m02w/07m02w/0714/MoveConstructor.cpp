#include <iostream>
#include <vector>
using namespace std;

class A {
public:
	A() { cout << "일반 생성자 호출!" << endl; }
	A(const A& a) { cout << "복사 생성자 호출!" << endl; }
	A(A&& a) noexcept /* 이 코드는 예외를 던지지 않는다. vector에서 얘를 이동 생성자로 쓰려면 필요 */ { cout << "이동 생성자 호출!" << endl; }
};

int main_0714_1() {
	/* 자세한 내용은 배포자료 참고 */

	A a;
	cout << "-----------------" << endl;
	A b(a);
	cout << "-----------------" << endl;
	A c(move(a));

	cout << endl;

	vector<A> v; // 공간 확보때문에 필연적으로 복사 생성자가 호출됨
	v.push_back(a);
	v.push_back(a);

	return 0;
}