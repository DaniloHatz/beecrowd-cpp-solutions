#include <iostream>

int main()
{
	unsigned short entrada;
	std::cin >> entrada;

	for (unsigned short i = 2; i <= entrada; i++)
		if (i % 2 == 0)
			std::cout << i << "^" << "2 = " << i * i << std::endl;

	return 0;
}