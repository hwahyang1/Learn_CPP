#include <iostream>
using namespace std;

void InputChar_0509_4(char* p) {
	cout << "문자를 입력하세요 (띄어쓰기 또는 엔터로 구분): ";
	for (size_t i = 0; i < 5; i++)
	{
		cin >> p[i];
		//cin >> *(p + i);
	}
}
void OutputCount_0509_4(char* p) {
	int count = 0;
	for (size_t i = 0; i < 5; i++)
	{
		//cout << p[i] << " ";
		if (p[i] == 'A')
			count++;
	}

	cout << "A의 개수는 " << count << "개 입니다." << endl;
}

void BubbleSort_0509_4(int ary[], int len) {
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < (len - i) - 1; j++) {
			if (ary[j] > ary[j + 1]) {
				int temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}
}

int main_0509_4() {
	// 단일문자 5개를 배열 선언
	// 포인터로 배열값을 입력받는 함수 만들고
	// 배열값 중 대문자 A의 개수를 출력하는 함수 작성

	char input[5];
	InputChar_0509_4(input);
	OutputCount_0509_4(input);

	cout << endl;

	// 정렬

	int arr[4] = { 3, 2, 1, 4 };
	int len = sizeof(arr) / sizeof(int);

	int i;

	BubbleSort_0509_4(arr, len);

	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");

	cout << endl;

	// 랜덤
	srand((int)time(NULL)); // 현재 시간을 기준으로 하여 Seed 설정 (안하면은 실행 때마다 같은 결과가 나옴)

	for (int i = 0; i < 5; i++)
	{
		printf("정수 출력: %d\n", rand());
	}

	return 0;
}