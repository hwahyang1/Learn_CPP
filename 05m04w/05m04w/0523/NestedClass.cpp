#include <iostream>
using namespace std;

/* ��ø Ŭ���� (Nested Class / Inner Class)*/

/* ����ü�� �̿��� ���� */
struct enclose_0523_3
{
	struct inner_0523_3 {
		static int ivalue;
		void func(int value);
	};

	void F() {
		inner_0523_3 in; // ������ �ٱ����� �����ϴ� �� �ƴ϶� �̷��� ���ʿ��� ������
	}
};
int enclose_0523_3::inner_0523_3::ivalue = 0; // ������ �̷���
void enclose_0523_3::inner_0523_3::func(int value) {}; // �Լ��� ����

/* Ŭ���������� �̷��� */
class Outter_0523_3 {
private:
	class Nested_0523_3 {
	private:
		string name;
	public:
		Nested_0523_3(string nameValue) : name(nameValue) {};
		void Display() const {
			cout << "Outter Ŭ���� ���� Ŭ������ " << name.c_str() << endl;
		}
	};
public:
	static Nested_0523_3 func(string name) { // ���� �Լ��� ���� Ŭ������ ��ü�� �����Ͽ� ��ȯ
		return Nested_0523_3{ name };
	}
};

int main_0523_3() {
	// ��ø Ŭ������ ���� �ǹ̰� ����. �̰� ������ ���ѰŰ�..
	Outter_0523_3::func("ȣ�� ���").Display();

	// �̰� �Ϲ��� ���
	auto anotherClass = Outter_0523_3::func("���� ���");
	anotherClass.Display();
	
	return 0;
}