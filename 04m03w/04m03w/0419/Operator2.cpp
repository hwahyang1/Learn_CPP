#include <iostream>
using namespace std;

int main_0419_2() {
	int x = 0, nResult = 0;
	++x;
	printf("%d\n", x);
	--x;
	printf("%d\n", x);

	printf("%d\n", nResult = ++x);

	cout << endl;

	x = 10;
	x = x + 1;
	printf("%d\n", x);
	x += 1;
	printf("%d\n", x);
	++x;
	printf("%d\n", x);

	cout << endl;

	x = 5;
	int y = 10;

	printf("%d\n", x == y);
	printf("%d\n", x != y);
	printf("%d\n", x > 5);
	printf("%d\n", x >= 5);
	printf("%d\n", x < 5);
	printf("%d\n", x >= 10);

	printf("%d\n", y <= x + 5);

	cout << endl;

	int nInput = 0, result = 0;
	scanf_s("%d", &nInput);

	result = nInput < 4 || nInput >= 60;
	printf("Result: %d\n", result);

	cout << endl;

	int nAge = 25, nHeight = 160;
	printf("결과: %d\n", nAge >= 20 && nAge <= 30 && nHeight >= 150);
	printf("결과: %d\n", 0 < 1 || 0 < 1 && 2 < 3 || 4 < 5);

	cout << endl;

	x = 10, y = 20;
	int tmp = x;
	x = y;
	y = tmp;

	cout << x << " " << y << endl;

	cout << endl;

	int a = 5, b = 10;
	cout << (a == b) << endl;
	cout << (a != b) << endl;
	cout << (a > 5) << endl;
	cout << (a > 5) << endl;

	cout << endl;

	cout << (0 > 1 || 0 < 1 && 2 < 3 || 4 < 5) << endl;

	cout << endl;

	int nData = 10;
	printf("%d, %d\n", ++nData, sizeof(nData + 10.0));

	cout << endl;

	nInput = 0;
	int bResult = 0;
	cin >> nInput;
	bResult = nInput < 10 || nInput > 99;
	cout << bResult << endl;
}