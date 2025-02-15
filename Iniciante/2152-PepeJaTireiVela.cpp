#include <iostream>

int main()
{
	unsigned c;
	unsigned short h, m;
	bool o;
	std::cin >> c;
	for (unsigned i = 0; i < c; ++i)
	{
		std::cin >> h >> m >> o;
		std::cout << (h < 10 ? "0" : "") << h << ':' << (m < 10 ? "0" : "") << m << " - A porta ";
		std::cout << (o ? "abriu!\n" : "fechou!\n");
	}
}