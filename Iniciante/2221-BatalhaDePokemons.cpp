#include <iostream>

int main() {
	unsigned int entradas, bonus, ataque[2], defesa[2], nivel[2], valorGolpe[2];
	std::cin >> entradas;

	for (unsigned int i = 0; i < entradas; ++i) {
		std::cin >> bonus;
		for (unsigned int j = 0; j < 2; ++j) {
			std::cin >> ataque[j] >> defesa[j] >> nivel[j];
			valorGolpe[j] = ((ataque[j] + defesa[j]) / 2) + (nivel[j] % 2 == 0 ? bonus : 0);
		}

		if (valorGolpe[0] > valorGolpe[1])
			std::cout << "Dabriel\n";
		else if (valorGolpe[0] < valorGolpe[1])
			std::cout << "Guarte\n";
		else
			std::cout << "Empate\n";
	}

	return 0;
}