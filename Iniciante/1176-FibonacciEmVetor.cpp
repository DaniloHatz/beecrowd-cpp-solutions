#include <iostream>

int main()
{
	unsigned int t;
	std::cin >> t;
	for (unsigned int i = 0; i < t; i++)
	{
		unsigned short n;
		std::cin >> n;
		if (n == 0 || n == 1) std::cout << "Fib(" << n << ") = " << n << '\n';
		else
		{
			unsigned long long n1 = 0, n2 = 1, n3 = 0;
			for (unsigned short j = 2; j <= n; j++)
			{
				n3 = n1 + n2;
				n1 = n2;
				n2 = n3;
			}
			std::cout << "Fib(" << n << ") = " << n3 << '\n';
		}
	}
}