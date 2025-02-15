#include <iostream>
#include <iomanip>

const double PI = 3.14159;

int main() {
    double raio, area;

    std::cin >> raio;
    area = PI * (raio * raio);

    std::cout << std::fixed << std::setprecision(4) << "A=" << area << '\n';
    
    return 0;
}