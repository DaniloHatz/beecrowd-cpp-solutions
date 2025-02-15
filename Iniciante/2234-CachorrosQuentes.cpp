#include <iostream>
#include <iomanip>

int main()
{
	double h, p, r;
	std::cin >> h >> p;
	r = h / p;
	std::cout << std::fixed << std::setprecision(2) << r << '\n';
}