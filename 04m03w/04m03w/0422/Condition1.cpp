#include <iostream>
using namespace std;

int main_0422_1() {
	// 이게뭐야

	int num;
	printf("자연수 입력 : ");
	scanf_s("%d", &num);

	if (num == 1)
		goto ONE;
	else
		goto END;

ONE:
	printf("1을 입력하셨습니다!\n");
	goto END;
END:
	cout << endl;

	return 0;
}