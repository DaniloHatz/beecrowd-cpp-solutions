#include <iostream>

int main()
{
	unsigned short n;
	while (std::cin >> n)
	{
		for (unsigned short i = 0; i < n; i++)
		{
			for (unsigned short j = 0; j < n; j++)
			{
				if (i >= n / 3 && i < n - n / 3 && j >= n / 3 && j < n - n / 3)
				{
					if (i + j == n - 1 && (i + j) / 2 == j) std::cout << 4;
					else std::cout << 1;
				}
				else
				{
					if (i == j) std::cout << 2;
					else if (i + j == n - 1) std::cout << 3;
					else std::cout << 0;
				}
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}
}