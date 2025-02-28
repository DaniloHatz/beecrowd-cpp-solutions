#include <iostream>
#include <vector>

int main() {
	int linhas, colunas;

	while (std::cin >> linhas >> colunas) {
		std::vector<int> forma(linhas * colunas);

		for (unsigned int i = 0; i < linhas; ++i) {
			for (unsigned int j = 0; j < colunas; ++j) {
				std::cin >> forma[i * colunas + j];
				if (forma[i * colunas + j] == 1) forma[i * colunas + j] = 9;
			}
		}

        std::vector<int> resultado = forma;

        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                if (forma[i * colunas + j] != 9) {
                    int contador = 0;
                    if (i > 0 && forma[(i - 1) * colunas + j] == 9) ++contador;
                    if (i < linhas - 1 && forma[(i + 1) * colunas + j] == 9) ++contador;
                    if (j > 0 && forma[i * colunas + (j - 1)] == 9) ++contador;
                    if (j < colunas - 1 && forma[i * colunas + (j + 1)] == 9) ++contador;
                    resultado[i * colunas + j] = contador;
                }
            }
        }

        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                std::cout << resultado[i * colunas + j];
            }
            std::cout << "\n";
        }

	}


	return 0;
}