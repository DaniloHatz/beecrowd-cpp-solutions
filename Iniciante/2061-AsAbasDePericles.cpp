#include <iostream>
using namespace std;

int main(void)
{
	int abas, acoes;
	string acao[500];
	cin >> abas >> acoes;
	for (int i = 0; i <= acoes - 1; i++)
	{
		cin >> acao[i];
		if (acao[i] == "fechou")
		{
			abas += 1;
		}
		else
		{
			abas -= 1;
		}
	}

	cout << abas << endl;

	return 0;
}
