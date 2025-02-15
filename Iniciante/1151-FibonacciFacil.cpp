#include <iostream>

int main()
{
	unsigned int N, fAnt = 0, F = 1;
	std::cin >> N;
	std::cout << "0 1";
	for (int i = 1; i < N - 1; i++)
	{
		int res = F + fAnt;
		std::cout << " " << F + fAnt;
		fAnt = F;
		F = res;
	}
	std::cout << std::endl;
}