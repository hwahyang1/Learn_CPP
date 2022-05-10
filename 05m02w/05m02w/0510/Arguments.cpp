#include <iostream>
using namespace std;

int main_0510_4(int argc, char* argv[]) {
	int count;
	cout << "명령행 인자의 개수: " << argc << endl;

	for (int i = 0; i < argc; i++)
	{
		cout << "argv[" << i << "]: " << argv[i] << endl;
	}

	return 0;
}