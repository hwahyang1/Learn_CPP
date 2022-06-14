#include <iostream>
using namespace std;

void bubble_sort_0614_2(int a[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i; j++) {
			if (a[j - 1] < a[j]) {
				int temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main_0614_2() {
	int a[] = { 15, 2, 24, 18, 7, 13, 12, 4, 21, 9 };
	int size = sizeof(a) / sizeof(int);

	bubble_sort_0614_2(a, size);

	for (auto e : a) {
		cout << e << " ";
	}

	cout << endl;

	return 0;
}