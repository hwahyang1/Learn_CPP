#include <iostream>
using namespace std;

class Gun_0531_1 {
	int bullet;
public:
	Gun_0531_1(int bnum) :bullet(bnum) {}
	void Shut() { bullet--; }
};

class Police_0531_1 {
	int handcuffs;
	Gun_0531_1* pistol;
public:
	Police_0531_1(int bnum, int bcuff) :handcuffs(bcuff) {
		if (bnum > 0)
			pistol = new Gun_0531_1(bnum);
		else
			pistol = nullptr;
	}
	~Police_0531_1() {
		if (pistol != nullptr) // 안써도 되긴 함 (delete 키워드는 nullptr이면 무시됨)
			delete pistol;
	}

	void PutHandcuff() {
		handcuffs--;
	}
	void Shut() {
		if (pistol == nullptr)
			return;
		pistol->Shut();
	}
};

int main_0531_1() {
	Police_0531_1 pman1(5, 3);
	pman1.Shut();
	pman1.PutHandcuff();

	Police_0531_1 pman2(0, 3);
	pman2.Shut();
	pman2.PutHandcuff();

	return 0;
}