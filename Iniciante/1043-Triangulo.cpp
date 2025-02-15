#include <iostream>
#include <iomanip>

int main(void)
{
	double a, b, c;
	std::cin >> a >> b >> c;

	if (a + b > c && a + c > b && b + c > a)
		std::cout << "Perimetro = " << std::fixed << std::setprecision(1) << a + b + c;
	else
		std::cout << "Area = " << std::fixed << std::setprecision(1) << ((a + b) * c) / 2;

	std::cout << std::endl;

	return 0;
}