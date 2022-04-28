#include <iostream>
using namespace std;

int main_0427_2() {
	// * 로 빈 사각형 출력
	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == 1 || i == n || j == 1 || j == n) {
				printf("* ");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}

	cout << endl;

	// 약수 구하기............
	int count = 0;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		if ((n % i) == 0) {
			cout << i << endl;
			count++;
		}
	}

	cout << endl;

	// 두 값 교환 (임시변수 없이)
	int a = 2, b = 3;

	cout << a << " " << b << endl;

	a = a - b;
	b = a + b; // (a - b) + b == a
	a = b - a; // a - (a - b) == b

	cout << a << " " << b << endl;

	return 0;
}