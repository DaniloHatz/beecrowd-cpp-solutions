#include <iostream>

int main()
{
	unsigned short qtGrenais = 0, inter= 0, gremio = 0, empate = 0 , n1, n2, opcao = 1;
	while (opcao == 1)
	{
		opcao = 0;
		std::cin >> n1 >> n2;
		qtGrenais++;
		if (n1 > n2) inter++;
		else if (n2 > n1) gremio++;
		else empate++;
		while (opcao != 1 && opcao != 2)
		{
			std::cout << "Novo grenal (1-sim 2-nao)\n";
			std::cin >> opcao;
		}
	}
	std::cout << qtGrenais << " grenais\n";
	std::cout << "Inter:" << inter;
	std::cout << "\nGremio:" << gremio;
	std::cout << "\nEmpates:" << empate;
	if (inter > empate || gremio > empate) std::cout << (inter > gremio ? "\nInter" : "\nGremio") << " venceu mais\n";
	else std::cout << "\nNao houve vencedor\n";
}