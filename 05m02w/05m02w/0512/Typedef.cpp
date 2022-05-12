#include <iostream>
using namespace std;

typedef short MY_INT_0512_2;
typedef int* PTR_0512_2;

struct Namecard_0512_2 {
	char name[20];
	int age;
};
typedef Namecard_0512_2 NCard_0512_2; // 지금은 이런 구조 잘 안 씀

// 아래 다 동일한 구문. 잘 안씀
/*typedef struct Namecard_0512_2 {
	char name[20];
	int age;
} NCard_0512_2;

typedef struct {
	char name[20];
	int age;
} NCard_0512_2;*/

int main_0512_2() {
	MY_INT_0512_2 num = 10;

	NCard_0512_2 ncard;
	ncard.age = 15;

	return 0;
}