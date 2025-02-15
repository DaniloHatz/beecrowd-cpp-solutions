#include <iostream>
#include <iomanip>

int main() {
	int codigoPeca[2], qtdPecas[2];
	double valorPeca[2], total = .0;

	for (unsigned short i = 0; i < 2; ++i) {
		std::cin >> codigoPeca[i] >> qtdPecas[i] >> valorPeca[i];
		total += qtdPecas[i] * valorPeca[i];
	}

	std::cout << "VALOR A PAGAR: R$ " << std::fixed << std::setprecision(2) << total << '\n';

	return 0;
}