#include <iostream>

int main()
{
	unsigned c, n;
	char p[10];
	std::cin >> c;
	for (unsigned i = 0; i < c; ++i)
	{
		std::cin >> p >> n;
		if (p[0] == 'T' && p[1] == 'h') std::cout << "Y\n";
		else std::cout << "N\n";
	}
}