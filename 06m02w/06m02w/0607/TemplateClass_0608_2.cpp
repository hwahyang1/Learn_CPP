#include <iostream>
using namespace std;

template <typename T>
class Point_0607_5 {
	T xpos, ypos;
public:
	Point_0607_5(T x = 0, T y = 0);
	void ShowPosition() const;
};

template <typename T>
Point_0607_5<T>::Point_0607_5(T x, T y) :xpos(x), ypos(y) {}
template <typename T>
void Point_0607_5<T>::ShowPosition() const {
	cout << xpos << ", " << ypos << endl;
}

int main_0607_5() {
	Point_0607_5<int> pos1(1, 2);
	pos1.ShowPosition();

	Point_0607_5<double> pos2(1.5, 2.0);
	pos2.ShowPosition();

	Point_0607_5<char> pos3('E', 'P'); // 가능은 함
	pos3.ShowPosition();

	return 0;
}