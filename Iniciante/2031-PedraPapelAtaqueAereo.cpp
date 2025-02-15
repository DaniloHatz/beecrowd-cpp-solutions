#include <iostream>

int main()
{
	unsigned short n;
	char j1[7], j2[7];
	std::cin >> n;
	for (unsigned short i = 0; i < n; ++i)
	{
		std::cin >> j1 >> j2;
		if (j1[0] == 'a')
		{
			if (j2[0] == 'p')
				std::cout << "Jogador 1 venceu\n";
			else
				std::cout << "Aniquilacao mutua\n";
		}
		else if (j1[0] == 'p')
			if (j1[1] == 'e')
				if (j2[0] == 'p')
					if (j2[1] == 'a')
						std::cout << "Jogador 1 venceu\n";
					else
						std::cout << "Sem ganhador\n";
				else
					std::cout << "Jogador 2 venceu\n";
			else
				if (j2[0] == 'p')
					if (j2[1] == 'a')
						std::cout << "Ambos venceram\n";
					else
						std::cout << "Jogador 2 venceu\n";
				else
					std::cout << "Jogador 2 venceu\n";
	}
}