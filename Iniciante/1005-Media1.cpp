#include <iostream>
#include <iomanip>

const double PESOS[2]{ 3.5, 7.5 };

int main() {
    double notas[2], media = .0;
    for (unsigned short i = 0; i < 2; ++i) {
        std::cin >> notas[i];
        notas[i] *= PESOS[i];
        media += notas[i];
    }

    media /= (PESOS[0] + PESOS[1]);

    std::cout << "MEDIA = " << std::fixed << std::setprecision(5) << media << '\n';

    return 0;
}