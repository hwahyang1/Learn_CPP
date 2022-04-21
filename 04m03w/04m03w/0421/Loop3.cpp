#include <iostream>
using namespace std;

int main_0421_5() {
	int cur = 2;
	int is = 0;

	while (cur < 10) {
		is = 1;
		while (is < 10) {
			printf("%dx%d=%d\n", cur, is, cur * is);
			is++;
		}
		cur++;
		printf("\n");
	}
	return 0;
}