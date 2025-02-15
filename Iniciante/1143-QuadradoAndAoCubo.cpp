#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int entrada;
	cin >> entrada;

	for (int i = 1; i <= entrada; i++)
		cout << i << " " << pow(i, 2) << " " << pow(i, 3) << endl;

	return 0;
}