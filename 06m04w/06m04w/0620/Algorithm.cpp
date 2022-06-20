#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Print_0620_2(int n) { // 출력 조건을 여기서 정의가능! (홀수면 return 때려서 짝수만 출력되게 한다던가)
	cout << n << " ";
}

bool Condition_0620_2(int n) {
	return n > 6;
}

bool IsOdd_0620_2(int n) {
	return n % 2;
}

int main_0620_2() {
	vector<int> v(8);
	vector<int>::iterator iter;

	for (int i = 0; i < v.size(); i++) {
		v[i] = i + 1;
	}

	for_each(v.begin(), v.end(), Print_0620_2);
	cout << endl;

	iter = find(v.begin(), v.end(), 5);
	printf("%d %s\n", *iter, iter == v.end() ? "없음" : "찾음");

	iter = find_if(v.begin(), v.end(), Condition_0620_2);
	printf("조건에 부합하는 수 %s: %d\n", iter == v.end() ? "없음" : "찾음", *iter);

	cout << endl;

	vector<int> v2 = { 3, 2, 7, 9, 4, 1, 3 };

	int total = 0;
	total = count(v2.begin(), v2.end(), 3);
	cout << "3의 개수는 " << total << "개" << endl;

	total = count_if(v2.begin(), v2.end(), IsOdd_0620_2);
	cout << "홀수의 개수는 " << total << "개" << endl;

	cout << endl;

	vector<int> v1 = { 3, 2, 7, 6, 2, 3, 4 };

	if (equal(v1.begin(), v1.begin() + 3, v2.begin())) {
		cout << "두 벡터의 3개 구간이 일치함." << endl;
	}
	else {
		cout << "두 벡터의 3개 구간이 불일치함." << endl;
	}

	return 0;
}