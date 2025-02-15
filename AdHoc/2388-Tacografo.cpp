#include <iostream>
using namespace std;

int main(void)
{
	int tamanho;
	cin >> tamanho;

	int tempos[1000], velocidades[1000], distancia = 0;
	for (int i = 0; i <= tamanho - 1; i++)
	{
		cin >> tempos[i] >> velocidades[i];
		distancia += tempos[i] * velocidades[i];
	}

	cout << distancia << endl;

	return 0;
}