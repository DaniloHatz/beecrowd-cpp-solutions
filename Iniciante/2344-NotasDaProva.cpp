#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	if (n == 0)
	{
		cout << 'E' << endl;
		return 0;
	}
	if (n > 0 && n < 36)
	{
		cout << 'D' << endl;
		return 0;
	}
	if (n > 35 && n < 61)
	{
		cout << 'C' << endl;
		return 0;
	}
	if (n > 60 && n < 86)
	{
		cout << 'B' << endl;
		return 0;
	}

	cout << 'A' << endl;

	return 0;
}