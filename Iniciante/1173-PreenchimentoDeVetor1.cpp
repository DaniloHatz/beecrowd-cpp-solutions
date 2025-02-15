#include <iostream>

int main()
{
	int n[10];
	std::cin >> n[0];
	std::cout << "N[0] = " << n[0] << '\n';
	for (unsigned short i = 1; i < 10; i++)
	{
		n[i] = n[i - 1] * 2;
		std::cout << "N[" << i << "] = " << n[i] << '\n';
	}
}