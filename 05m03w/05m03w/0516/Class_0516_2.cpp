#include <iostream>
using namespace std;

class Player_0516_2 {
private/*생략가능(기본값)*/:
	long exp = 0L;

public:
	int level = 0;

	void move() { }
	void attack();
};

void Player_0516_2::attack() {
	cout << "attack" << endl;
}

int main_0516_2() {
	Player_0516_2 p1;
	p1.level = 1;
	p1.attack();

	return 0;
}