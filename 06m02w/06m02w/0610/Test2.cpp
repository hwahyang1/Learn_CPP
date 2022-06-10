#include <iostream>
using namespace std;

void func(int* p) {
	for (int i = 0; i < 3; i++) {
		cout << p[i] << endl;
		//cout << *(p + i) << endl;
	}
}

int main_0610_3() {
	int arr[3] = { 1, 2, 3 };
	func(arr);

	return 0;
}