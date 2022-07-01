#include <iostream>
#include <thread>
using namespace std;

void func1_0701_1() {
	for (int i = 0; i < 10; i++) { std::cout << "쓰레드 1 작동중!" << endl; }
}
void func2_0701_1() {
	for (int i = 0; i < 10; i++) { std::cout << "쓰레드 2 작동중!" << endl; }
}
void func3_0701_1() {
	for (int i = 0; i < 10; i++) { std::cout << "쓰레드 3 작동중!" << endl; }
}


int main_0701_1() {
	cout << thread::hardware_concurrency() << endl; // 논리프로세서 개수
	cout << this_thread::get_id() << endl; // 쓰레드 ID

	cout << endl;

	thread t1(func1_0701_1);
	thread t2(func2_0701_1);
	thread t3(func3_0701_1);

	for (int i = 0; i < 10; i++) { std::cout << "main 작동중!" << endl; }

	// 종료 대기 (작동 중인데 main이 끝나버리면 답없음)
	t1.join();
	t2.join();
	t3.join();

	// 대기 X (작동 중이든 말든 main 그냥 종료함)
	/*t1.detach();
	t2.detach();
	t3.detach();*/

	cout << "main 종료" << endl;
	
	return 0;
}