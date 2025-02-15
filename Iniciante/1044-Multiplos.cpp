#include <iostream>

int main(void)
{
	int a, b;
	std::cin >> a >> b;

	std::cout << (a % b == 0 || b % a == 0 ? "Sao " : "Nao sao ") << "Multiplos\n";

	return 0;
}