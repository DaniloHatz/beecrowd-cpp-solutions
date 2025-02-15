#include <iostream>
using namespace std;

int main()
{
	int segundos;
	cin >> segundos;
	int horas = 0, minutos = 0;
	char sep = ':';

	horas = segundos / 3600;
	segundos = segundos % 3600;
	minutos = segundos / 60;
	segundos = segundos % 60;

	cout << horas << sep << minutos << sep << segundos << endl;

	return 0;
}