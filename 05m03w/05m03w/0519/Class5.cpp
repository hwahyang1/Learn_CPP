#include <iostream>
using namespace std;

class CTest_0519_7 {
public:
	CTest_0519_7() {
		cout << "CTest_0519_7()" << endl;
	}
};

//CTest_0519_7 a; // main보다 먼저 생성되는 클래스 생성자 -> main보다 얘 생성자가 먼저 불림

int main_0519_7() {
	cout << "main" << endl;

	return 0;
}