#include <iostream>
#include <string>
#include <iomanip>

void imprimir(char ch, unsigned int qtd, std::string_view palavra = "", unsigned int pos = 0) {
	unsigned int tamanhoPalavra = palavra.size();

	for (unsigned int i = 0; i < qtd; ++i) {
		if (tamanhoPalavra > 0 && i == pos) {
			std::cout << palavra;
			i += tamanhoPalavra;
		}

		if (i < qtd)
			std::cout << ch;
	}
}

int main() {
	imprimir('-', 39);
	std::cout << '\n';

	imprimir('|', 1);
	imprimir(' ', 11, " decimal  |  octal  |  Hexadecimal  ", 1);
	imprimir('|', 1);
	std::cout << '\n';

	imprimir('-', 39);
	std::cout << '\n';

	for (unsigned short i = 0; i < 16; ++i) {
		imprimir('|', 1);
		std::cout << std::uppercase << std::setw(7) << std::dec << i;
		imprimir(' ', 4);
		imprimir('|', 1);
		
		std::cout << std::uppercase << std::setw(5) << std::oct << i;
		imprimir(' ', 4);
		imprimir('|', 1);
		
		std::cout << std::uppercase << std::setw(8) << std::hex << i;
		imprimir(' ', 7);
		imprimir('|', 1);
		std::cout << '\n';
	}

	imprimir('-', 39);
	std::cout << '\n';

	return 0;
}