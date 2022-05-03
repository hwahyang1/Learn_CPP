#include <iostream>
using namespace std;

void Recursive_0503_2(int num) {
	if (num <= 0) return;
	cout << "Recursive Call " << num << endl;
	Recursive_0503_2(num - 1);
}

int main_0503_2() {
	Recursive_0503_2(3);

	return 0;
}