#include <iostream>
using namespace std;

struct Node_0614_1 {
	int data;
	Node_0614_1* next;
};

class LinkedList_0614_1 {
public:
	Node_0614_1* head;
	Node_0614_1* tail;
	LinkedList_0614_1();
	~LinkedList_0614_1();
	void insertNode(int data);
	void deleteNode(int data);
	Node_0614_1* findNode(int data);
	void printNode();
};

LinkedList_0614_1::LinkedList_0614_1() {
	head = new Node_0614_1;
	tail = new Node_0614_1;
	head->data = -1;
	tail->data = -1;

	head->next = tail;
	tail->next = NULL;
}
LinkedList_0614_1::~LinkedList_0614_1() {
	Node_0614_1* now, * temp;
	for (now = head->next; now != tail;) {
		temp = now->next;
		delete(now);
		now = temp;
	}
	delete(head);
	delete(tail);
}

void LinkedList_0614_1::insertNode(int data) { // 오름차순으로 정렬되도록 데이터 삽입
	Node_0614_1* newNode = new Node_0614_1;
	newNode->data = data;

	Node_0614_1* now = head;
	// 이 루프를 거치면 now는 데이터를 삽입해야 하는 위치 바로 전 노드로 가짐
	for (; now->next->data < data && now->next != tail; now = now->next);

	newNode->next = now->next;
	now->next = newNode;
}
void LinkedList_0614_1::deleteNode(int data) {
	Node_0614_1* now, * temp;

	now = head->next;
	temp = head;

	for (; now->data != data && now != tail; temp = now, now = now->next);

	if (now != tail) {
		temp->next = now->next;
		delete(now);
	}
}

Node_0614_1* LinkedList_0614_1::findNode(int data) {
	Node_0614_1* now = head->next;
	
	for (; now->data != data && now != tail; now = now->next);

	if (now != tail) return now;
	else return NULL;
}
void LinkedList_0614_1::printNode() {
	Node_0614_1* now;

	for (now = head->next; now != tail; now = now->next) {
		cout << now->data << " ";
	}
	cout << endl;
}

int main_0614_1() {
	LinkedList_0614_1 list;

	list.insertNode(1);
	list.insertNode(3);
	list.insertNode(7);
	list.insertNode(4);

	list.printNode();

	return 0;
}