#include <iostream>

int main()
{
	unsigned short n, r = 0;
	int rAtual, rAnt;
	std::cin >> n >> rAnt >> rAtual;
	if (rAtual < rAnt) r = 2;
	else
		for (unsigned short i = 2; i < n; ++i)
		{
			rAnt = rAtual;
			std::cin >> rAtual;
			if (rAtual < rAnt)
			{
				r = i + 1;
				break;
			}
		}
	std::cout << r << '\n';
}