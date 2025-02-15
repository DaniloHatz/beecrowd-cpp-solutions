#include <iostream>

int main()
{
	int entradas[5];
	unsigned short qtdPares = 0;
	for (unsigned short i = 0; i < 5; i++)
	{
		std::cin >> entradas[i];
		qtdPares += entradas[i] % 2 == 0 ? 1 : 0;
	}
	std::cout << qtdPares << " valores pares\n";

	return 0;
}