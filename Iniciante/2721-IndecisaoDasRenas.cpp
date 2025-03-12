#include <iostream>
#include <vector>
#include <string>

int main() {
	unsigned short entrada;
	unsigned int bolasDeNeve = 0, totalDivisoes = 0;
	std::vector<std::string> renas{
		"Dasher",
		"Dancer",
		"Prancer",
		"Vixen",
		"Comet",
		"Cupid",
		"Donner",
		"Blitzen",
		"Rudolph"
	};

	for (unsigned char i = 0; i < 9; ++i) {
		std::cin >> entrada;
		bolasDeNeve += entrada;
	}

	while (bolasDeNeve > 1) {
		--bolasDeNeve;
		++totalDivisoes;
		
		if (totalDivisoes > 8)
			totalDivisoes = 0;
	}

	std::cout << renas[totalDivisoes] << '\n';

	return 0;
}