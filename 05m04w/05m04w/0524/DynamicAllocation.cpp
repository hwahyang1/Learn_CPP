#include <iostream>
using namespace std;

int main_0524_1() {
	char* pchar = new char;
	*pchar = 'a';

	cout << "�޸��ּ�: " << (void*)pchar << "\t��: " << *pchar << endl;
	cout << "heap ũ��: " << sizeof(*pchar) << endl;

	delete pchar;

	cout << endl;

	int* p = new int(10); // ������ ���ÿ� �ʱ�ȭ ����
	cout << "*p: " << *p << endl;
	delete p;

	cout << endl;

	int* pary1 = new int[3]; // �迭�� �Ҵ� ����
	cout << "pary1[0]: " << pary1[0] << endl;
	delete[] pary1;

	int* pary2{ new int[3] {} }; // �̷��Ե� �Ҵ� ����
	delete pary2;
	int* pary21{ new int[3] { 1, 2, 3 } }; // �̰� �ʱ�ȭ
	delete pary21;

	cout << endl;

	char* pary3 = new char[20]{ "Hello World!" };
	cout << "pary3: " << pary3 << endl;
	delete pary3;

	return 0;
}