#include <iostream>

const short horaMarcada = 480;

int main()
{
	unsigned short h, m;
	char s;
	while (std::cin >> h)
	{
		std::cin >> s >> m;
		++h;
		h *= 60;
		h += m;
		std::cout << "Atraso maximo: ";
		std::cout << (h - horaMarcada <= 0 ? 0 : h - horaMarcada) << '\n';
	}
}