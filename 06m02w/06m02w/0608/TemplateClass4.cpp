#include <iostream>
using namespace std;

//template <typename T, int len> // 형식(type), 비형식(non-type, 값) 매개변수
template <typename T = int, int len = 5> // default 지정도 가능
class SimpleArray_0608_5 {
	T arr[len];
public:
	T& operator[](int idx) {
		return arr[idx];
	}
	T& operator=(const T& ref) {
		for (int i = 0; i < len; i++) {
			arr[i] = ref.arr[i];
		}
	}
};

int main_0608_5() {
	SimpleArray_0608_5<int, 5> arr;

	for (int i = 0; i < 5; i++) {
		arr[i] = i + 1;
	}
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}

	cout << endl;

	SimpleArray_0608_5<> arr2; // 기본값 시전 가능

	for (int i = 0; i < 5; i++) {
		arr2[i] = i + 1;
	}
	for (int i = 0; i < 5; i++) {
		cout << arr2[i] << endl;
	}

	return 0;
}