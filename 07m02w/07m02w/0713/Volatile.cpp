#include <iostream>
using namespace std;

int main_0713_2() {
	volatile int i = 0; // 휘발성, 값을 항상 메모리에 보관 (컴파일러 최적화 X)

	while (i < 10) i++; // [컴파일러 최적화] volatile이 안걸려있으면 컴파일러가 i=10으로 바꿔버림

	printf("%d\n", i);

	return 0;
}