#include <iostream>
using namespace std;

class Person_0525_2 {
	char* name;
public:
	Person_0525_2(const char* str) {
		name = new char[strlen(str) + 1];
		strcpy_s(name, strlen(str) + 1, str);
	}

	// Deep Copy, Source 변수가 사라져도 값이 날아가지 않음. 왠만해선 이렇게 사용할 것.
	// (얕은복사는 같은 주소 가리키는 애만 늘고, 얘는 주소를 하나 더 만들어서 값까지 가져가고)
	Person_0525_2(const Person_0525_2& per) {
		name = new char[strlen(per.name) + 1];
		strcpy_s(name, strlen(per.name) + 1, per.name);
	}

	void Show() const {
		cout << name << endl;
	}

	~Person_0525_2() { delete[] name; }
};

int main_0525_2() {
	Person_0525_2* per = new Person_0525_2("Name");
	per->Show();

	Person_0525_2* per1 = new Person_0525_2(*per);
	delete per;
	per1->Show();

	return 0;
}