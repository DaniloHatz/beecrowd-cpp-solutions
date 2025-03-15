#include <iostream>
#include <string>

void imprimir(char ch, unsigned int qtd, std::string palavra = "") {
	unsigned int tamanhoPalavra = palavra.size();

	for (unsigned int i = 0; i < qtd; ++i) {
		if (tamanhoPalavra > 0 && i == 8) {
			std::cout << palavra;
			i += tamanhoPalavra;
		}

		std::cout << ch;
	}
}

int main() {
	imprimir('-', 39);
	std::cout << '\n';

	imprimir('|', 1);
	imprimir(' ', 37, "Roberto");
	imprimir('|', 1);
	std::cout << '\n';

	imprimir('|', 1);
	imprimir(' ', 37);
	imprimir('|', 1);
	std::cout << '\n';

	imprimir('|', 1);
	imprimir(' ', 37, "5786");
	imprimir('|', 1);
	std::cout << '\n';

	imprimir('|', 1);
	imprimir(' ', 37);
	imprimir('|', 1);
	std::cout << '\n';

	imprimir('|', 1);
	imprimir(' ', 37, "UNIFEI");
	imprimir('|', 1);
	std::cout << '\n';

	imprimir('-', 39);
	std::cout << '\n';

	return 0;
}