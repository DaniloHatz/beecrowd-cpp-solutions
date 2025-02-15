#include <iostream>

int main()
{
	char posicao = 0;
	unsigned int entradas[100];
	for (char i = 0; i < 100; i++)
	{
		std::cin >> entradas[i];
		if (entradas[i] > entradas[posicao])
			posicao = i;
	}
	std::cout << entradas[posicao] << std::endl;
	std::cout << posicao + 1 << std::endl;
}