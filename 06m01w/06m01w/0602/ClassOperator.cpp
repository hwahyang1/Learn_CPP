#include <iostream>
using namespace std;

class CMydata_0602_1 {
	int m_nData = 0;
public:
	CMydata_0602_1(int nParam) :m_nData(nParam) {}
	operator int() { return m_nData; } // CMydata -> int 변환 허용

	int operator++() {
		return ++m_nData;
	}

	int operator++(int) { // 후위 중가 연산자
		int t = m_nData;
		++m_nData;
		return t;
	}
};

int main_0602_1() {
	CMydata_0602_1 a(10);
	cout << ++a << endl;
	cout << a++ << endl;
	cout << a << endl;

	return 0;
}