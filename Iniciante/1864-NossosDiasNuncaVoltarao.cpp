#include <iostream>

const char p[35] = "LIFE IS NOT A PROBLEM TO BE SOLVED";

int main()
{
	unsigned short n;
	std::cin >> n;
	for (unsigned char i = 0; i < n; ++i)
		std::cout << p[i];
	std::cout << std::endl;
}