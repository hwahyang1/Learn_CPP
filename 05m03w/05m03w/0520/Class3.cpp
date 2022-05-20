#include <iostream>
using namespace std;

class CountryArea_0520_3 { // #define 대체재
public:
	const static int RUSSIA = 1707540;
	const static int CANADA = 998467;
	const static int CHINA = 957290;
	const static int SOUTH_KOREA = 9922;
};

int main_0520_3() {
	cout << "러시아 면적 " << CountryArea_0520_3::RUSSIA << "km" << endl;
	cout << "캐나다 면적 " << CountryArea_0520_3::CANADA << "km" << endl;
	cout << "중국 면적 " << CountryArea_0520_3::CHINA << "km" << endl;
	cout << "한국 면적 " << CountryArea_0520_3::SOUTH_KOREA << "km" << endl;

	return 0;
}