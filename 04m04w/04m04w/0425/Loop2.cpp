#include <iostream>
using namespace std;

int main_0425_3() {
	for (int cur = 2; cur < 10; cur++) {
		for (int is = 1; is < 10; is++) {
			printf("%d x %d = %d\n", cur, is, cur * is);
		}
		printf("\n");
	}

	cout << endl;

	int cur = 2;
	while (cur < 10) {
		int is = 1;
		while (is < 10) {
			printf("%d x %d = %d\n", cur, is, cur * is);
			is++;
		}
		printf("\n");
		cur++;
	}

	return 0;
}