#include <iostream>
#include <iomanip>

int main()
{
	unsigned c;
	char p;
	double t;
	std::cin >> c;
	std::cin.ignore();
	for (unsigned i = 0; i < c; ++i)
	{
		t = 0;
		while ((p = std::cin.get()) != '\n') t += 0.01;
		std::cout << std::fixed << std::setprecision(2) << t << '\n';
	}
}