#include <iostream>

int main()
{
	unsigned short j = 7;
	for (unsigned short i = 1; i < 10; i++)
	{
		for (unsigned char k = 0; k < 3; k++)
		{
			std::cout << "I=" << i;
			std::cout << " J=" << j - k << "\n";
		}
		i++;
		j += 2;
	}
}