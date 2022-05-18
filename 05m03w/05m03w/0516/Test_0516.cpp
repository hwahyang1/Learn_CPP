#include <iostream>
using namespace std;

class Buyer_0516_4 {
public:
	int money = 1000;
	int apple_num = 0;

	void Buy(int _money, int _apple_num) {
		money -= _money;
		apple_num += _apple_num;
	}
};

class Seller_0516_4 {
public:
	int money = 0;
	int apple_num = 10;

	void Sell(int _money, int _apple_num) {
		money += _money;
		apple_num -= _apple_num;
	}
};

void Trade_0516_4(Buyer_0516_4& buyer, Seller_0516_4& seller, int price, int num) {
	buyer.Buy(price, num);
	seller.Sell(price, num);
}

int main_0516_4() {
	// 소비자가 과일장수에게 사과 2개 구매
	// 클래스 구성 Buyer / Seller || 함수 구성 Trade();
	// 구매 전과 후의 구매자와 판매자의 사과 갯수 출력

	Buyer_0516_4 buyer = { 1000, 0 };
	Seller_0516_4 seller;
	seller.money = 0;
	seller.apple_num = 10;

	Trade_0516_4(buyer, seller, 200, 2);

	cout << "구매자: " << buyer.apple_num << "개, " << buyer.money << "원" << endl;
	cout << "판매자: " << seller.apple_num << "개, " << seller.money << "원" << endl;

	return 0;
}