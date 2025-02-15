#include <iostream>
#include <iomanip>

int main()
{
	double x;
	std::cin >> x;
	std::cout << std::showpos << std::scientific << std::uppercase << std::setprecision(4) << x << '\n';
}