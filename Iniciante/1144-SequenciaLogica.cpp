#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void)
{
	int entrada;
	cin >> entrada;

	cout << fixed << setprecision(0);

	for (int i = 1; i <= entrada; i++)
	{
		cout << i << " " << pow(i, 2) << " " << pow(i, 3) << endl;
		cout << i << " " << pow(i, 2) + 1 << " " << pow(i, 3) + 1 << endl;
	}

	return 0;
}