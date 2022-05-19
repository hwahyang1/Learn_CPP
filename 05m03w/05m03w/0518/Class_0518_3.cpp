#include <iostream>
using namespace std;

class Complex_0518_4 {
private:
	int real;
	int image;
public:
	Complex_0518_4(int real = 0, int image = 0);
	void ShowComplex() const;
};

Complex_0518_4::Complex_0518_4(int real, int image) {
	this->real = real;
	this->image = image;
}

void Complex_0518_4::ShowComplex() const {
	cout << "( " << this->real << " + " << this->image << "i )" << endl;
}

int main_0518_4() {
	Complex_0518_4 x(10, 20);
	x.ShowComplex();
	
	return 0;
}