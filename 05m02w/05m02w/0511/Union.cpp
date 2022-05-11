#include <iostream>
using namespace std;

/*
 * 공용체
 * 
 * 변수가 생성 될 때마다 해당 공간만큼의 용량을 먹는 구조체와 달리, 공용체는 변수를 몇개 선언해도 같은 메모리 주소/크기를 사용함.
 * 얘 크기는 있는 변수중에서 제일 큰 자료형의 크기를 따라감 (아래 코드에서는 제일 큰 크기인 int를 따라감. 4byte)
 */
union UData_0511_4 {
	char ch;
	int num;
};

int main_0511_4() {
	UData_0511_4 udata;
	udata.ch = 'A';
	cout << sizeof(udata.ch) + sizeof(udata.num) << endl;
	cout << sizeof(UData_0511_4) << endl;

	return 0;
}