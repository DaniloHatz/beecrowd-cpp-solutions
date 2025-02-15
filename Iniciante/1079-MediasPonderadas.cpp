#include <iostream>
#include <cmath>

const unsigned short PESO1 = 2, PESO2 = 3, PESO3 = 5;
const unsigned short TOTALPESOS = PESO1 + PESO2 + PESO3;

int main()
{
	unsigned short qtCasos;
	std::cin >> qtCasos;
	for (unsigned short i = 0; i < qtCasos; i++)
	{
		float v1, v2, v3;
		std::cin >> v1 >> v2 >> v3;
		std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
		std::cout.precision(1);
		std::cout << std::round((((v1 * PESO1) + (v2 * PESO2) + (v3 * PESO3)) / TOTALPESOS) * 10) / 10 << std::endl;
	}
}