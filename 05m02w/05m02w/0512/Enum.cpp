#include <iostream>
using namespace std;

enum syllable_0512_1 {
	Do,
	Re,
	Mi,
	Pa
};

// CPP
enum class COLOR_0512_1 {
	RED = 10,
	GREEN,
	BLUE,
	WHITE = 20,
	BLACK
};

int main_0512_1() {
	syllable_0512_1 syllable = Do;
	syllable = Mi;

	COLOR_0512_1 color = COLOR_0512_1::RED;
	color = COLOR_0512_1::GREEN;

	return 0;
}