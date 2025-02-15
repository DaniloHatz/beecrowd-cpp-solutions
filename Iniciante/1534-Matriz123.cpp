#include <iostream>

int main()
{
	unsigned short n;
	while (std::cin >> n && n != 0)
	{
		for (unsigned char i = 1; i <= n; ++i)
		{
			for (unsigned char j = 1; j <= n; ++j)
			{
				if (i + j == n + 1) std::cout << 2;
				else if (i == j) std::cout << 1;
				else std::cout << 3;
			}
			std::cout << std::endl;
		}
	}
}