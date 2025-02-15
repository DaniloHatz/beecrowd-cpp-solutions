#include <iostream>
#include <iomanip>

const double PESOS[3]{ 2.0, 3.0, 5.0 };
const double SOMA_PESOS = PESOS[0] + PESOS[1] + PESOS[2];

int main() {
    double notas[3], media = .0;

    for (unsigned short i = 0; i < 3; ++i) {
        std::cin >> notas[i];
        media += (notas[i] * PESOS[i]);
    }

    media /= SOMA_PESOS;

    std::cout << "MEDIA = " << std::fixed << std::setprecision(1) << media << '\n';

    return 0;
}