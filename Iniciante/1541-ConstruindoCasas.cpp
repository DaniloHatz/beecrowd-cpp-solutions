#include <iostream>
#include <cmath>

int main()
{
	unsigned short a, b, c, s;
	std::cin >> a;
	while (a != 0)
	{
		std::cin >> b >> c;
		s = sqrt(((a * b * 100) / c));
		std::cout << s << '\n';
		std::cin >> a;
	}
}