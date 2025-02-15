#include <iostream>
const double n = 3.14;
int main()
{
	double v, d, r, h, a;
	while (std::cin >> v)
	{
		std::cin >> d;
		r = d / 2;
		h = v / (n * r * r);
		a = n * r * r;
		std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
		std::cout.precision(2);
		std::cout << "ALTURA = " << h << '\n';
		std::cout << "AREA = " << a << '\n';
	}
}