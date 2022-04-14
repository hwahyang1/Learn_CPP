#include <iostream>

int main_0414_2() {
	int input = 0;

	scanf_s("%d", &input);
	printf("입력받은 값: %d\n", input);
	/* Also Same As */
	std::cin >> input;
	std::cout << "입력받은 값: " << input << std::endl;



	char ch;

	scanf_s("%c", &ch);
	printf("입력받은 값: %d\n", ch);
	/* Also Same As */
	ch = getchar();
	printf("입력받은 값: %d\n", ch);



	char buffer[20];

	scanf_s("%s", &buffer, sizeof(buffer));
	printf("입력받은 값: %s\n", buffer);
	/* Also Same As */
	gets_s(buffer, sizeof(buffer));
	printf("입력받은 값: %s\n", buffer);



	return 0;
}