#include <iostream>

int main() {
    unsigned short x, y;
    std::cin >> x >> y;

    // Calcular quantos n�meros imprimir por linha
    unsigned short totalLinhas = (y + x - 1) / x; // Calcula quantas linhas ser�o necess�rias

    for (unsigned short i = 0; i < totalLinhas; i++) {
        for (unsigned short j = 1; j <= x; j++) {
            unsigned short num = i * x + j; // C�lculo do n�mero a ser impresso
            if (num > y) break; // Se o n�mero ultrapassa y, sai do loop
            std::cout << num; // Imprime o n�mero
            if (j < x && num <= y) std::cout << " "; // Adiciona espa�o entre n�meros
        }
        std::cout << "\n"; // Nova linha ap�s cada linha de n�meros
    }

    return 0;
}
