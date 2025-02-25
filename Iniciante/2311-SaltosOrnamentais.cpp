#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

int main() {
	unsigned short entradas;
	char nome[30];
	double grauDificuldade, notaMaior = 0.0, notaMenor = 10.0, total = 0.0;
	std::vector<double> notas(7);

	std::cin >> entradas;

	for (unsigned short i = 0; i < entradas; ++i) {
		std::cin >> nome;
		std::cin >> grauDificuldade;
		
		for (unsigned char j = 0; j < 7; ++j)
			std::cin >> notas[j];
		
		std::sort(notas.begin(), notas.end());

		for (unsigned char j = 1; j < 6; ++j)
			total += notas[j] * grauDificuldade;
		
		std::cout << nome << ' ' << std::fixed << std::setprecision(2) << total << '\n';
		nome[0] = '\0';
		total = 0.0;
	}

	return 0;
}