#include <iostream>
using namespace std;

// 기반 코드는 CopyConstructor2.cpp와 동일함.
class Person_0525_4 {
	char* name;
public:
	Person_0525_4(const char* str) {
		name = new char[strlen(str) + 1];
		strcpy_s(name, strlen(str) + 1, str);
	}

	Person_0525_4& operator=(const Person_0525_4& p) { // 복사 대입(할당) 연산자
		if (this != &p) { // 같으면 굳이 굴릴 필요가 없
			delete[] name;
			name = new char[strlen(p.name) + 1];
			strcpy_s(name, strlen(p.name) + 1, p.name);
		}
		return *this;
	}

	void Show() const {
		cout << name << endl;
	}

	~Person_0525_4() { delete[] name; }
};

int main_0525_4() {
	Person_0525_4 p1("Player1");
	Person_0525_4 p2 = p1; // 복사 생성자
	p2 = p1; // 복사 대입 연산자

	p2.Show();

	return 0;
}