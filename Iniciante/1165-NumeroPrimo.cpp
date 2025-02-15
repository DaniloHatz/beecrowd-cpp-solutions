#include <iostream>

int main()
{
	unsigned short n;
	std::cin >> n;
	while (n != 0)
	{
		unsigned int x;
		bool p = true;
		std::cin >> x;
		for (unsigned int i = 2; i < x; i++)
		{
			p = !(x % i == 0);
			if (!p) break;
		}
		std::cout << x << (p ? "" : " nao") << " eh primo\n";
		n--;
	}
}