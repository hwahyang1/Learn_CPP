#include <iostream>
using namespace std;

// 해당 클래스는 Test.cpp에서 가져온 것
class Player_0518_3 {
public:
	int level = 0;
	string name = "";

	Player_0518_3(string _name, int _level) : name(_name), level(_level) {}
};

void PrintPlayer(Player_0518_3* p) {
	cout << "이름: " << p->name << "\t레벨: " << p->level << endl;
}

void PrintPlayers(Player_0518_3* players, size_t length) {
	for (size_t i = 0; i < length; i++)
	{
		cout << "이름: " << (players + i)->name << "\t레벨: " << (players + i)->level << endl;
	}
}

int main_0518_3() {
	Player_0518_3 player("Hero", 10);
	PrintPlayer(&player);

	cout << endl;

	Player_0518_3 playerList[3] = { Player_0518_3("가", 10), Player_0518_3("나", 50), Player_0518_3("다", 30) };
	Player_0518_3* array = playerList;

	cout << (array + 1)->level << endl;
	cout << array[2].level << endl;

	cout << endl;

	PrintPlayers(playerList, 3);

	return 0;
}