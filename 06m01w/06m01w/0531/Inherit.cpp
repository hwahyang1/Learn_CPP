#include <iostream>
using namespace std;

class Computer_0531_2 {
	char owner[50];
public:
	Computer_0531_2(const char* name) { strcpy_s(owner, name); }
	void Calculate() { cout << "계산" << endl; }
};

class Notebook_0531_2 :public Computer_0531_2 {
	int battary;
public:
	Notebook_0531_2(const char* name, int charg) :Computer_0531_2(name), battary(charg) {}
	void UseBattary() { battary -= 1; }
	void Charging() { battary += 1; }
	void MovingCalculate() {
		cout << "이동하면서 ";
		Calculate();
		UseBattary();
	}
};

class Tabletbook_0531_2 :public Notebook_0531_2 {
public:
	Tabletbook_0531_2(const char* name, int charg) : Notebook_0531_2(name, charg) {}
	void Write() { cout << "필기 내용 처리" << endl; }
};

int main_0531_2() {
	Notebook_0531_2 nb("홍길동", 10);
	Tabletbook_0531_2 tb("아무개", 5);

	tb.Calculate();
	tb.MovingCalculate();
	tb.Write();

	return 0;
}