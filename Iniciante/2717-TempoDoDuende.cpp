#include <iostream>

int main() {
	short tempoFinalExpediente, tempoPresenteAtual;

	std::cin >> tempoFinalExpediente;

	for (int i = 0; i < 2; ++i) {
		std::cin >> tempoPresenteAtual;
		tempoFinalExpediente -= tempoPresenteAtual;
	}

	if (tempoFinalExpediente < 0)
		std::cout << "Deixa para amanha!\n";
	else
		std::cout << "Farei hoje!\n";

	return 0;
}