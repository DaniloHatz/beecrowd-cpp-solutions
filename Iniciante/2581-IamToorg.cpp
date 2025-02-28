#include <iostream>

int main() {
	int qtPerguntas;
	char pergunta[80];

	std::cin >> qtPerguntas;
	std::cin.ignore();

	for (int i = 0; i < qtPerguntas; ++i) {
		std::cin.getline(pergunta, 80);
		std::cout << "I am Toorg!\n";
	}

	return 0;
}