#include <iostream>
#include <string>

int main() {
	int numeroPessoas, numeroDatas;

	while (std::cin >> numeroPessoas >> numeroDatas) {
		std::string dataSugerida, dataEscohida;

		for (int i = 0; i < numeroDatas; ++i) {
			std::cin >> dataSugerida;

			int totalParticipantes = 0;

			for (int j = 0; j < numeroPessoas; ++j) {
				int pessoaPodeParticipar;
				std::cin >> pessoaPodeParticipar;
				if (dataEscohida.empty()) {
					totalParticipantes += pessoaPodeParticipar;
					if (totalParticipantes == numeroPessoas)
						dataEscohida = dataSugerida;
				}
			}
		}
		std::cout << (!dataEscohida.empty() ? dataEscohida : "Pizza antes de FdI") << '\n';
	}

	return 0;
}