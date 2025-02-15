#include <iostream>
using namespace std;

int main(void)
{
	int topinformado;

	cin >> topinformado;

	int tabelatop[7] = { 1,3, 5, 10, 25, 50, 100 };

	for (int i = 0; i < sizeof(tabelatop) / sizeof(tabelatop[0]); i++)
	{
		if (topinformado <= tabelatop[i])
		{
			cout << "Top " << tabelatop[i] << endl;
			break;
		}
	}

	return 0;
}