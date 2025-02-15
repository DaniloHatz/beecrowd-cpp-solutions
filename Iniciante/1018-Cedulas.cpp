#include <iostream>
using namespace std;

int ContaNotas(int, int);

int main(void)
{
	unsigned int numero;
	cin >> numero;
	cout << numero << endl;
	ContaNotas(ContaNotas(ContaNotas(ContaNotas(ContaNotas(ContaNotas(ContaNotas(numero, 100), 50), 20), 10), 5), 2), 1);

	return 0;
}

int ContaNotas(int numero, int valorNota)
{
	cout << numero / valorNota << " nota(s) de R$ " << valorNota << ",00\n";
	return numero -= (numero / valorNota) * valorNota;
}