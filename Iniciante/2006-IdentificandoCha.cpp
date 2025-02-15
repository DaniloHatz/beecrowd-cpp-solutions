#include <iostream>
using namespace std;

int main(void)
{
	int cha;
	cin >> cha;
	
	int listachas[5];
	cin >> listachas[0] >> listachas[1] >> listachas[2] >> listachas[3] >> listachas[4];

	int acertadores = 0;
	for (int i = 0; i <= sizeof(listachas) / sizeof(listachas[0]); i++)
	{
		if (cha == listachas[i])
			acertadores += 1;
	}

	cout << acertadores << endl;

	return 0;
}