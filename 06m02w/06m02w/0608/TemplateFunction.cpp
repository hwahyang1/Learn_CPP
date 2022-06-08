#include <iostream>
using namespace std;

template <typename T>
T Max_0608_2(T a, T b) {
	return a > b ? a : b;
}

// 템플릿 특수화: 특정한 형식에 대해서는 따로 정의하는거 (문자열은 위의 식으로 계산하면 높은 확률로 버그남)
template <>
const char* Max_0608_2(const char* a, const char* b) {
	return strcmp(a, b) > 0 ? a : b;
}

int main_0608_2() {
	cout << Max_0608_2(5, 7) << endl;
	cout << Max_0608_2(5.1, 7.9) << endl;
	cout << Max_0608_2('T', 'Q') << endl;
	cout << Max_0608_2("Simple", "Best") << endl;

	return 0;
}