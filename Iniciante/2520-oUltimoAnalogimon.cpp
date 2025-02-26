#include <iostream>

int main() {

	unsigned short linhas, colunas, entrada;
	short xJogador, yJogador, xMonstro, yMonstro, xFinal, yFinal;

	while (std::cin >> linhas >> colunas) {
		xJogador = yJogador = xMonstro = yMonstro = 0;
		for (unsigned short i = 0; i < linhas; ++i) {
			for (unsigned short j = 0; j < colunas; ++j) {
				std::cin >> entrada;
				if (entrada == 1)
				{
					xJogador = i;
					yJogador = j;
				}
				else if (entrada == 2)
				{
					xMonstro = i;
					yMonstro = j;
				}
			}
		}

		if (xJogador > xMonstro)
			xFinal = xJogador - xMonstro;
		else
			xFinal = xMonstro - xJogador;

		if (yJogador > yMonstro)
			yFinal = yJogador - yMonstro;
		else
			yFinal = yMonstro - yJogador;
		
		std::cout << xFinal + yFinal << '\n';
	}

	return 0;
}