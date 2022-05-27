#include <iostream>
using namespace std;

class Calc_0527_2 {
protected:
	int a, b, c;
public:
	void Init(int new_A, int new_B);
	void Prn();
};
void Calc_0527_2::Init(int new_A, int new_B) {
	a = new_A;
	b = new_B;
	c = 0;
}
void Calc_0527_2::Prn() {
	cout << a << "\t " << b << "\t" << c << endl;
}

class Add_0527_2 :public Calc_0527_2 {
public:
	void Sum() { c = a + b; }
};
class Mul_0527_2 :public Calc_0527_2 {
public:
	void Gob() { c = a * b; }
};

int main_0527_2() {
	Add_0527_2 add;
	add.Init(3, 5);
	add.Sum();
	add.Prn();

	Mul_0527_2 mul;
	mul.Init(3, 5);
	mul.Gob();
	mul.Prn();

	return 0;
}