#include <iostream>
using namespace std;

int main()
{
	int dias;
	cin >> dias;

	int ano = dias / 365;
	dias %= 365;
	int mes = dias / 30;
	dias %= 30;

	cout << ano << " ano(s)\n";
	cout << mes << " mes(es)\n";
	cout << dias << " dia(s)\n";

	return 0;
}