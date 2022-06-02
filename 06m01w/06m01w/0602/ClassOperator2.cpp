#include <iostream>
using namespace std;

class Pos_0602_2 {
	int xpos, ypos;
public:
	Pos_0602_2(int x = 0, int y = 0) :xpos(x), ypos(y) { cout << "Pos 객체 생성" << endl; }
	~Pos_0602_2() { cout << "Pos 객체 소멸" << endl; }

	void SetPos(int a, int b) { xpos = a; ypos = b; }

	friend ostream& operator<<(ostream& os, const Pos_0602_2& pos);
};

ostream& operator<<(ostream& os, const Pos_0602_2& pos) {
	cout << pos.xpos << ", " << pos.ypos;
	return os;
}

class SmartPtr_0602_2 { // 실제로 CPP에 다른 이름으로 있는 기능
	Pos_0602_2* posptr;
public:
	SmartPtr_0602_2(Pos_0602_2* ptr) :posptr(ptr) {}
	~SmartPtr_0602_2() { delete posptr; }

	Pos_0602_2& operator*() const { return *posptr; }
	Pos_0602_2* operator->() const { return posptr; }
};

int main_0602_2() {
	Pos_0602_2 pos(10, 20);

	cout << pos << endl;

	SmartPtr_0602_2 sptr(new Pos_0602_2(0, 0)); // 나중에 코드블록 나가면 자동으로 지워줌
	cout << *sptr << endl;

	return 0;
}