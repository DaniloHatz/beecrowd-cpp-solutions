#include <iostream>
#include <string>

int main(void)
{
	int casosTeste, cabos[2];
	std::cin >> casosTeste;
	std::string conduites = "";

	for (int i = 0; i <= casosTeste - 1; i++)
	{
		std::cin >> cabos[0] >> cabos[1];
		conduites += std::to_string(cabos[0] + cabos[1]) + "\n";
	}

	std::cout << conduites;

	return 0;
}