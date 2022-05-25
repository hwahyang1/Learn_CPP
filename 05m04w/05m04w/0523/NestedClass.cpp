#include <iostream>
using namespace std;

/* 중첩 클래스 (Nested Class / Inner Class)*/

/* 구조체를 이용한 예시 */
struct enclose_0523_3
{
	struct inner_0523_3 {
		static int ivalue;
		void func(int value);
	};

	void F() {
		inner_0523_3 in; // 보통은 바깥에서 접근하는 게 아니라 이렇게 안쪽에서 접근함
	}
};
int enclose_0523_3::inner_0523_3::ivalue = 0; // 접근은 이렇게
void enclose_0523_3::inner_0523_3::func(int value) {}; // 함수도 동일

/* 클래스에서는 이렇게 */
class Outter_0523_3 {
private:
	class Nested_0523_3 {
	private:
		string name;
	public:
		Nested_0523_3(string nameValue) : name(nameValue) {};
		void Display() const {
			cout << "Outter 클래스 내부 클래스의 " << name.c_str() << endl;
		}
	};
public:
	static Nested_0523_3 func(string name) { // 정적 함수로 내부 클래스를 객체로 생성하여 반환
		return Nested_0523_3{ name };
	}
};

int main_0523_3() {
	// 중첩 클래스를 쓰는 의미가 없음. 이건 예제를 위한거고..
	Outter_0523_3::func("호출 방법").Display();

	// 이게 일반적 방법
	auto anotherClass = Outter_0523_3::func("선언 방법");
	anotherClass.Display();
	
	return 0;
}