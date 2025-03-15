#include <iostream>
#include <vector>
#include <string>

int main() {
	int qtEntradas, qtElementosPerigosos, qtExperiencias;

	std::cin >> qtEntradas;

	for (int i = 0; i < qtEntradas; ++i) {
		std::cin >> qtElementosPerigosos;

		std::vector<std::string> elementosPerigosos(qtElementosPerigosos);

		for (int j = 0; j < qtElementosPerigosos; ++j) {
			std::cin >> elementosPerigosos[j];
		}

		std::cin >> qtExperiencias;

		for (int j = 0; j < qtExperiencias; ++j) {
			std::string experienciaAtual;
			std::cin >> experienciaAtual;
			bool abortar = false;

			for (int k = 0; k < qtElementosPerigosos; ++k) {
				std::size_t posicao = experienciaAtual.find(elementosPerigosos[k]);

				if (posicao != std::string::npos) {
					if (experienciaAtual.size() == elementosPerigosos[k].size() || ((experienciaAtual.size() - posicao) == elementosPerigosos[k].size()))
						abortar = true;
					else if (experienciaAtual.size() > elementosPerigosos[k].size())
						if (!std::isdigit(experienciaAtual[elementosPerigosos[k].size() + posicao]) && std::isupper(experienciaAtual[elementosPerigosos[k].size() + posicao]))
							abortar = true;
				}

				if (abortar) break;
			}

			std::cout << (abortar ? "Abortar" : "Prossiga") << '\n';
		}
		if (i != qtEntradas - 1) std::cout << '\n';
	}

	return 0;
}