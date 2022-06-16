#include <iostream>
#include <array>
#include <vector>
using namespace std;

void Print(const int* arr, const int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void Print(const array<int, 10>& arr) {
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void Print(const vector<int>& arr) {
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main_0616_2() {
	int arr[3] = { 1, 2, 3 }; // 정적배열 (사이즈에 영향받음)

	int* parr = new int[5]; // 동적배열 (사이즈에 부분적으로 영향받음)
	delete[] parr;

	/* New in CPP */
	//int 배열을 함수로 넘길때 배열말고 정수 변수의 포인터(int*)로 넘겨서 깨져버리는 문제 방지가능
	array<int, 10> arr0 = { 1, 2, 3 }; // 동적배열 (사이즈에 부분적으로 영향받음)

	vector<int> v; // 동적배열 (사이즈에 영향받지 않음)
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	v[1] = 5; // 물론 이런것도 됨

	v.pop_back();

	Print(arr, 3);
	Print(arr0);
	Print(v);

	return 0;
}