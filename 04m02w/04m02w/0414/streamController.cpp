#include <iostream>
#include <iomanip>
using namespace std;

int main_0414_9() {
	int a = 10000;

	cout << setw(8) << a << endl;
	cout << setw(10) << a << endl;

	// ���� (���� �÷���)
	cout << right << setw(10) << a << "." << endl;
	cout << left << setw(10) << a << "." << endl;

	// �ε��Ҽ��� ��ȿ �ڸ� ����
	double b = 3.123497;
	cout << setiosflags(ios::fixed);
	cout << setprecision(2) << b << endl; // 2�ڸ���
	cout << setw(10) << setprecision(3) << b << endl; // 10ĭ Ȯ�� �� 3�ڸ���
	cout << setw(10) << setprecision(2) << b << endl; // 10ĭ Ȯ�� �� 2�ڸ���
	cout << setw(10) << setprecision(2) << setfill('0') << b << endl; // 10ĭ Ȯ�� �� 2�ڸ���, ���ڸ��� 0����

	// ���� ���� (���� �� ���ӵ�)
	int num = 100;
	cout << "8��: " << oct << num << endl;
	cout << "16��: " << hex << num << endl;
	cout << "10��: " << dec << num << endl;

	return 0;
}