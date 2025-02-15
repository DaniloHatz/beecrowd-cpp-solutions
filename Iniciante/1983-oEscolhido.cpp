#include <iostream>

int main()
{
	unsigned short n;
	unsigned m, k = 0;
	float x, y = -0.1f;
	std::cin >> n;
	for (unsigned short i = 0; i < n; ++i)
	{
		std::cin >> m >> x;
		if (x > y && x >= 8.0f)
		{
			k = m;
			y = x;
		}
	}
	if (k) std::cout << k << '\n';
	else std::cout << "Minimum note not reached\n";
}