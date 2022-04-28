#include <iostream>
using namespace std;

int main_0428_4() {
	// int 데이터 가리키는 주소를 보관하기 위한 포인터 선언
	int* p = nullptr;
	int a = 3;
	p = &a;

	// 아래 데이터를 가리키는 주소를 보관하기 위한 포인터 선언
	double number = 36.5;
	double* pnumber = &number;

	// 아래와 같은 코드를 실행했을 때 출력값?
	int num = 0;
	int* pnum = &num;
	*pnum = 2;
	cout << num << endl;

	cout << endl;

	// 아래와 같은 코드를 실행했을 때 출력값?
	cout << sizeof(double*) << endl;

	cout << endl;

	// 아래 닉네임을 보관하기 위한 포인터 변수 선언
	char nickname[20] = "superhero";
	char* panme = nickname;

	// 아래 포인터 배열의 두번째 문자열을 출력하는 코드 작성
	const char* strArr[] = { "aaa", "bbb", "ccc" };
	cout << strArr[1] << endl;

	cout << endl;

	// 다음과 같은 코드를 실행했을 때 예상되는 출력값?
	int Arr[3] = { 10, 20, 30 };
	int* ptr = Arr;

	cout << *(ptr + 1) << endl;

	return 0;
}