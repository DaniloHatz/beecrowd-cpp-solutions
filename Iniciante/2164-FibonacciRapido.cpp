#include <iostream>
#include <cmath>
#include <iomanip>

const double s5 = sqrt(5);

int main()
{
	unsigned short n;
	double r;
	std::cin >> n;
	r = ((pow(((1 + s5) / 2), n)) - (pow(((1 - s5) / 2), n))) / s5;
	std::cout << std::fixed << std::setprecision(1) << r << '\n';
}