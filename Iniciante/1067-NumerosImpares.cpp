#include <iostream>

int main()
{
	unsigned short x;
	std::cin >> x;

	for (unsigned short i = 1; i <= x; i++)
		if (i % 2 != 0)
			std::cout << i << "\n";

	return 0;
}