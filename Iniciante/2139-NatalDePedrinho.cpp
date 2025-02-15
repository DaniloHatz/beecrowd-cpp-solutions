#include <iostream>
using std::cin;
using std::cout;

const unsigned short natal = 360;
const unsigned short meses[11]{ 31,29,31,30,31,30,31,31,30,31,30 };

int main()
{
	unsigned short mes, dia, res;
	while (cin >> mes >> dia)
	{
		res = 0;

		for (unsigned char i = 0; i <= mes - 2; ++i)
			res += meses[i];

		res += dia;

		if (res > natal)
			cout << "Ja passou!\n";
		else if (res < natal)
			if (natal - res == 1)
				cout << "E vespera de natal!\n";
			else
				cout << "Faltam " << natal - res << " dias para o natal!\n";
		else
			cout << "E natal!\n";
	}
}