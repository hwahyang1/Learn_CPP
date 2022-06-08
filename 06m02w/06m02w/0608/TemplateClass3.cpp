#include <iostream>
using namespace std;

template <typename T>
class CStaticMember_0608_4 {
	static T mem; // 템플릿 클래스의 static 멤버
public:
	void AddMem(int num) { mem += num; }
	void ShowMem() { cout << mem << endl; }
};

template <typename T>
T CStaticMember_0608_4<T>::mem = 0;

// 다른 자료형이면 static이어도 공유 안됨
template <>
long CStaticMember_0608_4<long>::mem = 20;

int main_0608_4() {
	CStaticMember_0608_4<int> obj1;
	obj1.AddMem(2);
	CStaticMember_0608_4<int> obj2;
	obj2.ShowMem();

	CStaticMember_0608_4<long> obj3;
	obj3.AddMem(100);
	CStaticMember_0608_4<long> obj4;
	obj4.ShowMem();

	return 0;
}