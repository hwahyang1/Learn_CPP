#include <iostream>
using namespace std;

int main_0421_8() {
	int total = 0;
	int num = 10;

	for (int i = 1; i <= num; i++)
		total += i;

	/*
	int i = 1;
	for (; i <= num; i++)
		total += i;*/

	/*
	int i = 1;
	for (; i <= num; ) {
		total += i;
		i++;
	}*/

	printf("%d\n", total);

	return 0;
}