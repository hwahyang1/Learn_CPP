#include <iostream>
using namespace std;

int main_0420_4() {
	int nInput = 0, nSelect = 0;
	scanf_s("%d", &nInput);

	nSelect = nInput <= 10 ? 10 : 20;
	printf("%d\n", nSelect);

	cout << endl;

	printf("%d\n", 300 == 299.99999f);
	printf("%d\n", 300 == 299.99999);

	printf("%d\n", 300 == 299.9999f);
	printf("%d\n", 300 == 300.00001f);

	cout << endl;

	int nData = 10;

	printf("%d, %d, %d\n", sizeof(5), sizeof(nData), sizeof(int));
	printf("%d, %d\n", sizeof('A'), sizeof(char));
	printf("%d, %d\n", sizeof(123.45F), sizeof(123.45));

	printf("%d, %d\n", sizeof(nData + 10.0), sizeof(++nData));
	printf("%d\n", nData);

	cout << endl;

	/*
	 * 시퀀스 포인트
	 * 
	 * 모든 식의 계산이 완료되는 지점.
	 * 시퀀스 포인트 사이에서 식의 값은 한 번만 수정될 수 있음.
	 */

	// 정의되지 않은 행동 (Undefined behavior): 컴파일러에 대응되지 않은 행동이라 컴파일러에 따라 해석이 달라짐.

	/* !!!수업이니까 한거지만 이런 짓 절대 하지 말 것.컴파일러마다 해석이 다름. !!!*/

	int x = 1;

	cout << ++x << ++x << ++x << endl;
	cout << ++x << ++x << --x << endl;
	cout << x++ << x++ << endl;
	//cout << (x++)++ << endl;
	cout << ++x << x++ << --x << endl;

	cout << endl;

	x = 1;
	x = x++ + 1;
	cout << x << endl;

	cout << endl;

	int i = 10;
	i = i++ + ++i;
	cout << i << endl;

	cout << endl;

	int a[3] = { 1, 2, 3 };
	int i = 0;
	a[i] = i++;

	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;

	return 0;
}