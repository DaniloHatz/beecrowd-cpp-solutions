#include <iostream>

int main()
{
	unsigned short n, t, u = 0, a = 0;
	std::cin >> n;
	for (unsigned char i = 0; i < n; ++i)
	{
		std::cin >> t;
		if (t < u || i == 0)
		{
			a = i;
			u = t;
		}
	}
	std::cout << a + 1 << '\n';
}