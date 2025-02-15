#include <iostream>
#include <iomanip>

const double PI = 3.14159;

int main() {
	double a, b, c;
	
	std::cin >> a >> b >> c;

	double triangulo = (a * c) / 2;
	double circulo = (c * c) * PI;
	double trapezio = ((a + b) / 2) * c;
	double quadrado = b * b;
	double retangulo = a * b;

	std::cout << "TRIANGULO: " << std::fixed << std::setprecision(3) << triangulo << '\n';
	std::cout << "CIRCULO: " << std::fixed << std::setprecision(3) << circulo << '\n';
	std::cout << "TRAPEZIO: " << std::fixed << std::setprecision(3) << trapezio << '\n';
	std::cout << "QUADRADO: " << std::fixed << std::setprecision(3) << quadrado << '\n';
	std::cout << "RETANGULO: " << std::fixed << std::setprecision(3) << retangulo << '\n';

	return 0;
}