#include <iostream>
#include <string>
#include <map>

int main() {
	std::map<std::string, unsigned int> alimentos = {
		{"suco de laranja", 120},
		{"morango fresco", 85},
		{"mamao", 85},
		{"goiaba vermelha", 70},
		{"manga", 56},
		{"laranja", 50},
		{"brocolis", 34}
	};

	unsigned short qtEntradas, qtAlimentos;
	std::string nomeAlimento;
	unsigned int total = 0;
	
	std::cin >> qtEntradas;

	while (qtEntradas != 0) {
		for (unsigned short i = 0; i < qtEntradas; ++i) {
			std::cin >> qtAlimentos;
			std::cin.ignore();
			std::getline(std::cin, nomeAlimento);
			total += qtAlimentos * (alimentos[nomeAlimento]);
		}

		if (total > 130)
		{
			total -= 130;
			std::cout << "Menos " << total << " mg\n";
		}
		else if (total < 110)
		{
			total = 110 - total;
			std::cout << "Mais " << total << " mg\n";
		} else
			std::cout << total << " mg\n";

		total = 0;
		std::cin >> qtEntradas;
	}
}