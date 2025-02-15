#include <iostream>

int main()
{
	unsigned n, i = 0;
	char hexa[100];
	std::cin >> n;
	while (n != 0)
	{
		unsigned r = n % 16;
		if (r < 10) hexa[i] = r + '0';
		else hexa[i] = r - 10 + 'A';
		i++;
		n /= 16;
	}
	for (int j = i - 1; j >= 0; j--) std::cout << hexa[j];
	std::cout << std::endl;
}