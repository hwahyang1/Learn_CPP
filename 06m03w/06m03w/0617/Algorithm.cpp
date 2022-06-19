#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main_0617_2() {
	vector<int> v = { 1, 2, 5, 7, 4, 6, 3 };
	//vector<int>::iterator iter;
	vector<int>::const_iterator iter; // ���� �� �� ������ �ǵ��� const �ɾ��ֱ�

	//sort(v.begin(), v.end());
	sort(v.begin(), v.end(), greater<int>()); // ���� ���� ����
	//sort(v.begin(), v.end(), less<int>()); // Default

	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}