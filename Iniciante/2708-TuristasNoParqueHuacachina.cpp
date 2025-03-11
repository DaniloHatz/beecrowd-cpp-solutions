#include <iostream>
#include <string>

int main() {
	std::string direcaoJipe;
	int qtJipes = 0, qtTuristas;
	int totalTuristas = 0;

	std::cin >> direcaoJipe;
	while (direcaoJipe.at(0) != 'A') {
		std::cin >> qtTuristas;

		if (direcaoJipe.at(0) == 'S') {
			++qtJipes;
			if (qtTuristas != 0) totalTuristas += qtTuristas;
		}
		else {
			--qtJipes;
			if (qtTuristas != 0) totalTuristas -= qtTuristas;
		}

		std::cin >> direcaoJipe;
	}

	std::cout << totalTuristas << '\n' << qtJipes << '\n';

	return 0;
}