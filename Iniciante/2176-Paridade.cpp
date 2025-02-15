#include <iostream>

int main()
{
	unsigned short c = 0;
	char s[121];
	std::cin.getline(s, 120);
	unsigned short i = 0;
	while (s[i])
	{
		if (s[i] == '1') ++c;
		++i;
	}
	std::cout << s << (c % 2 == 0 ? "0\n" : "1\n");
}

//100100000101011010111110100101