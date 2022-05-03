#include <iostream>
using namespace std;

void SimpleFunc_0503_3(int* ptr, int len) {
	//printf("%d %d %d\n", *(ptr + 0), *(ptr + 1), *(ptr + 2));
	//printf("%d %d %d\n", ptr[0], ptr[1], ptr[2]);

	for (size_t i = 0; i < len; i++)
	{
		printf("%d ", ptr[i]);
	}

	printf("\n");
}

int main_0503_3() {
	int arr[3] = { 1, 2, 3 };
	SimpleFunc_0503_3(arr, sizeof(arr) / sizeof(int));

	return 0;
}