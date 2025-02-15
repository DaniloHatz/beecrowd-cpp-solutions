#include <iostream>

int main()
{
	int entradas[5];
	unsigned short qtPares = 0, qtImpares = 0, qtPositivos = 0, qtNegativos = 0;

	for (unsigned short i = 0; i < 5; i++)
	{
		std::cin >> entradas[i];
		if (entradas[i] % 2 == 0)
			qtPares += 1;
		else
			qtImpares += 1;
		if (entradas[i] > 0)
			qtPositivos += 1;
		else if (entradas[i] < 0)
			qtNegativos += 1;
	}

	std::cout << qtPares << " valor(es) par(es)\n";
	std::cout << qtImpares << " valor(es) impar(es)\n";
	std::cout << qtPositivos << " valor(es) positivo(s)\n";
	std::cout << qtNegativos << " valor(es) negativo(s)\n";

	return 0;
}