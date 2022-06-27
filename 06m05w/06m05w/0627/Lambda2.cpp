#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main_0627_2() {
	vector<int> v = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
	for_each(v.begin(), v.end(), [](const int& n) { if (n % 2 == 0) cout << n << " "; });

	return 0;
}