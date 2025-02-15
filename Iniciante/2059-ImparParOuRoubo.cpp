#include <iostream>

int main()
{
	bool escolhaPar, roubo, acusa, resultadoPar;
	unsigned short escolhaJogador1, escolhaJogador2;
	std::cin >> escolhaPar >> escolhaJogador1 >> escolhaJogador2 >> roubo >> acusa;
	resultadoPar = ((escolhaJogador1 + escolhaJogador2) % 2 == 0);
	std::cout << "Jogador ";
	if (roubo)
	{
		if (acusa)
			std::cout << '2';
		else
			std::cout << '1';
	}
	else
	{
		if (acusa)
			std::cout << '1';
		else
		{
			if (escolhaPar)
				if (resultadoPar)
					std::cout << '1';
				else
					std::cout << '2';
			else
				if (resultadoPar)
					std::cout << '2';
				else
					std::cout << '1';
		}
	}
	std::cout << " ganha!\n";
}