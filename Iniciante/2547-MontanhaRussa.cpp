#include <iostream>

int main() {
    unsigned short numeroVisitantes, alturaMinima, alturaMaxima, alturaVisitante, totalVisitantes;

    while (std::cin >> numeroVisitantes >> alturaMinima >> alturaMaxima) {
        totalVisitantes = 0;

        for (unsigned short i = 0; i < numeroVisitantes; ++i) {
            std::cin >> alturaVisitante;
            if (alturaVisitante >= alturaMinima && alturaVisitante <= alturaMaxima) ++totalVisitantes;
        }
        std::cout << totalVisitantes << '\n';
    }

    return 0;
}