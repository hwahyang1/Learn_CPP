#include <iostream>
using namespace std;

void PrintHelloWorld_0502_1() {
	cout << "Hello world" << endl;
}

void PrintAddOne_0502_1(int n) {
	cout << n + 1 << endl;
}

int Abs_0502_1(int num) {
	if (num < 0) return -num;
	return num;
}

int Add_0502_1(int a, int b) {
	return a + b;
}

double Add_0502_1(double a, double b) {
	return a + b;
}

int GetNumber_0502_1() {
	int input;
	cin >> input;
	return input;
}

void PrintOddEven_0502_1(int n) {
	if (n % 2 == 0) cout << "¦��" << endl;
	else cout << "Ȧ��" << endl;
}

bool IsOver100_0502_1(int n) {
	if (n > 100) return true;
	return false;
}

double Average_0502_1(double n1, double n2, double n3) {
	return (n1 + n2 + n3) / 3;
}

int Sum_0502_1(int n) {
	int sum = 0;

	for (size_t i = 1; i <= n; i++)
	{
		sum += i;
	}

	return sum;
}
 
int main_0502_1() {
	// "Hello world"�� ȭ�鿡 ����ϴ� �Լ� �ۼ�
	PrintHelloWorld_0502_1();

	cout << endl;

	// �� �Լ��� 10�� ������
	for (int i = 0; i < 10; i++)
	{
		PrintHelloWorld_0502_1();
	}

	cout << endl;

	// ������ �Ű������� �Է� -> �ϳ� �� ū ���ڸ� ȭ�鿡 ����ϴ� �Լ� �ۼ�
	PrintAddOne_0502_1(5);

	cout << endl;

	// ������ �Ű������� �Է� -> ���밪���� �ٲپ� �����ϴ� �Լ� �ۼ�
	cout << Abs_0502_1(-1) << endl;
	cout << Abs_0502_1(3) << endl;
	cout << Abs_0502_1(-5) << endl;

	cout << endl;

	// �ΰ��� ������ �Ű������� �Է¹޾� ���� ���� �����ϴ� �Լ� �ۼ�
	cout << Add_0502_1(1, 2) << endl;
	cout << Add_0502_1(2, -3) << endl;
	cout << Add_0502_1(1.5, 2.8) << endl;
	cout << Add_0502_1(2.3, -3.7) << endl;

	cout << endl;

	// Ư�� ������ ���ڸ� Ű����� �Է¹޾� �����ϴ� �Լ� �ۼ�
	cout << GetNumber_0502_1() << endl;

	cout << endl;

	// ���ڸ� �Ű������� �޾� Ȧ������ ¦������ ����ϴ� �Լ� �ۼ�
	PrintOddEven_0502_1(1);
	PrintOddEven_0502_1(2);

	cout << endl;

	// ������ �Ű������� �޾� 100���� ũ�� true, �ƴϸ� false�� �����ϴ� �Լ� �ۼ�
	cout << IsOver100_0502_1(99) << endl;
	cout << IsOver100_0502_1(120) << endl;

	cout << endl;

	// ������ �Ǽ��� �Ű������� �Է¹޾� ����� �����ϴ� �Լ� �ۼ�
	cout << Average_0502_1(1.0, 2.0, 3.5) << endl;

	cout << endl;

	// 0���� ū ������ �Է��ϸ� 1���� �� ���ڱ��� ���� �����ϴ� �Լ� �ۼ�
	cout << Sum_0502_1(10) << endl;
	cout << Sum_0502_1(100) << endl;

	return 0;
}