#include <iostream>
#include <iomanip>

int main_0414_6() {
	int a;
	float b;
	char c;

	std::cin >> a;
	std::cout << a << std::endl;
	std::cin >> b >> c; // Multiple Input
	std::cout << std::setw(5) << b << std::setw(5) << c << std::endl; // b 앞뒤로 5칸 확보 (%05d같은거)

	return 0;
}