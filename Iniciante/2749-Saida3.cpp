#include <iostream>
#include <string>

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
	imprimir(' ', 37, "x = 35", 0);
	imprimir('|', 1);
	std::cout << '\n';

	imprimir('|', 1);
	imprimir(' ', 37);
	imprimir('|', 1);
	std::cout << '\n';

	imprimir('|', 1);
	imprimir(' ', 37, "x = 35", 15);
	imprimir('|', 1);
	std::cout << '\n';

	imprimir('|', 1);
	imprimir(' ', 37);
	imprimir('|', 1);
	std::cout << '\n';

	imprimir('|', 1);
	imprimir(' ', 37, "x = 35", 31);
	imprimir('|', 1);
	std::cout << '\n';

	imprimir('-', 39);
	std::cout << '\n';

	return 0;
}