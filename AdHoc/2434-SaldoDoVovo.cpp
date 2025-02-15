#include <iostream>
using namespace std;

int main(void)
{
	int qtddias, saldo, menorsaldo;
	cin >> qtddias >> saldo;
	menorsaldo = saldo;

	int movimentacoes[30];
	for (int i = 0; i <= qtddias - 1; i++)
	{
		cin >> movimentacoes[i];
		saldo += movimentacoes[i];

		if (saldo < menorsaldo)
			menorsaldo = saldo;
	}

	cout << menorsaldo << endl;

	return 0;
}