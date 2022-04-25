#include <iostream>
using namespace std;

int main_0425_2() {
	int i;
	for (i = 0; i < 10; i++) {
		if (i > 4) break;

		printf("%d번째\n", i);
	}
	printf("END: i == %d\n", i);

	cout << endl;

	for (int i = 0; i < 5; i++) {
		printf("i == %d\n", i);
		for (int j = 0; i < 5; j++) {
			if (j > 2) break;
			printf("\t%d번째\n", j);
		}
		printf("END\n\n");
	}

	cout << endl;

	// i > 2, j > 2 인 경우 나가기
	for (int i = 0; i < 5; i++) {
		if (i > 2) break;
		for (int j = 0; j < 5; j++) {
			if (j > 2) break;
			printf("%d %d\n", i, j);
		}
		printf("\n");
	}

	cout << endl;

	// 100 미만 정수 중 5 배수 제외한 숫자
	for (int i = 0; i < 100; i++) {
		if (i % 5 == 0) continue;
		cout << i << " ";
	}

	cout << endl << endl;

	int count = 0;
	int com_num = rand() % 100 + 1;

	printf("컴퓨터가 생각한 숫자를 맞추어 보세요! (1~100)\n");

	for (;;) {
		int usranswer;
		scanf_s("%d", &usranswer);
		count++;
		if (usranswer == com_num) {
			printf("%d번만에 맞추셨군요!\n", count);
			if (count < 6) printf("훌륭해요!\n");
			else if (count < 8) printf("보통이에요!\n");
			else if (count < 12) printf("실망이에요!\n");
			break;
		}
		else {
			if (usranswer < com_num) {
				printf("그것보다 커요!\n");
			}
			else {
				printf("그것보다 작아요!\n");
			}
		}
	}

	return 0;
}