#include <iostream>

int main_0414_2() {
	int input = 0;

	scanf_s("%d", &input);
	printf("�Է¹��� ��: %d\n", input);
	/* Also Same As */
	std::cin >> input;
	std::cout << "�Է¹��� ��: " << input << std::endl;



	char ch;

	scanf_s("%c", &ch);
	printf("�Է¹��� ��: %d\n", ch);
	/* Also Same As */
	ch = getchar();
	printf("�Է¹��� ��: %d\n", ch);



	char buffer[20];

	scanf_s("%s", &buffer, sizeof(buffer));
	printf("�Է¹��� ��: %s\n", buffer);
	/* Also Same As */
	gets_s(buffer, sizeof(buffer));
	printf("�Է¹��� ��: %s\n", buffer);



	return 0;
}