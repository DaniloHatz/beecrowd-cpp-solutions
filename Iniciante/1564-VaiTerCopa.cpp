#include <iostream>

int main()
{
    unsigned short n;
    while (std::cin >> n) std::cout << "vai ter " << (n == 0 ? "copa" : "duas") << "!\n";
}