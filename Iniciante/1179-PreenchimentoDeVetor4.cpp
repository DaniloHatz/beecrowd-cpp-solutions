#include <iostream>

void Imprime(int v[], unsigned short indice, bool ehPar)
{
	for (unsigned short j = 0; j < indice; j++) std::cout << (ehPar ? "" : "im") << "par[" << j << "] = " << v[j] << '\n';
}

unsigned short Tratamento(int v[],int* valor, unsigned short pos, bool ehPar)
{
	v[pos] = *valor;
	pos++;
	if (pos == 5)
	{
		Imprime(v, pos, ehPar);
		pos = 0;
	}
	return pos;
}

int main()
{
	int par[5], imp[5], x;
	unsigned short posPar = 0, posImp = 0;
	for(unsigned char i = 1; i < 16; i++)
	{
		std::cin >> x;
		if (x % 2 == 0) posPar = Tratamento(par, &x, posPar, 1);
		else posImp = Tratamento(imp, &x, posImp, 0);
	}
	
	Imprime(imp, posImp, 0);
	Imprime(par, posPar, 1);
}