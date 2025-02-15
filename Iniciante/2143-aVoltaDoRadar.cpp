#include <iostream>

int main()
{
	unsigned short t;
	while (std::cin >> t && t != 0)
	{
		for (int i = 0; i < t;++i)
		{
			int n;
			std::cin >> n;
			if (n % 2 == 0) n = n * 2 - 2;
			else n = n * 2 - 1;
			std::cout << n << '\n';
		}
	}
}