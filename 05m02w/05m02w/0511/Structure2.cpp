#include <iostream>
using namespace std;

struct Point_0511_3 {
	int xpos;
	int ypos;
};

int main_0511_3() {
	Point_0511_3 pos = { 1, 2 };
	Point_0511_3* ptr = &pos;

	//*ptr.xpos = 3; // 포인터 역참조에서 멤버 접근인데, 컴파일러가 못읽어서 터짐
	(*ptr).xpos = 3; // 되기는 한데 귀찮음
	cout << pos.xpos << endl;
	ptr->xpos = 2; // 포인터 접근 연산자. 포인터가 가리키는 변수의 xpos 속성이라는 의미. 얘가 제일 간편함
	cout << pos.xpos << endl;

	cout << endl;

	Point_0511_3 poss[] = { {0, 0}, {1, 1}, {2, 2} }; // 이렇게 배열 선언도 가능
	for (int i = 0; i < 3; i++)
	{
		cout << i << " -> " << poss[i].xpos << ", " << poss[i].ypos << endl;
	}

	return 0;
}