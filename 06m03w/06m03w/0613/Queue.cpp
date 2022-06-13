#include <iostream>
using namespace std;

#define MAX_QUEUE_SIZE 100 // queue 최대 크기

int queue[MAX_QUEUE_SIZE];
int front = -1;
int rear = -1;

int is_Empty_0613_2() { // queue가 비어있는지 확인
    if (front == rear) return 1;
    else return 0;
}

int is_End_0613_2() { // 더 이상 넣을 자리가 없는지 확인
    if (rear == MAX_QUEUE_SIZE - 1) return 1;
    else return 0;
}

void enqueue_0613_2(int item) {
    if (is_End_0613_2()) { //넣을 곳이 없으면 삽입 불가
        cout << "enqueue error" << endl;
        exit(1);
    }
    rear++;
    queue[rear] = item;
}

int dequeue_0613_2() {
    if (is_Empty_0613_2()) { // 큐가 비어있으면 삭제 불가
        cout << "dequeue error" << endl;
        exit(1);
    }
    front++;
    return queue[front];
}

int main_0613_2() {
    int a, b, c;
    enqueue_0613_2(1); // 1
    enqueue_0613_2(2); // 1, 2
    enqueue_0613_2(3); // 1, 2, 3

    a = dequeue_0613_2(); // -, 2, 3
    b = dequeue_0613_2(); // -, -, 3
    c = dequeue_0613_2(); // -, -, -

    cout << "<Queue Test>" << endl;
    cout << "a = " << a << "   b = " << b << "   c = " << c << endl;
    return 0;
}