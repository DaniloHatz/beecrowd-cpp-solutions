#include <iostream>

int main()
{
	unsigned c, n;
	std::cin >> c;
	for (unsigned i = 0; i < c; ++i)
	{
		std::cin >> n;
		std::cout << n % 2 << '\n';
	}
}