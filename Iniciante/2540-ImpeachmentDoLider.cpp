#include <iostream>

const double PI = 2.0 / 3.0;

int main() {
	unsigned int qtJogadores;
	unsigned short voto;

	while (std::cin >> qtJogadores) {
		double margem = qtJogadores * PI;
		unsigned int totalFavorImpeachment = 0;
		
		for (unsigned int i = 0; i < qtJogadores; ++i) {
			std::cin >> voto;
			totalFavorImpeachment += voto;
		}
		std::cout << (totalFavorImpeachment >= margem ? "impeachment\n" : "acusacao arquivada\n");
	}

	return 0;
}