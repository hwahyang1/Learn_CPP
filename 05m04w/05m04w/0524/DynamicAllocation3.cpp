#include <iostream>
using namespace std;

class CTest_0524_5 {
private:
	int num;
public:
	void setNum(int n) { num = n; }
	int getNum() { return num; }
};

int main_0524_5() {
	/* 정적할당 */
	CTest_0524_5 t1;
	t1.setNum(11);
	cout << t1.getNum() << endl;

	//cout << t1; // 인스턴스 자체를 출력하는 것은 안됨
	cout << &t1 << endl;

	cout << endl;

	/* 동적할당 */
	CTest_0524_5* t2;
	t2 = new CTest_0524_5();
	t2->setNum(22);

	cout << t2->getNum() << endl;
	cout << t2 << endl;

	delete t2;
	t2 = nullptr; // 이거 습관적으로 해주는게 실수 안함.

	return 0;
}