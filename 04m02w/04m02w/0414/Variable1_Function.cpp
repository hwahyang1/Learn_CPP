#include <iostream>

int attack_0414_5(int hp, int ap, int dp) {
	int damage = ap - dp;
	hp = hp - damage;

	return hp;
}

int main_0414_5() {
	int level = 0;
	int exp = 0;
	int hp = 1000;
	int ap = 100;
	int dp = 50;

	attack_0414_5(hp, ap, dp);

	return 0;
}