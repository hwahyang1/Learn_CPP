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
	int arr[3] = { 1, 2, 3 }; // �����迭 (����� �������)

	int* parr = new int[5]; // �����迭 (����� �κ������� �������)
	delete[] parr;

	/* New in CPP */
	//int �迭�� �Լ��� �ѱ涧 �迭���� ���� ������ ������(int*)�� �Ѱܼ� ���������� ���� ��������
	array<int, 10> arr0 = { 1, 2, 3 }; // �����迭 (����� �κ������� �������)

	vector<int> v; // �����迭 (����� ������� ����)
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	v[1] = 5; // ���� �̷��͵� ��

	v.pop_back();

	Print(arr, 3);
	Print(arr0);
	Print(v);

	return 0;
}