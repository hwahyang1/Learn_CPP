#include <iostream>
using namespace std;

int main_0713_1() {
	// *런타임*에서 개체의 형식을 확인 가능
	cout << typeid(int).name() << endl;
	cout << typeid(type_info).name() << endl;
	//cout << typeid(main).name() << endl;
	cout << typeid(cout).name() << endl;

	return 0;
}