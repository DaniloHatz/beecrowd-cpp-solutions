#include <iostream>

int main()
{
	unsigned short casos;
	std::cin >> (casos);
	int* entradas = new int[casos];
	for (unsigned short i = 0; i < casos; i++)
	{
		std::cin >> entradas[i];
		if (entradas[i] == 0)
			std::cout << "NULL\n";
		else
		{
			std::cout << (entradas[i] % 2 == 0 ? "EVEN " : "ODD ");
			std::cout << (entradas[i] > 0 ? "POSITIVE\n" : "NEGATIVE\n");
		}
	}
	delete[] entradas;
}