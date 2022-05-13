#include <iostream>
using namespace std;

int main_0513_1() {
	/* 정적 할당 */
	char name[20];

	/* 동적 할당 (C) */
	int* ptr1 = (int*)malloc(sizeof(int));
	*ptr1 = 1;
	free(ptr1); // 이거 안해주면 스코프를 벗어나든 말든 프로그램 종료시까지 유지됨


	int* ptr2 = (int*)malloc(sizeof(int) * 5);
	ptr2[0] = 1;
	ptr2[1] = 2;
	ptr2[2] = 3;
	ptr2[3] = 4;
	ptr2[4] = 5;
	free(ptr2);

	/* 동적 할당 (CPP) */
	int* ptr3 = new int;
	delete ptr3;

	int* ptr4 = new int[5];
	ptr4[0] = 0;
	delete[] ptr4;


	return 0;
}