#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main_0610_1() {
	int arr[5] = { 1, 2, 3, 4, 5 };

	vector<int> v = { 1, 2, 3, 4, 5 };
	vector<double> v1 = { 1.5, 1.0 };

	v.push_back(1);
	v.pop_back();
	cout << v.size() << endl;
	cout << v[3] << endl;

	cout << endl;

	vector<int>::iterator iter; // Pointer
	iter = v.begin();
	cout << *iter << endl;
	iter++;
	cout << *iter << endl;
	*iter = 5;

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

	cout << endl;

	sort(v.begin(), v.end(), greater<int>());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

	return 0;
}