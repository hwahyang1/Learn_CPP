#include <iostream>
using namespace std;

int main_0413()
{
	// �� �� �ּ�
	/*
	 * ��
	 * ��
	 * 
	 * ��
	 * 
	 * ��
	 * ��
	 */



	std::cout << "Apple\n";
	/* Also Same As */
	std::cout << "Apple" << std::endl;
	/* Also Also Same As */
	printf("Apple\n");
	/* Also Also Also Same As */
	puts("Apple");



	/* using namespace std; => */
	cout << "Apple" << endl;



	int level = 7;

	printf("Level: %d\n", 7);
	/* Also Same As */
	printf("Level: %d\n", level);



	int a = 1;
	int b = 2;

	printf("%d + %d = %d\n", 1, 2, 3);
	/* Also Same As */
	printf("%d + %d = %d\n", a, b, a + b);



	printf("%5d\n", 3);
	printf("%05d\n", 3);
	printf("%02d�� %02d��\n", 1, 5);

	printf("%10.1f\n", 123.456);
	printf("%010.1f\n", 123.456);

	printf("%s\n", "Hello");

	printf("%d %s %f\n", 3, "Hello", 12.25);



	printf("%d\n", 16); // 10����
	printf("%x\n", 16); // 16����
	printf("%o\n", 16); // 8����
	printf("%c\n", 65); // character



	return 0;
}
