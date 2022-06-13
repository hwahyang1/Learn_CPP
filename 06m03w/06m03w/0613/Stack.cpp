#include <iostream>
using namespace std;

#define SIZE 10

typedef struct
{
	char name; // ���� �̸�
	char StackArr[SIZE]; // ���� ��� ���
	int topIndex; // ���� ž �ε���
} Stack_0613_1;

typedef Stack_0613_1* pStack_0613_1;

void Init_0613_1(pStack_0613_1 ps, char name);
void Push_0613_1(pStack_0613_1 ps, char ch);
char Pop_0613_1(pStack_0613_1 ps);

int main_0613_1()
{
	Stack_0613_1 s1;
	Init_0613_1(&s1, 'A');

	cout << endl;

	Push_0613_1(&s1, '1');
	Push_0613_1(&s1, '2');
	Push_0613_1(&s1, '3');
	Push_0613_1(&s1, '4');

	for (int i = 0; i < 5; i++) {
		cout << "Pop s1[" << i << "]: " << Pop_0613_1(&s1) << "\n";
	}

	cout << endl;

	return 0;
}

void Init_0613_1(pStack_0613_1 ps, char name)
{
	ps->name = name;
	ps->topIndex = -1;
	cout << "Constucting Stack " << ps->name << endl;
}

void Push_0613_1(pStack_0613_1 ps, char ch)
{
	if (ps->topIndex == SIZE - 1) // ������ full ����, ������ ũ�⸦ ������ ��� ����ó��
	{
		cout << "Stack " << ps->name << " is full!" << endl;
		return;
	}

	ps->topIndex++;
	ps->StackArr[ps->topIndex] = ch;
}

char Pop_0613_1(pStack_0613_1 ps)
{
	if (ps->topIndex == -1) // ������ �� ��� null ��ȯ
	{
		cout << "Stack " << ps->name << " is empty!" << endl;
		return NULL;
	}

	char rt = ps->StackArr[ps->topIndex];
	ps->topIndex--;

	return rt;

}