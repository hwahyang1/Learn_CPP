#include <iostream>
using namespace std;

class Player_0527_1 {
protected:
	int level = 0;
	int hp = 0;
public:
	void Move() {}
	void Attack() {}
};

class Monster_0527_1 :public Player_0527_1 {
public:
	void Skill() {}
};

class Hero_0527_1 :public Player_0527_1 {
	
};

int main_0527_1() {
	Monster_0527_1 m1;
	m1.Attack();
	m1.Skill();

	return 0;
}