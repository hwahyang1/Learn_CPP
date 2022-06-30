#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Monster_0629_3 {
public:
	string name;
	int hp;
	int ap;
	Monster_0629_3(string _name, int _hp, int _ap) :name(_name), hp(_hp), ap(_ap) {};
};

int main_0629_3() {
	vector<Monster_0629_3> monsters = {
		Monster_0629_3("Monster1", 1100, 100),
		Monster_0629_3("Monster2", 1200, 250),
		Monster_0629_3("Monster3", 1900, 130),
		Monster_0629_3("Monster4", 1800, 250),
		Monster_0629_3("Monster5", 1000, 220)
	};

	vector<Monster_0629_3>::iterator iter;

	sort(monsters.begin(), monsters.end(), [](Monster_0629_3& m1, Monster_0629_3& m2) { if (m1.ap == m2.ap) return m1.hp < m2.hp; return m1.ap > m2.ap; });

	for (iter = monsters.begin(); iter != monsters.end(); iter++) {
		cout << "이름: " << iter->name << "\t체력: " << iter->hp << "\t공격력: " << iter->ap << endl;
	}

	return 0;
}