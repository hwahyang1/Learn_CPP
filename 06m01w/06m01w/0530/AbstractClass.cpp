#include <iostream>
using namespace std;

class Shape_0530_3 abstract/*Optional*/ {
protected:
	double area;
public:
	virtual void Draw() = 0; // 완전(순수) 가상함수, C언어 시절에는 0 대신 NULL 때려놨음
	virtual double GetSize() abstract; // 키워드로도 정의 가능
};

class Rect_0530_1 : public Shape_0530_3 {
protected:
	int width;
	int height;
public:
	Rect_0530_1(int w = 0, int h = 0);
	void Draw();
	double GetSize();
};
Rect_0530_1::Rect_0530_1(int w, int h) { width = w; height = h; }
void Rect_0530_1::Draw() { cout << "사각형을 그린다" << endl; }
double Rect_0530_1::GetSize() { area = width * height; return area; }

class Circle_0530_3 : public Shape_0530_3 {
protected:
	int radius;
public:
	Circle_0530_3(int r = 0) { radius = r; };
	void Draw() { cout << "원을 그린다" << endl; };
	double GetSize() { return radius * radius * 3.14; };
};

void PrintShape(Shape_0530_3* p) { // 이런식으로 사용하려고 만드는거
	p->Draw();
}

int main_0530_3() {
	Rect_0530_1 rect(5, 3);
	PrintShape(&rect);
	cout << rect.GetSize() << endl;

	cout << endl;

	Circle_0530_3 circle(5);
	PrintShape(&circle);
	cout << circle.GetSize() << endl;

	cout << endl;

	PrintShape(new Rect_0530_1()); // 막말로 이런짓도 가능

	return 0;
}