#include <iostream>
#include <stack>
#include <queue>
#include <deque>
using namespace std;

int main_0621_2() {
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.pop(); // 3
	st.pop(); // 2
	st.pop(); // 1

	queue<int> qu;
	st.push(1);
	st.push(2);
	st.push(3);
	st.pop(); // 1
	st.pop(); // 2
	st.pop(); // 3

	deque<int> dq;
	for (int i = 0; i < 5; i++) {
		dq.push_back(i + 1);
	}

	dq.push_front(100);
	dq.push_front(200);

	deque<int>::iterator iter;
	for (iter = dq.begin(); iter != dq.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}