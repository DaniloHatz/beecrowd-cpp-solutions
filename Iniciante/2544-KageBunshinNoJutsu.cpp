#include <iostream>
#include <bit>

int main() {
	unsigned int qtNinjas;

	while (std::cin >> qtNinjas) {
		std::cout << std::countr_zero(qtNinjas) << '\n';
	}

	return 0;
}