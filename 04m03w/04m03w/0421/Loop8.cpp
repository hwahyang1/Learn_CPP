#include <iostream>
using namespace std;

int main_0421_10() {
	for (size_t i = 1; i <= 10; i++)
	{
		if (i % 2 == 1) continue; // 다음 조건검사
		if (i == 6) break; // for문 나감
		cout << i << endl;
	}

	return 0;
}