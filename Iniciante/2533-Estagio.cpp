#include <iostream>
#include <iomanip>

int main() {
    unsigned short qtEntradas, nota, cargaHoraria;
    double totalDividendo, totalDivisor;

    while (std::cin >> qtEntradas) {
        totalDividendo = 0.0;
        totalDivisor = 0.0;
        
        for (unsigned short i = 0; i < qtEntradas; ++i) {
            std::cin >> nota >> cargaHoraria;
            totalDividendo += nota * cargaHoraria;
            totalDivisor += cargaHoraria;
        }
        std::cout << std::fixed << std::setprecision(4) << totalDividendo / (totalDivisor * 100.0) << '\n';
    }

    return 0;
}