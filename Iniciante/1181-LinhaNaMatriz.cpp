#include <iostream>

int main()
{
	double m[12][12], s = 0.0;
	unsigned short l;
	char o;
	std::cin >> l >> o;
	for (unsigned char i = 0; i < 12; i++)
		for (unsigned char j = 0; j < 12; j++)
		{
			std::cin >> m[i][j];
			if (i == l) s += m[i][j];
		}
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(1);
	std::cout << (o == 'S' ? s : s / 12) << '\n';
}