#include <iostream>
using namespace std;

int main_0425_4() {
	int n;
	cin >> n;

	cout << endl;

	// 삼각형1
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			printf("* ");
		}
		printf("\n");
	}

	cout << endl;

	// 삼각형2
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			printf("* ");
		}
		printf("\n");
	}

	cout << endl;

	// 피라미드
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) printf(" ");
		for (int k = 0; k < 2 * i + 1; k++) printf("*");
		printf("\n");
	}

	cout << endl;

	// 마름모
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) printf(" ");
		for (int k = 0; k < 2 * i + 1; k++) printf("*");
		printf("\n");
	}
	for (int i = n - 1; i >= 0; i--) {
		for (int j = 0; j < n - i - 1; j++) printf(" ");
		for (int k = 0; k < 2 * i + 1; k++) printf("*");
		printf("\n");
	}

	return 0;
}