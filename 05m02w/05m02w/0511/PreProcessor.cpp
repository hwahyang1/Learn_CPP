#include <iostream>
using namespace std;

#define PI (3.141592)
#define SUM(x) ((x) + (x)) // 매크로 (지금은 잘 안 씀)
inline int SQUARE(int x) { return x * x; } // 위에와 같은 역할 (CPP)

#define EXAMPLE 5
#undef EXAMPLE // 무효화

// 헤더 중복 컴파일 방지 1 (얘를 더 많이 씀)
#pragma once
// 헤더 중복 컴파일 방지 2
#ifndef PREPROCESSOR_CPP
#define PREPROCESSOR_CPP
	// Code...
#endif

#define CIRCLE(x) ((x) * (x) * (PI))
#define STRING(x) #x
#define INT_X(n) int x##n = n
#define COUT_X(n) cout << "x"#n" = " << x##n << endl;

int main_0511_1() {
	double pi = PI;
	cout << pi << endl;
	cout << SUM(2) << endl;

	cout << endl;

	cout << SQUARE(2 + 3) << endl;

	cout << endl;

	cout << "반지름 4인 원의 넓이: " << CIRCLE(4) << endl;
	cout << "# 연산자 예: " << STRING(문자열로~) << endl;
	INT_X(0);
	INT_X(1);
	COUT_X(0);
	COUT_X(1);

	return 0;
}