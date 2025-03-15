#include <iostream>
#include <iomanip>

int main() {
	double a = 234.345, b = 45.698;

	std::cout << std::fixed << std::setprecision(6) << a << " - " << b << '\n';
	std::cout << std::fixed << std::setprecision(0) << a << " - " << b << '\n';
	std::cout << std::fixed << std::setprecision(1) << a << " - " << b << '\n';
	std::cout << std::fixed << std::setprecision(2) << a << " - " << b << '\n';
	std::cout << std::fixed << std::setprecision(3) << a << " - " << b << '\n';
	std::cout << std::scientific << std::setprecision(6) << a << " - " << b << '\n';
	std::cout << std::uppercase << std::scientific << a << " - " << b << '\n';
	std::cout << std::fixed << std::setprecision(3) << a << " - " << b << '\n';
	std::cout << std::fixed << std::setprecision(3) << a << " - " << b << '\n';
}