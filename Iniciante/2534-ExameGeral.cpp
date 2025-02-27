#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	unsigned short qtHabitantes, qtConsultas;

	while (std::cin >> qtHabitantes >> qtConsultas) {
		std::vector<unsigned short> notas;
		notas.reserve(qtHabitantes);
		for (unsigned short i = 0; i < qtHabitantes; ++i) {
			unsigned short nota;
			std::cin >> nota;
			notas.push_back(nota);
		}
		
		std::sort(notas.begin(), notas.end(), [](unsigned short a, unsigned short b) { return a > b; });
		
		for (unsigned short i = 0; i < qtConsultas; ++i) {
			unsigned short consulta;
			std::cin >> consulta;
			std::cout << notas[--consulta] << '\n';
		}
	}

	return 0;
}