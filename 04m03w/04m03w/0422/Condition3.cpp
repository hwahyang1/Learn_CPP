#include <iostream>
using namespace std;

int main_0422_3() {
	int month;
	cin >> month;

	switch (month)
	{
	case 3:
	case 4:
	case 5:
		cout << "봄" << endl;
		break;
	case 6:
	case 7:
	case 8:
		cout << "여름" << endl;
		break;
	case 9:
	case 10:
	case 11:
		cout << "가을" << endl;
		break;
	case 12:
	case 1:
	case 2:
		cout << "겨울" << endl;
		break;
	default:
		cout << "잘못 입력하셨습니다." << endl;
		break;
	}

	cout << endl;

	int score;
	char grade;
	cout << "점수를 입력하세요: " << endl;
	cin >> score;

	switch (score / 10) {
	case 10:
		grade = 'A';
		break;
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default:
		grade = 'F';
		break;
	}

	cout << grade << endl;

	return 0;
}