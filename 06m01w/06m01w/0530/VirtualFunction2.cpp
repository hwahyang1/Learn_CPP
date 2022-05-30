#include <iostream>
using namespace std;

class Player_0530_2 {
public:
	char name[25];
	int movespeed = 0;
	virtual void Move() { cout << "Player Move" << endl; }
};

class Hero_0530_2 :public Player_0530_2 {
	void Move() { cout << "Hero Move" << endl; }
};

class Enemy_0530_2 :public Player_0530_2 {
	void Move() { cout << "Enemy Move" << endl; }
};

int main_0530_2() {
	Player_0530_2* player[2] = { new Hero_0530_2(), new Enemy_0530_2() }; // 동적 다형성

	player[0]->Move();
	player[1]->Move();

	return 0;
}