#include <iostream>
using namespace std;

/*
 * Generic Programming(일반화 프로그래밍)
 * 템플릿 하나로 여러 타입을 받을 수 있는 코드를 짜는 것 (매개변수 다형성)
 * 
 * 아래는 함수 템플릿(함수를 만들 수 있는 템플릿)
 * 
 * 컴파일러가 함수 템플릿으로 만든 함수는 *템플릿 함수*(????????)
 * 템플릿을 인스턴스화(구체화)한다고 부름.
 * 
 * *** 인터프리터는 템플릿 안쪽에 관여를 하지 못함 ***
 * 진짜 대놓고 문법 오류를 내지 않는 한, 빌드 전까지 잡아내지 못함.
 */
template <typename T> // 무지성으로 T 때려박으면 모르니까 템플릿이라고 정의하기
T myAbs_0607_2(T num) {
	if (num < 0) num = -num;
	return num;
}

int main_0607_2() {
	int a = myAbs_0607_2(-2);
	double b = myAbs_0607_2(-2.0);

	// 내부 처리 방식
	//int a = myAbs_0607_2<int>(-2);
	//double b = myAbs_0607_2<double>(-2.0);

	cout << a << endl;
	cout << b << endl;

	return 0;
}