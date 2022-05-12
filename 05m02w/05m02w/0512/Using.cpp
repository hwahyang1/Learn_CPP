#include <iostream>

namespace Hybrid_0512_6 {
	void HybFunc() {
		std::cout << "So simple function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}
}

int main_0512_6() {
	using Hybrid_0512_6::HybFunc; // 이렇게 namespace 전체가 아니라 특정한 애만 using 때려버려도 됨
	HybFunc();

	return 0;
}