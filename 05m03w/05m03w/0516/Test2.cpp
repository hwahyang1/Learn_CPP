#include <iostream>
using namespace std;

class Player_0516_5 {
public:
	int hp;
	long exp;
	int ap;

	void Damage(int damage) { hp -= damage; }
};

class Monster_0516_5 {
public:
	int hp;
	int ap;

	void Damage(int damage) { hp -= damage; }
};

int main_0516_5() {
	// 플레이어가 몬스터를 사냥
	// 경험치 100 획득

	/* 시간 없어서 디테일한건 신경안씀 */

	Player_0516_5 player = { 1000, 0, 50 };
	Monster_0516_5 monster = { 300, 30 };

	do {
		cout << "나\tHP " << player.hp << "\tEXP " << player.exp << endl;
		cout << "몬스터\tHP " << monster.hp << endl << endl << endl << endl;

		cout << "몬스터를 만났다!" << endl << endl;
		cout << "1. 공격한다" << endl;
		cout << "9. 도망친다" << endl << endl;
		cout << "어떻게 할까? ";

		int res = 0;
		cin >> res;

		switch (res)
		{
		case 1:
			cout << "몬스터를 공격했다!" << endl;
			monster.Damage(player.ap);
			break;
		case 9:
			cout << "도망치치 못했다!" << endl << "몬스터에게 공격 받았다!";
			player.Damage(monster.ap);
			break;
		default:
			cout << "당황하고 말았다!" << endl << "몬스터에게 공격 받았다!";
			player.Damage(monster.ap);
			break;
		}

		cout << endl << endl << endl << endl << endl;
	} while (monster.hp > 0);

	cout << "몬스터와의 싸움에서 승리했다!" << endl << "1000 EXP를 획득했다!";
	player.exp += 1000;

	return 0;
}