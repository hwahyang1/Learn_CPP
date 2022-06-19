#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main_0617_2() {
	vector<int> v = { 1, 2, 5, 7, 4, 6, 3 };
	//vector<int>::iterator iter;
	vector<int>::const_iterator iter; // 수정 할 일 없으면 되도록 const 걸어주기

	//sort(v.begin(), v.end());
	sort(v.begin(), v.end(), greater<int>()); // 정렬 순서 정의
	//sort(v.begin(), v.end(), less<int>()); // Default

	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}