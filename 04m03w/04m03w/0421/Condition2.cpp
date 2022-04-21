#include <iostream>
using namespace std;

int main_0421_2() {
	int rank = 0;
	int coin = 0;

	switch (rank)
	{
	case 1:
		coin = 100;
		break;
	case 2:
		coin = 90;
		break;
	case 3:
		coin = 80;
		break;
	default:
		coin = 30;
		break;
	}

	cout << coin << endl;

	return 0;
}