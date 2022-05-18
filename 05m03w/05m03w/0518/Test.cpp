#include <iostream>
using namespace std;

class Player_0518_2 {
	int level;
	string name;

public:
	Player_0518_2(string _name, int _level) : name(_name), level(_level) {}
	int GetLevel() { return level; }
	string GetName() { return name; }
};

int main_0518_2() {
	Player_0518_2 playerList[3] = { Player_0518_2("가", 10), Player_0518_2("나", 50), Player_0518_2("다", 30)};

	for (size_t i = 0; i < 3; i++)
	{
		cout << "이름: " << playerList[i].GetName() << "\t레벨: " << playerList[i].GetLevel() << endl;
	}

	return 0;
}