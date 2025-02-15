#include <iostream>
#include <cstring>

int main()
{
	char t[500];
	std::cin.getline(t, 500);
	if (strlen(t) < 141)
		std::cout << "TWEET\n";
	else
		std::cout << "MUTE\n";
}