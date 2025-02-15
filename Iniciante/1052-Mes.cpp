#include <iostream>
#include <string>

int main()
{
	unsigned short numeroMes;
	std::cin >> numeroMes;
	numeroMes -= 1;
	std::string meses[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	std::cout << meses[numeroMes] << std::endl;

	return 0;
}