#include <iostream>
#include <cstring>

int main()
{
	unsigned c = 0;
	char l;
	while ((l = std::cin.get()) != '\n') ++ c;
	std::cout << (c < 81 ? "YES\n" : "NO\n");
}