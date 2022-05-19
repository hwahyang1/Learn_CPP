#include <iostream>
#include <algorithm>
using namespace std;

class Student_0519_6 {
public:
	string name;
	int score;

	Student_0519_6(string name, int score) {
		this->name = name;
		this->score = score;
	}
};

bool Compare_0519_6(Student_0519_6 a, Student_0519_6 b) {
	return a.score > b.score;
}

int main_0519_6() {
	Student_0519_6 students[] = {
		Student_0519_6("상욱", 93),
		Student_0519_6("동빈", 90),
		Student_0519_6("준기", 87),
		Student_0519_6("일종", 92),
		Student_0519_6("태은", 97)
	};

	cout << "\t[학생 명단]" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "이름: " << students[i].name << "\t점수: " << students[i].score << "점" << endl;
	}

	cout << endl;

	sort(students, students + 5, Compare_0519_6);

	cout << "\t[점수 나열]" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "이름: " << students[i].name << "\t점수: " << students[i].score << "점" << endl;
	}

	return 0;
}