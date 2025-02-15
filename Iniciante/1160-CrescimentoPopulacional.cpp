#include <iostream>

int main()
{
	unsigned int T, PA, PB;
	float GA, GB;
	std::cin >> T;
	for (unsigned short i = 0; i < T; i++)
	{
		std::cin >> PA >> PB >> GA >> GB;
		unsigned short anos = 0;
		while (PA <= PB)
		{
			PA += PA * (GA / 100);
			PB += PB * (GB / 100);
			anos++;
			if (anos > 100) break;
		}
		if (anos > 100) std::cout << "Mais de 1 seculo.\n";
		else std::cout << anos << " anos.\n";
	}
}