#include <iostream>
using namespace std;

template<typename T1, typename T2>
class Data_0608_1 {
    T1 value;
public:
    Data_0608_1(T1 v);
    void CopyData(T2 v);
    T1 GetData();
};
template<typename T1, typename T2>
Data_0608_1<T1, T2>::Data_0608_1(T1 v) { value = v; }
template<typename T1, typename T2>
void Data_0608_1<T1, T2>::CopyData(T2 v) { value = v; }
template<typename T1, typename T2>
T1 Data_0608_1<T1, T2>::GetData() { return value; }

int main_0608_1() {
    int a = 10;
    Data_0608_1<int, int&> obj1(10);
    cout << obj1.GetData() << endl;

	return 0;
}