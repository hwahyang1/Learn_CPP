#include <iostream>
using namespace std;


void SimpleAdder_0510_6(int n1, int n2) {
	printf("%d + %d = %d\n", n1, n2, n1 + n2);
}
void ShowString_0510_6(const char* str) {
	printf("%s\n", str);
}

void Func1_0510_6(int _param) {
	cout << "Func1 " << _param << endl;
}
void Func2_0510_6(int _param) {
	cout << "Func2 " << _param << endl;
}
void Func3_0510_6(int _param) {
	cout << "Func3 " << _param << endl;
}

// Callback Function
// "얘 좀 실행해 줘" 라고 다른 함수한테 인자로 함수를 넘겨줌. 이 경우 main()에서 MyCompare(...)을 직접 실행 안하고 qsort(...)가 대신 실행해줌
int MyCompare_0510_6(const void* pParam1, const void* pParam2) {
	return *(int*)pParam1 - *(int*)pParam2;
}

int main_0510_6() {
	void (*fp1)(int, int) = SimpleAdder_0510_6;
	void (*fp2)(const char*) = ShowString_0510_6;

	fp1(2, 5);
	fp2("Hello");

	cout << endl;

	void (*pfList[3])(int) = { Func1_0510_6, Func2_0510_6, Func3_0510_6 };
	pfList[1](7);

	cout << endl;

	int aList[5] = { 30, 10, 40, 50, 20 };
	qsort(aList, 5, sizeof(int), MyCompare_0510_6);

	for (int i = 0; i < 5; ++i)
	{
		printf("%d\t", aList[i]);
	}
	printf("\n");

	return 0;
}