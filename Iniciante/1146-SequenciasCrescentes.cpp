#include <iostream>

int main()
{
	unsigned int x;
	std::cin >> x;
	while (x != 0)
	{
		for (unsigned int i = 1; i <= x; i++)
			std::cout << i << (i == x ? "\n" : " ");
		std::cin >> x;
	}
}