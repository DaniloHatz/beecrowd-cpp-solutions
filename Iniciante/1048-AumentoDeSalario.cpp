#include <iostream>
using namespace std;

short RetornaFaixa(float);

int main(void)
{
	float salarioAtual;
	cin >> salarioAtual;
	float faixasAumento[5] = { 0.15, 0.12, 0.1, 0.07, 0.04 };

	short faixa = RetornaFaixa(salarioAtual);

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(2);
	cout << "Novo salario: " << salarioAtual * (1 + faixasAumento[faixa]) << "\n";
	cout << "Reajuste ganho: " << (salarioAtual * (1 + faixasAumento[faixa])) - salarioAtual << "\n";
	cout.precision(0);
	cout << "Em percentual: " << faixasAumento[faixa] * 100 << " %\n";


	return 0;
}

short RetornaFaixa(float salario)
{
	if (salario < 400.01)
		return 0;
	else if (salario < 800.01)
		return 1;
	else if (salario < 1200.01)
		return 2;
	else if (salario < 2000.01)
		return 3;
	else
		return 4;
}