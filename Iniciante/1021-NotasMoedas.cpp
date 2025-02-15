#include <iostream>
#include <iomanip>

int main()
{
	float valor;
	std::cin >> valor;
	int valorConvertido = valor * 100;

	int notas[6] = { 10000, 5000, 2000, 1000, 500, 200 };
	int moedas[6] = { 100, 50, 25, 10, 5, 1 };

	std::cout << "NOTAS:\n";
	for (int i = 0; i < 6; i++)
	{
		std::cout << valorConvertido / notas[i] << " nota(s) de R$ " << std::fixed << std::setprecision(2) << notas[i] / 100.00 << std::endl;
		valorConvertido %= notas[i];
	}

	std::cout << "MOEDAS:\n";
	for (int i = 0; i < 6; i++)
	{
		std::cout << valorConvertido / (moedas[i]) << " moeda(s) de R$ " << std::fixed << std::setprecision(2) << moedas[i] / 100.00 << std::endl;
		valorConvertido = valorConvertido % (moedas[i]);
	}

	return 0;
}