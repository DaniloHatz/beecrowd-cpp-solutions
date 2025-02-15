#include <iostream>

int main() {
	std::ios::sync_with_stdio(false);
	int numero;
	std::cin >> numero;

	for (short i = numero - 1; i > 0; --i)
		numero *= i;

	std::cout << numero << '\n';

	return 0;
}