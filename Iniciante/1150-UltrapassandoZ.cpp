#include <iostream>

int main()
{
	int X, Z, Q = 1, S = 0;
	std::cin >> X >> Z;
	while (X >= Z) std::cin >> Z;
	S = X;
	do
	{
		S += X + Q;
		Q++;
	} while (S <= Z);
	std::cout << Q << '\n';
}