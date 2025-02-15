#include <iostream>

int main()
{
    unsigned short n;
    unsigned caso = 0;
    while (std::cin >> n)
    {
        ++caso;
        unsigned totalNumeros = (n * (n + 1)) / 2 + 1;
        std::cout << "Caso " << caso << ": " << totalNumeros << " numero" << (totalNumeros == 1 ? "" : "s") << std::endl;
        std::cout << 0;
        for (unsigned i = 1; i <= n; ++i) for (unsigned j = 0; j < i; ++j) std::cout << " " << i;
        std::cout << std::endl << std::endl;
    }
}