#include <iostream>
using namespace std;

int main(void)
{
	int c[4], posicao = 0;
	
	for (int i = 0; i <= 3; i++)
	{
		cin >> c[i];
		if (c[i] == 1)
			posicao = i + 1;
	}

	cout << posicao << endl;

	return 0;
}