#include <iostream>

int main()
{
	unsigned short t;
	std::cin >> t;
	for (unsigned int i = 0; i < t; i++)
	{
		unsigned int n, s = 1;
		std::cin >> n;
		for (unsigned int j = 2; j < n; j++) if (n % j == 0) s += j;
		std::cout << n << (s == n && n != 1 ? "" : " nao") << " eh perfeito\n";
	}
}