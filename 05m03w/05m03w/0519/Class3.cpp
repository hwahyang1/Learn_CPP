#include <iostream>
using namespace std;

class Point_0519_3 {
	int x, y;
public:
	Point_0519_3(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
		cout << x << ", " << y << endl;
	}
	Point_0519_3(const Point_0519_3& p) { // 복사생성자
		this->x = p.x;
		this->y = p.y;
		cout << "복사생성자!" << endl;
	}
};

int main_0519_3() {
	Point_0519_3 arr[3];
	Point_0519_3 arr2[3] = { arr[1], arr[2], arr[3] };

	//Point_0519_3* p = new Point_0519_3[3]; // 얘도 동적생성 됨

	Point_0519_3* parr[5];

	for (int i = 0; i < 5; i++)
	{
		parr[i] = new Point_0519_3(i * 10, i * 10);
	}

	return 0;
}