#include <iostream>

int main()
{
	unsigned short n, p = 0;
	int m, x;
	std::cin >> n;
	for (short i = 0; i < n; i++)
	{
		std::cin >> x;
		if (i == 0) m = x;
		if (x < m)
		{
			m = x;
			p = i;
		}
	}
	std::cout << "Menor valor: " << m << "\nPosicao: " << p << '\n';
}