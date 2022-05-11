#include <iostream>
using namespace std;

/*
 * 구조체
 * 
 * 변수의 집합이라 보면 배열과 비슷한데, 배열과 달리 다양한 자료형을 모은 집합임
 * 변수처럼 사용 가능
 * 
 * 요즘은 간단한 구조에만 사용
 */
struct PlayerInfo_0511_2
{
	int level = 0;
	long exp = 0L;
	string name = ""; // char로 잡으면 Player.name = "" 식의 대입이 안됨
};

/*
 * 클래스
 *
 * 구조체의 +α 형태. (CPP)
 * 나중에 배울 예정. 그냥 존재만 알고 있기.
 */
class Player_0511_2 {
	int level = 0;
	long exp = 0L;
	string name = "";
};

PlayerInfo_0511_2 MakePlayer_0511_2(int level, long exp, string name) {
	PlayerInfo_0511_2 player = { level, exp, name };
	return player;
}

void Print_0511_2(PlayerInfo_0511_2 player) {
	printf("이름: %s\t레벨: %d\t경험치: %d\n", player.name, player.level, player.exp);
}

int main_0511_2() {
	// 새로운 변수 선언
	PlayerInfo_0511_2 p1;
	p1.level = 1;
	p1.exp = 0;
	p1.name = "p1";

	PlayerInfo_0511_2 p2 = {1, 0, "p2"};

	cout << p2.level << endl;

	cout << endl;

	PlayerInfo_0511_2 player1 = { 1, 0, "p1" };
	PlayerInfo_0511_2 player2 = player1;

	printf("[P1] 이름: %s\t레벨: %d\t경험치: %d\n", player1.name, player1.level, player1.exp);
	printf("[P2] 이름: %s\t레벨: %d\t경험치: %d\n", player2.name, player2.level, player2.exp);

	cout << endl;

	PlayerInfo_0511_2 player3 = MakePlayer_0511_2(10, 100, "p3");
	Print_0511_2(player3);
	
	return 0;
}