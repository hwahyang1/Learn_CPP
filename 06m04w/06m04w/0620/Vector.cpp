#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void PrintVector_0620_3(const vector<T>& vec) {
	for (const auto& elem : vec) {
		cout << elem << " ";
	}
	cout << endl;
}

int main_0620_3() {
	vector<vector<int>> v(3, vector<int>(3, -1)); // [-1 -1 -1][-1 -1 -1][-1 -1 -1] 의 다차원 배열

	vector <int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);

	PrintVector_0620_3(vec);

	vector <double> vec2;
	vec2.push_back(1.3);
	vec2.push_back(2.5);

	PrintVector_0620_3(vec2);

	return 0;
}