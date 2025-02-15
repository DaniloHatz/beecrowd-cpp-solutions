#include <iostream>

void Transforma(unsigned short u, char c1, char c2, char c3)
{
	if (u == 9) std::cout << c1 << c3;
	else if (u >= 5)
	{
		std::cout << c2;
		for (unsigned char i = 0; i < u - 5; ++i) std::cout << c1;
	}
	else if (u == 4) std::cout << c1 << c2;
	else for (unsigned char i = 0; i < u; ++i) std::cout << c1;
}

int main()
{
	unsigned short n, c, d;
	std::cin >> n;
	c = n / 100;
	n -= c * 100;
	d = n / 10;
	n -= d * 10;

	if (c > 0) Transforma(c, 'C', 'D', 'M');
	if (d > 0) Transforma(d, 'X', 'L', 'C');
	if (n > 0) Transforma(n, 'I', 'V', 'X');
	std::cout << std::endl;
}