#include <iostream>

int main()
{
	for (unsigned short i = 1; i < 10; i++)
	{
		unsigned short j = 8;
		for (unsigned char k = 1; k < 4; k++)
		{
			std::cout << "I=" << i;
			std::cout << " J=" << j - k << "\n";
		}
		i++;
	}
}