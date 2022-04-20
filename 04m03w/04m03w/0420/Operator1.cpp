#include <iostream>
using namespace std;

int main_0420_1() {
	int x = 10, y = 20;
	int temp = x;
	x = y;
	y = temp;

	cout << x << " " << y << endl;

	cout << endl;

	cout << (2 + 3 * 2 + 3) << endl;
	cout << 1 / 3 << endl;
	cout << (10 / 3) << (10 % 3) << endl;

	cout << endl;
	
	// 참고: 부등식에서의 내부 연산
	// a > b
	// 내부 처리: a - b > 0

	int n = 7;

	cout << (n % 2 == 0) << endl;
	cout << (n % 3 == 0) << endl;

	cout << endl;

	x = 0;

	x = 4;
	cout << x << endl;

	x -= 2;
	cout << x << endl;

	// x =- 2; 도 아래와 같이 취급
	x = -2;
	cout << x << endl;

	// x += 1;
	x = x + + 1;
	cout << x << endl;

	// x -= 1;
	x = x + -1;
	cout << x << endl;

	cout << endl;

	x = 0;
	int nResult = 0;
	printf("%d\n", nResult = ++x);

	x = 0, nResult = 0;
	printf("%d\n", nResult = x++);

	cout << endl;

	x = 5, y = 10;
	printf("%d\n", y <= x + 5); // 의외로 사칙연산 우선순위가 높음. 따라서 5 먼저 더하고 부등식 계산함

	cout << endl;

	int nInput = 0, result = 0;
	scanf_s("%d", &nInput);
	result = nInput < 4 || nInput >= 60;
	printf("Result: %d\n", result);

	cout << endl;

	// 인터프리터가 이런거 왜하냐고 욕합니다.
	cout << (0 > 1 || 0 < 1 && 2 < 3 || 4 < 5) << endl;

	return 0;
}