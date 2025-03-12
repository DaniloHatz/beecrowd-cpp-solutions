#include <iostream>

int main() {
	long long qtGrupos, grupoAtual, qtLuzesQueimadas, maiorSequencia;

	std::cin >> qtGrupos;

	for (long long i = 0; i < qtGrupos; ++i) {
		std::cin >> grupoAtual;

		qtLuzesQueimadas = 0;
		maiorSequencia = 0;

		while (grupoAtual > 0) {
			if (grupoAtual % 2 != 0) {
				++qtLuzesQueimadas;

				if (qtLuzesQueimadas > maiorSequencia)
					maiorSequencia = qtLuzesQueimadas;

			}
			else {
				qtLuzesQueimadas = 0;
			}

			grupoAtual /= 2;
		}

		std::cout << maiorSequencia << '\n';
	}

	return 0;
}