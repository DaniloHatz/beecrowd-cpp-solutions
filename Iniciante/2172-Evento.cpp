#include <iostream>
using namespace std;

int main(void)
{
	unsigned int x[1000], cont = 0;
	unsigned long m[1000];

	for (int i = 0; i < 1000; i++)
	{
		cin >> x[i] >> m[i];
		if (x[i] == 0 && m[i] == 0)
			break;
		cont += 1;
	}

	for (int i = 0; i <= cont - 1; i++)
	{
		cout << x[i] * m[i] << endl;
	}
	
	cout << endl;

	return 0;
}