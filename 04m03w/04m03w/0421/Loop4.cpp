#include <iostream>
using namespace std;

int main_0421_6() {
	int total = 0, num = 0;
	float avg = 0.0;
	int count = 0;

	do {
		printf("정수 입력: ");
		scanf_s("%d", &num);
		if (num != 0) count++;
		total += num;
	} while (num != 0);

	printf("합계: %d\n", total);
	avg = total / (double)count;
	printf("평균: %.2d\n", avg);

	return 0;
}