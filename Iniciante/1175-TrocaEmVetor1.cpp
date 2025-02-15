#include <iostream>

int main()
{
	int n[20];
	for (char i = 19; i > -1; i--) std::cin >> n[i];
	for (unsigned short i = 0; i < 20; i++) std::cout << "N[" << i << "] = " << n[i] << '\n';
}