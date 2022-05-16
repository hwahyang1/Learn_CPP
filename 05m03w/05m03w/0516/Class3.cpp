#include <iostream>
using namespace std;

class Complex_0516_3 {
private:
	int real;
	int image;
public:
	void SetComplex(int a, int b);
	void ShowComplex();

	inline/*클래스 안에 있으면 기본값*/ int get_real() { return real; }
	inline/*클래스 안에 있으면 기본값*/ void set_real(int a) { real = a; }
};

void Complex_0516_3::SetComplex(int a, int b) {
	real = a;
	image = b;
}

void Complex_0516_3::ShowComplex() {
	cout << "( " << real << " + " << image << "i )" << endl;
}

int main_0516_3() {
	Complex_0516_3 x;

	x.SetComplex(5, 10);
	x.ShowComplex();

	return 0;
}