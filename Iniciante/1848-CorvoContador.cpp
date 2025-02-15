#include <iostream>

int main()
{
	char p[4], c = 0;
	unsigned short n = 0;
	while (c < 3)
	{
		std::cin.get(p, 4);
		std::cin.ignore();
		if (p[0] == 'c')
		{
			std::cin.ignore();
			std::cin.ignore();
			std::cin.ignore();
			std::cin.ignore();
			std::cout << n << std::endl;
			n = 0;
			c++;
		}
		else
		{
			if (p[0] == '*') n += 4;
			if (p[1] == '*') n += 2;
			if (p[2] == '*') n += 1;
		}
	}
}