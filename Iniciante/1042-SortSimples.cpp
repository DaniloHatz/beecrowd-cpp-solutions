#include <iostream>
#include <algorithm>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    int valores[3] = { a, b, c };

    std::sort(valores, valores + 3);

    std::cout << valores[0] << std::endl;
    std::cout << valores[1] << std::endl;
    std::cout << valores[2] << std::endl;

    std::cout << std::endl;

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    return 0;
}
