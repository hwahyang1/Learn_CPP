#include <iostream>
using namespace std;

int main_0513_3() {
	int i;
	int* pi = (int*)malloc(sizeof(int) * 3);
	for (i = 0; i < 3; i++)
	{
		pi[i] = i * 4;
	}
	for (i = 0; i < 3; i++)
	{
		printf("pi[%d]: memory %d %d\n", i, &pi[i], pi[i]);
	}
	printf("----------------------\n");

	pi = (int*)realloc(pi, sizeof(int) * 5);
	for (i = 0; i < 5; i++)
	{
		pi[i] = i * 4;
	}
	for (i = 0; i < 5; i++)
	{
		printf("pi[%d]: memory %d %d\n", i, &pi[i], pi[i]);
	}
	printf("----------------------\n");

	free(pi);

	return 0;
}