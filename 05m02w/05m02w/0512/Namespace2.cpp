#include <iostream>

int number = 10;

// 중첩선언 가능
namespace Player_0512_5 {
	void Func1(void);
}
namespace Player_0512_5 {
	void Func2(void) {}
}

// 이렇게 외부에서 함수 선언도 됨
void Player_0512_5::Func1(void) {
	Func2(); // 동일 namespace에 있는 애들은 그냥 불러도 됨
}

int main_0512_5() {
	int number = 20;
	number += 1; // 지역변수

	::number = 30; // 전역변수



	Player_0512_5::Func1();
	Player_0512_5::Func2();

	return 0;
}