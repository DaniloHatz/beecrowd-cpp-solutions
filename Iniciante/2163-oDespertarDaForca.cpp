#include <iostream>
#include <vector>

int main() {
    unsigned int qtLinhas, qtColunas;
    std::cin >> qtLinhas >> qtColunas;
    std::vector<std::vector<int>> terreno(qtLinhas, std::vector<int>(qtColunas));

    for (unsigned int i = 0; i < qtLinhas; ++i)
        for (unsigned int j = 0; j < qtColunas; ++j)
            std::cin >> terreno[i][j];

    for (unsigned int i = 1; i < qtLinhas - 1; ++i) {
        for (unsigned int j = 1; j < qtColunas - 1; ++j) {
            if (terreno[i][j] == 42 &&
                terreno[i - 1][j - 1] == 7 && terreno[i - 1][j] == 7 && terreno[i - 1][j + 1] == 7 &&
                terreno[i][j - 1] == 7 && terreno[i][j + 1] == 7 &&
                terreno[i + 1][j - 1] == 7 && terreno[i + 1][j] == 7 && terreno[i + 1][j + 1] == 7) {
                printf("%d %d\n", i + 1, j + 1);
                return 0;
            }
        }
    }

    printf("0 0\n");
    return 0;
}