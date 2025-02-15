#include <iostream>
#include <algorithm>

int main()
{
    unsigned short a, b, c, d;
    std::cin >> a >> b >> c >> d;

    unsigned short vet[4] = { a, b, c, d };
    std::sort(vet, vet + 4);

    if (vet[0] + vet[1] > vet[2] || vet[1] + vet[2] > vet[3]) std::cout << "S\n";
    else std::cout << "N\n";
}