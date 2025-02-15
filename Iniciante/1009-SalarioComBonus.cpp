#include <iostream>
#include <iomanip>

const double COMISSAO = 0.15;

int main() {
	char nome[30];
	double salarioFixo, vendasMes, salarioTotal = .0;

	std::cin >> nome >> salarioFixo >> vendasMes;
	salarioTotal = salarioFixo + (vendasMes * COMISSAO);

	std::cout << "TOTAL = R$ " << std::fixed << std::setprecision(2) << salarioTotal << '\n';

	return 0;
}