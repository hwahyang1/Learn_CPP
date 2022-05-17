#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

class CPerson_0517_5 {
private:
	char* name;
	int age;
public:
	CPerson_0517_5(char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	void ShowInfo() const {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}

	~CPerson_0517_5() {
		delete[] name;
		cout << "called destructor!" << endl;
	}
};

int main_0517_5() {
	char name1[] = "Lee dong su";
	char name2[] = "Kim min woo";

	CPerson_0517_5 man1(name1, 29);
	CPerson_0517_5 man2(name2, 41);

	man1.ShowInfo();
	man2.ShowInfo();

	return 0;
}