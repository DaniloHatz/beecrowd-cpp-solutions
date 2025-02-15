#include <iostream>
using namespace std;

int main(void)
{
	int p1, c1, p2, c2;
	cin >> p1 >> c1 >> p2 >> c2;

	int equilibrio = (p1 * c1) - (p2 * c2);

	if (equilibrio != 0)
	{
		equilibrio = equilibrio > 0 ? -1 : 1;
	}

	cout << equilibrio << endl;

	return 0;
}