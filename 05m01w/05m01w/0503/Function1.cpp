#include <iostream>
using namespace std;

int Add_0503_4(int num1, int num2) { // call-by-value (함수 파라미터를 값으로 넘김)
	int sum = 0;
	sum = num1 + num2;
	return sum;
}

void Swap1_0503_4(int* a, int* b) { // call-by-address (함수 파라미터를 주소로 넘김)
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void Swap2_0503_4(int& a, int& b) { // call-by-reference (함수 파라미터를 참조로 넘김 / 같은 주소를 가리키는 *일반* 변수를 만들어버림)
	int tmp = a;
	a = b;
	b = tmp;
}

int main_0503_4() {
	int num1 = 2, num2 = 3;

	int sum = Add_0503_4(num1, num2);
	cout << sum << endl;

	cout << endl;

	cout << num1 << " " << num2 << endl;
	Swap1_0503_4(&num1, &num2);
	cout << num1 << " " << num2 << endl;

	cout << endl;

	cout << num1 << " " << num2 << endl;
	Swap2_0503_4(num1, num2);
	cout << num1 << " " << num2 << endl;
	
	return 0;
}