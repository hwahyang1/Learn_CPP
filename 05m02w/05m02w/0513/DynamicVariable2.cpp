#include <iostream>
using namespace std;

char* ReadUserName_0513_2() {
	//char* name = (char*)malloc(sizeof(char) * 30);
	char* name = new char[30];
	printf("What's your name?: ");
	cin >> name;
	return name;
}

int main_0513_2() {
	char* name1;
	char* name2;

	name1 = ReadUserName_0513_2();
	printf("name1: %s\n", name1);
	name2 = ReadUserName_0513_2();
	printf("name2: %s\n", name2);

	printf("again name1: %s\n", name1);
	printf("again name2: %s\n", name2);

	//free(name1);
	//free(name2);
	delete name1, name2;

	return 0;
}