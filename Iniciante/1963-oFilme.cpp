#include <iostream>

int main()
{
	float a, b;
	std::cin >> a >> b;
	b -= a;
	b /= a;
	b *= 100.00f;
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(2);
	std::cout << b << "%\n";
}