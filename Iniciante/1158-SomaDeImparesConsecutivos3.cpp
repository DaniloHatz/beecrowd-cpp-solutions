#include <iostream>

int main()
{
	int Q = 0;
	std::cin >> Q;
	for (int i = 0; i < Q; i++)
	{
		int X, Y, S = 0;
		std::cin >> X >> Y;
		if (X % 2 == 0) X++;
		for (int j = 1; j <= Y; j++)
		{
			S += X;
			X += 2;
		}
		std::cout << S << '\n';
	}
}