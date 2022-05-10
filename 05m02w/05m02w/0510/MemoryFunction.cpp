#include <iostream>
using namespace std;

int main_0510_7() {
	// 정적 할당
	int num1 = 20;

	int* ptr1;
	ptr1 = &num1;

	// 동적 할당
	int* ptr2;
	ptr2 = (int*)malloc(sizeof(int));

	printf("%p\n", ptr1);
	printf("%p\n", ptr2);

	free(ptr2);

	return 0;
}