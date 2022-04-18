#include <iostream>

int main_0418_2() {
	char st1[10];
	printf("문자열을 입력하세요: ");
	scanf_s("%s", &st1, sizeof(st1));
	printf("%s\n", st1);

	char name2[100];
	std::cout << "이름은? ";
	std::cin >> name2;
	std::cout << "내 이름은 " << name2 << "입니다." << std::endl;

	return 0;
}