#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Player_0629_2 {
	string name;
	int score;
public:
	Player_0629_2(string _name, int _score) :name(_name), score(_score) {};

	string GetName() { return name; }
	int GetScore() { return score; }
};

int main_0629_2() {
	vector<Player_0629_2> players = {
		Player_0629_2("Player1", 104),
		Player_0629_2("Player2", 110),
		Player_0629_2("Player3", 230),
		Player_0629_2("Player4", 153),
		Player_0629_2("Player5", 120),
	};

	vector<Player_0629_2>::iterator iter;

	for (iter = players.begin(); iter != players.end(); iter++) {
		cout << "이름: " << iter->GetName() << "\t점수: " << iter->GetScore() << endl;
	}

	cout << endl;

	sort(players.begin(), players.end(), [](Player_0629_2 a, Player_0629_2 b) { return a.GetScore() > b.GetScore(); });

	int index = 1;
	for (iter = players.begin(); iter != players.end(); iter++) {
		cout << index<< "위\t이름: " << iter->GetName() << "\t점수: " << iter->GetScore() << endl;
		index++;
	}

	return 0;
}