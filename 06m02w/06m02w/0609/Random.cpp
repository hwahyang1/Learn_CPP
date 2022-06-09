#include <iostream>
#include <random>
using namespace std;

int main_0609_1() {
	int i = 0;
	int num[6] = { -1, -1, -1, -1, -1, -1 };

	// CPP, 기존 랜덤 방식이 갖는 한계점을 개선함
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(1, 45);
	
	while (i < 6) {
		int temp_num = dis(gen);
		for (int j = 0; j < 6; j++) {
			if (num[j] == temp_num) {
				break;
			}
			if (j == 5) {
				num[i] = temp_num;
				i++;
			}
		}
	}

	cout << "로또 당첨번호는: ";
	for (int i = 0; i < 6; i++) {
		cout << num[i] << " ";
	}
	cout << endl;

	return 0;
}