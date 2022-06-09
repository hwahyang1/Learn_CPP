#include <iostream>
#include <fstream>
using namespace std;

struct USERINFO_0609_3
{
	char name[20];
	int age;
	char address[20];
};

int main_0609_3() {
	USERINFO_0609_3 man = { "Park", 20, "Seoul" };
	
	ofstream fout;
	fout.open("myFile_0609_3.dat");
	//fout << man.name << ", " << man.age << ", " << man.address << endl;
	fout.write((char*)&man, sizeof(man)); // 이진으로 저장 (메모리 값을 그대로 저장하는 거라 더 편함)
	fout.close();

	USERINFO_0609_3 man2;

	ifstream fin;
	fin.open("myFile_0609_3.dat");

	if (fin.fail()) {
		cout << "파일 오픈에 실패했습니다." << endl;
		return 1;
	}

	//fin >> man2.name >> man2.age >> man2.address;
	fin.read((char*)&man2, sizeof(man2));
	fin.close();

	cout << man.name << ", " << man.age << ", " << man.address << endl;

	return 0;
}