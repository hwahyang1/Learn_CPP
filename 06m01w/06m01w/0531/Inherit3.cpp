#include <iostream>
using namespace std;

class CMyUSB_0531_6 {
public:
	virtual int GetUsbVersion() abstract;
	virtual int GetTransferRate() abstract;
};

class CMySerial_0531_6 {
public:
	virtual int GetSignal() abstract;
	virtual int GetRate() abstract;
};

class CMyDevice_0531_6 :public CMyUSB_0531_6, public CMySerial_0531_6 {
public:
	/* 상속받은 두개 다 정의해야함! */
	virtual int GetUsbVersion() { return 0; }
	virtual int GetTranferRate() { return 0; }

	virtual int GetSignal() { return 0; }
	virtual int GetRate() { return 0; }
};

int main_0531_6() {


	return 0;
}