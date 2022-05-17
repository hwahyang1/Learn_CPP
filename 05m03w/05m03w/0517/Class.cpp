#include <iostream>
using namespace std;

class MyClass_0517_1 {
private:
	int num = 0;
public:
	void Show() const // const 함수 (나는 변수값을 변경하지 않을거야!)
	{
		//num++; // 안됨
		cout << num << endl;
	}
};

int main_0517_1() {
	MyClass_0517_1 myclass;
	myclass.Show();

	return 0;
}