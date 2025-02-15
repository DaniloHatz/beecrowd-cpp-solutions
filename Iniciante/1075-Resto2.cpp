#include <iostream>

int main()
{
	unsigned short entrada;
	std::cin >> entrada;
	for (unsigned short i = 1; i < 10001; i++)
		if (i % entrada == 2)
			std::cout << i << std::endl;
}