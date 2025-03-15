#include <iostream>

void imprimir(char ch, unsigned int qtd) {
	for (unsigned int i = 0; i < qtd; ++i)
		std::cout << ch;
}

int main() {
	imprimir('-', 39);
	std::cout << '\n';

	for (unsigned int i = 0; i < 5; ++i) {
		imprimir('|', 1);
		imprimir(' ', 37);
		imprimir('|', 1);
		std::cout << '\n';
	}

	imprimir('-', 39);
	std::cout << '\n';

	return 0;
}