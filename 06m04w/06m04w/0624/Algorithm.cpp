#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct greater5_0624_1 {
	bool operator()(int a) {
		return a > 5;
	}
};

class is_odd_0624_1 {
public:
	bool operator()(int a) {
		return a % 2;
	}
};

int main_0624_1() {
	vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8 };
	vector<int>::iterator iter;
	iter = find_if(v.begin(), v.end(), greater5_0624_1());
	if (iter != v.end()) {
		cout << *iter << endl;
	}
	int total = 0;
	total = count(v.begin(), v.end(), 3);
	total = count_if(v.begin(), v.end(), is_odd_0624_1());

	cout << total << endl;

	return 0;
}