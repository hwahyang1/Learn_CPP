#include <iostream>
using namespace std;

int main_0421_4() {
	int dan = 0, num = 1;
	printf("몇 단? ");
	scanf_s("%d", &dan);

	while (num < 10) {
		printf("%dx%d=%d\n", dan, num, dan * num);
		num++;
	}

	return 0;
}