#include <iostream>
using namespace std;

int main_0524_3() {
	int rows = 3;
	int** table = nullptr;

	table = new int* [rows];
	table[0] = new int[4]{ 1, 2, 3, 4 };
	table[1] = new int[3]{ 10, 20, 30 };
	table[2] = new int[1]{};

	for (int row = 0; row < rows; row++) {
		delete[] table[row];
	}

	delete[] table;

	return 0;
}