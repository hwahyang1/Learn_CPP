#include <iostream>
using namespace std;

int main_0428_2() {
	int Arr[3] = { 0, 1, 2 };

	printf("배열의 이름 %p\n", Arr);
	printf("배열의 첫번째 %p\n", &Arr[0]);
	printf("배열의 두번째 %p\n", &Arr[1]);
	printf("배열의 세번째 %p\n", &Arr[2]);

	cout << endl;

	int* ptr = &Arr[0];

	// 결론적으로 둘 다 주소 담는 애라서 결과가 같음
	printf("%d %d\n", *ptr, *Arr);
	printf("%d %d\n", ptr[0], Arr[0]);
	printf("%d %d\n", ptr[1], Arr[1]);
	printf("%d %d\n", ptr[2], Arr[2]);
	// 자료형만큼 이동함
	printf("%d %d\n", *(ptr + 0), Arr[0]);
	printf("%d %d\n", *(ptr + 1), Arr[1]);
	printf("%d %d\n", *(ptr + 2), Arr[2]);

	return 0;
}