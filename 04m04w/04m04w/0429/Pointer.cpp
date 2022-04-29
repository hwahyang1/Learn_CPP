#include <iostream>
using namespace std;

int main_0429_3() {
	int a;
	a = 2;

	printf("%p\n", &a);
	cout << &a << endl;

	cout << endl;

	int* p1 = &a;
	cout << p1 << endl;

	cout << a << endl;
	*p1 = 5;
	cout << a << endl;

	cout << endl;

	int num = 0;
	int* pnum = nullptr;
	pnum = &num;

	cout << num << endl;
	cout << &num << endl;
	cout << pnum << endl;
	cout << *pnum << endl;
	cout << *&num << endl; // *& 만나면 없는것과 다름없
	cout << *&*pnum << endl;

	cout << endl;

	char arr[] = "Hello";
	char* str = arr;

	cout << str << endl;
	cout << str[0] << endl;
	cout << str[1] << endl;
	cout << *str << endl;
	cout << *(str + 1) << endl;

	cout << endl;

	int array[5] = { 10, 20, 30, 40, 50 };
	int* p2 = array + 2;
	printf("%d\n", *p2);

	++*p2++; // 후행 + 선행 + 포인터 순 연산
	printf("%d\n", *p2);

	cout << endl;

	// aList1을 aList2에 복사하기
	int aList1[5] = { 10, 20, 30, 40, 50 };
	int aList2_1[5] = { 0 };
	int aList2_2_1[5] = { 0 };
	int aList2_2_2[5] = { 0 };

	// 방법 1: 하나씩
	for (size_t i = 0; i < 5; i++)
	{
		aList2_1[i] = aList1[i];
	}

	for (size_t i = 0; i < 5; i++)
	{
		cout << aList2_1[i] << " ";
	}
	cout << endl;

	// 방법 2-1: 메모리 복사 - 포인터로 주소 접근
	for (size_t i = 0; i < 5; i++)
	{
		*(aList2_2_1 + i) = *(aList1 + i);
	}

	for (size_t i = 0; i < 5; i++)
	{
		cout << aList2_2_1[i] << " ";
	}
	cout << endl;

	// 방법 2-2: 메모리 복사 - 포인터로 주소 접근
	char* s = (char*)aList1;
	char* d = (char*)aList2_2_2;
	for (int i = 0; i < sizeof(aList1); ++i) {
		*(d + i) = *(s + i);
	}

	for (size_t i = 0; i < 5; i++)
	{
		cout << aList2_2_2[i] << " ";
	}
	cout << endl;

	return 0;
}