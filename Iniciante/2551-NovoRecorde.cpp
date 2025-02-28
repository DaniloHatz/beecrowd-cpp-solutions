#include <iostream>

int main() {
    int qtTreinos;
    double recorde;

    while (std::cin >> qtTreinos) {
        recorde = 0.0;

        for (int i = 0; i < qtTreinos; ++i) {
            int duracao, distancia;
            std::cin >> duracao >> distancia;
            if (i == 0) {
                recorde = double(distancia) / duracao;
                std::cout << "1\n";
            }
            else {
                if ((double(distancia) / duracao) > recorde) {
                    recorde = double(distancia) / duracao;
                    std::cout << i + 1 << '\n';
                }
            }
        }
    }

    return 0;
}