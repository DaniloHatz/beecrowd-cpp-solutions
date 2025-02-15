#include <iostream>

int main()
{
	float n[6];
	unsigned short qtPositivos = 0;
	float somaEntradas = 0;
	for (unsigned short i = 0; i < 6; i++)
	{
		std::cin >> n[i];
		if (n[i] > 0)
		{
			qtPositivos++;
			somaEntradas += n[i];
		}
	}

	std::cout << qtPositivos << " valores positivos\n";
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(1);
	std::cout << somaEntradas / qtPositivos << std::endl;
	
	return 0;
}