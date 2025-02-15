#include <iostream>

int main()
{
	short x, y;
	std::cin >> x >> y;
	while (x != 0 && y != 0)
	{
		if (x > 0) std::cout << (y > 0 ? "primeiro\n" : "quarto\n");
		else std::cout << (y > 0 ? "segundo\n" : "terceiro\n");
		std::cin >> x >> y;
	}
}