#include <iostream>

int main()
{
	unsigned short n, l, qt2 = 0, qt3 = 0, qt4 = 0, qt5 = 0;
	std::cin >> n;
	for (unsigned short i = 0; i < n; ++i)
	{
		std::cin >> l;
		if (l % 2 == 0)
		{
			++qt2;
			if (l % 4 == 0) ++qt4;
		}
		if (l % 3 == 0) ++qt3;
		if (l % 5 == 0) ++qt5;
	}
	std::cout << qt2 << " Multiplo(s) de 2\n";
	std::cout << qt3 << " Multiplo(s) de 3\n";
	std::cout << qt4 << " Multiplo(s) de 4\n";
	std::cout << qt5 << " Multiplo(s) de 5\n";
}