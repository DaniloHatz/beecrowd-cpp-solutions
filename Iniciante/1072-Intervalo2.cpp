#include <iostream>

int main()
{
	short qtEntradas = 0;
	std::cin >> qtEntradas;
	short qtIn = 0, qtOut = 0;
	short entrada;
	for (int i = 0; i < qtEntradas; i++)
	{
		std::cin >> entrada;
		if (entrada >= 10 && entrada <= 20)
			qtIn++;
		else
			qtOut++;
	}
	std::cout << qtIn << " in\n";
	std::cout << qtOut << " out\n";

	return 0;
}