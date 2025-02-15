#include <iostream>

int main()
{
	unsigned short entrada;
	std::cin >> entrada;

	for (unsigned short i = 1; i < 11; i++)
		std::cout << i << " x " << entrada << " = " << entrada * i << std::endl;

	return 0;
}