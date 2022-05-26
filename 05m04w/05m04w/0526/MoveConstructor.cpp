#include <iostream>
using namespace std;

class CTest_0526_2 {
	int nData = 0;
public:
	/* 얘네는 그냥 하나 만들때 같이 다 만드는게 나음 */
	CTest_0526_2() {
		cout << "CTest_0526_2() " << &(*this) << endl;
	}

	CTest_0526_2(const CTest_0526_2& val) { // 복사 생성자
		cout << "CTest_0526_2(const CTest_0526_2& val) " << &(*this) << endl;
		nData = val.nData;
	}
	CTest_0526_2& operator=(const CTest_0526_2& val) { // 복사 대입 연산자
		cout << "operator=(const CTest_0526_2& val) " << &(*this) << endl;
		nData = val.nData;
		return *this;
	}

	CTest_0526_2(CTest_0526_2&& val) noexcept/*예외 무시*/ { // 이동 생성자
		cout << "CTest_0526_2(CTest_0526_2&& val) " << &(*this) << endl;
		nData = val.nData; // 주소 치환
	}
	CTest_0526_2& operator=(const CTest_0526_2&& val) noexcept { // 이동 대입 연산자
		cout << "operator=(const CTest_0526_2&& val) " << &(*this) << endl;
		nData = val.nData;
		return *this;
	}

	~CTest_0526_2() {
		cout << "~CTest_0526_2() " << &(*this) << endl;
	}
};

int main_0526_2() {
	CTest_0526_2 a;
	CTest_0526_2 b;

	CTest_0526_2 c1(a); // 복사 생성자
	CTest_0526_2 c2 = a; // 복사 생성자

	CTest_0526_2 c3;
	c3 = a; // 대입 연산자

	return 0;
}