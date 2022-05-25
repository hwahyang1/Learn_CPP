#include <iostream>
using namespace std;

int main_0524_1() {
	char* pchar = new char;
	*pchar = 'a';

	cout << "메모리주소: " << (void*)pchar << "\t값: " << *pchar << endl;
	cout << "heap 크기: " << sizeof(*pchar) << endl;

	delete pchar;

	cout << endl;

	int* p = new int(10); // 생성과 동시에 초기화 가능
	cout << "*p: " << *p << endl;
	delete p;

	cout << endl;

	int* pary1 = new int[3]; // 배열도 할당 가능
	cout << "pary1[0]: " << pary1[0] << endl;
	delete[] pary1;

	int* pary2{ new int[3] {} }; // 이렇게도 할당 가능
	delete pary2;
	int* pary21{ new int[3] { 1, 2, 3 } }; // 이건 초기화
	delete pary21;

	cout << endl;

	char* pary3 = new char[20]{ "Hello World!" };
	cout << "pary3: " << pary3 << endl;
	delete pary3;

	return 0;
}