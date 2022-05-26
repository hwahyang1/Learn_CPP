#include <iostream>
using namespace std;

class Person_0526_4 {
	char* name;
	int age;
public:
	Person_0526_4();
	Person_0526_4(const char _name[], int _age);
	~Person_0526_4();

	Person_0526_4(const Person_0526_4&);
	Person_0526_4& operator=(const Person_0526_4&);
	Person_0526_4(Person_0526_4&&) noexcept;
	Person_0526_4& operator=(Person_0526_4&&) noexcept;
};

Person_0526_4::Person_0526_4() {
	name = nullptr;
	age = -1;
}
Person_0526_4::Person_0526_4(const char _name[], int _age) {
	name = new char[strlen(_name) + 1];
	strcpy_s(name, strlen(_name) + 1, _name);
	age = _age;
}
Person_0526_4::~Person_0526_4() {
	delete[] name;
}

Person_0526_4::Person_0526_4(const Person_0526_4& p) {
	name = new char[strlen(p.name) + 1];
	strcpy_s(name, strlen(p.name) + 1, p.name);
	age = p.age;
}
Person_0526_4& Person_0526_4::operator=(const Person_0526_4& p) {
	if (this != &p) {
		delete[] name;

		name = new char[strlen(p.name) + 1];
		strcpy_s(name, strlen(p.name) + 1, p.name);
		age = p.age;
	}

	return *this;
}
Person_0526_4::Person_0526_4(Person_0526_4&& other) noexcept {
	name = other.name;
	age = other.age;

	other.name = nullptr;
	other.age = 0;
}
Person_0526_4& Person_0526_4::operator=(Person_0526_4&& other) noexcept {
	if (this != &other) {
		delete[] name;

		name = other.name;
		age = other.age;

		other.name = nullptr;
		other.age = 0;
	}

	return *this;
}

int main_0526_4() {

	
	return 0;
}