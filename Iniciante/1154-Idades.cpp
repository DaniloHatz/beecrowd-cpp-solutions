#include <iostream>

int main()
{
	int entrada, soma = 0, quantidade = 0;
	std::cin >> entrada;
	while (entrada > 0)
	{
		soma += entrada;
		quantidade++;
		std::cin >> entrada;
	}
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(2);
	std::cout << soma / float(quantidade) << "\n";
}