#include <iostream>
#include <vector>
using namespace std;

class Player_0621_1 {
	int level;
public:
	Player_0621_1() : level(1) {};
	Player_0621_1(int l) : level(l) {};
	Player_0621_1(const Player_0621_1& a) :level(a.level) {};
	int GetLevel() { return level; }
};

int main_0621_1() {
	vector<Player_0621_1> players = { Player_0621_1(10), Player_0621_1(4), Player_0621_1(35) };
	for (auto &e:players)
	{
		cout << e.GetLevel() << " ";
	}
	cout << endl;

	return 0;
}