#include <iostream>
using namespace std;

int Compare(int n1, int n2) { return n1 - n2; } // C

class SortRule_0607_1 { // C++
public:
	virtual bool operator()(int num1, int num2) const = 0;
};
class AscendingSort_0607_1 : public SortRule_0607_1 {
public:
	bool operator()(int num1, int num2) const {
		if (num1 > num2) return true;
		else return false;
	}
};
class DescendingSort_0607_1 : public SortRule_0607_1 {
public:
	bool operator()(int num1, int num2) const {
		if (num1 < num2) return true;
		else return false;
	}
};

class DataStorage_0607_1 { // for int data
	int* arr;
	int idx;
	const int MAX_LEN;
public:
	DataStorage_0607_1(int arrlen) :idx(0), MAX_LEN(arrlen) {
		arr = new int[MAX_LEN];
	}

	void AddData(int num) {
		if (MAX_LEN <= idx) {
			return;
		}
		arr[idx++] = num;
	}

	void Show() {
		for (int i = 0; i < idx; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	void Sort(int (*p)(int, int)) { // Bubble Sort, 제일 간단하고 느린 방법
		for (int i = 0; i < (idx - 1); i++) {
			for (int j = 0; j < (idx - 1) - i; j++) {
				if (p(arr[j], arr[j + 1]) > 0) {
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}

	void Sort(const SortRule_0607_1& func) { // 함수 객체로 받기
		for (int i = 0; i < (idx - 1); i++) {
			for (int j = 0; j < (idx - 1) - i; j++) {
				if (func(arr[j], arr[j + 1])) {
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}
};

int main_0607_1() {
	DataStorage_0607_1 arr(5);

	arr.AddData(10);
	arr.AddData(30);
	arr.AddData(12);
	arr.AddData(20);
	arr.AddData(50);

	arr.Sort(Compare);
	arr.Sort(DescendingSort_0607_1());

	arr.Show();

	return 0;
}