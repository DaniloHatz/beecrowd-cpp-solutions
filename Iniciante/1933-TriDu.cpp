#include <iostream>

int main(void)
{
	int carta1, carta2;
	std::cin >> carta1 >> carta2;
	std::cout << (carta1 >= carta2 ? carta1 : carta2) << std::endl;
	return 0;
}