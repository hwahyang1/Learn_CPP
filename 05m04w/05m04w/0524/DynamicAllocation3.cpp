#include <iostream>
using namespace std;

class CTest_0524_5 {
private:
	int num;
public:
	void setNum(int n) { num = n; }
	int getNum() { return num; }
};

int main_0524_5() {
	/* �����Ҵ� */
	CTest_0524_5 t1;
	t1.setNum(11);
	cout << t1.getNum() << endl;

	//cout << t1; // �ν��Ͻ� ��ü�� ����ϴ� ���� �ȵ�
	cout << &t1 << endl;

	cout << endl;

	/* �����Ҵ� */
	CTest_0524_5* t2;
	t2 = new CTest_0524_5();
	t2->setNum(22);

	cout << t2->getNum() << endl;
	cout << t2 << endl;

	delete t2;
	t2 = nullptr; // �̰� ���������� ���ִ°� �Ǽ� ����.

	return 0;
}