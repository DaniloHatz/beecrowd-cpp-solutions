#include <iostream>

int main()
{
	int entrada1, entrada2;
	std::cin >> entrada1 >> entrada2;
	while (entrada1 != entrada2)
	{
		std::cout << (entrada1 < entrada2 ? "C" : "Dec") << "rescente\n";
		std::cin >> entrada1 >> entrada2;
	}
}