#include <iostream>

int main()
{
	unsigned int n;
	std::cin >> n;
	for (unsigned int i = 0; i < n; i++)std::cout << "Ho" << (i == n - 1 ? '!' : ' ');
	std::cout << std::endl;
}