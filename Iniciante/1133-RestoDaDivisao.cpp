#include <iostream>

int main()
{
	int x, y;
	std::cin >> x >> y;
	if (x > y)
	{
		int temp;
		temp = y;
		y = x;
		x = temp;
	}
	while (++x < y) if (x % 5 == 2 || x % 5 == 3) std::cout << x << "\n";
}