#include <iostream>
using namespace std;

int main_0418_3() {
	int n1 = 10;
	int n2 = 3;

	printf("+: %d\n", n1 + n2);
	printf("-: %d\n", n1 - n2);
	printf("*: %d\n", n1 * n2);
	printf("/: %d\n", n1 / n2);
	printf("%%: %d\n", n1 % n2);

	cout << endl;

	double c = 3.0 / 10.0;
	//double c = (double)3 / 10;
	printf("%f\n", c);

	cout << endl;

	cout << (1 / 2 + 1 / 2) << endl;
	cout << (1.0 / 2.0 + 1.0 / 2.0) << endl;

	cout << endl;

	short num = 65536;
	cout << num << endl;

	cout << endl;

	cout << (1.001 + 1.001) << endl;
	cout << (1.000000001 + 1.000000001) << endl;

	cout << endl;

	int x = 5;
	int y = 0;
	cout << x / y << endl;

	return 0;
}