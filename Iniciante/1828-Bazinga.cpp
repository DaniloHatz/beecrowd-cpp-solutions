#include <iostream>
#include <cstring>

int main()
{
	unsigned short t;
	char s[8], r[8];
	std::cin >> t;
	t++;

	for (unsigned short i = 1; i < t; ++i)
	{
		std::cin >> s >> r;

		std::cout << "Caso #" << i << ": ";
		if (strcmp(s, r))
		{
			if (s[0] == 't')
			{
				if (r[0] == 'p')
				{
					if (r[1] == 'a') std::cout << "Bazinga";
					else std::cout << "Raj trapaceou";
				}
				else
				{
					if (r[0] == 'l') std::cout << "Bazinga";
					else std::cout << "Raj trapaceou";
				}
			}
			else if (s[0] == 'l')
			{
				if (r[0] == 'p')
				{
					if (r[1] == 'a') std::cout << "Bazinga";
					else std::cout << "Raj trapaceou";
				}
				else
				{
					if (r[0] == 'S') std::cout << "Bazinga";
					else std::cout << "Raj trapaceou";
				}
			}
			else if (s[0] == 'S')
			{
				if (r[0] == 'p')
				{
					if (r[1] == 'e') std::cout << "Bazinga";
					else std::cout << "Raj trapaceou";
				}
				else
				{
					if (r[0] == 'l') std::cout << "Raj trapaceou";
					else if (r[0] == 't') std::cout << "Bazinga";
					else std::cout << "Raj trapaceou";
				}
			}
			else if (s[0] == 'p' && s[1] == 'e')
			{
				if (r[0] == 'p' && r[1] == 'a') std::cout << "Raj trapaceou";
				else if (r[0] == 'S') std::cout << "Raj trapaceou";
				else std::cout << "Bazinga";
			}
			else if (s[0] == 'p' && s[1] == 'a')
			{
				if (r[0] == 'p' && r[1] == 'e') std::cout << "Bazinga";
				else if (r[0] == 'S') std::cout << "Bazinga";
				else std::cout << "Raj trapaceou";
			}
		}
		else std::cout << "De novo";
		std::cout << "!\n";
	}
}