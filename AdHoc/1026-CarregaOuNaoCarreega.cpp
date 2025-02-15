#include <iostream>

int main()
{
	unsigned int a, b, c;
	while (std::cin >> a >> b)
	{
		c = a ^ b;
		std::cout << c << '\n';
	}
}