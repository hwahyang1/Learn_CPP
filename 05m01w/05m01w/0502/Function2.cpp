#include <iostream>
using namespace std;

// ���� ����
// ���� ������ �Լ� ������ �־�� �ϴ� CPP Ư���� �̷��� ���� ���� �صδ� ��쵵 ����
int Add_0502_2(int num1, int num2 = 5); // �⺻���� �����ʺ��� �������� ����

int main() {
	cout << Add_0502_2(1, 1) << endl;
	cout << Add_0502_2(1) << endl;

	return 0;
}

int Add_0502_2(int num1, int num2) {
	return num1 + num2;
}