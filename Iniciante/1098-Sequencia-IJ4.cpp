#include <iostream>

int main()
{
	for (float i = 0; i < 2.1f; i = i + 0.2)
	{
		for (unsigned char j = 1; j < 4; j++)
		{
			std::cout << "I=" << i;
			std::cout << " J=" << j + i << "\n";
		}
	}
}