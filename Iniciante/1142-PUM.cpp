#include <iostream>

int main() {
    unsigned short entrada;
    std::cin >> entrada;

    for (unsigned short i = 1; i <= entrada; i++)
        std::cout << (i * 4 - 3) << " " << (i * 4 - 2) << " " << (i * 4 - 1) << " PUM\n";
}