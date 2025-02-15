#include <iostream>

int main()
{
	unsigned short t, n[1000];
	std::cin >> t;
	for (unsigned short i = 0; i < 1000; i++)
	{
		n[i] = i % t;
		std::cout << "N[" << i << "] = " << n[i] << '\n';
	}
}