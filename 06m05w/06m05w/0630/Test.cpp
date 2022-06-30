#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <numeric>
#include <map>
using namespace std;

int main_0630_1() {
	list<int> ls = { 11, 3, 25, 71, 5, 9, 12, 7, 89 };

	ls.remove_if([](int a) { return a < 10; });

	for (auto e : ls) cout << e << " ";
	cout << endl;

	cout << endl;

	list<int> list1 = { 1, 2, 3, 4, 5 };
	list<int> list2 = { 10, 20, 30 };

	list<int>::iterator list1Iter = list1.begin();

	list1.splice(++++list1Iter, list2);

	for (auto e : list1) cout << e << " ";
	cout << endl;

	cout << endl;

	list<int>list3 = { 1, 2, 3, 4, 5 };

	for_each(list3.begin(), list3.end(), [](int a) { cout << a + 2 << " "; });
	cout << endl;

	cout << endl;

	vector<int> v2 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cout << accumulate(v2.begin(), v2.end(), 0) << endl;

	return 0;
}