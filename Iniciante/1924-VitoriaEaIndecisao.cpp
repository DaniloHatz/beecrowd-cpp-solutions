#include <iostream>

int main()
{
	unsigned short c;
	char curso[101];
	std::cin >> c;
	for (unsigned char i = 0; i < c; ++i)
	{
		std::cin.getline(curso, 101);
		std::cin.ignore();
	}
	std::cout << "Ciencia da Computacao\n";
}