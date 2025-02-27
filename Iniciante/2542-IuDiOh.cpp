#include <iostream>
#include <vector>

int main() {
	unsigned int qtAtributos, qtCartasMarcos, qtCartasLeonardo, atributo, cartaMarcos, cartaLeonardo;

	while (std::cin >> qtAtributos) {
		std::cin >> qtCartasMarcos >> qtCartasLeonardo;

		std::vector<unsigned int> baralhoMarcos(qtCartasMarcos * qtAtributos);
		std::vector<unsigned int> baralhoLeonardo(qtCartasLeonardo * qtAtributos);

		for (unsigned int i = 0; i < qtCartasMarcos; ++i) {
			for (unsigned int j = 0; j < qtAtributos; ++j) {
				std::cin >> baralhoMarcos[i * qtAtributos + j];
			}
		}

		for (unsigned int i = 0; i < qtCartasLeonardo; ++i) {
			for (unsigned int j = 0; j < qtAtributos; ++j) {
				std::cin >> baralhoLeonardo[i * qtAtributos + j];
			}
		}

		std::cin >> cartaMarcos >> cartaLeonardo >> atributo;
		--cartaMarcos; --cartaLeonardo; --atributo;

		if (baralhoMarcos[cartaMarcos * qtAtributos + atributo] > baralhoLeonardo[cartaLeonardo * qtAtributos + atributo])
			std::cout << "Marcos\n";
		else if (baralhoMarcos[cartaMarcos * qtAtributos + atributo] < baralhoLeonardo[cartaLeonardo * qtAtributos + atributo])
			std::cout << "Leonardo\n";
		else
			std::cout << "Empate\n";
	}

	return 0;
}