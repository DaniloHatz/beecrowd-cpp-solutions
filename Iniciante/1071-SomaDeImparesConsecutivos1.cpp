#include <iostream>

int main()
{
	int x, y, z;
	std::cin >> x >> y;
	if (x == y)
	{
		std::cout << "0\n";
		return 0;
	}
	else if (x < y)
	{
		z = x;
		x = y;
	}
	else
	{
		z = y;
	}
	y = 0;
	for (int i = z + 1; i <= x - 1; i++)
		if (i % 2 != 0)
			y += i;
	std::cout << y << std::endl;

	return 0;
}