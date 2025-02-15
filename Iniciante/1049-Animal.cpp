#include <iostream>
#include <string>

int main()
{
	std::string info1, info2, info3;
	std::cin >> info1 >> info2 >> info3;

	if (info1 == "vertebrado")
	{
		if (info2 == "ave")
			std::cout << (info3 == "carnivoro" ? "aguia" : "pomba") << "\n";
		else
			std::cout << (info3 == "onivoro" ? "homem" : "vaca") << "\n";
	}
	else
	{
		if (info2 == "inseto")
			std::cout << (info3 == "hematofago" ? "pulga" : "lagarta") << "\n";
		else
			std::cout << (info3 == "hematofago" ? "sanguessuga" : "minhoca") << "\n";
	}

	return 0;
}