#include <iostream>

void CalculaImprime(int, int);

int main()
{
	int entrada1, entrada2;
	std::cin >> entrada1 >> entrada2;
	while (entrada1 > 0 && entrada2 > 0)
	{
		if (entrada1 <= entrada2) CalculaImprime(entrada1, entrada2);
		else CalculaImprime(entrada2, entrada1);
		std::cin >> entrada1 >> entrada2;
	}
}

void CalculaImprime(int n1, int n2)
{
	int resultado = 0;
	for (int i = n1; i < n2 + 1; i++)
	{
		resultado += i;
		std::cout << i << " ";
	}
	std::cout << "Sum=" << resultado << std::endl;;
}