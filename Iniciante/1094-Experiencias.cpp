#include <iostream>

int main()
{
	unsigned short qtEntradas, i = 0;
	std::cin >> qtEntradas;
	unsigned int totalCobaias = 0, totalRatos = 0, totalSapos = 0, totalCoelhos = 0, qtAtual;
	char cobaia;
	while (i < qtEntradas)
	{
		std::cin >> qtAtual >> cobaia;
		totalCobaias += qtAtual;
		switch (cobaia)
		{
		case 'R' :
			totalRatos += qtAtual;
			break;
		case 'S':
			totalSapos += qtAtual;
			break;
		case 'C':
			totalCoelhos += qtAtual;
			break;
		default:
			break;
		}

		i++;
	}
	std::cout << "Total: " << totalCobaias << " cobaias\n";
	std::cout << "Total de coelhos: " << totalCoelhos << "\n";
	std::cout << "Total de ratos: " << totalRatos << "\n";
	std::cout << "Total de sapos: " << totalSapos << "\n";
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(2);
	std::cout << "Percentual de coelhos: " << float(totalCoelhos) / totalCobaias * 100.0f << " %\n";
	std::cout << "Percentual de ratos: " << float(totalRatos) / totalCobaias * 100.0f << " %\n";
	std::cout << "Percentual de sapos: " << float(totalSapos) / totalCobaias * 100.0f << " %\n";
}