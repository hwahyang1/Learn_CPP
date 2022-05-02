#include <iostream>
using namespace std;

// 전방 선언
// 위에 무조건 함수 선언이 있어야 하는 CPP 특성상 이렇게 위에 선언만 해두는 경우도 있음
int Add_0502_2(int num1, int num2 = 5); // 기본값은 오른쪽부터 왼쪽으로 선언

int main() {
	cout << Add_0502_2(1, 1) << endl;
	cout << Add_0502_2(1) << endl;

	return 0;
}

int Add_0502_2(int num1, int num2) {
	return num1 + num2;
}