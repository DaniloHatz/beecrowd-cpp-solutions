#include <iostream>
using namespace std;

int main(void)
{
	int qtcompetidores, qtfolhascompradas, qtfolhasporcometidor;
	cin >> qtcompetidores >> qtfolhascompradas >> qtfolhasporcometidor;
	char ehsuficiente = 'N';

	if (qtfolhascompradas >= qtcompetidores * qtfolhasporcometidor)
		ehsuficiente = 'S';

	cout << ehsuficiente << endl;

	return 0;
}