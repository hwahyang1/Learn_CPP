#include <iostream>
using namespace std;

int main_0425_5() {
	// 1~50
	// 3의 배수, 5의 배수 출력
	// 3과 5의 공배수 출력

	for (int i = 1; i <= 50; i++) {
		if (i % 3 == 0 && i % 5 == 0) printf("%d(은)는 3과 5의 공배수입니다.\n", i);
		else if (i % 3 == 0) printf("%d(은)는 3의 배수입니다.\n", i);
		else if (i % 5 == 0) printf("%d(은)는 5의 배수입니다.\n", i);
	}

	cout << endl;

	// 정수를 입력 받아 절댓값 출력
	int n;

	cout << "절댓값을 출력합니다. 수를 입력하세요: ";
	cin >> n;

	if (n < 0) n = -n;
	cout << "절댓값은 " << n << endl;

	cout << endl;

	// 1보다 큰 수 입력받아 1부터 해당 수까지 곱
	int n2;
	int result = 1;
	cout << "입력한 수까지 곱셈을 시행합니다. 수를 입력하세요: ";
	cin >> n2;

	for (int i = 1; i <= n2; i++) {
		result *= i;
	}

	cout << "1부터 " << n2 << "까지의 곱셈값은 " << result << "입니다." << endl;

	return 0;
}