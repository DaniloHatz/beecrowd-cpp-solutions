#include <iostream>
#include <string>

int main() {
	std::string letras;

	while (std::getline(std::cin, letras)) {
		unsigned int qtLetras;
		std::cin >> qtLetras;
		for (unsigned int i = 0; i < qtLetras; ++i) {
			unsigned short numeroLetra;
			std::cin >> numeroLetra;
			std::cout << letras[--numeroLetra];
		}
		std::cout << '\n';
		std::cin.ignore();
	}

	return 0;
}