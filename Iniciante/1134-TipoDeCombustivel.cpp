#include <iostream>

int main()
{
	short entrada, alcool = 0, gasolina = 0, diesel = 0;
	std::cin >> entrada;
	while (entrada != 4)
	{
		switch (entrada)
		{
		case 1:
			alcool++;
			break;
		case 2:
			gasolina++;
			break;
		case 3:
			diesel++;
			break;
		default:
			break;
		}
		std::cin >> entrada;
	}
	std::cout << "MUITO OBRIGADO\n";
	std::cout << "Alcool: " << alcool;
	std::cout << "\nGasolina: " << gasolina;
	std::cout << "\nDiesel: " << diesel;
	std::cout << std::endl;
}