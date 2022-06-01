#include <iostream>
using namespace std;

class Base_0601_2 {
protected:
	int m_i;
public:
	void Print() { cout << "I'm Base" << endl; }
};

class Derived_0601_2 :public Base_0601_2 {
	using Base_0601_2::Print; // public을 private로 끌어내림
public:
	void print() = delete; // 존재 자체를 없애버림
	using Base_0601_2::m_i; // 이러면 public으로 바뀜
};