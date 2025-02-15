#include <iostream>

int main()
{
	unsigned int entrada;
	std::cin >> entrada;
	unsigned short i = 0;
	while (i != 6)
	do
	{
		if (entrada % 2 != 0)
		{
			std::cout << entrada << std::endl;
			i++;
		}

		entrada++;
	} while (entrada % 2 == 0);

	return 0;
}