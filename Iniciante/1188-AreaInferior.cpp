#include <iostream>

int main()
{
	double m[12][12], s = 0.0;
	unsigned short a = 0;
	char o;
	std::cin >> o;
	for (unsigned char l = 0; l < 12; l++)
		for (unsigned char c = 0; c < 12; c++)
		{
			std::cin >> m[l][c];

			if (l > c && c + l > 11)
			{
				s += m[l][c];
				a++;
			}
		}
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(1);
	std::cout << (o == 'S' ? s : s / a) << '\n';
}