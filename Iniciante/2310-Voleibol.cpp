#include <iostream>
#include <iomanip>

int main() {
	unsigned short entradas, 
		qtSaques, qtBloqueios, qtAtaques, ptsSaque, ptsBloqueio, ptsAtaque,
		totalQtSaques = 0, totalQtBloqueios = 0, totalQtAtaques = 0, totalPtsSaque = 0, totalPtsBloqueio = 0, totalPtsAtaque = 0;
	char jogador[30];
	std::cin >> entradas;

	for (unsigned short i = 0; i < entradas; ++i) {
		std::cin >> jogador;
		std::cin >> qtSaques >> qtBloqueios >> qtAtaques
			>> ptsSaque >> ptsBloqueio >> ptsAtaque;

		totalQtSaques += qtSaques;
		totalQtBloqueios += qtBloqueios;
		totalQtAtaques += qtAtaques;
		totalPtsSaque += ptsSaque;
		totalPtsBloqueio += ptsBloqueio;
		totalPtsAtaque += ptsAtaque;
	}

	double peSaque = (double(totalPtsSaque) / totalQtSaques) * 100.0;
	double peBloqueio = (double(totalPtsBloqueio) / totalQtBloqueios) * 100.0;
	double peAtaque = (double(totalPtsAtaque) / totalQtAtaques) * 100.0;

	std::cout << "Pontos de Saque: " << std::fixed << std::setprecision(2) << peSaque << " %.\n";
	std::cout << "Pontos de Bloqueio: " << std::fixed << std::setprecision(2) << peBloqueio << " %.\n";
	std::cout << "Pontos de Ataque: " << std::fixed << std::setprecision(2) << peAtaque << " %.\n";

	return 0;
}