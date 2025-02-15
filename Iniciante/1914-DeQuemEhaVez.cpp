#include <iostream>

int main()
{
	unsigned short c;
	char j1[101], j2[101], e1[6], e2[6];
	unsigned n1, n2;
	std::cin >> c;
	for (unsigned char i = 0; i < c; ++i)
	{
		std::cin >> j1 >> e1 >> j2 >> e2 >> n1 >> n2;
		if ((n1 + n2) % 2 == 0)
		{
			if (e1[0] == 'P') std::cout << j1;
			else std::cout << j2;
		}
		else
		{
			if (e1[0] == 'I') std::cout << j1;
			else std::cout << j2;
		}
		std::cout << std::endl;
	}
}