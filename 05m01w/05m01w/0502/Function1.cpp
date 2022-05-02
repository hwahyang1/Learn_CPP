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
	if (n % 2 == 0) cout << "짝수" << endl;
	else cout << "홀수" << endl;
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
	// "Hello world"를 화면에 출력하는 함수 작성
	PrintHelloWorld_0502_1();

	cout << endl;

	// 위 함수를 10번 돌리기
	for (int i = 0; i < 10; i++)
	{
		PrintHelloWorld_0502_1();
	}

	cout << endl;

	// 정수를 매개변수로 입력 -> 하나 더 큰 숫자를 화면에 출력하는 함수 작성
	PrintAddOne_0502_1(5);

	cout << endl;

	// 정수를 매개변수로 입력 -> 절대값으로 바꾸어 리턴하는 함수 작성
	cout << Abs_0502_1(-1) << endl;
	cout << Abs_0502_1(3) << endl;
	cout << Abs_0502_1(-5) << endl;

	cout << endl;

	// 두개의 정수를 매개변수로 입력받아 더한 합을 리턴하는 함수 작성
	cout << Add_0502_1(1, 2) << endl;
	cout << Add_0502_1(2, -3) << endl;
	cout << Add_0502_1(1.5, 2.8) << endl;
	cout << Add_0502_1(2.3, -3.7) << endl;

	cout << endl;

	// 특정 변수에 숫자를 키보드로 입력받아 리턴하는 함수 작성
	cout << GetNumber_0502_1() << endl;

	cout << endl;

	// 숫자를 매개변수로 받아 홀수인지 짝수인지 출력하는 함수 작성
	PrintOddEven_0502_1(1);
	PrintOddEven_0502_1(2);

	cout << endl;

	// 정수를 매개변수로 받아 100보다 크면 true, 아니면 false를 리턴하는 함수 작성
	cout << IsOver100_0502_1(99) << endl;
	cout << IsOver100_0502_1(120) << endl;

	cout << endl;

	// 세개의 실수를 매개변수로 입력받아 평균을 리턴하는 함수 작성
	cout << Average_0502_1(1.0, 2.0, 3.5) << endl;

	cout << endl;

	// 0보다 큰 정수를 입력하면 1부터 그 숫자까지 합을 리턴하는 함수 작성
	cout << Sum_0502_1(10) << endl;
	cout << Sum_0502_1(100) << endl;

	return 0;
}