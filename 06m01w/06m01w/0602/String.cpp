// 어딘가 깨짐
// 나중에 녹화본 확인 필요

/*#include <iostream>
using namespace std;

class String_0602_4 {
private:
	int len;
	char str;
public:
	String_0602_4();
	String_0602_4(const char* s);
	String_0602_4(const String_0602_4& s);
	~String_0602_4();

	String_0602_4& operator= (const String_0602_4& s);
	String_0602_4& operator+= (const String_0602_4& s);
	bool operator== (const String_0602_4& s);
	String_0602_4 operator+ (const String_0602_4& s);

	friend ostream& operator<< (ostream& os, const String_0602_4& s);
	friend istream& operator>> (istream& is, String_0602_4& s);
};

String_0602_4::String_0602_4() {
	len = 0;
	str = NULL;
}
String_0602_4::String_0602_4(const char* s) {
	len = strlen(s) + 1;
	str = new char[len];
	strcpy(str, s);
}
String_0602_4::String_0602_4(const String_0602_4& s) {
	len = s.len;
	str = new char[len];
	strcpy(str, s.str);
}
String_0602_4::~String_0602_4() {
	if (str != NULL) {
		delete[] str;
	}
}

String_0602_4& String_0602_4::operator= (const String_0602_4& s) {
	if (str != NULL) {
		delete[] str;
	}
	len = s.len;
	str = new char[len];
	strcpy(str, s.str);
	return *this;
}
String_0602_4& String_0602_4::operator+= (const String_0602_4& s) {
	len += (s.len - 1);
	char* tempstr = new char[len];
	strcpy(tempstr, str);
	strcpy(tempstr, s.str);

	if (str != NULL) {
		delete[] str;
	}
	str = tempstr;
	return *this;
}
bool String_0602_4::operator== (const String_0602_4& s) {
	return strcmp(str, s.str) ? false : true;
}
String_0602_4& String_0602_4::operator+ (const String_0602_4& s) {

	char* tempstr = new char[len + s.len - 1];
	strcpy(tempstr, str);
	strcpy(tempstr, s.str);

	String_0602_4 temp(tempstr);
	delete[] tempstr;
	return temp;
}

ostream& operator<< (ostream& os, const String_0602_4& s) {
	os << s.str;
	return os;
}
istream& operator>> (istream& is, String_0602_4& s) {
	char str[100];
	is >> str;
	s = String_0602_4(str);
	return is;
}

int main() {

	return 0;
}*/