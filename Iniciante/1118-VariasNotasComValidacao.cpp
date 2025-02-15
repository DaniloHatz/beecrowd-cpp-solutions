#include <iostream>

float LeNota()
{
	float nota = -1;
	std::cin >> nota;
	while (nota < 0 || nota > 10)
	{
		std::cout << "nota invalida\n";
		std::cin >> nota;
	}
	return nota;
}

int main()
{
	unsigned short opcao = 1;
	while (opcao == 1)
	{
		opcao = 0;
		float n1 = LeNota(), n2 = LeNota();
		std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
		std::cout.precision(2);
		std::cout << "media = " << (n1 + n2) / 2 << std::endl;
		while (opcao != 1 && opcao != 2)
		{
			std::cout << "novo calculo (1-sim 2-nao)\n";
			std::cin >> opcao;
		}
	}
}