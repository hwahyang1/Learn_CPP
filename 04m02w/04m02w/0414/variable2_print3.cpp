#include <iostream>
#include <iomanip>

int main_0414_6() {
	int a;
	float b;
	char c;

	std::cin >> a;
	std::cout << a << std::endl;
	std::cin >> b >> c; // Multiple Input
	std::cout << std::setw(5) << b << std::setw(5) << c << std::endl; // b �յڷ� 5ĭ Ȯ�� (%05d������)

	return 0;
}