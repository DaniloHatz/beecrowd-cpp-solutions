#include <iostream>
#include <string>

int main()
{
	std::string n1, n2;

	for (unsigned long long i = 1; std::cin >> n1 >> n2; ++i)
	{
		int contadorSubsequencias = 0;
		int ultimaPosicao = -1;

		for (size_t i = 0; i <= n2.length() - n1.length(); ++i)
		{
			if (n2.substr(i, n1.length()) == n1)
			{
				contadorSubsequencias++;
				ultimaPosicao = i + 1;
			}
		}
		std::cout << "Caso #" << i << ":\n";
		if (contadorSubsequencias > 0)
		{
			std::cout << "Qtd.Subsequencias: " << contadorSubsequencias << '\n';
			std::cout << "Pos: " << ultimaPosicao << "\n\n";
		}
		else
			std::cout << "Nao existe subsequencia" << "\n\n";
	}
}