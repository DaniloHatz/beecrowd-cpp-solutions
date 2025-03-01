#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int qtCompetidores, qtMinClassificados;

	std::cin >> qtCompetidores >> qtMinClassificados;

	std::vector<int> notas(qtCompetidores);

	for (int i = 0; i < qtCompetidores; ++i)
		std::cin >> notas[i];

	if (qtCompetidores <= qtMinClassificados) {
		std::cout << qtCompetidores << '\n';
		return 0;
	}
	
	std::sort(notas.begin(), notas.end());

	int notaCorte = notas[qtCompetidores - qtMinClassificados];

	int qtAprovados = std::count_if(notas.begin(), notas.end(), [notaCorte](int notaa) { return notaa >= notaCorte; });

	std::cout << qtAprovados << '\n';

	return 0;
}