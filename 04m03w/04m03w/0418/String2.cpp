#include <iostream>

int main_0418_2() {
	char st1[10];
	printf("���ڿ��� �Է��ϼ���: ");
	scanf_s("%s", &st1, sizeof(st1));
	printf("%s\n", st1);

	char name2[100];
	std::cout << "�̸���? ";
	std::cin >> name2;
	std::cout << "�� �̸��� " << name2 << "�Դϴ�." << std::endl;

	return 0;
}