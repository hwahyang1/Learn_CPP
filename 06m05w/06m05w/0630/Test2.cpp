#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v = { 1, 1, 2, 3, 4, 5, 3, 3, 5, 6 };

	v.erase(unique(v.begin(), v.end()), v.end());

	for_each(v.begin(), v.end(), [](string a) { cout << a << " "; });
	cout << endl;

	return 0;
}