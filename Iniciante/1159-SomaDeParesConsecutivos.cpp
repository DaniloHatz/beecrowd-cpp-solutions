#include <iostream>

int main()
{
	int X;
	std::cin >> X;
	while (X != 0)
	{
		if (X % 2 != 0) X++;
		int S = 0;
		for (int i = 1; i < 6; i++)
		{
			S += X;
			X += 2;
		}
		std::cout << S << '\n';
		std::cin >> X;
	}
}