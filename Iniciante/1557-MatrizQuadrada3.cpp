#include <iostream>
#include <cmath>

int main()
{
	unsigned short n, t;
	for (std::cin >> n; n != 0; std::cin >> n)
	{
		t = std::log10(std::abs(pow(2, (n * 2 - 2)))) + 1;

		for (unsigned char i = 0; i < n; i++)
		{
			for (unsigned short j = 0; j < n; j++)
			{
				std::cout.width(t);
				std::cout << std::right;
				std::cout << (1 << (i + j)) << (j == n - 1 ? "" : " ");
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}
}