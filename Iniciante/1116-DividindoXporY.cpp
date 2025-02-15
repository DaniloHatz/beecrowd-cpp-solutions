#include <iostream>

int main()
{
	unsigned short qtEntradas, i=1;
	std::cin >> qtEntradas;
	short n1, n2;
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(1);
	while (i <= qtEntradas)
	{
		i++;
		std::cin >> n1 >> n2;
		if (n2 == 0) std::cout << "divisao impossivel\n";
		else
		{
			std::cout << float(n1) / float(n2) << "\n";
		}
	}
}