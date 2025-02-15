#include <iostream>

int main()
{
	double numero;
	std::cin >> numero;

	if (numero < 0 || numero > 100.0)
	{
		std::cout << "Fora de intervalo\n";
		return 0;
	}

	double intervaloInicial[4] = { 0, 25.0, 50.0, 75.0 }, intervaloFinal[4] = {25.0, 50.0, 75.0, 100.0};
	std::string intervalos[4] = {"[0,25]", "(25,50]", "(50,75]", "(75,100]"};

	for (int i = 0; i < 4; i++)
	{
		if (numero >= intervaloInicial[i] && numero <= intervaloFinal[i])
		{
			std::cout << "Intervalo " << intervalos[i] << std::endl;
			return 0;
		}
	}

	return 0;
}