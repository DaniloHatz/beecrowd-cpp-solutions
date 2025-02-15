#include <iostream>

float LeNota()
{
	float nota = -1;
	std::cin >> nota;
	while (nota < 0 || nota > 10)
	{
		std::cout << "nota invalida\n";
		std::cin >> nota;
	}
	return nota;
}

int main()
{
	float n1 = LeNota(), n2 = LeNota();
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(2);
	std::cout << "media = " << (n1 + n2) / 2 << std::endl;
}