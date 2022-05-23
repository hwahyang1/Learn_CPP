#include <iostream>
using namespace std;

class Girl_0523_1; // �����ָ� Boy Ŭ�������� friend �� ���� ����

class Boy_0523_1 {
private:
	int height;
public:
	Boy_0523_1(int len) :height(len) {}

	friend void Func();

	friend class Girl_0523_1;
	void ShowFriendInfo(Girl_0523_1& frn);
};

void Func() {
	Boy_0523_1 boy(180);
	boy.height = 170; // ���ٰ���
}

class Girl_0523_1 {
private:
	char phNum[30];
public:
	Girl_0523_1(char* num) { strcpy_s(phNum, num); }

	friend class Boy_0523_1;
	void ShowFriendInfo(Boy_0523_1& frn);
};
void Boy_0523_1::ShowFriendInfo(Girl_0523_1& frn) { // ��ü�� �ȸ������ ���¿��� ȣ���� �ȵǱ⿡ ���� ��������
	cout << frn.phNum << endl; // ���ٰ���
}
void Girl_0523_1::ShowFriendInfo(Boy_0523_1& frn) {
	cout << frn.height << endl; // ���ٰ���
}

int main_0523_1() {
	char number[] = "protected static void";
	Boy_0523_1 boy(170);
	Girl_0523_1 girl(number);

	boy.ShowFriendInfo(girl);
	girl.ShowFriendInfo(boy);

	return 0;
}