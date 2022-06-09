#include <iostream>
using namespace std;
#include <chrono>
using namespace chrono;

int main_0609_2() {
	long sum = 0;
	system_clock::time_point start = system_clock::now();

	for (int i = 0; i < 1000000; i++) {
		sum += i;
	}

	system_clock::time_point end = system_clock::now();

	nanoseconds nano = end - start; // ns로 표현
	hours hour = duration_cast<hours>(end - start); // 시간으로 표현
	minutes min = duration_cast<minutes>(end - start); // 분으로 표현
	duration<double> sec = end - start; // 초로 표현
	milliseconds mili = duration_cast<milliseconds>(end - start); // ms으로 표현

	cout << "소요시간: " << nano.count() << "ns" << endl;
	cout << "소요시간: " << mili.count() << "ms" << endl;
	cout << "소요시간: " << sec.count() << "s" << endl;

	return 0;
}