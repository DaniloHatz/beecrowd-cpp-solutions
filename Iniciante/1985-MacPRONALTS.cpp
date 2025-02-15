#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	int qtdpedidos;
	cin >> qtdpedidos;

	int pedidos[5], qtdprodutos[5];
	double valorproduto[5] = { 1.50, 2.50, 3.50, 4.50, 5.50 }, total = 0.00;
	for (int i = 0; i <= qtdpedidos - 1; i++)
	{
		cin >> pedidos[i] >> qtdprodutos[i];
		total += valorproduto[pedidos[i] - 1001] * qtdprodutos[i];
	}

	cout << fixed << setprecision(2) << total << endl;

	return 0;
}