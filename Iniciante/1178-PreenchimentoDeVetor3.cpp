#include <iostream>

int main()
{
	double n[100];
	std::cin >> n[0];
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(4);
	std::cout << "N[0] = " << n[0] << '\n';
	for (unsigned short i = 1; i < 100; i++)
	{
		n[i] = n[i - 1] / 2.0;
		std::cout << "N[" << i << "] = " << n[i] << '\n';
	}
}