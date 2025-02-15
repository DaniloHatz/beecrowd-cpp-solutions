#include <iostream>

int main() {
    unsigned short x, y;
    std::cin >> x >> y;

    // Calcular quantos números imprimir por linha
    unsigned short totalLinhas = (y + x - 1) / x; // Calcula quantas linhas serão necessárias

    for (unsigned short i = 0; i < totalLinhas; i++) {
        for (unsigned short j = 1; j <= x; j++) {
            unsigned short num = i * x + j; // Cálculo do número a ser impresso
            if (num > y) break; // Se o número ultrapassa y, sai do loop
            std::cout << num; // Imprime o número
            if (j < x && num <= y) std::cout << " "; // Adiciona espaço entre números
        }
        std::cout << "\n"; // Nova linha após cada linha de números
    }

    return 0;
}
