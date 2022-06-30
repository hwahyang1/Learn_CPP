#include <iostream>
#include <cstdarg>
using namespace std;

int sum(int num_args, ...); // 함수 프로토타입 선언 (C)

template <typename T>
void print(T arg) {
	cout << arg << endl;
}

template <typename T, typename... Types>
void print(T arg, Types... args) {
	cout << arg << ", ";
	print(args...);
}

int main_0630_2() {
	cout << sum(1, 2) << endl; // 2
	cout << sum(2, 2, 3) << endl; // 2 + 3
	cout << sum(3, 6, 7, 8) << endl; // 6 + 7 + 8

	cout << endl;

	print(1, 3.1, "abc");
	print(1, 2, 3, 4, 5, 6, 7);

	return 0;
}

int sum(int num_args, ...) { // C
	va_list ap;
	va_start(ap, num_args);
	int arg = 0;
	int result = 0;
	for (int i = 0; i < num_args; i++) {
		arg = va_arg(ap, int);
		result += arg;
	}
	va_end(ap);
	return result;
}