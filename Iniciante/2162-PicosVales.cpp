#include <iostream>

int main()
{
	unsigned short n;
	int h, h1;
	bool e, v;
	std::cin >> n >> h >> h1;
	e = h1 != h;
	if (e)
	{
		v = h1 < h;
		h = h1;
		for (int i = 2; i < n; ++i)
		{
			e = false;
			std::cin >> h1;

			if (v)
				e = h1 > h;
			else
				e = h1 < h;

			if (!e) break;
			v = h1 < h;
			h = h1;
		}
	}
	std::cout << e << '\n';
}