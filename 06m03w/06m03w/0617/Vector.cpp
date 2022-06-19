#include <iostream>
#include <vector>
using namespace std;

int main_0617_1() {
	vector<int> v;
	vector<int>::iterator i;

	int sum = 0;

	for (int i = 1; i <= 100; i++) {
		v.push_back(i);
	}

	for (i = v.begin(); i != v.end(); i++) {
		sum += *i;
	}

	cout << sum << endl;

	return 0;
}