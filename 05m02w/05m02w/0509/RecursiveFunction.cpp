#include <iostream>
using namespace std;

int Factorial_0509_3(int n) {
	if (n == 0) return 1;

	return n * Factorial_0509_3(n - 1);
}

int main_0509_3() {
	printf("1! == %d\n", Factorial_0509_3(1));
	printf("2! == %d\n", Factorial_0509_3(2));
	printf("3! == %d\n", Factorial_0509_3(3));
	printf("9! == %d\n", Factorial_0509_3(9));

	return 0;
}