#include <iostream>
using namespace std;

class Person_0526_3 {
	int age;
public:
	explicit/*암시적 형변환 비허용*/ Person_0526_3(int _age) { age = _age; }
	operator int() { // int로 형변환 정의
		return age;
	}
};

int main_0526_3() {
	//Person_0526_3 per1 = 11/*암시적 형변환 하려다 막힘*/;
	Person_0526_3 per2 = Person_0526_3(11);
	Person_0526_3 per3 = (Person_0526_3)11;

	cout << per2 << endl;

	return 0;
}