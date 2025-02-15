#include <iostream>

int main()
{
	unsigned short l, v, f, n;
	while (std::cin >> l)
	{
		f = 0;
		for (unsigned short i = 0; i < l; i++)
		{
			std::cin >> v;
			if (f > v) v = f;
			else f = v;
			if (v >= 20) n = 3;
			else if (v < 10) n = 1;
			else n = 2;
		}
		std::cout << n << '\n';
	}
}