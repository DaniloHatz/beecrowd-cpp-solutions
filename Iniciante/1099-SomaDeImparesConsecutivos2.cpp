#include <iostream>

void SomaImpares(int, int);

int main()
{
	unsigned int qtEntradas;
	std::cin >> qtEntradas;
	int* entrada1 = new int[qtEntradas];
	int* entrada2 = new int[qtEntradas];
	for (unsigned int i = 0; i < qtEntradas; i++)
	{
		std::cin >> entrada1[i] >> entrada2[i];
		if (entrada1[i] <= entrada2[i]) SomaImpares(entrada1[i], entrada2[i]);
		else SomaImpares(entrada2[i], entrada1[i]);
	}
}

void SomaImpares(int n1, int n2)
{
	int resultado = 0;
	for (int i = n1 + 1; i < n2; i++)
		if (i % 2 != 0)
			resultado += i;
	std::cout << resultado << "\n";
}