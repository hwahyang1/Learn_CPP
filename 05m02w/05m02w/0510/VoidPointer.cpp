#include <iostream>
using namespace std;

int main_0510_5() {
	int nValue;
	float fValue;

	void* ptr = nullptr;
	ptr = &nValue;
	ptr = &fValue;
	cout << sizeof(ptr) << endl;

	int value = 5;
	void* voidPtr = &value;
	//cout << *voidPtr << endl; // 일반적인 역참조는 안됨
	cout << *(int*)voidPtr << endl; // 이건 됨

	// CPP
	int* intPtr = static_cast<int*>(voidPtr);
	cout << *intPtr << endl;

	return 0;
}