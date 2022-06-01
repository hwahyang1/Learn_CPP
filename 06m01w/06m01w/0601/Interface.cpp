#include <iostream>
using namespace std;

#define interface struct /*struct or class*/

struct IPlay_0601_3 {
	virtual void Play() abstract;
};

class Man_0601_3 : public IPlay_0601_3 {
	string name;
public:
	Man_0601_3(string name) { this->name = name; }
	virtual void Play() { cout << name << " 연주하다." << endl; }
};