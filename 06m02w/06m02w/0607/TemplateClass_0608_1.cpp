#include <iostream>
using namespace std;

template <typename T>
class Test_0607_4 {
	T value;
public:
	void SetValue(T v);
};

// Error (T의 정의가 날아감(유효범위 탈출))
//void Test_0607_4::SetValue(T v) { value = v; }

// 방법 없음. 다시 정의해줘야함.
template <typename T>
void Test_0607_4<T>::SetValue(T v) { value = v; }

int main_0607_4() {
	// Error (타입을 뭐로 해야할지 모름)
	//Test_0607_4 x;

	// 아래와 같이 타입 정의
	/*Test_0607_4<int> x;
	Test_0607_4<float> y;*/

	return 0;
}