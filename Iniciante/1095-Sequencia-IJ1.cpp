#include <iostream>

int main()
{
	short j = 60, i = 1;
	while (j > -1)
	{
		std::cout << "I=" << i;
		std::cout << " J=" << j << "\n";
		j -= 5;
		i += 3;
	}
}