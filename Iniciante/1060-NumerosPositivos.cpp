#include <iostream>

int main()
{
	double numeros[6];
	unsigned short qtdPositivos = 0;
	for (unsigned char i = 0; i < 6; i++)
	{
		std::cin >> numeros[i];
		qtdPositivos += numeros[i] > 0 ? 1 : 0;
	}

	std::cout << qtdPositivos << " valores positivos\n";

	return 0;
}