#include <iostream>
#include <bitset>
using namespace std;

int main_0420_3() {
	// 2진수 출력
	unsigned short bnum = 0b1111;
	cout << bitset<4>(bnum) << endl;

	// 16진수 출력
	unsigned short inputNum = 0xFF;
	cout << "숫자 입력 (0 - 255): ";
	cin >> inputNum;

	bitset<8> inputBits = inputNum;
	cout << inputNum << "의 이진수 표현: " << inputBits << endl;
	bitset<8> bitNOT = ~inputNum;
	cout << "~" << inputBits << " = " << bitNOT << endl;

	bitset<8> bitAND = 0x0f & inputNum;
	cout << "00001111 & " << inputBits << " = " << bitAND << endl;

	bitset<8> bitOR = 0x0f | inputNum;
	cout << "00001111 | " << inputBits << " = " << bitOR << endl;

	bitset<8> bitXOR = 0x0f ^ inputNum;
	cout << "00001111 ^ " << inputBits << " = " << bitXOR << endl;

	cout << endl;

	int nData = 0x11223344;
	printf("%08X\n", nData & 0xFF000000);
	printf("%08X\n", nData & 0x00FF0000);
	printf("%08X\n", nData & 0x0000FF00);
	printf("%08X\n", nData & 0x000000FF);

	cout << endl;

	int address = 0xFFFFFF00;
	cout << ((address & 0xFF000000) >> 24) << ".";
	cout << ((address & 0xFF000000) >> 16) << ".";
	cout << ((address & 0xFF000000) >> 8) << ".";
	cout << ((address & 0xFF000000) >> 0) << endl;

	cout << endl;

	int left = 1;
	int right = 2;
	int up = 4;
	int down = 8;

	cout << (5 & (left)) << endl;
	cout << (5 & (left | right)) << endl;
	cout << (5 & (left | right | up)) << endl;

	return 0;
}