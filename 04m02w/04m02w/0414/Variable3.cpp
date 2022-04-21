#include <iostream>
#include <iomanip>

int main_0414_7() {
	int nData = 0;
	float fData = 1.5f;
	double dData = 1.2;
	char cData = 'A';
	bool bData = true;

	std::cout << std::setw(8) << nData << ":" << sizeof(nData) << std::endl;
	std::cout << std::setw(8) << fData << ":" << sizeof(fData) << std::endl;
	std::cout << std::setw(8) << dData << ":" << sizeof(dData) << std::endl;
	std::cout << std::setw(8) << cData << ":" << sizeof(cData) << std::endl;
	std::cout << std::setw(8) << bData << ":" << sizeof(bData) << std::endl;

	return 0;
}