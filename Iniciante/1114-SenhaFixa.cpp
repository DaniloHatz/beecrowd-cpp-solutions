#include <iostream>

int main()
{
	const unsigned short s = 2002;
	unsigned short e;
	std::cin >> e;
	while (e != s)
	{
		std::cout << "Senha Invalida\n";
		std::cin >> e;
	}
	std::cout << "Acesso Permitido\n";
}