#include <iostream>
#include <set>
using namespace std;

int main_0620_1() {
	set<int> intSet;
	set<int>::iterator itr;

	intSet.insert(90);
	intSet.insert(95);
	intSet.insert(100);
	intSet.insert(60);
	intSet.insert(60);
	intSet.insert(95);
	intSet.insert(85);

	cout << intSet.size() << endl; // 5 (중복은 추가 안해줌)

	cout << endl;

	for (itr = intSet.begin(); itr != intSet.end(); itr++) { // 자동 Sorting
		cout << *itr << "\t";
	}
	cout << endl << endl;

	// 95찾아서 70으로 변경 후 출력
	itr = intSet.find(95);
	if (itr != intSet.end()) {
		intSet.erase(itr);
		intSet.insert(70);
	}

	for (itr = intSet.begin(); itr != intSet.end(); itr++) {
		cout << *itr << "\t";
	}
	cout << endl;

	return 0;
}