#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Player_0629_4 {
public:
	string name;
	int score;
	Player_0629_4(string _name, int _score) :name(_name), score(_score) {};
};

int main_0629_4() {
	vector<Player_0629_4> blue = {
		Player_0629_4("player2", 80),
		Player_0629_4("player3", 72),
		Player_0629_4("player5", 44),
		Player_0629_4("player7", 20),
	};

	vector<Player_0629_4> red = {
		Player_0629_4("player1", 95),
		Player_0629_4("player4", 50),
		Player_0629_4("player6", 38),
		Player_0629_4("player8", 15),
	};

	vector<Player_0629_4>::iterator iter;

	sort(blue.begin(), blue.end(), [](Player_0629_4& p1, Player_0629_4& p2) { return p1.score > p2.score; });
	sort(red.begin(), red.end(), [](Player_0629_4& p1, Player_0629_4& p2) { return p1.score > p2.score; });

	int blue_score = 0;
	int red_score = 0;
	for (iter = blue.begin(); iter != blue.end() -1; iter++) {
		blue_score += iter->score;
	}
	for (iter = red.begin(); iter != red.end() -1; iter++) {
		red_score += iter->score;
	}

	printf("우승팀은 %s팀 입니다.\n\n", (blue_score > red_score) ? "블루" : "레드");

	cout << "블루팀 총점 (최하위 점수 제외): " << blue_score << endl;
	cout << "레드팀 총점 (최하위 점수 제외): " << red_score << endl;

	return 0;
}