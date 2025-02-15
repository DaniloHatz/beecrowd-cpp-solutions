#include <iostream>

int main()
{
	unsigned long long n, i = 0, t = 0, a, e = 0;
	std::cin >> n;
	unsigned long long* estrelas = new unsigned long long[n];
	unsigned long long* estrelasRoubadas = new unsigned long long[n];
	for (unsigned long long i = 0; i < n; ++i)
	{
		std::cin >> estrelas[i];
		estrelasRoubadas[i] = 0;
		t += estrelas[i];
	}
	do
	{
		a = estrelas[i];
		if (estrelas[i] > 0)
		{
			t--;
			estrelasRoubadas[i] = 1;
			estrelas[i]--;
		}

		if (a % 2 == 0) i--;
		else i++;
	} while (i < n);
	for (unsigned long long i = 0; i < n; ++i) if (estrelasRoubadas[i] == 1) e++;
	std::cout << e << ' ' << t << '\n';
	delete[] estrelasRoubadas;
	delete[] estrelas;
}