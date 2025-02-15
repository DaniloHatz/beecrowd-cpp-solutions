#include <iostream>

int main()
{
	unsigned short numero;
	std::cin >> numero;

	switch (numero)
	{
	case 61:
		std::cout << "Brasilia";
		break;
	case 71:
		std::cout << "Salvador";
		break;
	case 11:
		std::cout << "Sao Paulo";
		break;
	case 21:
		std::cout << "Rio de Janeiro";
		break;
	case 32:
		std::cout << "Juiz de Fora";
		break;
	case 19:
		std::cout << "Campinas";
		break;
	case 27:
		std::cout << "Vitoria";
		break;
	case 31:
		std::cout << "Belo Horizonte";
		break;
	default:
		std::cout << "DDD nao cadastrado";
		break;
	}

	std::cout << "\n";

	return 0;
}